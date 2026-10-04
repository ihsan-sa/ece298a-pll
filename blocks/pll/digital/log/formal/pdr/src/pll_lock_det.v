// pll_lock_det - lock indicator in the clk domain.
// wide_q samples (pfd_up | pfd_dn) on the FALLING edge of clk (half a
// reference period after the rising edge). lock_cnt counts reference rising
// edges with a clean sample, saturating at K = 16, and restarts at 0 on a
// wide sample; lock = (next lock_cnt == 16), registered on the same edge.
// wide_q resets to 1 (no sample taken yet = not clean), so the first
// reference edge after reset never counts toward K.
// pfd_dn comes from the clk_fb domain: single-flop sample, no synchroniser.
`default_nettype none
module pll_lock_det (
    input  wire clk,
    input  wire rst_n,
    input  wire pfd_up,
    input  wire pfd_dn,
    output reg  lock
);
  localparam [4:0] K = 5'd16;

  reg       wide_q;
  reg [4:0] lock_cnt;
  wire [4:0] cnt_nxt = wide_q          ? 5'd0 :
                       (lock_cnt == K) ? K    : lock_cnt + 5'd1;

  always @(negedge clk or negedge rst_n)
    if (!rst_n) wide_q <= 1'b1;
    else        wide_q <= pfd_up | pfd_dn;

  always @(posedge clk or negedge rst_n)
    if (!rst_n) begin
      lock_cnt <= 5'd0;
      lock     <= 1'b0;
    end else begin
      lock_cnt <= cnt_nxt;
      lock     <= (cnt_nxt == K);
    end
endmodule
`default_nettype wire
