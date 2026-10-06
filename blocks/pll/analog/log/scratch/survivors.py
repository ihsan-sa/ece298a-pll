import json,sys
r=json.load(open('reports/gate-bench_strength.json'));m=r['facts']['mutants']
S=[(k,v) for k,v in m.items() if not v.get('killed')]
rel=float(sys.argv[1]) if len(sys.argv)>1 else 0.02
NEAR={'vctrl_leak_off_na','standby_current_ua','vco_out_off_toggles'}
absS=json.loads(sys.argv[2]) if len(sys.argv)>2 else {}
kill=0;open_=[]
from collections import Counter;c=Counter()
for k,v in S:
  d={n:x for n,x in v['deltas'].items() if n not in NEAR}
  a=v.get('abs_deltas',{})
  hit=[n for n,x in d.items() if abs(x)>=rel]+[n for n,x in a.items() if n in absS and abs(x)>=absS[n]]
  if hit: kill+=1; c.update(hit)
  else:
    top=max(v['deltas'].items(),key=lambda t:abs(t[1]))
    open_.append((k,v['kind'],v['describe'],top,{n:x for n,x in a.items() if x}))
print('kills',kill,'of',len(S));print(c)
for o in sorted(open_,key=lambda o:-abs(o[3][1])): print(o)
