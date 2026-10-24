#!/usr/bin/env python3
"""Read-only Thumb disassembly by CPU address, continuing past undecodable halfwords.

    Tools/.venv/bin/python Tools/Scripts/thumbdis.py ROM ADDR [LENGTH]

Unlike Tools/Scripts/disassemble.py this takes CPU addresses (0x08xxxxxx) and uses
Capstone SKIPDATA, so a literal pool or a misaligned start does not stop output.
Literal-pool words are annotated where an `ldr rX, [pc, #imm]` points at them.
"""
import struct
import sys
from pathlib import Path

from capstone import Cs, CS_ARCH_ARM, CS_MODE_THUMB

BASE = 0x08000000


def disasm(data, addr, length):
    cs = Cs(CS_ARCH_ARM, CS_MODE_THUMB)
    cs.skipdata = True
    off = addr - BASE
    out = []
    for ins in cs.disasm(data[off:off + length], addr):
        note = ""
        hw = struct.unpack_from("<H", data, ins.address - BASE)[0]
        if ins.size == 2 and hw & 0xF800 == 0x4800:
            lit = ((ins.address + 4) & ~3) + (hw & 0xFF) * 4
            note = f"  ; ={struct.unpack_from('<I', data, lit - BASE)[0]:#010x}"
        out.append(f"{ins.address:08X}  {ins.bytes.hex():<10} {ins.mnemonic:<7} {ins.op_str}{note}")
    return out


def main():
    rom = Path(sys.argv[1]).read_bytes()
    addr = int(sys.argv[2], 0)
    length = int(sys.argv[3], 0) if len(sys.argv) > 3 else 0x80
    print("\n".join(disasm(rom, addr, length)))


if __name__ == "__main__":
    main()
