#!/usr/bin/env python3
"""Annotated Thumb disassembly: dis.py ROM START END. Resolves pc-relative literals; marks bl targets."""
import sys, struct
from capstone import Cs, CS_ARCH_ARM, CS_MODE_THUMB
cs = Cs(CS_ARCH_ARM, CS_MODE_THUMB); cs.skipdata = True
rom = open(sys.argv[1], "rb").read(); s, e = int(sys.argv[2], 0), int(sys.argv[3], 0)
names = {}
for a in sys.argv[4:]:
    k, v = a.split("="); names[int(k, 0)] = v
def w(a): return struct.unpack_from("<I", rom, a - 0x08000000)[0]
for i in cs.disasm(rom[s - 0x08000000:e - 0x08000000], s):
    c = ""
    if i.mnemonic == "ldr" and "[pc," in i.op_str:
        off = int(i.op_str.split("#")[-1].rstrip("]"), 0)
        la = ((i.address + 4) & ~3) + off; c = f"; ={w(la):#010x}"
    if i.mnemonic == "bl":
        t = int(i.op_str.lstrip("#"), 0); c = f"; {names.get(t, '')}"
    print(f"{i.address:08X}  {i.bytes.hex():8}  {i.mnemonic:6} {i.op_str} {c}")
