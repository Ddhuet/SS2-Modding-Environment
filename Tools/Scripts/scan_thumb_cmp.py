"""Find Thumb-1 CMP Rd,#imm8 candidates in a verified ROM; never writes files."""

from __future__ import annotations

import argparse
import struct

from rom_common import ROM_BASE_ADDRESS, assert_baseline, normalized_path


def number(value: str) -> int:
    return int(value, 0)


def main() -> int:
    parser = argparse.ArgumentParser()
    parser.add_argument("rom")
    parser.add_argument("--value", type=number, required=True)
    parser.add_argument("--start", type=number, default=ROM_BASE_ADDRESS)
    parser.add_argument("--end", type=number, default=ROM_BASE_ADDRESS + 0x02000000)
    parser.add_argument("--max-results", type=int, default=20)
    args = parser.parse_args()
    if not 0 <= args.value <= 255:
        parser.error("Thumb CMP immediate is 0..255")
    if args.start % 2 or args.end % 2 or not ROM_BASE_ADDRESS <= args.start < args.end:
        parser.error("start/end must be aligned ROM addresses")
    if not 1 <= args.max_results <= 200:
        parser.error("max-results must be 1..200")

    rom = normalized_path(args.rom, must_exist=True)
    identity = assert_baseline(rom)
    data = rom.read_bytes()
    lo = args.start - ROM_BASE_ADDRESS
    hi = min(args.end - ROM_BASE_ADDRESS, len(data))
    matches = []
    for offset in range(lo, hi - 1, 2):
        halfword = struct.unpack_from("<H", data, offset)[0]
        if halfword & 0xF800 == 0x2800 and halfword & 0xFF == args.value:
            matches.append((offset, (halfword >> 8) & 7, halfword))
            if len(matches) > args.max_results:
                break
    print(f"SHA-256: {identity['sha256']}")
    print(f"Search: Thumb-1 cmp rN, #{args.value}; range 0x{args.start:08X}-0x{args.end:08X}")
    if len(matches) > args.max_results:
        print(f"STOP: more than {args.max_results} candidates. Narrow --start/--end; no semantic conclusion was made.")
        return 3
    for offset, register, halfword in matches:
        address = ROM_BASE_ADDRESS + offset
        context_lo = max(0, offset - 8)
        context_hi = min(len(data), offset + 10)
        raw = data[offset:offset + 2].hex(" ")
        print(f"0x{address:08X} offset=0x{offset:08X} bytes={raw} instruction='cmp r{register}, #{args.value}' context={data[context_lo:context_hi].hex(' ')}")
    print(f"Candidates: {len(matches)}. Every result is hypothesis until data source and branch destination are proven.")
    return 0


if __name__ == "__main__":
    raise SystemExit(main())
