#!/bin/bash
# run.sh tag nl corner temp vdd params mode vcs
cd /tmp/nl12
python3 mk.py $1.cir $2 $3 $4 $5 "$6" $7 $8
timeout 600 $HOME/.claude/skills/chip-flow/bin/eda ngspice -b $1.cir > $1.log 2>&1
grep QRES $1.log
