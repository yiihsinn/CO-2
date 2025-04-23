module ALUCtrl (
    input [1:0] ALUOp,
    input funct7,
    input [2:0] funct3,
    output reg [3:0] ALUCtl
);
    always @(*) begin
        case(ALUOp)
            2'b00:
                ALUCtl = 4'b0010;
            2'b10: // R-type
                case(funct3)
                    3'b000: // add or sub
                        if(funct7 == 0)
                            ALUCtl = 4'b0010; // add
                        else
                            ALUCtl = 4'b0110; // sub
                    3'b111: // and
                        ALUCtl = 4'b0000;
                    3'b110: // or
                        ALUCtl = 4'b0001;
                    3'b010: // slt
                        ALUCtl = 4'b0111;
                    default:
                        ALUCtl = 4'b0000;
                endcase
            2'b11: // I-type
                case(funct3)
                    3'b000: // addi
                        ALUCtl = 4'b0010;
                   3'b111: // andi
                        ALUCtl = 4'b0000;
                    3'b110: // ori
                        ALUCtl = 4'b0001;
                    3'b010: // slti
                        ALUCtl = 4'b0111;
                    default:
                        ALUCtl = 4'b0000;
                endcase
            default:
                ALUCtl = 4'b0000;
        endcase
    end
endmodule

