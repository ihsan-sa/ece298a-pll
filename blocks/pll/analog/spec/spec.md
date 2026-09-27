# pll_analog - analog side of the charge-pump PLL (spec)

Written from `brief/spec.md` alone (the reviewed proposal is the brief's
source, not re-read here). GF180MCU, 3.3 V, a hard macro inside the Tiny
Tapeout GF180 analog-tile top `tt_um_ihsan_sa_pll`. The machine-checkable
half is `spec/spec.yaml`; measure names there are load-bearing.

## Behaviour

The cell is the charge pump, the passive loop filter, the current-starved
ring VCO and their bias. PFD, /8 prescaler, /N divider, lock detector and
control decoding are digital and outside this cell.

1. **Charge pump.** Switched PMOS (UP) and NMOS (DN) current sources from a
   mirror off the bias. `pfd_up` = 1 sources Icp into `vctrl`; `pfd_dn` = 1
   sinks Icp; both low holds the node; both high (PFD reset overlap, about
   1 ns) nets as close to zero charge as matching allows. Trim codes
   `cp_trim1:0` select the mirror ratio. Chosen steps (mirror units
   4:5:6:8):

   | code (trim1 trim0) | Icp nominal |
   |---|---|
   | 00 | 20 uA |
   | 01 | 25 uA |
   | 10 | 30 uA |
   | 11 | 40 uA (2x, the fix for low damping at P*N = 32-40) |

   Concerns: UP/DN mismatch against `vctrl` over the tuning range (static
   phase offset, reference spur), charge sharing at switching. A unity-gain
   buffer equalising the switch nodes is added only if ngspice shows the
   overlap charge or mismatch bound is missed without it.
2. **Loop filter.** Series R1-C1 with shunt C2 on `vctrl`: R1 about
   22 kOhm, C1 about 20 pF, C2 about 2 pF (estimate), for fn about 400 kHz
   and zeta about 0.55 at P*N = 16 with Kvco about 2*pi*100 MHz/V. `vctrl`
   goes to pad `ua[0]`, so up to 5 pF of pad sits in parallel with C2; C2 is
   sized with the pad included. C1 (20 pF) is the area risk: if it does not
   fit the footprint, that is raised in OPEN, never shrunk silently
   (capacitance at `ua[0]` adds to C2, not C1).
3. **VCO.** Current-starved inverter ring, odd stage count from the ngspice
   sweep; `vctrl` sets the starving current. Positive Kvco (higher `vctrl`,
   higher frequency - the digital PFD polarity assumes this), monotonic at
   every corner, about 50-200 MHz at typical, up to about 333 MHz at the
   fast/cold/high-supply corner, Kvco about 100 MHz/V (estimate). Output
   buffered to a full-swing 3.3 V CMOS clock `vco_out` driving one `dffq_1`
   clock pin plus one buffer (about 15 fF) with rise/fall <= 0.15 ns at
   333 MHz (the Liberty condition the prescaler was checked at).
4. **Bias.** One reference current for pump mirror and VCO. `bias_ref` goes
   to pad `ua[1]` for an optional external resistor to ground; the cell must
   work with `ua[1]` floating (internal default bias) and survive probe /
   ESD-class capacitance on it.
5. **Power-down.** `pll_en` = 0 turns off pump, bias and VCO (`vco_out` held
   static, no oscillation, standby current reported); `pll_en` = 1 enables
   them. Quasi-static input.

## Interface

Supply: one `vdd` at 3.3 V nominal (+-10 % over corners), one `vss`. The
`.subckt pll_analog` pins are exactly the six `interface.yaml` signals, the
two `ua_pins`, `vdd` and `vss` - ten pins, no other. Renaming, widening or
adding one goes back through the msde `split` step.

| Pin | Dir | Level | Domain | Meaning |
|---|---|---|---|---|
| `vco_out` | a2d out | cmos_3v3 | clk_free | buffered VCO clock to the /8 prescaler, up to 333 MHz |
| `pfd_up` | d2a in | cmos_3v3 | clk_ref | UP pulse, active high, source Icp into `vctrl` |
| `pfd_dn` | d2a in | cmos_3v3 | clk_fb | DN pulse, active high, sink Icp from `vctrl` |
| `pll_en` | d2a in | cmos_3v3 | clk_ref | 1 = run, 0 = pump, bias, VCO off |
| `cp_trim0` | d2a in | cmos_3v3 | clk_ref | pump trim bit 0 |
| `cp_trim1` | d2a in | cmos_3v3 | clk_ref | pump trim bit 1 |
| `vctrl` | analog pad | analog | - | loop filter node, pad `ua[0]` (up to 5 pF) |
| `bias_ref` | analog pad | analog | - | optional external bias resistor node, pad `ua[1]` |
| `vdd` | supply | 3.3 V | - | the one supply pin |
| `vss` | ground | 0 V | - | the one ground pin |

Digital inputs present a CMOS-gate load (no DC current); the inversion for
the PMOS UP switch is inside the cell. `vco_out` is the only logic output.
`vctrl` and `bias_ref` go straight to the pads and never to the digital
side. No split (standard-cell) devices live in this macro.

### Corners

