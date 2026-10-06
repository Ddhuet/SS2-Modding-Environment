"""Machine-readable, standard-library-only EU ROM CLI. Errors exit 2."""
from __future__ import annotations

import argparse
import json
import sys
from pathlib import Path

from .core import ROM_BASE, build, decode_bl, encode_bl, hex_bytes, identify, load_profile, verify
from .porting import port_report


def integer(value: str) -> int:
    try:
        parsed = int(value, 0)
    except ValueError as exc:
        raise argparse.ArgumentTypeError("Use decimal or 0x hexadecimal integer") from exc
    if parsed < 0:
        raise argparse.ArgumentTypeError("Integer must be nonnegative")
    return parsed


def parser() -> argparse.ArgumentParser:
    root = argparse.ArgumentParser(description=__doc__)
    commands = root.add_subparsers(dest="command", required=True)
    command = commands.add_parser("identify", help="Hash bytes and inspect GBA header; no compatibility inference")
    command.add_argument("rom", type=Path)
    command = commands.add_parser("verify", help="Require all profile identity fields to match")
    command.add_argument("rom", type=Path)
    command.add_argument("--profile", required=True, type=Path)
    command = commands.add_parser("build", help="Exact baseline + full preimages; publish new ROM and manifest")
    command.add_argument("rom", type=Path)
    command.add_argument("patch", type=Path)
    command.add_argument("output", type=Path)
    command.add_argument("--profile", required=True, type=Path)
    command.add_argument("--manifest", type=Path, help="Default: OUTPUT.manifest.json")
    command.add_argument("--ips", type=Path, help="Optional classic IPS (no hash enforcement in IPS itself)")
    command.add_argument("--bps", type=Path, help="Optional BPS patch with source, target, and patch CRCs")
    command.add_argument("--allow-static-candidate", action="store_true", help="Explicit experimental build; never promotes approval")
    command = commands.add_parser("inspect", help="Read-only hex, halfwords, and Thumb BL targets")
    command.add_argument("rom", type=Path)
    command.add_argument("--offset", type=integer, required=True)
    command.add_argument("--length", type=integer, default=64)
    command = commands.add_parser("bl", help="ARMv4T Thumb BL encoding helpers")
    bl = command.add_subparsers(dest="operation", required=True)
    command = bl.add_parser("decode")
    command.add_argument("--offset", type=integer, required=True)
    command.add_argument("--hex", required=True)
    command = bl.add_parser("encode")
    command.add_argument("--offset", type=integer, required=True)
    command.add_argument("--target", type=integer, required=True, help="ROM address, halfword aligned, without Thumb bit")
    command = commands.add_parser("port-candidates", help="Read-only source-write context hypotheses; never emits an applicable patch")
    command.add_argument("source", type=Path)
    command.add_argument("target", type=Path)
    command.add_argument("patch", type=Path)
    command.add_argument("--source-profile", type=Path, required=True)
    command.add_argument("--target-profile", type=Path, required=True)
    command.add_argument("--window", type=integer, default=96)
    command.add_argument("--before", type=integer, default=32)
    command.add_argument("--mode", choices=("exact", "thumb-bl"), default="thumb-bl")
    command.add_argument("--limit", type=integer, default=128)
    return root


def main(argv: list[str] | None = None) -> int:
    args = parser().parse_args(argv)
    try:
        if args.command == "identify":
            result = identify(args.rom.read_bytes())
        elif args.command == "verify":
            profile = load_profile(args.profile)
            result = {"status": "verified", "profile_id": profile["id"], "identity": verify(args.rom.read_bytes(), profile)}
        elif args.command == "build":
            result = build(args.rom, args.patch, args.profile, args.output,
                           args.manifest, args.ips, args.allow_static_candidate, args.bps)
        elif args.command == "inspect":
            data = args.rom.read_bytes()
            if not 1 <= args.length <= 4096 or args.offset + args.length > len(data):
                raise ValueError("Inspection length must be 1..4096 and entirely inside ROM")
            chunk = data[args.offset:args.offset + args.length]
            calls = []
            for off in range(args.offset + args.offset % 2, args.offset + args.length - 3, 2):
                try:
                    target = decode_bl(data[off:off + 4], off)
                except ValueError:
                    continue
                calls.append({"offset": f"0x{off:08X}", "target": f"0x{target:08X}"})
            result = {"offset": f"0x{args.offset:08X}", "address": f"0x{ROM_BASE + args.offset:08X}",
                      "length": len(chunk), "hex": chunk.hex(),
                      "halfwords": [chunk[i:i + 2][::-1].hex() for i in range(0, len(chunk) - 1, 2)],
                      "thumb_bl_hypotheses": calls,
                      "note": "Bytes only; BL-shaped data is not confirmed executable code."}
        elif args.command == "bl":
            if args.operation == "decode":
                instruction = hex_bytes(args.hex, "hex")
                result = {"offset": f"0x{args.offset:08X}", "hex": instruction.hex(),
                          "target": f"0x{decode_bl(instruction, args.offset):08X}"}
            else:
                result = {"offset": f"0x{args.offset:08X}", "target": f"0x{args.target:08X}",
                          "hex": encode_bl(args.offset, args.target).hex()}
        else:
            result = port_report(args.source, args.target, args.patch,
                                 args.source_profile, args.target_profile,
                                 window=args.window, before=args.before, mode=args.mode, limit=args.limit)
        print(json.dumps(result, indent=2, ensure_ascii=True))
        return 0
    except (OSError, ValueError, TypeError) as exc:
        print(json.dumps({"status": "error", "error": str(exc)}), file=sys.stderr)
        return 2


if __name__ == "__main__":
    raise SystemExit(main())
