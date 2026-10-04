// pll_prescaler - /8 ripple prescaler on vco_out plus the /16 observation flop.
// Domain: vco_out (pre_q0), rippled on rising edges of each stage's Q.
// Each stage's toggle loop is one async-reset flop and one inverter.
`default_nettype none
module pll_prescaler (
    input  wire vco_out,
    input  wire rst_n,
    output wire clk_pre,   // vco_out / 8
    output wire obs_q3     // vco_out / 16 (clk_pre / 2)
);
  reg pre_q0, pre_q1, pre_q2, q3;

  always @(posedge vco_out or negedge rst_n)
    if (!rst_n) pre_q0 <= 1'b0;
    else        pre_q0 <= ~pre_q0;

  always @(posedge pre_q0 or negedge rst_n)
    if (!rst_n) pre_q1 <= 1'b0;
    else        pre_q1 <= ~pre_q1;

  always @(posedge pre_q1 or negedge rst_n)
    if (!rst_n) pre_q2 <= 1'b0;
    else        pre_q2 <= ~pre_q2;

  always @(posedge pre_q2 or negedge rst_n)
    if (!rst_n) q3 <= 1'b0;
    else        q3 <= ~q3;

  assign clk_pre = pre_q2;
  assign obs_q3  = q3;
endmodule
`default_nettype wire
