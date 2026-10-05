#!/bin/bash
cd "$(dirname "$0")"
rm -f out_* log_* start_* end_* deck_* time_*
sed -i 's/NT=20e-12/NT=50e-12/; s/tran 10p/tran 25p/; s/ 0 10p/ 0 25p/' run.py
sed -i 's/m=t>100e-9/m=t>30e-9/' ana.py
E=$HOME/.claude/skills/chip-flow/bin/eda
python3 run.py tt tt_off 0 1 1 130e-9 >/dev/null; python3 run.py ss ss_off 0 1 1 130e-9 >/dev/null
for s in 1 2 3; do python3 run.py tt tt_g1_s$s 0.38e-3 1 $((20+s)) 330e-9 >/dev/null; python3 run.py ss ss_g1_s$s 0.38e-3 1 $((30+s)) 330e-9 >/dev/null; done
for t in tt_off ss_off tt_g1_s1 tt_g1_s2 tt_g1_s3 ss_g1_s1 ss_g1_s2 ss_g1_s3; do (date +%s > start_$t; timeout 1200 $E ngspice -b deck_$t.cir > log_$t.txt 2>&1; date +%s > end_$t) & done
wait
