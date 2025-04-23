module Control (
    input [6:0] opcode,
    input [2:0] funct3,
    input BrEq,
    input BrLT,
    output reg memRead,
    output reg [1:0] memtoReg,
    output reg [1:0] ALUOp,
    output reg memWrite,
    output reg ALUSrc,
    output reg regWrite,
    output reg [1:0] PCSel
);
    always @(*) begin
        case(opcode)
            7'b0110011:
                begin
                    memRead = 0;
                    memtoReg = 2'b00; 
                    ALUOp = 2'b10; 
                    memWrite = 0;
                    ALUSrc = 0;
                    regWrite = 1;
                    PCSel = 2'b00;
                end
            7'b0010011:
                begin
                    memRead = 0;
                    memtoReg = 2'b00; 
                    ALUOp = 2'b11;
                    memWrite = 0;
                    ALUSrc = 1;
                    regWrite = 1;
                    PCSel = 2'b00;
                end
            7'b0000011: // lw
                begin
                    memRead = 1;
                    memtoReg = 2'b01; 
                    ALUOp = 2'b00;
                    memWrite = 0;
                    ALUSrc = 1;
                    regWrite = 1;
                    PCSel = 2'b00;
                end
            7'b0100011: // sw
                begin
                    memRead = 0;
                    memtoReg = 2'b00; 
                    ALUOp = 2'b00;
                    memWrite = 1;
                    ALUSrc = 1;
                    regWrite = 0;
                    PCSel = 2'b00;
                end
            7'b1100011:
                begin
                    memRead = 0;
                    memtoReg = 2'b00; 
                    ALUOp = 2'b00;
                    memWrite = 0;
                    ALUSrc = 0;
                    regWrite = 0;
                    case(funct3)
                        3'b000: // beq
                            PCSel = BrEq ? 2'b01 : 2'b00;
                        3'b001: // bne
                            PCSel = !BrEq ? 2'b01 : 2'b00;
                        3'b100: // blt
                            PCSel = BrLT ? 2'b01 : 2'b00;
                        3'b101: // bge
                            PCSel = !BrLT ? 2'b01 : 2'b00;
                        default:
                            PCSel = 2'b00;
                    endcase
                end
            7'b1101111: // jal
                begin
                    memRead = 0;
                    memtoReg = 2'b10; // PC + 4
                    ALUOp = 2'b00;
                    memWrite = 0;
                    ALUSrc = 0; 
                    regWrite = 1;
                    PCSel = 2'b01; 
                end
            7'b1100111: // jalr
                begin
                    memRead = 0;
                    memtoReg = 2'b10; // PC + 4
                    ALUOp = 2'b00; // add
                    memWrite = 0;
                    ALUSrc = 1;
                    regWrite = 1;
                    PCSel = 2'b10; 
                end
            default:
                begin
                    memRead = 0;
                    memtoReg = 2'b00;
                    ALUOp = 2'b00;
                    memWrite = 0;
                    ALUSrc = 0;
                    regWrite = 0;
                    PCSel = 2'b00;
                end
        endcase
    end
endmodule

