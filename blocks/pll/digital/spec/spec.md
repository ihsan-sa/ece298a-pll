# PLL digital side - spec (tt_um_ihsan_sa_pll, TT GF180 analog tile)

Top module `tt_um_ihsan_sa_pll`, library `gf180mcu_fd_sc_mcu7t5v0` at 3.3 V.
The digital side is the whole tile except the charge pump, loop filter, VCO
and bias, which are the analog hard macro `pll_analog`. The signals crossing
to that macro are fixed in `../../interface.yaml` (names, directions, widths,
standalone TT pins); nothing here renames, widens or adds one.

## Behaviour

1. **Phase-frequency detector (PFD).** Two D flops, one clocked by the
   reference `clk`, one by the feedback divider output `clk_fb`, with an AND
   reset and a short kept delay chain (keep attributes, `must_keep`) to
   remove the dead zone. Outputs are active-high pulses `pfd_up` and
   `pfd_dn`. `pfd_up` high: the reference leads, the pump sources current
   (raise Vctrl, speed up the VCO). `pfd_dn` high: the feedback leads, the
   pump sinks. Pulse widths track the phase offset in both directions;
   frequency detection works in both directions (reference faster gives net
   UP, slower gives net DN). The reset fires whenever both are high; UP and
   DN never both stay high beyond the reset delay. The reset pulse has no
   width in zero-delay RTL: the bench checks it happens, ngspice (analog
   side / msde cosim) measures its width. (REQ-PFD-*)
2. **/8 prescaler.** Three ripple toggle flops (`dffq_1` with an `inv_1`
   from Q to D) clocked by `vco_out`, the only logic above 50 MHz; the first
   stage sees up to 333 MHz (3.0 ns) at the fast corner. Output `clk_pre`
   = `vco_out`/8 exactly (at most 42 MHz) clocks everything after it.
   (REQ-PRE-DIV8)
3. **Programmable /N divider.** N = 1..5 from `n_sel` = `ui_in[2:0]`.
   Codes 0, 6, 7 are unsupported and **decode as N = 1** (chosen here: no
   hidden state, the divider never stalls). N = 1 passes `clk_pre` through.
   `clk_fb` = `vco_out`/(8*N) goes to the PFD feedback flop and `uo_out[1]`.
   The prescaler and divider come out of reset cleanly with `vco_out`
   already running. (REQ-DIV-*)
4. **Lock detector.** Clocked by `clk`. A pulse is *wide* when `pfd_up` or
   `pfd_dn` is still high at the falling edge of `clk` following the
   reference rising edge (threshold = half a reference period). Lock asserts
   after **K = 16** consecutive reference cycles without a wide pulse and
   drops on the next reference edge after any wide pulse; it is never
   asserted while pulses are wide. Output on `uo_out[2]`. (REQ-LOCK-*)
5. **Observation.** `obs_out` = `uo_out[0]` is `clk_pre` (VCO/8) when
   `obs_sel` = `ui_in[7]` = 0, or one more toggle flop (VCO/16) when 1.
   `uo_out[3]`/`uo_out[4]` carry `pfd_up`/`pfd_dn` for debug and stay in the
   final tile. (REQ-OBS-SEL)
6. **Control registers.** `pll_en` (from `ui_in[6]`), `cp_trim0`/`cp_trim1`
   (from `uio_in[1:0]`, inputs, `uio_oe` = 0) are registered on `clk` and
   driven to the analog macro; quasi-static. (REQ-CTRL-REG)
7. **Reset.** `rst_n` asynchronous, active low, resets everything on every
   clock domain. (REQ-RST-ASYNC)
8. **Tile tie-offs.** `uio_oe` = 0, `uio_out` = 0; `ui_in[5:4]`,
   `uio_in[7:2]` spare. No port, wire or logic named `vctrl` or `bias_ref`;
   `ua[0]`/`ua[1]` belong to the analog macro alone. (REQ-TT-TIEOFF,
   REQ-NO-UA)

### Closed loop under `ifdef SIM` (bench only)

