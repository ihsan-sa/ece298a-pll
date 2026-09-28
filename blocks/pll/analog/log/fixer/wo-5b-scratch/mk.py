import sys,re
# usage: mk.py tb tag k=v ...
tb,tag=sys.argv[1],sys.argv[2]
kv=dict(a.split('=') for a in sys.argv[3:])
L=open(f'pll_analog_{tb}_tb__tt.cir').read().split('\n')
for i,l in enumerate(L):
    if l.startswith('.param w_bp='):
        for k,v in kv.items():
            l=re.sub(rf"\b{k}='?[0-9.e+-]+'?",f"{k}={v}",l)
        L[i]=l
out='\n'.join(L)
if tb=='overlap':
    out=out.replace("  let x = abs(qev)*1e15",'  let x = abs(qev)*1e15\n  echo "VC $vc q=$&x"')
open(f'{tag}_{tb}.cir','w').write(out)
