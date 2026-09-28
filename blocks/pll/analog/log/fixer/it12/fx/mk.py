import sys
# mk.py out netlist corner temp vdd "params" mode vcs [ic]
out,nl,corner,temp,vdd,params,mode,vcs=sys.argv[1:9]
P='/home/ihsan/.cc/toolchains/iic-osic-tools-2026.09/foss/pdks/gf180mcuD'
res={'typical':'res_typical','ff':'res_ff','ss':'res_ss'}[corner]
h=f""".title x
.include '{P}/libs.tech/ngspice/design.spice'
.lib '{P}/libs.tech/ngspice/sm141064.spice' {corner}
.lib '{P}/libs.tech/ngspice/sm141064.spice' {res}
.lib '{P}/libs.tech/ngspice/sm141064.spice' mimcap_{corner}
.include '{nl}'
.param {params}
.temp {temp}
vdd_src vdd 0 {vdd}
vss_src vss 0 0
ven pll_en 0 {vdd}
vup pfd_up 0 0
vdn pfd_dn 0 0
vt0 cp_trim0 0 0
vt1 cp_trim1 0 0
vvc vctrl 0 0.3
cload vco_out 0 15f
xdut vco_out pfd_up pfd_dn pll_en cp_trim0 cp_trim1 vctrl bias_ref vdd vss pll_analog
ikick 0 xdut.r1 pulse(0 1u 1n 50p 50p 1n 1)
.control
set noaskquit
"""
vm=float(vdd)/2
c=""
for vc in vcs.split(','):
  if mode=='op':
    c+=f"""alter vvc dc = {vc}
op
echo OPVC {vc}
print xdut.vi xdut.vs xdut.vbp_vco xdut.vbn_vco xdut.p1 xdut.n1 xdut.r1 bias_ref
print @m.xdut.xmn_flr.m0[id] @m.xdut.xmn_v2i.m0[id] @m.xdut.xmp_s1.m0[id] @m.xdut.xmn_s1.m0[id]
"""
  else:
    ts,te,td = {'fast':('20p','30n','5n'),'mid':('50p','100n','15n'),'slow':('200p','700n','60n')}[mode]
    c+=f"""alter vvc dc = {vc}
tran {ts} {te} 0 {ts}
meas tran ta when v(vco_out)={vm} rise=1 td={td}
meas tran tb when v(vco_out)={vm} rise=4 td={td}
let f = 3/(tb-ta)/1e6
echo "QRES vc={vc} f=$&f"
destroy $curplot
"""
open(out,'w').write(h+c+".endc\n.end\n")
