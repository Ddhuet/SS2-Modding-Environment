# Chinese Character Code Table and Reference Query Data

## Included Files

* `汉字码表.txt`: 1,792 non-empty lines and 1,791 unique code values ranging from `0x0000–0x06FF`. Used to map u16 code values in game text to Chinese characters, full-width characters, or control codes. A duplicate code position exists in the source table; see the guide for details.
* `excel_extracted/`: UTF-8 JSON/JSONL data extracted from the original reference workbook, containing 4,599 rows, 41,419 non-empty cells, and formula text across 28 worksheets. The original Excel file is not delivered.

For detailed boundaries and query methods, see [../Docs/CHINESE_CODE_TABLE_AND_EXCEL.md].

These materials are for read-only reference. The code table can interpret code values but does not provide string addresses; the extracted data consists primarily of original manual documentation and cannot replace current benchmark ROM bytes, disassembly, or approval by the team lead.