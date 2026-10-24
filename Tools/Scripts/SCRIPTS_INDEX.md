# Tools/Scripts index

One line per script. Run everything **from the repo root**: several scripts resolve their default
ROM paths against the working directory. The mod pipeline needs only `ROMs/Shining_Soul_II_JP.gba`:
`base_roms.py` builds the CN baseline and the English ROM from it. Translation and porting scripts
also read `ROMs/Shining_Soul_II_CN_Baseline.gba` and `ROMs/Shining_Soul_II_USA.gba`.

**Needs:** `stdlib` = plain `python3`. `capstone` or `emulator` = run with `Tools/.venv/bin/python`
(the emulator also needs `Tools/emulator/build/`, made by `build_emulator.py`). `llvm` = `llvm-mc`
and `llvm-objcopy` on PATH.

**Status:** `core` = the current mod pipeline (AGENTS.md steps). `analysis` = research and porting
helpers. `translation` = served the finished English translation; kept so it can be regenerated.
`legacy` = from the original Chinese repo's Windows tooling; pinned to the CN baseline, rarely used.

Per-mod builders and tests live with their mod in `Patches/<id>/`, not here.

## Mod pipeline

| Script | What it does | Needs | Status |
|---|---|---|---|
| `base_roms.py` | `jp_rom()`, `cn_baseline()`, `english_rom()` (both built from JP with the base patches, cached in `Build/`, hash-checked) and `translation_spans()`. Run directly to check all three. | stdlib | core |
| `make_bps.py` | Delivery step. Applies `english_translation.bps` to the JP ROM in memory, applies named definitions (from `Patches/Definitions/Custom` by default), writes `Patch_Manager/patches/<id>.bps` (round-trip checked) and optional test ROMs (`--rom-out`, `--english-out`). | stdlib | core |
| `make_base_bps.py` | Builds a base patch: JP→English (default) or JP→CN baseline (`--target cn`, writes `Patch_Manager/patches/cn_baseline.bps`). Its BPS encoder is imported by `make_bps.py` and `make_cn_set.py`. | stdlib | core |
| `make_cn_set.py` | Makes the Chinese versions of shipped patches: decodes each against the English ROM, checks it stays out of translation bytes and translation-only code, writes `cn/<name>.bps` (CN baseline → CN+mod) and `cn/compat.json`. `--patches DIR` for the web patcher's folder. | stdlib | core |
| `mod_conflicts.py` | Static check of mod definitions against the translation's spans (`Tools/profiles/translation_spans.json`): byte overlaps, shared functions, region classes, plus mod-vs-mod clashes across all `--defs` folders. | stdlib | core |
| `combine_patch.py` | Merges translation + named definitions into one ss2tools patch; refuses any byte overlap; applies English names from `Patches/Definitions/ledger.json`. Needs `Build/ss2-en-phase1.patch.json` (see `make_english_patch.py`). Optional. | stdlib | analysis |
| `name_tables.py` | Registry of typed record tables (`TABLES`, `SLOT`, `DATA`); imported widely. Run directly it checks CN/US record pairing. | stdlib | core |
| `mod_text_scan.py` | Lists the Chinese name slots and CN glyph runs a definition writes, i.e. text a mod needs translated. | stdlib | core |
| `make_ips_set.py` | Old IPS-era filler for `Patch_Manager/` (one `.ips` per official CN single + `base_rom.sha256`). Superseded by `make_bps.py` for new mods. | stdlib | translation |

## Emulator and play

| Script | What it does | Needs | Status |
|---|---|---|---|
| `build_emulator.py` | Clones pinned mGBA 0.10.5 into `Tools/emulator/vendor/` and builds `Tools/emulator/build/libss2_mgba.so`. | cmake, compiler | core |
| `test_emulator.py` | Harness self-check (`--rom ROM --save SAV`). Set `TMPDIR` to a folder on the same disk as the ROM: the test hard-links inputs. | emulator | core |
| `emulate.py` | Generic reproducible `Session` command runner. | emulator | core |
| `smoke_state.py` | Replays visible input from a desktop mGBA state (`ROM STATE.ss0 TAG "frames:KEYS ..."`), screenshots into `Build/runs/`. `open_state()` is reused by many tests. | emulator | core |
| `smoke_phase1.py` | Cold boot from `Savestates/Fixture_CN_English.sav`: inn, ring menu, save dialogue, item menu. | emulator | core |
| `trace_renderer.py` | Lists renderer (`0x08019F30`) calls after replaying input from a state. | emulator | analysis |
| `smoke_identifier.py` | Replays the identifier-window scenario from `Savestates/Pre_Identifier_Woman.ss0` (that state is no longer on disk). | emulator | translation |
| `build_player.py` / `play.py` | Build and launch an SDL mGBA player for manual play with run logging (`play.py --rom ROM`). | compiler / emulator | analysis |

