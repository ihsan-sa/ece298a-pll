# P0 digest - pll
- Brief: brief/proposal-classic-pll.md (reviewed charge-pump PLL proposal, 269 lines), copied verbatim.
- Facts: /8 toggle prescaler after VCO, N=1-5, Icp 20 uA, PM ~47 deg est., TT GF analog tile with 2 analog pins; fallback is off-chip VCO.
- Library gf180mcu_fd_sc_mcu7t5v0 at 3.3 V. Top module tt_um_ihsan_sa_pll.
- chip-flow at c489764. No gates run yet; next P1 split.
