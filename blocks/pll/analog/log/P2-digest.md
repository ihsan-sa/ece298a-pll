# P2 digest (analog-designer TOPOLOGY, fable)
- spec_lint pass; 75 devices; subckt pll_analog, 10 pins in interface order; spec/topology.md written.
- Bias: Vgs/R self-biased core + startup, external R on ua[1] in parallel. CP: trim on shared ref, Icp 20/25/30/40 uA, current-steering switches with vdump. Filter R1 ~22k, C1 20 pF MIM, C2 ~2 pF. VCO: V2I + floor current, 5-stage current-starved ring, NAND gate holds vco_out=0 off.
- H1 items: ~50 of 75 devices have no library template (owner must accept); Icp 15..25 uA untrimmed over 27 corners is tight; ring fixed at 5 stages; possible vdump buffer for charge sharing/mismatch; bias-loop compensation cap; 1 nA leak at ff/125C; C1 area ~10000 um^2.
- Flow gap: corners.py skews MOS only, so ppolyf_u/MIM process spread is never simulated.
