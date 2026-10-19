from common import *
s, folder = open_state("dump")
s.run_frames(1)
for e in pool(s): print(e)
p = s.read32(0x03003580); print("player ptr", hex(p))
print("cam", s.read16(0x0300330C), s.read16(0x0300330E), s.read16(0x03003314), s.read16(0x03003316))
base = s.read32(0x030057B4)
for i in range(5):
    a = base + i*0x454
    print(i, s.read_memory(a, 0x80).hex())
s.__exit__(None, None, None)
