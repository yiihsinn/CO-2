module BranchComp (
    input signed [31:0] A,B,
    output reg BrEq, BrLT
);
    always @(*) begin
        BrEq = (A == B);
        BrLT = (A < B);
    end
endmodule

