## Chinese Code Table and Query Excel Usage Guide

### 1. Chinese Character Code Table

File: `Docs/Reference_Data/汉字码表.txt`

Format:

```text
Code Value    Glyph or Control Character
0000          [end]
0002          李
0160          恢
0161          复
0402          [fire]

```

Names and texts in the game are often composed of little-endian u16 code sequences. For example, given the ROM bytes:

```text
60 01 61 01 00 00

```

Interpreted as little-endian u16: `0x0160 0x0161 0x0000`. Looking up the table yields "恢复" (Recover) followed by termination.

Critical Boundaries:

* `0x0000=[end]` is a termination control code, not a standard character.
* The code table only performs "Code Value → Glyph/Control Code" mapping; it provides no ROM addresses, string pointers, or record boundaries.
* The same Chinese character may appear at multiple code locations; reverse encoding must not assume uniqueness by default and must be selected based on the original string, table context, and current ROM pre-image.
* The source file actually contains 1,792 non-empty lines and 1,791 unique code values: `0x0251` is registered for both "扫" and "锻", while `0x0521` is unregistered. This is likely a historical data entry typo, but the sharing package will not modify it arbitrarily; queries will return both values and warn of ambiguity.
* Bracketed entries like `[fire]`, `[ice]`, `[atk]` represent control character / icon semantics and should not be written directly as regular Unicode text.
* New text must be checked to confirm if the required glyphs exist, if the string length exceeds original record boundaries, if UI width is sufficient, and if pointers/terminators are correct.

Read-only Queries:

```text
python Tools/Scripts/query_code_table.py --code 0x0160
python Tools/Scripts/query_code_table.py --char 魂
python Tools/Scripts/query_code_table.py --decode "60 01 61 01 00 00"

```

### 2. Extracted Excel AI Query Data

Directory: `Docs/Reference_Data/excel_extracted/README.md`

The package does not deliver the raw Excel file. The original workbook was extracted into read-only UTF-8 JSON/JSONL, preserving worksheets, line numbers, cell coordinates, display values, formulas, and merged cell metadata. Image binaries are not included in the extraction output.

The workbook contains 28 worksheets, primarily including:

* Query Pages: All Item Search, Monster Search, Ore Crafting, Equipment Set Search;
* Monsters: NOR Monsters, ADV Monsters;
* Equipment: Sword, Axe, Spear, Bow, Chain, Staff, Katana, Claw, Book, Ring, Head, Body, Hand;
* Others: Items, Soul Ores, Sets, Temple Fusion, Backend Data, and four Crafting Outcome Ranges.

Images in the original workbook used the `DISPIMG(...)` formula. Extracted results retain formulas and image IDs without image payload data; do not guess items, classes, or effects based on image IDs.

Searchable without opening Excel software:

```text
python Tools/Scripts/query_reference_data.py --list-sheets
python Tools/Scripts/query_reference_data.py --query 短剑
python Tools/Scripts/query_reference_data.py --sheet 剑 --query 000
python Tools/Scripts/query_reference_data.py --sheet NOR怪物 --query 史莱姆 --max-results 20

```

Query results should report the sheet name, cell coordinates, display value, or formula. When a keyword matches, inspect the headers and adjacent fields on the same row rather than returning a single cell.

### 3. Excel Evidence Classification

This workbook originates from manually compiled historical reference materials and is classified as a secondary source:

* Useful for querying names, codes, candidate stats, candidate recipes, and candidate table structures.
* Cannot independently prove current baseline ROM addresses, record row widths, field offsets, or modified bytes.
* When a code conflicts with the current ROM, record both the "Excel Original Value" and "Current ROM Actual Read Value" side-by-side; silent overwriting is strictly prohibited.
* Images, displayed text, and manual effect descriptions cannot be automatically upgraded to decompilation conclusions.
* Equipment effects, monster stats, set bonuses, and temple recipes require byte verification on the current ROM read chain.

Established static cross-anchors include: candidate weapon record base address `0x083EA38C`, row width `0x19C`, candidate base ATK field `+0x176(u16)`; a small set of records (dagger, iron sword, throwing axe, wooden bow, short flail, wooden staff) have historical cross-checks. As the current baseline underwent subsequent migration, re-reading live bytes remains mandatory.

### 4. Mandatory Requirements for AI Queries

1. Is the query target the Code Table, Excel, or the Current ROM?
2. What are the Excel sheet name, row, column, and header?
3. Is the `code` represented as text hexadecimal, decimal, or a u16 in game records?
4. Is the result from original reference materials, historical cross-checks, or live current baseline reads?
5. Are there ambiguities caused by identical names, duplicate code positions, image formulas, or merged cells?
6. What is the next step to verify on the ROM table, function, or read chain?

Do not search by name alone. Understand row-column logic, header definitions, the combined relationship between `code` and item `type`, and which function or data table consumes the Excel values in-game.

---