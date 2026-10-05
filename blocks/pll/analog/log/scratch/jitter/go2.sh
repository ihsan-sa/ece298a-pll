#!/bin/bash
cd "$(dirname "$0")"
E=$HOME/.claude/skills/chip-flow/bin/eda
for t in tt_g1_s1 tt_g1_s2 tt_g1_s3 ss_g1_s1 ss_g1_s2 ss_g1_s3; do (timeout 1100 $E ngspice -b deck_$t.cir > log_$t.txt 2>&1) & done
wait