The brief asks for typ/fast/slow process, supply +-10 %, -40 to 125 C:
`spec.yaml` declares the grid {typical, ss, ff} x {-40, 27, 125} C x
{-10, 0, +10} % = 27 corners. Names follow `corners.py`: `tt_27c`,
`ss_125c_vm10`, `ff_m40c_vp10` (the brief's ff_n40C_3v60), etc.

### Measures (ngspice)

Conditions unless stated: `pll_en` = 1, `cp_trim` = 00, `bias_ref`
floating (internal default), `vco_out` loaded with 15 fF. The `vctrl`
tuning range for the pump measures is 0.3 V to (vdd - 0.3 V): the brief's
"0.3-3.0 V" cannot be met at vdd - 10 % = 2.97 V, so the upper end tracks
the rail. Rise/fall are 20 %-80 %. "all" = the 27-corner grid.

| Measure | Bound | Corners | What it is |
|---|---|---|---|
| `icp_up_code00_ua` | 15..25 | all | UP source current, mid-range `vctrl` (vdd/2), code 00 |
| `icp_dn_code00_ua` | 15..25 | all | DN sink current, same conditions |
| `icp_up_code00_tt_ua` | 18..22 | tt_27c | code 00 nominal check (20 uA +-10 %) |
| `icp_up_code01_ua` | 18.75..31.25 | all | code 01 (25 uA +-25 %) |
| `icp_up_code10_ua` | 22.5..37.5 | all | code 10 (30 uA +-25 %) |
| `icp_up_code11_ua` | 30..50 | all | code 11 (40 uA +-25 %) |
| `icp_code11_over_code00_ratio` | 1.8..2.2 | all | the codes reach 2x |
| `cp_updn_mismatch_pct` | <= 10 | all | max of 100*abs(Iup-Idn)/Icp over the `vctrl` range (systematic; GF180 models carry no per-instance mismatch) |
| `cp_overlap_net_charge_fc` | <= 10 | all | abs net charge into `vctrl` per event with both inputs high for 1 ns, incl. charge sharing |
| `vctrl_leak_off_na` | <= 1 | all | abs current into `vctrl` with both inputs low, over the range |
| `ol_pm_pn16_nopad_deg` | >= 45 | tt_27c | open-loop phase margin, pump-filter-VCO with ideal 1/16 divider, no pad |
| `ol_pm_pn16_pad5p_deg` | >= 25 (warn) | tt_27c | same with 5 pF on `vctrl` (reported; brief estimate 32) |
| `ol_fc_pn16_nopad_khz` | 200..1000 (warn) | tt_27c | unity-gain crossover, P*N = 16, no pad |
| `ol_pm_pn8_nopad_deg` | >= 30 (warn) | tt_27c | phase margin at P*N = 8 |
| `ol_pm_pn40_nopad_deg` | >= 30 (warn) | tt_27c | phase margin at P*N = 40 |
| `vco_kvco_mhz_per_v` | 40..250 | all | mean df/dv over the tuning range |
| `vco_df_dv_min_mhz_per_v` | >= 0 | all | minimum df/dv step of the sweep: monotonic, positive Kvco |
| `vco_fmin_tt_mhz` | <= 50 | tt_27c | frequency at the low end of the range |
| `vco_fmax_tt_mhz` | >= 200 | tt_27c | frequency at the high end of the range |
| `vco_fmax_ff_mhz` | 200..333 | ff_m40c_vp10 | frequency at `vctrl` = vdd: the prescaler's 333 MHz bound |
| `vco_out_swing_pct_vdd` | >= 90 | all | (Vhigh - Vlow)/vdd on `vco_out` into 15 fF |
| `vco_out_tr_ns` | <= 0.15 | ff_m40c_vp10, tt_27c | rise 20-80 % at maximum frequency into 15 fF |
| `vco_out_tf_ns` | <= 0.15 | ff_m40c_vp10, tt_27c | fall, same |
| `vco_out_duty_pct` | 40..60 | all | duty at mid-range `vctrl` |
| `vco_period_jitter_ps_rms` | <= 10 (warn) | tt_27c | period jitter from `trnoise` sized from device models, mid-range `vctrl` |
| `presc_div2_ratio` | 0.99..1.01 | ff_m40c_vp10 | `vco_out` driving the extracted `gf180mcu_fd_sc_mcu7t5v0__dffq_1` + `inv_1` toggle stage: f_toggle / (f_vco/2) |
| `standby_current_ua` | <= 1 | all | vdd current with `pll_en` = 0 |
| `vco_out_off_toggles` | 0 | all | `vco_out` transitions with `pll_en` = 0 (held static) |
| `startup_time_us` | <= 5 | all | `pll_en` rise to a running, full-swing `vco_out`, with 5 pF on `vctrl` and on `bias_ref` |

Post-layout (`post_layout_bounds`): `icp_up_code00_ua`, `icp_dn_code00_ua`
and `vco_kvco_mhz_per_v` re-simulated from the extracted netlist hold the
same bounds. No Monte Carlo: the brief asks for no yield number, and GF180
poly models have no per-instance mismatch to draw from anyway.

### Layout (checked by later gates, not by ngspice)

Generator-based; Magic and KLayout DRC clean; netgen LVS clean against the
sized netlist; C1 area reported. The footprint must leave room for the
digital side on the two-tile analog footprint, and the `vco_out` pin sits
on the edge nearest the prescaler.

### Out of scope here

Full-loop lock (< 50 us), reference spur and divided frequency against the
reference are msde cosim measures at the top level.
