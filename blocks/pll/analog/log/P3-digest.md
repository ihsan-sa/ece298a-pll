# P3 digest (bench-writer, opus)
- 7 benches + .bounds.json: cp, overlap, ol, vco, presc, pwr, startup. All 29 spec measures bounded; spec_lint pass.
- Smoke-tested against a throwaway behavioural stand-in in /tmp only (ol: PM 46.7 deg, 32.4 with pad, fc 493 kHz). presc_tb not run end to end (timed out on a loaded host).
- OPEN for H1: (1) vco_period_jitter_ps_rms can't be benched (ngspice has no device transient noise; ring nodes internal) - prints nothing, sim_tt will flag it missing (warning). (2) presc_div2_ratio uses the PDK's unextracted dffq_1 netlist, not "extracted". (3) ol_pm_pn40 benched at trim code 00; spec text hints code 11. (4) netlist writer: MOS are subckt wrappers (X instances); MIM model is cap_mim_2f0_m2m3_noshield, not cap_mim_2f0ff as topology.md says.
- Interpretations: mismatch denominator = code-00 mid-range (Iup+Idn)/2; swing = min over sweep; duty at vdd/2; startup scored at vctrl 0.3 V.
