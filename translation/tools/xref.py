#!/usr/bin/env python3
"""Read-only Thumb cross-references: find code that loads a 32-bit literal.

    eu/.venv/bin/python translation/tools/xref.py ROM VALUE [--limit 0x200000] [--context 24]

Scans aligned literal-pool words equal to VALUE inside the first LIMIT bytes, then
finds Thumb `ldr rX, [pc, #imm]` instructions (up to 1020 bytes before the pool word)
that load it. Prints each load with a short Capstone disassembly window around it.
Candidates only: a pool word can be data, and an LDR hit inside data can be false.
"""
import argparse
import hashlib
import struct
from pathlib import Path

from capstone import Cs, CS_ARCH_ARM, CS_MODE_THUMB

BASE = 0x08000000


def literal_loads(data, value, limit):
    pat = struct.pack("<I", value)
    i = data.find(pat)
    while i != -1 and i < limit:
        if i % 4 == 0:
            for back in range(2, 1024 + 2, 2):
                pc = i - back
                if pc < 0:
                    break
                hw = struct.unpack_from("<H", data, pc)[0]
                if hw & 0xF800 == 0x4800 and ((pc + 4) & ~3) + (hw & 0xFF) * 4 == i:
                    yield pc, i, (hw >> 8) & 7
        i = data.find(pat, i + 1)


def main():
    ap = argparse.ArgumentParser(description=__doc__, formatter_class=argparse.RawDescriptionHelpFormatter)
    ap.add_argument("rom", type=Path)
    ap.add_argument("value", type=lambda s: int(s, 0))
    ap.add_argument("--limit", type=lambda s: int(s, 0), default=0x200000)
    ap.add_argument("--context", type=lambda s: int(s, 0), default=24, help="bytes before/after")
    ap.add_argument("--quiet", action="store_true", help="list loads only")
    a = ap.parse_args()
    data = a.rom.read_bytes()
    print(f"; {a.rom.name} SHA-256 {hashlib.sha256(data).hexdigest()[:16]}…  value {a.value:#010x}")
    cs = Cs(CS_ARCH_ARM, CS_MODE_THUMB)
    for pc, pool, reg in literal_loads(data, a.value, a.limit):
        print(f"\n{BASE + pc:08X}: ldr r{reg}, ={a.value:#x}   (pool {BASE + pool:08X})")
        if a.quiet:
            continue
        start = max(0, pc - a.context)
        for ins in cs.disasm(data[start:pc + a.context], BASE + start):
            mark = ">>" if ins.address == BASE + pc else "  "
            print(f"  {mark} {ins.address:08X}  {ins.bytes.hex():<10} {ins.mnemonic:<7} {ins.op_str}")


if __name__ == "__main__":
    main()
