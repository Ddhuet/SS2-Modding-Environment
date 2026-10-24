"""Calculate ROM identity and reject anything except the unique baseline."""

from __future__ import annotations

import argparse
import json
import sys

from rom_common import file_identity, identity_matches_baseline, normalized_path


def main() -> int:
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("rom", help="ROM path")
    parser.add_argument(
        "--report-only",
        action="store_true",
        help="report a modified/nonmatching file without returning an error",
    )
    args = parser.parse_args()

    try:
        path = normalized_path(args.rom, must_exist=True)
        if not path.is_file():
            raise ValueError(f"Not a file: {path}")
        identity = file_identity(path)
        matched = identity_matches_baseline(identity)
        identity["result"] = "MATCH" if matched else "MISMATCH"
        print(json.dumps(identity, ensure_ascii=True, indent=2))
        if not matched and not args.report_only:
            print("ERROR: ROM identity mismatch. Refusing to continue.", file=sys.stderr)
            return 2
        return 0
    except (OSError, ValueError) as exc:
        print(f"ERROR: {exc}", file=sys.stderr)
        return 2


if __name__ == "__main__":
    raise SystemExit(main())
