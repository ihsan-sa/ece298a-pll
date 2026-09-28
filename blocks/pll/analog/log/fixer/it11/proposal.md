# it11 fixer: VCO stall at vctrl = 0.3 V. No verified fix yet.

Root cause: a bench/simulator artefact, not a dead bias. The .op at 0.3 V (tt) is healthy. The floor current
MN_FLR is 4.64 uA and each ring stage carries 4.74 uA. vbp_vco = 2.44 V, vbn_vco = 0.75 V, and all
starve devices are saturated. All ring nodes sit on the symmetric balance point (1.015 V). That
balance point is strongly unstable: a 0.1 mV .ic offset on r1 grows to full swing within 200 ns and
oscillates at 9.3 MHz (tt) / 9.9 MHz (ff). The bench starts each transient from the operating point
with no noise, so ngspice stays on that point. Silicon would start.
(The older vm_*.log results, 82/224 MHz, came from /tmp/nl10, a netlist with rv2i_l = 20u and w_rp = 2u.
They do not match the current netlist.)

Sizing workaround with the current netlist (0.3 V points use the bench's own 250 ps / 400 ns stage;
the other points use 20 ps / 25 ns):
- w_flr 2u -> 8u (inside 1u..20u): the ring now starts without a kick.
  tt: f(0.3) 51.2 MHz, f(1.65) 173 MHz, f(3.0) 266 MHz. Kvco ~ 80 MHz/V.
  f(0.3) = 51.2 MHz is above the vco_fmin_tt max of 50 MHz. At w_flr 20u, f(0.3) is higher still.
- Separate failure that sizing has not fixed: vco_fmax_ff (ff, -40 C, vdd = vctrl = 3.63 V) is 391 MHz
  at w_flr = 2u and 400 MHz at w_flr = 8u. The max is 333 MHz. Raising rv2i_l to 65u did not lower it (403 MHz).
  The top end is not set by R_V2I at ff. It needs a current ceiling in the V-to-I (a netlist-domain change).

Proposal: do not apply w_flr alone. Try w_flr around 6u to keep f(0.3) below 50 MHz while still starting.
Send the fmax_ff > 333 MHz problem to the netlist domain. None of this has been checked with the full
rendered bench: runs under load average 40 hit the 900 s timeout.
Scratch benches and logs: log/fixer/it11/fx/.
