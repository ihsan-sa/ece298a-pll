# P2 digest (architect, fable)
- spec_lint pass, 28 reqs unchanged; 15 ports match interface.yaml; core ihsan_sa_pll.
- Clocks: clk 80 ns (harden CLOCK_PORT); vco_out 3.0 ns port clock (prescaler only); clk_pre = /8 (generated), clk_fb = /8N gated clock.
- Modules: pll_prescaler, pll_divider (negedge enable gate), pll_pfd (async clear, kept delay cells pfd_dly0/1), pll_lock_det, pll_ctrl_regs; obs_out mux at top.
- Decisions logged: dffrnq prescaler, gated clk_fb, unsynchronised pfd_dn sample in lock det, quasi-static n_sel/obs_sel, must_keep by instance name.
- OPEN: REQ-TIM-VCO min-period bound was read for dffq_1, prescaler now dffrnq_1 -> re-read Liberty. Multi-clock SDC must go through the harden override layer in P6; if it can't, vco-domain timing is unconstrained in harden.
