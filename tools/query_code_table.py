"""Read-only lookup and little-endian decoding for the bundled Chinese code table."""

from __future__ import annotations

import argparse
import re
import sys
from pathlib import Path


def load_table() -> tuple[dict[int, list[str]], dict[str, list[int]]]:
    path = Path(__file__).resolve().parent.parent / "reference_data" / "汉字码表.txt"
    forward: dict[int, list[str]] = {}
    reverse: dict[str, list[int]] = {}
    for line_number, raw in enumerate(path.read_text(encoding="utf-8-sig").splitlines(), 1):
        if not raw.strip():
            continue
        if len(raw) < 6 or not re.fullmatch(r"[0-9A-Fa-f]{4}", raw[:4]) or not raw[4].isspace():
            raise ValueError(f"invalid code-table line {line_number}: {raw!r}")
        code = int(raw[:4], 16)
        glyph = raw[5:]
        forward.setdefault(code, []).append(glyph)
        reverse.setdefault(glyph, []).append(code)
    return forward, reverse


def parse_hex_bytes(value: str) -> bytes:
    cleaned = re.sub(r"[^0-9A-Fa-f]", "", value)
    if len(cleaned) % 2:
        raise argparse.ArgumentTypeError("hex byte string must contain an even number of digits")
    return bytes.fromhex(cleaned)


def main() -> int:
    if hasattr(sys.stdout, "reconfigure"):
        sys.stdout.reconfigure(encoding="utf-8")
    parser = argparse.ArgumentParser()
    group = parser.add_mutually_exclusive_group(required=True)
    group.add_argument("--code", type=lambda value: int(value, 0))
    group.add_argument("--char")
    group.add_argument("--decode", type=parse_hex_bytes)
    args = parser.parse_args()
    forward, reverse = load_table()
    if args.code is not None:
        glyphs = forward.get(args.code, [])
        for glyph in glyphs:
            print(f"0x{args.code:04X} {glyph}")
        if len(glyphs) > 1:
            print("WARNING: duplicate code maps to multiple values; do not guess which entry is intended.")
        return 0 if glyphs else 1
    if args.char is not None:
        codes = reverse.get(args.char, [])
        for code in codes:
            print(f"{args.char} -> 0x{code:04X}")
        if len(codes) > 1:
            print("WARNING: duplicate glyph; reverse encoding is not unique.")
        return 0 if codes else 1
    data = args.decode
    if len(data) % 2:
        raise SystemExit("decode input length must be a multiple of two bytes")
    output = []
    for offset in range(0, len(data), 2):
        code = int.from_bytes(data[offset:offset + 2], "little")
        glyphs = forward.get(code, [])
        glyph = "|".join(glyphs) if glyphs else f"[0x{code:04X}?]"
        print(f"+0x{offset:04X} bytes={data[offset:offset+2].hex(' ')} code=0x{code:04X} value={glyph}")
        if code == 0:
            break
        output.append(glyph)
    print("decoded:", "".join(output))
    return 0


if __name__ == "__main__":
    raise SystemExit(main())
