import glob
for f in glob.glob('deck_*_g1_s?.cir'):
    s=open(f).read(); tag=f[5:-4]
    a=s.index('tran 25p'); b=s.index('.endc')
    stops=''.join(f'stop when time gt {n}n\n' for n in range(80,331,50))
    w=f'wrdata out_{tag}.txt v(vco_out)\n'
    new=stops+'tran 25p 330n 0 25p\n'+w+''.join('resume\n'+w for _ in range(6))
    open(f,'w').write(s[:a]+new+s[b:])
