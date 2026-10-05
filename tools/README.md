# Python Tools



The base patching tools use only the Python standard library. Optional static analysis tools require Capstone; see `requirements-optional.txt` in the root directory for installation instructions.

* `verify_rom.py`: Calculates size, MD5, SHA-256, and zlib CRC32; accepts only a unique baseline by default.


* `apply_simple_patch.py`: Validates baseline, JSON, address conversion, overlaps, and original bytes before creating an independent new output file.


* `compare_rom.py`: Performs a read-only comparison between two files of the same size, outputting contiguous difference ranges and optional JSON.


* `new_patch_definition.py`: Creates an empty patch definition without overwriting existing files.


* `test_share_package.py`: Checks fail-safes, CRC32, comparisons, and paths containing Chinese characters or spaces using a 9-byte test sample in the system temporary directory; automatically cleans up after testing.


* `rom_common.py`: Common baseline identification and hash functions; not meant to be run standalone.


* `search_analysis_index.py`: Queries organized function indexes by Chinese/English keywords; uses standard library only.


* `disassemble_rom.py`: Disassembles a specific small range on an exact hash-matched baseline; requires Capstone.


* `scan_thumb_cmp.py`: Scans for Thumb-1 `cmp rN,#imm8` candidates; generates hypotheses only without proving semantics.


* `find_thumb_bl_references.py`: Finds classic Thumb-1 BL call sites targeting a known address.


* `query_code_table.py`: Queries Chinese character tables by code value/character, or decodes u16 little-endian byte sequences into text.


* `query_reference_data.py`: Read-only query for UTF-8 JSONL extracted from historical Excel files, returning matching cells and full-row context.


* `windows_mgba/`: Windows native headless mGBA, authenticated Lua control client, isolated instance management, GDB stub probe, and one-click integration testing; see its `README.md`.



Optional Installation (Capstone already includes ARM/Thumb support):

```cmd
python -m pip install --user -r requirements-optional.txt
python -c "from capstone import Cs, CS_ARCH_ARM, CS_MODE_THUMB; print('CAPSTONE_ARM_THUMB_OK')"

```

Installing armips, keystone, angr, Ghidra, or Java is neither required nor recommended for initialization tasks.

Read-only examples:

```cmd
python tools\search_analysis_index.py 魂之回归
python tools\scan_thumb_cmp.py "workspace\input\SS2_SC_bug_fixed.GBA" --value 198 --start 0x0801C800 --end 0x0801C900
python tools\disassemble_rom.py "workspace\input\SS2_SC_bug_fixed.GBA" --address 0x0801F1C0 --length 32 --mode thumb
python tools\find_thumb_bl_references.py "workspace\input\SS2_SC_bug_fixed.GBA" --target 0x08019824
python tools\query_code_table.py --char 魂
python tools\query_code_table.py --decode "60 01 61 01 00 00"
python tools\query_reference_data.py --sheet 剑 --query 000

```

Self-test:

```cmd
python tools\test_share_package.py

```

## Key Requirements for Modifying ROMs



1. Inputs must simultaneously match 33,554,432 bytes, MD5, SHA-256, and CRC32; execution stops if any check fails, and "compatible application" is strictly prohibited.


2. Original ROMs are never modified in place. Identical input and output paths will be rejected, and existing output files will not be overwritten.


3. Every write entry must declare the ROM address, file offset, original bytes, and modified bytes; address and offset must satisfy `offset = address - 0x08000000`.


4. Prior to writing, re-read the input and assert the original bytes; execution halts immediately if they do not match, rather than relying on guesswork.


5. Write ranges must not overlap; no-op writes, empty patches, and out-of-bounds writes will be rejected.


6. Simple tools do not guarantee ARM/Thumb state, BL targets, register conventions, or injection region safety. When code jumps are involved, an independent disassembly review must be completed first.


7. "Successfully generated," "boots up," and "no crashes" do not constitute functional verification. Normal, edge-case, regression, and save-and-reboot testing must be completed using mGBA.


8. Rollbacks should be regenerated from the unique baseline; do not apply unverified reverse patches to a finished ROM.



See [../QUICK_START.md] for examples.

Directly applicable released definitions and official combinations can be found in [../patches/definitions/README.md].