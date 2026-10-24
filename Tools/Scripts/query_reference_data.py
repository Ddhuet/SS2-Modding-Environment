"""Search the AI-friendly JSONL extraction of the historical reference workbook."""

from __future__ import annotations

import argparse
import json
import sys
from pathlib import Path


def data_root() -> Path:
    return Path(__file__).resolve().parents[2] / "Docs/Reference_Data" / "excel_extracted"


def main() -> int:
    if hasattr(sys.stdout, "reconfigure"):
        sys.stdout.reconfigure(encoding="utf-8")
    parser = argparse.ArgumentParser()
    parser.add_argument("--list-sheets", action="store_true")
    parser.add_argument("--query")
    parser.add_argument("--sheet")
    parser.add_argument("--max-results", type=int, default=50)
    args = parser.parse_args()
    if not args.list_sheets and not args.query:
        parser.error("use --list-sheets or --query")
    if not 1 <= args.max_results <= 500:
        parser.error("--max-results must be 1..500")

    root = data_root()
    index = json.loads((root / "workbook_index.json").read_text(encoding="utf-8"))
    sheets = index["sheets"]
    if args.list_sheets:
        for sheet in sheets:
            print(f"{sheet['index']:02d} {sheet['name']} rows={sheet['nonempty_rows']} cells={sheet['nonempty_cells']} file={sheet['file']}")
        if not args.query:
            return 0
    if args.sheet and not any(sheet["name"] == args.sheet for sheet in sheets):
        raise SystemExit(f"sheet not found: {args.sheet}")

    query = args.query.casefold()
    matches = []
    with (root / "all_cells.jsonl").open(encoding="utf-8") as stream:
        for raw in stream:
            cell = json.loads(raw)
            if args.sheet and cell["sheet"] != args.sheet:
                continue
            haystack = str(cell.get("value", "")) + " " + str(cell.get("formula", ""))
            if query in haystack.casefold():
                matches.append(cell)
                if len(matches) >= args.max_results:
                    break

    row_cache: dict[tuple[str, int], dict] = {}
    wanted = {(cell["sheet"], cell["row"]) for cell in matches}
    by_name = {sheet["name"]: sheet for sheet in sheets}
    for sheet_name in {name for name, _ in wanted}:
        with (root / by_name[sheet_name]["file"]).open(encoding="utf-8") as stream:
            for raw in stream:
                row = json.loads(raw)
                key = (sheet_name, row["row"])
                if key in wanted:
                    row_cache[key] = row
    results = [{"match": cell, "row_context": row_cache.get((cell["sheet"], cell["row"]))} for cell in matches]
    truncated = len(matches) >= args.max_results
    print(json.dumps({"query": args.query, "count": len(results), "truncated": truncated, "results": results}, ensure_ascii=False, indent=2))
    return 0 if results else 1


if __name__ == "__main__":
    raise SystemExit(main())
