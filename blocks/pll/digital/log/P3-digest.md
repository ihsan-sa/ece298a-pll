# P3 digest (tb-writer + property-writer, opus)
- tb/pll_ref.py (reference model), tb/test_pll.py: 14 visible tests. holdout/test_pll_holdout.py: 7 tests, hash pinned by tb-writer.
- formal/ihsan_sa_pll_formal.sv: 6 asserts, 8 covers; spec.yaml formal.depth 20, cover_depth 100; spec_lint pass.
- OPEN: REQ-LOOP-* (closed-loop measures) have no bench on the digital side; they belong to the msde co-sim join, not vde sim.
- ENGINE GAP (reported, not worked around): check_formal.py writes sby without `multiclock on` and spec.yaml can't ask for it. Expect the prescaler/divider asserts to fail on correct RTL and the PFD/lock asserts to pass vacuously.
