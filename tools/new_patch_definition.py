"""Create a new empty patch definition without overwriting an existing file."""

from __future__ import annotations

import argparse
import json
import re
import sys

from rom_common import EXPECTED_FILENAME, EXPECTED_MD5, EXPECTED_SHA256, EXPECTED_SIZE, normalized_path


def main() -> int:
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("path")
    parser.add_argument("--id", required=True)
    parser.add_argument("--name", required=True)
    args = parser.parse_args()
    try:
        if not re.fullmatch(r"[a-z0-9_-]+", args.id):
            raise ValueError("--id may contain only lowercase letters, digits, underscore and hyphen")
        path = normalized_path(args.path)
        path.parent.mkdir(parents=True, exist_ok=True)
        definition = {
            "schema_version": 1,
            "id": args.id,
            "name": args.name,
            "stage": "research",
            "baseline": {
                "filename": EXPECTED_FILENAME,
                "size": EXPECTED_SIZE,
                "md5": EXPECTED_MD5,
                "sha256": EXPECTED_SHA256,
            },
            "writes": [],
        }
        with path.open("x", encoding="utf-8", newline="\n") as stream:
            json.dump(definition, stream, ensure_ascii=False, indent=2)
            stream.write("\n")
        print(f"Created: {path}")
        print("The empty definition cannot be applied until reliable writes are added.")
        return 0
    except (OSError, ValueError) as exc:
        print(f"ERROR: {exc}", file=sys.stderr)
        return 2


if __name__ == "__main__":
    raise SystemExit(main())
