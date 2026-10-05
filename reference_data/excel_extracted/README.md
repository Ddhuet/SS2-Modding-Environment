# AI-Friendly Extraction of the Original Reference Workbook

This directory was generated via read-only extraction from a historical original reference workbook. **The distribution package does not include the original `.xlsx` file.**

## File Structure

* `workbook_index.json`: Source SHA-256, 28 worksheets, original ranges, merged cells, counts of non-empty rows/cells/formulas, and corresponding JSONL files.
* `all_cells.jsonl`: One non-empty cell per line. Fields include `sheet`, `row`, `cell`, `column`, `value`, and additionally `formula` when a formula exists.
* `sheets/*.jsonl`: Split by worksheet. Each line represents a row from the original workbook, with `values` stored by column letter, and additionally `formulas` when formulas exist.

Extraction Statistics: 28 worksheets, 4,599 non-empty rows, 41,419 non-empty cells, and 8,084 formula cells. The SHA-256 hash of the original workbook is `ff939a8fe7f2cf89b3813ca7e71d52ace208fd60c2bb23032531b4659e46f47a`.

Image files themselves were not extracted. The `DISPIMG(...)` formulas and image IDs from the original workbook are preserved as formula text and must not be interpreted as visual image content.

To query the data, use:

```text
python tools/query_reference_data.py --list-sheets
python tools/query_reference_data.py --query 短剑
python tools/query_reference_data.py --sheet 剑 --query 000

```

This data remains secondary historical reference material from the original source. Upon finding a query match, you must inspect the entire row, table headers, and adjacent fields, and then trace the current ROM consumers; do not generate patches directly from matches alone.