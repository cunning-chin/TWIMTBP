//Source: https://www.systemverilog.io/verification/sva-basics/

module sva_7_5();

logic clk, rst;
logic req, ack;

initial begin
    clk = 0;
end

forever begin 
    #5 clk = ~clk;
end

//Every time the request req goes high, ack arrives exactly 3 clocks later

property p1;
    @(posedge clk) disable iff (rst)
    req |-> ##3 ack;
endproperty

assert property p1;

//Every time the valid signal vld is high, the cnt is incremented

property p2;
    @(posedge clk) disable iff (rst)
    req |-> cnt == ($past(cnt) + 1);
endproperty

//|-> : Overlapping implication - The RHS is evaluated from the same cycle LHS is true
//|=> : Non-overlapping implication - The RHS is evaluated one clock cycle after LHS is true

// property p1 using |=>
property p1_1;
    @(posedge clk) disable iff (rst)
    req |=> ##2 ack;
endproperty

// FIFO level cannot go down without a pop.
property fifo_level;
    @(posedge clk) disable iff (rst)
    !pop |-> ##1 (level >= $past(level));
endproperty

// when there's a no_space_err, the no_space_ctr_incr signal is flagged
// for exactly once clock
property no_space_err_ctr;
    @(posedge clk) disable iff (rst)
    no_space_err |-> no_space_ctr_incr |-> ##1 !no_space_ctr_incr;
endproperty

// if there's an uncorrectable err during an ADD request,
// err_cnt should be incremented in the same cycle and an interrupt
// should be flagged in the next cycle
property uncorrectable_err;
    @(posedge clk) disable iff (rst)
    (req_type == ADD && uncorrectable_err == 1) |-> (err_cnt == $past(err_cnt) + 1) ##1 interuppt;  
endproperty

// INIT and FLUSH transactions should complete within MAX_LATENCY.
property max_latency;
    @(posedge clk) disable iff (rst)
    (req_type == INIT || req_type == FLUSH) ##[0:MAX_LATENCY] init_done == 1;
endproperty

// When vld rises high -
// .. a is repeated twice then 
// .. after 2 clocks b is repeated 3 to 4 times with gaps in between, 
// .. after last occurence of b, exactly 1 clock later c occurs
// .. one clock after c, d occurs 3 times non-consecutively,
// .. after last occurence of d, there are a variable number of empty
// .. clocks, then e happens

property max_latency;
    @(posedge clk) disable iff (rst)
    vld |-> (a[*2] ##2 b[->3:4] ##1 c ##1 d[=3] ##[0:$] e);
endproperty























endmodule
