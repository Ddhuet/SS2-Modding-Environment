from common import *
s, folder = open_state("grid")
s.run_frames(1)
M = 0x03003210
print("map struct", s.read_memory(M, 0xA0).hex())
g68 = s.read32(M+0x68); g6c = s.read32(M+0x6C)
w78, h7a = s.read16(M+0x78), s.read16(M+0x7A); w74, h76 = s.read16(M+0x74), s.read16(M+0x76)
print("g68", hex(g68), "w,h", w78, h7a, " g6c", hex(g6c), "w,h(74,76)", w74, h76, "8c", s.read16(M+0x8C), "90", s.read16(M+0x90))
W, H = w78, h7a
raw = s.read_memory(g68, W*H*2)
cells = [raw[i*2] | raw[i*2+1] << 8 for i in range(W*H)]
import collections
print("class hist", collections.Counter((c >> 8) & 0xF for c in cells))
print("lowbyte hist", collections.Counter(c & 0xFF for c in cells).most_common(10))
print("hi nibble hist", collections.Counter(c >> 12 for c in cells))
ents = pool(s)
p = s.read32(0x03003580)
px, py = s32(s.read32(0x03003D80+0x94)), s32(s.read32(0x03003D80+0x98))
print("player actor pos raw", hex(px), hex(py))
for e in ents: print(e["slot"], e["x"], e["y"], "cell", int(e["x"])>>3, (int(e["y"])+2)>>3)
open(folder/"grid.bin","wb").write(raw)
# print map section around enemies
cx0, cy0 = 50, 15
marks = {((int(e["x"]))>>3, (int(e["y"])+2)>>3): str(e["slot"]) for e in ents}
for y in range(max(0,cy0), min(H, cy0+30)):
    row = ""
    for x in range(max(0,cx0), min(W, cx0+40)):
        c = cells[y*W+x]; k = (c>>8)&0xF
        row += marks.get((x,y), "." if k == 0 else "%X" % k)
    print(f"{y:3d} {row}")
print(folder)
s.__exit__(None, None, None)
