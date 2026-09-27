# P1 digest - pll_analog
- spec_lint: pass. 30 measures, 27 corners ({tt,ss,ff} x {-40,27,125} C x {-10,0,+10} %).
- CP: Icp code00 15..25 uA all corners (18..22 at tt_27c); trim 00/01/10/11 = 20/25/30/40 uA; UP/DN mismatch <= 10 %; leak <= 1 nA.
- Loop (tt_27c): PM >= 45 deg at P*N=16 without pad; with 5 pF pad >= 25 deg (warning).
- VCO: Kvco 40..250 MHz/V, monotonic; fmin <= 50, fmax >= 200 MHz at tt; fmax <= 333 MHz at ff_m40c_vp10; duty 40..60 %.
- Power-down: standby <= 1 uA, startup <= 5 us. No mc (GF180 poly has no per-instance mismatch).
- Open: vctrl range narrowed to 0.3..vdd-0.3 V (brief said 0.3-3.0 V, unreachable at vdd-10 %); bounds the brief left open were chosen by the spec-writer (see spec.md); 27-corner sim_pvt is long.
