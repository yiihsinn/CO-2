module ImmGen (
    input [31:0] inst,
    output reg signed [31:0] imm
);
    wire [6:0] opcode = inst[6:0];
    always @(*) begin
        case(opcode)
            7'b0010011, 
            7'b0000011, // lw
            7'b1100111: // jalr
                imm = {{20{inst[31]}}, inst[31:20]};
            7'b0100011: // sw
                imm = {{20{inst[31]}}, inst[31:25], inst[11:7]};
            7'b1100011: // branch
                imm = {{20{inst[31]}}, inst[31], inst[7], inst[30:25], inst[11:8]};
            7'b1101111: // jal
                imm = {{12{inst[31]}}, inst[31], inst[19:12], inst[12], inst[30:21]};
            default:
                imm = 32'b0;
        endcase
    end
endmodule

