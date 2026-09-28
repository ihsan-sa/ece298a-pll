#!/bin/bash
CFH=$HOME/.claude/skills/chip-flow
WS=/home/ihsan/.cc/worktrees/ece298a/pll/blocks/pll/analog
$CFH/bin/eda python3 $CFH/engine/scripts/gate.py --gate sim_tt --skill ade --workspace $WS --out $WS/reports/gate-sim_tt.json
echo "EXIT $?"
