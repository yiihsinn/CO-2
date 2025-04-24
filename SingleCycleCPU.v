module SingleCycleCPU (
    input clk,
    input start,
    output signed [31:0] r [0:31]
);

wire [31:0] current_PC, next_PC, PC_plus_4, instruction, readData1, readData2, imm, imm_shifted, branch_target, ALU_B, ALUOut, memData, writeBackData;
wire [3:0] ALUCtl;
wire [1:0] memtoReg, ALUOp, PCSel;
wire memRead, memWrite, ALUSrc, regWrite, BrEq, BrLT, zero_flag;
wire [31:0] srcA, srcB;


PC m_PC(
    .clk(clk),
    .rst(start),
    .pc_i(next_PC),
    .pc_o(current_PC)
);

Adder m_Adder_1(
    .a(current_PC),
    .b(32'd4),
    .sum(PC_plus_4)
);

InstructionMemory m_InstMem(
    .readAddr(current_PC),
    .inst(instruction)
);

Control m_Control(
    .opcode(instruction[6:0]),
    .funct3(instruction[14:12]),
    .BrEq(BrEq),
    .BrLT(BrLT),
    .memRead(memRead),
    .memtoReg(memtoReg),
    .ALUOp(ALUOp),
    .memWrite(memWrite),
    .ALUSrc(ALUSrc),
    .regWrite(regWrite),
    .PCSel(PCSel)
);

Register m_Register(
    .clk(clk),
    .rst(start),
    .regWrite(regWrite),
    .readReg1(instruction[19:15]),
    .readReg2(instruction[24:20]),
    .writeReg(instruction[11:7]),
    .writeData(writeBackData),
    .readData1(readData1),
    .readData2(readData2)
);

assign r = m_Register.regs;

BranchComp m_BranchComp(
    .A(srcA),       // ← 改這裡
    .B(srcB),
    .BrEq(BrEq),
    .BrLT(BrLT)
);

ImmGen m_ImmGen(
    .inst(instruction),
    .imm(imm)
);

ShiftLeftOne m_ShiftLeftOne(
    .i(imm),
    .o(imm_shifted)
);

Adder m_Adder_2(
    .a(current_PC),
    .b(imm_shifted),
    .sum(branch_target)
);
assign srcA = (regWrite && (instruction[19:15] == instruction[11:7]) &&
               (instruction[11:7] != 5'd0)) ? writeBackData : readData1;

assign srcB = (regWrite && (instruction[24:20] == instruction[11:7]) &&
               (instruction[11:7] != 5'd0)) ? writeBackData : readData2;

wire [31:0] jalr_target;
assign jalr_target = ALUOut & 32'hFFFFFFFE;

Mux3to1 #(.size(32)) m_Mux_PC(
    .sel(PCSel), 
    .s0(PC_plus_4),
    .s1(branch_target),
    .s2(ALUOut),
    .out(next_PC)
);

Mux2to1 #(.size(32)) m_Mux_ALU(
    .sel(ALUSrc),
    .s0(srcB),
    .s1(imm),
    .out(ALU_B)
);

ALUCtrl m_ALUCtrl(
    .ALUOp(ALUOp),
    .funct7(instruction[30]),
    .funct3(instruction[14:12]),
    .ALUCtl(ALUCtl)
);

ALU m_ALU(
    .ALUctl(ALUCtl),
    .A(srcA),       // ← 改這裡
    .B(ALU_B),
    .ALUOut(ALUOut),
    .zero(zero_flag)
);

DataMemory m_DataMemory(
    .rst(start),
    .clk(~clk),
    .memWrite(memWrite),
    .memRead(memRead),
    .address(ALUOut),
    .writeData(readData2),
    .readData(memData)
);

Mux3to1 #(.size(32)) m_Mux_WriteData(
    .sel(memtoReg),
    .s0(ALUOut),
    .s1(memData),
    .s2(PC_plus_4),
    .out(writeBackData)
);

endmodule

