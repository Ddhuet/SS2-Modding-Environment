"""Search the curated offline function index without third-party packages."""

from __future__ import annotations

import argparse
import json
from pathlib import Path


def main() -> int:
    parser = argparse.ArgumentParser()
    parser.add_argument("query")
    args = parser.parse_args()
    index = Path(__file__).resolve().parents[2] / "Docs/Analysis" / "FUNCTION_INDEX.json"
    document = json.loads(index.read_text(encoding="utf-8"))
    query = args.query.casefold()
    results = []
    for entry in document["entries"]:
        haystack = " ".join(str(value) for value in entry.values()).casefold()
        if query in haystack:
            results.append(entry)
    print(json.dumps({"query": args.query, "count": len(results), "results": results}, ensure_ascii=False, indent=2))
    return 0 if results else 1


if __name__ == "__main__":
    raise SystemExit(main())