## Disassembly and analysis

| Script | What it does | Needs | Status |
|---|---|---|---|
| `disasm_addr.py` | Side-by-side Thumb disassembly of CPU ranges from one or two ROMs (`ROM START END [ROM2 S2 E2]`). | capstone | analysis |
| `thumbdis.py` | Thumb disassembly by CPU address; annotates literal pools. | capstone | analysis |
| `disassemble.py` | Capstone ARM/Thumb disassembly by file offset, with input hash. | capstone | analysis |
| `xref.py` | Finds literal-pool words equal to a value and the `ldr` instructions that load them. | capstone | analysis |
| `align.py` | Whole-ROM anchor alignment of two ROMs (CN↔US porting base); `--json` output. | stdlib | analysis |
| `classify_gaps.py` | Labels `align.py` gaps as relocation-only vs real change (TSV). | stdlib | analysis |
| `func_diff.py` | Function-level comparison of two ROMs through an alignment. | capstone | analysis |
| `func_pair_diff.py` | Unified diff of one function pair's disassembly. | capstone | analysis |
| `frame_scan.py` | Finds callers of given addresses and compares their stack frames CN vs US. | stdlib | analysis |
| `resource_diff.py` | Compares SSDT resource archives CN vs US by content hash. | stdlib | analysis |
| `query_code_table.py` | Chinese glyph table lookup (`--code`, `--char`, `--decode`); data in `Docs/Reference_Data/`. | stdlib | analysis |
| `query_reference_data.py` | Searches the extracted reference workbook (names, stats, recipes). | stdlib | analysis |
| `search_analysis_index.py` | Substring search over `Docs/Analysis/FUNCTION_INDEX.json`. | stdlib | analysis |

## Translation (finished; regenerates `Build/ss2-en-phase1.patch.json`)

| Script | What it does | Needs | Status |
|---|---|---|---|
| `make_english_patch.py` | Emits the whole English write list (text, font, renderer hook, frames, centring, name bar) from the CN baseline + US ROM, and refreshes the tracked `Tools/profiles/translation_spans.json`. Its `assemble()` is reused by mod builders. | capstone, llvm | translation |
| `centering.py` | Decides which centring calls get the width-aware helper `0x08019FD8`. | capstone | translation |
| `dialogue_frame.py` | Ports the US dialogue-window buffer enlargement to CN `0x0805E8E4`. | capstone | translation |
| `frame_port.py` / `frame_grow.py` | Port/grow stack frames of CN text functions (identifier, item detail views). | capstone | translation |
| `text_survey.py` | Reproduces `Docs/Translation/TEXT_ARCHITECTURE.md` facts from the retail ROMs. | stdlib | translation |
| `asm/` | Translation's injected Thumb sources (`render_glyphs.s`, `center_width.s`, `name_suffix.s`). | llvm | translation |

## Legacy CN-era tools (all pin the CN baseline hash)

| Script | What it does |
|---|---|
| `rom_common.py` | Shared identity helpers for the scripts below. |
| `verify_rom.py` | Prints size/MD5/SHA-256/CRC32; fails unless the ROM is the CN baseline. |
| `apply_simple_patch.py` | Applies a simple byte-write definition to a copy of the baseline. |
| `compare_rom.py` | Lists changed byte ranges between two files. |
| `disassemble_rom.py` | Capstone disassembly of the verified baseline. |
| `find_thumb_bl_references.py` | Finds Thumb BLs targeting an address. |
| `scan_thumb_cmp.py` | Finds `cmp rN,#imm8` candidates. |
| `new_patch_definition.py` | Creates an empty definition JSON. |
| `test_share_package.py` | Self-test of the above (expects the old `patches/examples/` layout; broken). |

## Elsewhere in Tools/

- `Tools/ss2tools/`: `python -m ss2tools` (run as `cd Tools && .venv/bin/python -m ss2tools ...`): `identify`, `verify --profile`, `inspect`, `bl`, `build`, `port-candidates`; `bps.py` is the BPS codec.
- `Tools/emulator/`: headless mGBA `Session` (see its README). Import with `sys.path.insert(0, ROOT/"Tools")`.
- `Tools/tests/`: unit tests for ss2tools and the emulator (`cd Tools && .venv/bin/python -m unittest discover -s tests`).
- `Tools/profiles/`: ROM profiles (`ss2-cn-baseline.json`, `ss2-cn-source.json`, `ss2-us.json`) and
  `translation_spans.json` (the address ranges the translation owns, no bytes).
- `Tools/perf/`: `ss2prof` cycle profiler + `perfreport.py` (see its README and `GAME_PERFORMANCE.md`).
- `Tools/mGBA-0.10.5-win64/`: desktop mGBA (untracked).
