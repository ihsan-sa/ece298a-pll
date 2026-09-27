// ihsan_sa_pll - digital core of the TT GF180 charge-pump PLL.
// Flat top: prescaler (vco_out), divider (clk_pre), PFD (clk / clk_fb),
// lock detector (clk), control registers (clk), plus the obs_out mux.
// The charge pump, loop filter, VCO and bias are the analog macro.
`default_nettype none
module ihsan_sa_pll (
    input  wire       clk,
    input  wire       rst_n,
    input  wire [2:0] n_sel,
    input  wire       vco_out,
    input  wire       pll_en_in,
    input  wire       obs_sel,
    input  wire [1:0] cp_trim_in,
    output wire       obs_out,
    output wire       clk_fb,
    output wire       lock,
    output wire       pfd_up,
    output wire       pfd_dn,
    output wire       pll_en,
    output wire       cp_trim0,
    output wire       cp_trim1
);
  wire clk_pre;
  wire obs_q3;

  pll_prescaler u_pre (
      .vco_out(vco_out), .rst_n(rst_n), .clk_pre(clk_pre), .obs_q3(obs_q3));

  pll_divider u_div (
      .clk_pre(clk_pre), .rst_n(rst_n), .n_sel(n_sel), .clk_fb(clk_fb));

  pll_pfd u_pfd (
      .clk(clk), .clk_fb(clk_fb), .rst_n(rst_n),
      .pfd_up(pfd_up), .pfd_dn(pfd_dn));

  pll_lock_det u_lock (
      .clk(clk), .rst_n(rst_n), .pfd_up(pfd_up), .pfd_dn(pfd_dn),
      .lock(lock));

  pll_ctrl_regs u_ctrl (
      .clk(clk), .rst_n(rst_n), .pll_en_in(pll_en_in),
      .cp_trim_in(cp_trim_in), .pll_en(pll_en),
      .cp_trim0(cp_trim0), .cp_trim1(cp_trim1));

  // quasi-static select, not glitch-protected (spec Architecture)
  assign obs_out = obs_sel ? obs_q3 : clk_pre;
endmodule
`default_nettype wire
