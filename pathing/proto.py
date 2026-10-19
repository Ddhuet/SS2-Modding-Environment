"""Python prototype of flow-field steering, injected at the end of 0x08016780 (diagnostic RAM writes).
usage: proto.py MODE FRAMES [KEYS]   MODE = vanilla | flow"""
import sys
from collections import deque
from common import *
MODE, FRAMES = sys.argv[1], int(sys.argv[2])
import os; DBG = int(os.environ["DBG"]) if "DBG" in os.environ else None
KEYSEQ = sys.argv[3] if len(sys.argv) > 3 else ""
M = 0x03003210
s, folder = open_state("proto-" + MODE)
s.run_frames(1)
W, H = s.read16(M+0x78), s.read16(M+0x7A)
def load_grid():
    raw = s.read_memory(s.read32(M+0x68), W*H*2)
    pas = bytearray(W*H)
    for i in range(W*H):
        v = raw[2*i] | raw[2*i+1] << 8; k = (v >> 8) & 15
        if (v & 0xFF) == 1: k |= 1
        pas[i] = 1 if k == 0 else 0
    return pas
pas = load_grid()
def passable(x, y): return 0 <= x < W and 0 <= y < H and pas[y*W+x]
N8 = [(1,0),(-1,0),(0,1),(0,-1),(1,1),(1,-1),(-1,1),(-1,-1)]
def bfs(tx, ty):
    dist = [255]*(W*H)
    if not passable(tx, ty): return dist
    dist[ty*W+tx] = 0; q = deque([(tx, ty)])
    while q:
        x, y = q.popleft(); d = dist[y*W+x]
        for dx, dy in N8:
            nx, ny = x+dx, y+dy
            if not passable(nx, ny) or dist[ny*W+nx] != 255: continue
            if dx and dy and not (passable(x+dx, y) and passable(x, y+dy)): continue
            dist[ny*W+nx] = d + 1; q.append((nx, ny))
    return dist
def cell(px, py): return int(px) >> 3, (int(py) + 2) >> 3
def los(x0, y0, x1, y1):
    n = int(max(abs(x1-x0), abs(y1-y0)) / 4) + 1
    for i in range(n+1):
        x = x0 + (x1-x0)*i/n; y = y0 + (y1-y0)*i/n
        if not passable(*cell(x, y)): return False
    return True
def code(dx, dy):
    return (0x10 if dx > 0 else 0x20 if dx < 0 else 0) | (0x80 if dy > 0 else 0x40 if dy < 0 else 0)
field = None; fcell = None
log = []
f0 = s.frame
kseq = [(int(t.split(":")[0]), keymask(t.split(":")[1]) if ":" in t else 0) for t in KEYSEQ.split()]
def keys_at(fr):
    acc = 0
    for n, k in kseq:
        if fr < acc + n: return k
        acc += n
    return 0
while s.frame - f0 < FRAMES:
    k = keys_at(s.frame - f0)
    if MODE == "vanilla":
        s.run_frames(1, k)
    else:
        target_frame = s.frame + 1
        while s.frame < target_frame:
            r = s.run_until(0x08016834, instructions=2_000_000, frames=1, keys=k)
            if not r["hit"]: break
            e = s.register("r5")
            ex, ey = s32(s.read32(e+0x14))/256, s32(s.read32(e+0x18))/256
            tx, ty = s32(s.read32(e+0x24)), s32(s.read32(e+0x28))
            if cell(tx, ty) != fcell:
                fcell = cell(tx, ty); field = bfs(*fcell)
            v = s.read16(e+4)
            if not los(ex, ey, tx, ty):
                cx, cy = cell(ex, ey); best = field[cy*W+cx] if passable(cx, cy) else 255; bd = None
                for dx, dy in N8:
                    nx, ny = cx+dx, cy+dy
                    if not passable(nx, ny): continue
                    if dx and dy and not (passable(cx+dx, cy) and passable(cx, cy+dy)): continue
                    if field[ny*W+nx] < best: best = field[ny*W+nx]; bd = (dx, dy)
                if bd: s.write16(e+4, code(*bd))
                if DBG is not None and s.read16(e) == DBG:
                    print(s.frame-f0, "pos", round(ex,1), round(ey,1), "cell", (cx,cy), "d", field[cy*W+cx], "v", hex(v), "->", hex(s.read16(e+4)), "st", s.read16(e+0xC), "f201", s.read8(e+0x201))
            elif DBG is not None and s.read16(e) == DBG:
                print(s.frame-f0, "LOS pos", round(ex,1), round(ey,1), "v", hex(v), "st", s.read16(e+0xC))
            s.step(1)
    if "SAVE_AT" in os.environ and s.frame - f0 == int(os.environ["SAVE_AT"]):
        s.save_state("states/at.ss1"); print("saved", folder / "states/at.ss1")
    if (s.frame - f0) % 6 == 0:
        log.append([(round(e["x"]), round(e["y"]), e["hp"]) for e in pool(s)] + [(s32(s.read32(0x03003D80+0x94))>>8, s32(s.read32(0x03003D80+0x98))>>8)])
    if (s.frame - f0) % 60 == 0:
        s.screenshot(f"screenshots/{s.frame-f0:05d}.png")
import json
(folder/"track.json").write_text(json.dumps(log))
open(folder/"grid.bin","wb").write(s.read_memory(s.read32(M+0x68), W*H*2))
print(folder)
print("final", [(round(e["x"]), round(e["y"]), e["hp"]) for e in pool(s)])
s.__exit__(None, None, None)
