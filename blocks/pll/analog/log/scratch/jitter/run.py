import sys,subprocess,numpy as np,re
corner=sys.argv[1]; tag=sys.argv[2]; psd_gm=float(sys.argv[3]); gamma=float(sys.argv[4]); seed=int(sys.argv[5]) if len(sys.argv)>5 else 1
head=open(f'head_{corner}.inc').read()
k=1.380649e-23; T=float(re.search(r'\.temp (\S+)',head).group(1))+273.15
psd=4*k*T*gamma*psd_gm; NT=50e-12
na=np.sqrt(psd/(2*NT)) if psd_gm>0 else 0
tend=float(sys.argv[6]) if len(sys.argv)>6 else 1100e-9
srcs=''
for i in range(1,6):
    srcs+=f'inz{i} xdut.r{i} 0 trnoise({na:.6e} {NT:.3e} 0 0)\n' if na>0 else ''
deck=head+f'\nikick 0 xdut.r1 pulse(0 1u 1n 50p 50p 1n 1)\n{srcs}\n.control\nset rndseed={seed}\ntran 25p {tend} 0 25p\nwrdata out_{tag}.txt v(vco_out)\n.endc\n.end\n'
open(f'deck_{tag}.cir','w').write(deck)
print(tag,'psd',psd,'na',na)
