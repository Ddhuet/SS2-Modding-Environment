# Shining Soul II GBA_HACK Windows Knowledge Sharing Package



This is a handoff package for friends and resource-constrained AIs: providing current ROM identity, feature directory, historical decompilation corpus, reference materials, Python patching tools, and a maintainer acceptance checklist. "Working directory" always refers to the "current project workspace", without requiring fixed drive letters, WSL, Ghidra, Git, or compilers.

## Current Sole Input Baseline



| Item | Value |
| --- | --- |
| Source Identity / Suggested Filename | `SS2_SC_bug_fixed.GBA` |
| Size | `33554432` bytes |
| MD5 | `35eb6567d94f855480c5d7ba2dff4389` |
| SHA-256 | `45ac38bb1bfba779592b5c79ce94982cf7c00fda5b3c5b84735e55c77d6fc989` |
| zlib CRC32 | `AFCFC96D` |

It already has five built-in low-level fixes: ore/money bag limits, infinite warehouse withdrawals, throw race conditions, ground item updates after beating Chaos, and Chinese localization dialogue padding cleanup. These five fixes form part of the baseline identity and must not be reapplied as ordinary patches. Extended code currently occupies `0x09000000–0x09000060`, while `0x09000060–0x09000100` is reserved as a buffer area.

If any hash or size mismatch occurs, tools must refuse to write, and must not modify constants, skip pre-images, or attempt "compatible application". The old clean baseline SHA-256 `12c0c32b…927ea380` has been retired.

## Quickest Entry Point



1. Read [QUICK_START.md].


2. Place your active baseline copy into `workspace/input/`, and run `python tools/verify_rom.py "workspace/input/SS2_SC_bug_fixed.GBA"` first.


3. Use `patches/definitions/all_17_released.json` for official combinations; use `all_18_beta.json` for unstable combinations including shared warehouses.


4. Outputs can only be written to new files in `workspace/output/`, never overwriting inputs or existing outputs.


5. You can first use [Windows Headless mGBA] for isolated infrastructure self-checks and explicit observation point scripting, followed by maintainer functional acceptance per [MGBA_TEST_GUIDE.md]. Script startup, screenshots, or absence of crashes cannot replace maintainer judgment.


6. When handing tasks to AI, use the single-task prompts in [AI_PROMPTS.md].



## Current Feature Status (2026-08-30)



* `released`: 17 items.


* `beta`: 1 item, `shared_character_warehouses`.


* `candidate`: 1 item, `archer_piercing_attack`.


* `research`: 2 items, `dynamic_monster_scaling`, `weapon_skill_hit_rate`.



See [docs/PATCH_CATALOG.md] for a detailed catalog. Passing static builds, booting up, or remaining crash-free does not constitute completed functional acceptance; dynamic combination testing for both the current 17-item Release and 18-item Beta sets has not yet been performed.

## Analysis Data Boundaries



[analysis/historical_decompilation/] contains thousands of Ghidra pseudocode files from the legacy baseline, which can be used to search for candidates by address, constants, call relationships, and data logic. It is not a re-decompilation of the current SS2_SC baseline: any conclusion regarding addresses, original bytes, ARM/Thumb state, or injection regions must be re-verified against the current baseline.

Do not rely solely on keyword searches. Once a candidate is found, thoroughly read the surrounding function logic, callers and callees, field sources, branch outcomes, return value consumers, and failure paths. For Chinese character encoding tables and extracted historical Excel data, see [docs/CHINESE_CODE_TABLE_AND_EXCEL.md].

## Key Requirements for Modifying the ROM



* Verify all four identity markers first: size, MD5, SHA-256, and CRC32;


* Inputs are read-only; output must be a non-existent new file;


* Every write must specify address, offset, `before_hex`, and `after_hex`;


* Convert addresses via `offset = address - 0x08000000`, multi-byte values in little-endian;


* Re-assert pre-images prior to writing; abort immediately on mismatch;


* BL instructions, branches, function entry points, and injected code require extra auditing for Thumb/ARM mode, alignment, ABI compliance, return paths, and region ownership;


* When rolling back, regenerate directly from the active baseline instead of applying speculative reverse modifications onto the output ROM.



Recommended reading order: `README` → `QUICK_START` → `PROJECT_KNOWLEDGE` → `EVIDENCE_BOUNDARY` → `PATCH_CATALOG` → `analysis/README` → corresponding topic docs & test guides.