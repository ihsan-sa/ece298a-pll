# VCO period jitter, one-off characterisation (2026-10-05)

Nothing outside log/scratch/jitter/ was touched. Decks: deck_*.cir (built by run.py from the engine's logged tt deck, head_tt.inc / head_ss.inc); analysis ana.py.

## Method
- Bench = pll_analog_vco_tb deck with vctrl = 3.3 V (VCO top frequency), same 1 uA/1 ns start-up kick on xdut.r1, vco_out into 15 fF.
- Ring nodes are xdut.r1..xdut.r5. One trnoise current source from each to ground (white, NT = 50 ps, tran max step 25 ps).
- gm from a noiseless tt tran at the switching point (r1 within +-0.15 V of vdd/2), @m.xdut.xmn_i1/xmp_i1.m0[gm]:
  gm_n = 0.181 mS, gm_p = 0.199 mS, sum 0.38 mS (Id ~ 50-60 uA at the crossing). Starve devices (also ~0.2 mS each) NOT included in the base case.
- i_n^2 = 4kT*gamma*(gm_n+gm_p), gamma = 1. tt/27C: PSD 6.30e-24 A^2/Hz, NA = 3.97e-7 A rms. ss/125C: PSD 8.36e-24 (same gm reused, kT at 398 K), NA = 4.57e-7 A.
- Period = successive rising vdd/2 crossings of vco_out (linear interpolation), t > 30 ns only.
- Corners: tt 27C 3.3 V; ss 125C 3.3 V (res_ss, mimcap_ss).

## Results
| run | periods | mean period | f | RMS period dev | 6 sigma |
|---|---|---|---|---|---|
| tt noiseless (130 ns) | 25 | 3838.6 ps | 260.5 MHz | 0.78 ps (c2c/sqrt2: 0.71) | - |
| tt noisy, 3 seeds x 12 per. | 36 | 3837.9 ps | 260.6 MHz | 1.18 / 1.39 / 1.13 ps (c2c/sqrt2: 0.89 / 1.20 / 1.37) | ~7-8 ps |
| ss noiseless (130 ns) | 21 | 4622.8 ps | 216.3 MHz | 2.53 ps (c2c/sqrt2: 1.31) | - |
| ss noisy, 3 seeds x 10 per. | 30 | 4622.3 ps | 216.3 MHz | 3.20 / 4.17 / 2.93 ps (c2c/sqrt2: 2.5 / 2.5 / 2.3) | ~18-25 ps |

Noiseless "floor" 0.7-0.8 ps (tt), 1.3-2.5 ps (ss) is mostly residual start-up/settling drift of the bias, not solver noise (the ring is deterministic), so noisy runs are inflated by it. Quadrature-subtracting: noise-only sigma ~ 1.0 ps (tt), ~2 ps (ss).
Quoted figure (floor included, conservative): sigma_period ~ 1.2 ps rms at tt, ~2.5 ps (c2c-based; up to 3-4 ps by plain std incl. drift) at ss 125C. 6 sigma ~ 7 ps (tt), ~15 ps (ss; 25 ps worst plain-std).
Sensitivity (not run): gamma = 2/3 scales sigma by 0.82; adding starve-device noise (gm doubled) scales by 1.41.

## Analytic cross-check
Per transition: delay t_d = T/(2N) = 384 ps (N=5), I ~ 50 uA, C_node ~ I*t_d/(vdd/2) ~ 12 fF, sqrt(kT/C) = 0.6 mV, slew I/C = 4.2 V/ns, so sigma_stage ~ 0.14 ps (x ~1.4 for both devices' noise = 0.2 ps). Period has 2N = 10 transitions: sigma_T ~ sqrt(10)*(0.14..0.2) = 0.45-0.65 ps (Abidi/Weigandt style, same order as Hajimiri's). Sim noise-only ~ 1 ps: same order (within ~2x), i.e. the sim is plausible, slightly conservative.

## Caveats
- Very few periods (30-36 per corner, NOT >= 200): host was at load avg ~40, the sims ran at ~0.2 ns/s, and a chunk-write scheme only saved the first 80 ns of each run before the 1100 s timeout. Statistical error on sigma is ~ +-15 %/sqrt(3 seeds), and drift is mixed in.
- Only ring-node white thermal noise injected; no bias/V2I/vctrl-path noise, no flicker, no supply noise, no output buffer noise. vctrl held ideal (a real loop filter adds noise on vctrl via Kvco, which usually dominates in a PLL).
- ss gm not re-extracted. ss at 125C only at vdd 3.3 V (not 2.97 V).
