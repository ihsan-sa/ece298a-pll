# P1 digest - pll
- split: pass, 6 crossing signals, all width 1, cmos_3v3.
- a2d: vco_out (clk_free, <=333 MHz, VCO clock into the digital /8 prescaler).
- d2a: pfd_up (clk_ref), pfd_dn (clk_fb), pll_en, cp_trim0, cp_trim1 (clk_ref).
- ua_pins: vctrl -> ua[0], bias_ref -> ua[1] (bias_ref optional; cell must work with ua[1] floating).
- Analog macro pll_analog: CP + loop filter + ring VCO + bias; 10 pins (6 signals, 2 pads, vdd, vss).
- Digital tile tt_um_ihsan_sa_pll: PFD, /8 prescaler, /N (1-5), lock detect, observation. Standalone tt_pins: ui_in[3], uo_out[3..7].
- Round 1 put vctrl/bias_ref in signals; fixed in round 2 (splitter.md lacks ua_pins, reported).
- Open: prescaler next to vco_out pin is a placement wish, not enforced by any gate.
