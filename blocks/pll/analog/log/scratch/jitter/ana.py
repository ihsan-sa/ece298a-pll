import sys,numpy as np
for tag in sys.argv[1:]:
    d=np.loadtxt(f'out_{tag}.txt'); t=d[:,0]; v=d[:,1]
    m=t>30e-9; t=t[m]; v=v[m]; th=1.65
    i=np.where((v[:-1]<th)&(v[1:]>=th))[0]
    tc=t[i]+(th-v[i])*(t[i+1]-t[i])/(v[i+1]-v[i])
    p=np.diff(tc)
    print(tag,'n_per',len(p),'mean_ps',p.mean()*1e12,'f_MHz',1e-6/p.mean(),'rms_dev_ps',p.std(ddof=1)*1e12,'6sig',6*p.std(ddof=1)*1e12,'swing',v.max()-v.min())
    if len(p)>3:
        # cycle-to-cycle: successive period difference
        c=np.diff(p); print('   c2c_rms_ps',c.std(ddof=1)*1e12,' -> sigma_period ~ c2c/sqrt2 =',c.std(ddof=1)/2**.5*1e12)
