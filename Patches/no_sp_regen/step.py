import sys; from pathlib import Path
ROOT=Path("/home/david/Documents/SS2_Modding"); sys.path.insert(0,str(ROOT/"Tools/Scripts")); sys.path.insert(0,str(ROOT/"Tools"))
from smoke_state import open_state
s,f=open_state(ROOT/"Build/en.gba", ROOT/"Savestates/SP_Regen.ss0", "spstep")
A=0x03003D80+0xCA
while s.frame<269272: s.run_frames(1)
n=0; prev=s.read16(A); hist=[]
while True:
    hist.append(s.register("pc")); hist=hist[-12:]
    s.step(1); n+=1
    v=s.read16(A)
    if v!=prev: break
print(n,hex(prev),"->",hex(v)); print([hex(x) for x in hist]); print("pc",hex(s.register("pc")),"lr",hex(s.register("lr")))
s.__exit__(None,None,None)
