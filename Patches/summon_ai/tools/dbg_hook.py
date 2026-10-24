import sys; sys.path.insert(0, "/home/david/Documents/SS2_Modding/Patches/summon_ai/tools")
from scommon import *
st, frames, addr = sys.argv[1], int(sys.argv[2]), int(sys.argv[3], 0)
s, f = open_state("dbg", st, rom=ROOT / "Patches/summon_ai/test.gba")
s.run_frames(frames)
for k in range(4):
    r = s.run_until(addr, frames=3)
    if not r["hit"]: print("no hit", r["stop"]); break
    r = dict(r, **r["registers"]); sp = r["sp"]; F = sp
    e = s.read32(F + 0x50)
    print("r0", r["r0"], "tgt", hex(s.read32(F + 0x60)), "e", hex(e), "e.id", hex(s.read16(e + 2)), "state", s.read16(e + 0xC),
          "hp", s.read16(e + 0x5C), "cls", s.read8(e + 0x1DC), "pos", s32(s.read32(e + 0x14)) >> 8, s32(s.read32(e + 0x18)) >> 8,
          "pet", s32(s.read32(F + 0x70)) >> 8, s32(r["r10"]) >> 8, "flags7a", hex(s.read16(e + 0x7A)), "mask", hex(s.read32(0x030057BC)))
    s.run_frames(1)
