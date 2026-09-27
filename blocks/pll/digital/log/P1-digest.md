# P1 digest - pll (digital)
- spec_lint: pass (re-run after the core rename). 28 requirements: 11 sim, 3 formal, 3 both, 11 measure.
- Core top ihsan_sa_pll; harden generates the tt_um_ihsan_sa_pll wrapper (corpus convention: core != tt_um_ name).
- Clocks: clk 80 ns; vco_out up to 333 MHz; clk_pre = vco_out/8 (20 ns), clk_fb = clk_pre/N. Multi-clock SDC lives in timing_notes for the architect.
- tt_pins: n_sel ui_in[2:0], vco_out ui_in[3], pll_en_in ui_in[6], obs_sel ui_in[7], cp_trim_in uio_in[1:0]; uo_out[0..7] = obs_out, clk_fb, lock, pfd_up, pfd_dn, pll_en, cp_trim0, cp_trim1.
- Choices: illegal N codes 0/6/7 decode as N=1; lock detector K=16; one wide PFD pulse drops lock.
- Open: measure-kind bound names are the spec-writer's; the tb/harden writers must use them.
