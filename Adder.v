module Adder (
    input  signed [31:0] a,
    input  signed [31:0] b,
    output signed [31:0] sum
);
    // sum = a + b

    assign sum = a + b;

endmodule

