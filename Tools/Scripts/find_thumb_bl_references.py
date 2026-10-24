"""Find Thumb-1 two-halfword BL instructions targeting one known address."""

from __future__ import annotations

import argparse
import struct

from rom_common import ROM_BASE_ADDRESS, assert_baseline, normalized_path


def number(value: str) -> int:
    return int(value, 0)


def sign_extend(value: int, bits: int) -> int:
    sign = 1 << (bits - 1)
    return (value ^ sign) - sign


def main() -> int:
    parser = argparse.ArgumentParser()
    parser.add_argument("rom")
    parser.add_argument("--target", type=number, required=True)
    parser.add_argument("--start", type=number, default=ROM_BASE_ADDRESS)
    parser.add_argument("--end", type=number, default=ROM_BASE_ADDRESS + 0x02000000)
    parser.add_argument("--max-results", type=int, default=100)
    args = parser.parse_args()
    rom = normalized_path(args.rom, must_exist=True)
    identity = assert_baseline(rom)
    data = rom.read_bytes()
    lo = max(0, args.start - ROM_BASE_ADDRESS)
    hi = min(len(data), args.end - ROM_BASE_ADDRESS)
    found = []
    for offset in range(lo, hi - 3, 2):
        first, second = struct.unpack_from("<HH", data, offset)
        if first & 0xF800 != 0xF000 or second & 0xF800 != 0xF800:
            continue
        displacement = sign_extend(((first & 0x7FF) << 12) | ((second & 0x7FF) << 1), 23)
        address = ROM_BASE_ADDRESS + offset
        if (address + 4 + displacement) & ~1 == args.target & ~1:
            found.append((address, offset, first, second))
            if len(found) > args.max_results:
                print("STOP: result limit exceeded; narrow the range.")
                return 3
    print(f"SHA-256: {identity['sha256']}")
    for address, offset, first, second in found:
        raw = data[offset:offset + 4].hex(" ")
        print(f"caller=0x{address:08X} offset=0x{offset:08X} bytes={raw} target=0x{args.target & ~1:08X}")
    print(f"References: {len(found)}. This recognizes classic Thumb-1 BL pairs only.")
    return 0


if __name__ == "__main__":
    raise SystemExit(main())
