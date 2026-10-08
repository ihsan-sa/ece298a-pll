# H1 sign-off: PLL analog half (charge pump, loop filter, VCO), challenge H1-101694

Every pre-layout gate passes on the current netlist and benches: spec_lint, netlist_lint, sim_tt, sim_pvt (29 corners, 147 runs) and bench_strength (219 of 253 mutants killed, 34 ruled below_spread). Monte Carlo doesn't apply because the spec doesn't ask for it.

## Decision for the owner
The charge-pump current has almost no margin against resistor spread. At code 00, Icp runs from 15.09 to 24.68 uA across the resistor-corner runs, against a 15-25 uA window, so five Icp measures clear their bounds by only 0.6-1.9%. The spec never combines the resistor corners with ss/ff or temperature, so a slow-resistor ss_125c case would probably fail. Options: (a) add the cross corners and see, (b) widen the window, which the loop math tolerates, or (c) re-centre the bias before layout. The same window carries over to post-layout bounds with no allowance for parasitics.

## Other findings (fresh reviewer)
- medium: the VCO period-jitter measure never prints, so it's a permanent warning. A hand estimate puts device-noise jitter at about 1-5 ps rms, well under the 25 ps the digital timing waiver needs, but that estimate doesn't cover supply noise from the digital half. The fix is a trnoise proxy bench or a documented estimate.
- low: open-loop phase margin is scored only at tt_27c (49.5 deg against 45). Loop gain swings about 4x over PVT.
- low: the enable/power-down network has almost no bench coverage. Its mutants survive because standby current is near zero.

## Worst margins (worst first)
icp_dn_code00 15.09 uA vs min 15 (0.6%) | icp_up_code00 24.68 vs max 25 (1.3%) | icp_up_code11 30.45 vs min 30 (1.5%) | icp_up_code01 30.74 vs max 31.25 (1.6%) | icp_up_code10 36.78 vs max 37.5 (1.9%) | vco duty 54.6% vs max 60 (9%) | ol PM 49.5 deg vs min 45 (10%) | vco fmax tt 257.7 MHz vs min 200 (29%) | startup 1.63 us vs max 5 (67%)
