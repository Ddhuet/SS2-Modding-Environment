"""Read-only comparison of two same-size files with compact changed ranges."""

from __future__ import annotations

import argparse
import json
import sys

from rom_common import ROM_BASE_ADDRESS, normalized_path


def compare(original: bytes, modified: bytes, preview_bytes: int) -> list[dict[str, object]]:
    if len(original) != len(modified):
        raise ValueError("Files have different sizes; comparison refused")
    ranges: list[dict[str, object]] = []
    index = 0
    while index < len(original):
        if original[index] == modified[index]:
            index += 1
            continue
        start = index
        while index < len(original) and original[index] != modified[index]:
            index += 1
        length = index - start
        shown = min(length, preview_bytes)
        ranges.append(
            {
                "address": f"0x{ROM_BASE_ADDRESS + start:08X}",
                "offset": f"0x{start:08X}",
                "length": length,
                "before_hex_preview": original[start : start + shown].hex(),
                "after_hex_preview": modified[start : start + shown].hex(),
                "preview_truncated": shown < length,
            }
        )
    return ranges


def main() -> int:
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("original_rom")
    parser.add_argument("modified_rom")
    parser.add_argument("--report")
    parser.add_argument("--preview-bytes", type=int, default=64)
    args = parser.parse_args()
    try:
        if not 1 <= args.preview_bytes <= 4096:
            raise ValueError("--preview-bytes must be between 1 and 4096")
        original_path = normalized_path(args.original_rom, must_exist=True)
        modified_path = normalized_path(args.modified_rom, must_exist=True)
        original = original_path.read_bytes()
        modified = modified_path.read_bytes()
        ranges = compare(original, modified, args.preview_bytes)
        report = {
            "original": str(original_path),
            "modified": str(modified_path),
            "size": len(original),
            "changed_ranges": len(ranges),
            "ranges": ranges,
        }
        rendered = json.dumps(report, ensure_ascii=False, indent=2)
        print(json.dumps(report, ensure_ascii=True, indent=2))
        if args.report:
            report_path = normalized_path(args.report)
            report_path.parent.mkdir(parents=True, exist_ok=True)
            with report_path.open("x", encoding="utf-8", newline="\n") as stream:
                stream.write(rendered + "\n")
        return 0
    except (OSError, ValueError) as exc:
        print(f"ERROR: {exc}", file=sys.stderr)
        return 2


if __name__ == "__main__":
    raise SystemExit(main())
