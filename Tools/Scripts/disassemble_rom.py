"""Read-only ARM/Thumb disassembly of a verified current-baseline GBA ROM."""

from __future__ import annotations

import argparse
from pathlib import Path

from rom_common import ROM_BASE_ADDRESS, assert_baseline, normalized_path


def number(value: str) -> int:
    return int(value, 0)


def main() -> int:
    parser = argparse.ArgumentParser()
    parser.add_argument("rom")
    parser.add_argument("--address", type=number, required=True)
    parser.add_argument("--length", type=number, default=64)
    parser.add_argument("--mode", choices=("thumb", "arm"), required=True)
    args = parser.parse_args()
    if not 1 <= args.length <= 65536:
        parser.error("--length must be between 1 and 65536")
    alignment = 2 if args.mode == "thumb" else 4
    if args.address % alignment:
        parser.error(f"{args.mode} address must be {alignment}-byte aligned")
    offset = args.address - ROM_BASE_ADDRESS
    if offset < 0:
        parser.error("address is below ROM base 0x08000000")

    try:
        from capstone import CS_ARCH_ARM, CS_MODE_ARM, CS_MODE_LITTLE_ENDIAN, CS_MODE_THUMB, Cs
    except ImportError as exc:
        raise SystemExit("Capstone is not installed. See requirements-optional.txt") from exc

    rom = normalized_path(args.rom, must_exist=True)
    identity = assert_baseline(rom)
    with rom.open("rb") as stream:
        stream.seek(offset)
        data = stream.read(args.length)
    if len(data) != args.length:
        raise SystemExit("requested range exceeds ROM")

    mode = (CS_MODE_THUMB if args.mode == "thumb" else CS_MODE_ARM) | CS_MODE_LITTLE_ENDIAN
    engine = Cs(CS_ARCH_ARM, mode)
    print(f"ROM: {rom}")
    print(f"SHA-256: {identity['sha256']}")
    print(f"Address: 0x{args.address:08X}  Offset: 0x{offset:08X}  Mode: {args.mode}")
    print(f"Bytes: {data.hex(' ')}")
    consumed = 0
    for insn in engine.disasm(data, args.address):
        raw = insn.bytes.hex(" ")
        print(f"0x{insn.address:08X}  {raw:<12}  {insn.mnemonic:<8} {insn.op_str}")
        consumed = insn.address + insn.size - args.address
    if consumed < len(data):
        print(f"STOP: {len(data)-consumed} trailing byte(s) were not decoded; mode/data boundary may be wrong.")
        return 2
    return 0


if __name__ == "__main__":
    raise SystemExit(main())
