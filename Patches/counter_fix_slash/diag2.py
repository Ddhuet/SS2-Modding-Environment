import sys; sys.path.insert(0, "/home/david/Documents/SS2_Modding/pathing")
from common import *
s, f = open_state("diag", rom=Path(sys.argv[1]).resolve(), state=ROOT / sys.argv[2])
s.run_frames(2)
print("cam", [hex(s.read16(0x0300328C+i)) for i in range(0,12,2)])
s.write32(0x03007924, 136 | 230 << 16)
s.write32(0x03007920, 0x534C0006)
for i in range(3):
    s.run_frames(1)
    tile = s.read16(0x030013D4) & 0x3FF
    oam = s.read_memory(0x07000000, 16)
    print(i, "shadow0", s.read_memory(0x030013D0, 8).hex(), "hwoam0", oam.hex(), "pal", hex(s.read16(0x05000222)),
          "vram_ok", s.read_memory(0x06010000 + tile*32, 512) == open(sys.argv[1],"rb").read()[0x1013000:0x1013200], "tilecnt", hex(s.read32(0x03002958)))
s.screenshot("x.png"); print(f)
s.__exit__(None,None,None)