A real-number Verilog model of pump, filter and VCO (Icp 20 uA, C1 20 pF,
R 22 kOhm, C2 2 pF, Kvco about 100 MHz/V, 50-200 MHz typical, up to 333 MHz
fast) closes the loop in CocoTB. At every (f_ref, N) point of the lock table
- (5 MHz: N 2,3,4,5), (6.25 MHz: N 1,2,3,4), (10 MHz: N 1,2), (12.5 MHz:
N 1,2) - lock rises within 50 us, the mean feedback period equals the
reference period, the VCO period equals the reference period/(8*N), the
modelled Vctrl settles, and the loop relocks after a change of N. Nothing of
the model is synthesised. (REQ-LOOP-*)

### Bench strength

The bench must kill: swapped UP/DN, missing PFD reset, divider off by one,
prescaler /4. (REQ-MUT-KILL)

## Interface

| Port | Dir | Width | Standalone TT pin | Meaning |
|---|---|---|---|---|
| `clk` | input | 1 | `clk` | reference clock, 5-12.5 MHz (constrained 12.5 MHz) |
| `rst_n` | input | 1 | `rst_n` | asynchronous active-low reset |
| `n_sel` | input | 3 | `ui_in[2:0]` | divider ratio N = 1..5; 0, 6, 7 act as N = 1 |
| `vco_out` | input | 1 | `ui_in[3]` | crossing (a2d): VCO clock, up to 333 MHz, clocks the prescaler only |
| `pll_en_in` | input | 1 | `ui_in[6]` | PLL enable request |
| `obs_sel` | input | 1 | `ui_in[7]` | 0 = VCO/8, 1 = VCO/16 on `obs_out` |
| `cp_trim_in` | input | 2 | `uio_in[1:0]` | charge pump trim request bits |
| `obs_out` | output | 1 | `uo_out[0]` | VCO/8 or VCO/16 |
| `clk_fb` | output | 1 | `uo_out[1]` | feedback divider output, `vco_out`/(8*N) |
| `lock` | output | 1 | `uo_out[2]` | lock indicator |
| `pfd_up` | output | 1 | `uo_out[3]` | crossing (d2a): PFD UP pulse, active high, pump sources Icp |
| `pfd_dn` | output | 1 | `uo_out[4]` | crossing (d2a): PFD DN pulse, active high, pump sinks Icp |
| `pll_en` | output | 1 | `uo_out[5]` | crossing (d2a): registered `ui_in[6]`; 1 enables pump, bias, VCO |
| `cp_trim0` | output | 1 | `uo_out[6]` | crossing (d2a): registered `uio_in[0]`, pump current trim bit 0 |
| `cp_trim1` | output | 1 | `uo_out[7]` | crossing (d2a): registered `uio_in[1]`, pump current trim bit 1 |

`ui_in[5:4]`, `uio_in[7:2]` spare; `uio_oe` = `uio_out` = 0; `ena` unused.
`uo_out[7:5]` carry the crossing outputs only in the standalone harden; the
msde integrator binds them to the `pll_analog` macro and may drive the pins
low in the final tile.

## Clocks and timing

| Domain | Period | Constraint |
|---|---|---|
| `clk` (clk_ref) | 80 ns | reference at 12.5 MHz: PFD reference flop, lock detector, control registers |
| `vco_out` (clk_vco) | 3.0 ns | prescaler flops only; Liberty min period 0.93 ns ff / 1.71 ns tt and min pulse width |
| `clk_pre` | 20 ns | generated clock `vco_out`/8 at 50 MHz: divider, PFD feedback flop, /16 flop |
| `clk_fb` | <= 42 MHz | `clk_pre`/N, PFD feedback flop clock |

Keep attributes on the PFD delay chain must survive synthesis (checked in
the synthesised netlist). (REQ-TIM-*, REQ-PFD-DELAY-KEEP)

## Harden

Hardens standalone as `tt_um_ihsan_sa_pll` on the TT GF180 analog-tile
footprint with the pins above; the analog macro's area is reserved by the
msde integrator later. The joined-loop measures (divided frequency against
the real VCO, lock with the real pump, PFD reset width, phase margin) are
msde cosim measures, not this run's. (REQ-HARDEN-STANDALONE)
