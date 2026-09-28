#!/usr/bin/env python3
"""Scratch startup probe: run.py <corner tt|ss|ff> <netlist> <tag> [vctrl]
Builds a deck from per.cir's header (lines 1-60), swaps corner and netlist,
runs a 3.2 us tran, prints vco_out periods and bias node stats."""
import subprocess, sys, os
D = os.path.dirname(os.path.abspath(__file__))
corner, net, tag = sys.argv[1], os.path.abspath(sys.argv[2]), sys.argv[3]
vc = sys.argv[4] if len(sys.argv) > 4 else None
tstop = sys.argv[5] if len(sys.argv) > 5 else "3.2u"
lines = open(os.path.join(D, "per.cir")).read().splitlines()[:60]
out = []
for l in lines:
    if l.startswith(".lib") and "sm141064" in l:
        l = l.replace(" typical", " " + corner).replace("res_typical", "res_" + corner).replace("mimcap_typical", "mimcap_" + corner)
        l = l.replace("res_" + corner, "res_" + corner)
    if l.startswith(".include") and "pll_analog.cir" in l:
        l = ".include '%s'" % net
    if len(sys.argv) > 6 and l.startswith(".param w_bp"):
        import re
        for kv in sys.argv[6].split(","):
            k, v = kv.split("=")
            l = re.sub(r"\b%s=\S+" % k, "%s=%s" % (k, v), l)
    if vc and l.startswith("vvc"):
        l = "vvc      vfeed    0 %s" % vc
    out.append(l)
dat = os.path.join(D, tag + ".dat")
out += [".control", "set noaskquit", "set wr_singlescale", "set wr_vecnames",
        "tran 200p %s 0 200p" % tstop,
        "wrdata %s v(vco_out) v(bias_ref) v(xdut.va) v(xdut.vbp) v(xdut.vst) v(%s)" % (dat, "xdut.vref" if "vref" in open(net).read() else "vctrl"),
        ".endc", ".end"]
deck = os.path.join(D, tag + ".cir")
open(deck, "w").write("\n".join(out) + "\n")
r = subprocess.run([os.path.expanduser("~/.claude/skills/chip-flow/bin/eda"), "ngspice", "-b", deck], capture_output=True, text=True)
open(os.path.join(D, tag + ".log"), "w").write(r.stdout + r.stderr)
rows = []
for s in open(dat).read().splitlines()[1:]:
    p = s.split()
    try:
        rows.append([float(x) for x in p])
    except ValueError:
        pass
t = [r_[0] for r_ in rows]
vo = [r_[1] for r_ in rows]
edges = []
for i in range(1, len(t)):
    if vo[i - 1] < 2.97 <= vo[i] and t[i] > 200e-9:
        f = (2.97 - vo[i - 1]) / (vo[i] - vo[i - 1])
        edges.append(t[i - 1] + f * (t[i] - t[i - 1]))
per = [(edges[i], edges[i + 1] - edges[i]) for i in range(len(edges) - 1)]
print("corner", corner, "edges", len(edges))
print("periods ns:", " ".join("%.0f@%.2f" % (p * 1e9, e * 1e6) for e, p in per))
if per:
    fin = per[-1][1]
    late = [p for e, p in per if e > 0.7e-6]
    if late:
        dev = max(abs(p - fin) / fin for p in late)
        print("final %.1f ns  max dev after 0.5us(start>0.7u) %.1f %%" % (fin * 1e9, dev * 100))
names = ["bias_ref", "va", "vbp", "vst", "vref" if "vref" in open(net).read() else "vctrl"]
for w0, w1 in [(0.3e-6, 1e-6), (1e-6, 2e-6), (2e-6, 3.2e-6)]:
    sel = [r_ for r_ in rows if w0 <= r_[0] < w1]
    if not sel:
        continue
    s = "  [%.1f-%.1f us]" % (w0 * 1e6, w1 * 1e6)
    for k, n in enumerate(names):
        c = [r_[2 + k] for r_ in sel]
        s += " %s %.3f..%.3f" % (n, min(c), max(c))
    print(s)
