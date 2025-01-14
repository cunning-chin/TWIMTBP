// SVA: 25/4/24
// Ashok Mehta PDF.

module sva ();

logic req;
logic gnt;
logic clk;
logic [7:0] dly[];

initial begin
    req = 0;
    gnt = 0;
    //Clock Generation
    clk = 0;
    forever
     #5 clk = ~clk;    
end

initial begin
    #100;
    $finish;
end

//Drive Test Vectors
initial begin
    for (i = 0; i<5; i++) begin
        dly[0] = $urandom_range(5,10);
        #(dly[0]);
        req = $urandom();
        dly[1] = $urandom_range(1,3);
        #(dly[1]);
        gnt = $urandom;
    end
end

sequence sr1;
    req ##2 gnt;
endsequence

property pr1;
    @(posedge clk) sr1;
endproperty

reqGnt: assert property(pr1)  $display($time, "Pass"); else $fatal("Assert Failed");

endmodule
