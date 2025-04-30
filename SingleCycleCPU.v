module SingleCycleCPU (
    input  clk,
    input  start,
    output signed [31:0] r [0:31]
);
    wire rst_n = start;

    wire [31:0] current_PC;
    wire [31:0] next_PC;
    wire [31:0] PC_plus_4;

    PC m_PC (
        .clk (clk),
        .rst (rst_n),
        .pc_i(next_PC),
        .pc_o(current_PC)
    );

    Adder m_Adder_1 (
        .a   (current_PC),
        .b   (32'd4),
        .sum (PC_plus_4)
    );

    wire [31:0] instruction;
    InstructionMemory m_InstMem (
        .readAddr(current_PC),
        .inst    (instruction)
    );

    wire signed [31:0] imm;
    ImmGen m_ImmGen (
        .inst(instruction),
        .imm (imm)
    );

    wire signed [31:0] imm_shifted;
    ShiftLeftOne m_ShiftLeftOne (
        .i (imm),
        .o (imm_shifted)
    );

    wire [4:0] rs1 = instruction[19:15];
    wire [4:0] rs2 = instruction[24:20];
    wire [4:0] rd  = instruction[11:7];

    wire [31:0] readData1, readData2;
    wire [31:0] writeBackData;

    Register m_Register (
        .clk       (clk),
        .rst       (rst_n),
        .regWrite  (regWrite),
        .readReg1  (rs1),
        .readReg2  (rs2),
        .writeReg  (rd),
        .writeData (writeBackData),
        .readData1 (readData1),
        .readData2 (readData2)
    );


    assign r = m_Register.regs;


    wire BrEq, BrLT;
    BranchComp m_BranchComp (
        .A   (readData1),
        .B   (readData2),
        .BrEq(BrEq),
        .BrLT(BrLT)
    );

    wire        memRead;
    wire [1:0]  memtoReg;
    wire [1:0]  ALUOp;
    wire        memWrite;
    wire        ALUSrc;
    wire        regWrite;
    wire [1:0]  PCSel;

    Control m_Control (
        .opcode  (instruction[6:0]),
        .funct3  (instruction[14:12]),
        .BrEq    (BrEq),
        .BrLT    (BrLT),
        .memRead (memRead),
        .memtoReg(memtoReg),
        .ALUOp   (ALUOp),
        .memWrite(memWrite),
        .ALUSrc  (ALUSrc),
        .regWrite(regWrite),
        .PCSel   (PCSel)
    );

    wire [3:0] ALUCtl;
    ALUCtrl m_ALUCtrl (
        .ALUOp (ALUOp),
        .funct7(instruction[30]),
        .funct3(instruction[14:12]),
        .ALUCtl(ALUCtl)
    );

    wire signed [31:0] ALU_B;
    Mux2to1 #(.size(32)) m_Mux_ALU (
        .sel(ALUSrc),
        .s0 (readData2),
        .s1 (imm),
        .out(ALU_B)
    );

    wire signed [31:0] ALUOut;
    wire                zero;
    ALU m_ALU (
        .ALUctl (ALUCtl),
        .A      (readData1),
        .B      (ALU_B),
        .ALUOut (ALUOut),
        .zero   (zero)
    );

    wire signed [31:0] branch_target;
    Adder m_Adder_2 (
        .a   (current_PC),
        .b   (imm_shifted),
        .sum (branch_target)
    );

    wire [31:0] jalr_target = {ALUOut[31:1], 1'b0};

    Mux3to1 #(.size(32)) m_Mux_PC (
        .sel(PCSel),
        .s0 (PC_plus_4),
        .s1 (branch_target),
        .s2 (jalr_target),
        .out(next_PC)
    );

    wire [31:0] memData;
    DataMemory m_DataMemory (
        .rst      (rst_n),
        .clk      (clk),
        .memWrite (memWrite),
        .memRead  (memRead),
        .address  (ALUOut),
        .writeData(readData2),
        .readData (memData)
    );

    Mux3to1 #(.size(32)) m_Mux_WriteData (
        .sel(memtoReg),
        .s0 (ALUOut),
        .s1 (memData),
        .s2 (PC_plus_4),
        .out(writeBackData)
    );

endmodule
