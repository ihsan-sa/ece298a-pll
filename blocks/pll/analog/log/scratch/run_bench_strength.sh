#!/bin/bash
CFH=$HOME/.claude/skills/chip-flow
WS=/home/ihsan/.cc/worktrees/ece298a/pll/blocks/pll/analog
$CFH/bin/eda python3 $CFH/engine/scripts/gate.py --gate bench_strength --skill ade --workspace $WS --out $WS/reports/gate-bench_strength.json
echo "EXIT $?"
