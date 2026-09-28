import sys,yaml
out,A,P,corner,tag,temp,vdd=sys.argv[1:8]; ov=dict(a.split('=') for a in sys.argv[8:])
s=yaml.safe_load(open(A+'/sizing/sizing.yaml'))
vals={k:(ov.get(k) or repr(v['value'])) for k,v in s.items()}
for k in ov: vals[k]=ov[k]
t=open(A+'/tb/pll_analog_vco_tb.cir').read()
rep={'PDK':P,'CORNER':corner,'RES_CORNER':'res_'+tag,'MIM_CORNER':'mimcap_'+tag,'NETLIST':'/tmp/it11/fx/nl.cir','SIZING':'.param '+' '.join(f"{k}={v}" for k,v in vals.items()),'TEMP_C':temp,'VDD':vdd}
for k,v in rep.items(): t=t.replace('{{'+k+'}}',v)
assert '{{' not in t, t[t.index('{{'):t.index('{{')+30]
open(out,'w').write(t)
