#!/usr/bin/env python3
"""Read-only ARM7TDMI disassembly. Reports the exact input hash and CPU addresses."""
from pathlib import Path
import argparse
import hashlib
from capstone import Cs, CS_ARCH_ARM, CS_MODE_ARM, CS_MODE_THUMB


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('rom', type=Path)
    parser.add_argument('--offset', required=True, type=lambda s: int(s, 0), help='File offset, not CPU address')
    parser.add_argument('--length', type=lambda s: int(s, 0), default=0x100)
    parser.add_argument('--arm', action='store_true', help='ARM mode; default is Thumb')
    args = parser.parse_args()
    data = args.rom.read_bytes()
    alignment = 4 if args.arm else 2
    if args.offset < 0 or args.offset % alignment or args.length <= 0 or args.offset + args.length > len(data):
        parser.error('Range must be aligned, nonempty and within the ROM')
    print(f'; SHA-256 {hashlib.sha256(data).hexdigest()}')
    print('; Disassembly is not proof that this range is code; literal pools may decode as instructions.')
    decoder = Cs(CS_ARCH_ARM, CS_MODE_ARM if args.arm else CS_MODE_THUMB)
    for instruction in decoder.disasm(data[args.offset:args.offset+args.length], 0x08000000+args.offset):
        print(f'{instruction.address:08X}  {instruction.bytes.hex():<10} {instruction.mnemonic:<8} {instruction.op_str}')


if __name__ == '__main__':
    main()
