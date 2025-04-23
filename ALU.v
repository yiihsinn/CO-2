module ALU (
    input [3:0] ALUctl,
    input signed [31:0] A,
    input signed [31:0] B,
    output reg signed [31:0] ALUOut,
    output zero
);
    assign zero = (ALUOut == 0);
    always @(*) begin
        case(ALUctl)
            4'b0010: ALUOut = A + B; // add
            4'b0110: ALUOut = A - B; // sub
            4'b0000: ALUOut = A & B; // and
            4'b0001: ALUOut = A | B; // or
            4'b0111: ALUOut = (A < B) ? 1 : 0; // slt
            default: ALUOut = 0;
        endcase
    end
endmodule

