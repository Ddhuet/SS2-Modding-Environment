#!/usr/bin/env python3
"""Quick Thumb disassembly by CPU address: dis.py ROM START END [ROM2 START2 END2]."""
import sys
from capstone import Cs, CS_ARCH_ARM, CS_MODE_THUMB
cs = Cs(CS_ARCH_ARM, CS_MODE_THUMB); cs.skipdata = True
a = sys.argv[1:]
while a:
    rom, s, e = open(a[0], "rb").read(), int(a[1], 0), int(a[2], 0); a = a[3:]
    for i in cs.disasm(rom[s - 0x08000000:e - 0x08000000], s):
        print(f"{i.address:08X}  {i.bytes.hex():8}  {i.mnemonic:6} {i.op_str}")
    print("-" * 40)
