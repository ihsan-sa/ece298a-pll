import json, re, sys
r = json.load(open("reports/gate-bench_strength.json"))
net = open("netlist/pll_analog.cir").read().splitlines()
NZ = re.compile("standby|leak_off|off_toggles")
out = ["below_spread:"]
for k, v in r["facts"]["mutants"].items():
    if v["killed"]: continue
    d = {m: x for m, x in v["deltas"].items() if x is not None and not NZ.search(m)}
    m = max(d, key=lambda m: abs(d[m]))
    if abs(d[m]) >= 0.02: continue
    dev = re.match(r"(x\w+?)_(size_doubled_w|connection_removed|type_flipped)$", k).group(1)
    line = [l for l in net if l.split() and l.split()[0].lower() == dev.lower()]
    assert len(line) == 1, k
    out += [f"  - id: {k}", f"    netlist_line: {json.dumps(line[0].strip())}",
            f"    measure: {m}", f"    delta: {d[m]}", "    sigma: 0",
            '    ruling: "<WHO RULED, DATE>"',
            f'    evidence: "{v["describe"]}: largest move on a non-near-zero tt measure is {d[m]*100:.2f}% ({m}), under the 2% spread floor; no mc sigma yet, so every measure is held to 2%."']
print("\n".join(out))
