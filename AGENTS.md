# SS2 Modding Environment: CN mods on the English ROM

**Mission:** make gameplay mods for Shining Soul II (GBA). Either write **new CN-format mods**, or
**port US-ROM mods/fixes to the CN baseline**. The target players run the **English translation of
the CN mod baseline**, and Chinese players can run the same mods on the CN baseline itself (see
"Chinese players"). The translation is finished and is not your job; you only need to stay out of
its bytes (see "Living with the translation").

**Where everything is: `REPO_INDEX.md`** (folder map, ROM table, where new files go). Knowledge
base: `Docs/INDEX.md`. Scripts: `Tools/Scripts/SCRIPTS_INDEX.md`. Previous project phases are
finished: the translation's handoff is `Docs/Old_Docs/AGENTS_Translation.md`, the EU port is in
`Archive/EU_Port/`. Don't continue those unless asked.

## Local instructions: read `LOCAL.md` first

If `LOCAL.md` exists in the repo root, read it before doing anything else. It is git-ignored and
holds instructions for this particular checkout: private material on this machine, repos you must
never push to, the owner's working preferences. Where it disagrees with this file, `LOCAL.md` wins.
Never commit it, and never copy its contents into tracked files. If it doesn't exist, there are no
local rules.

## The ROMs (`ROMs/`, never tracked)

| File | What it is |
|---|---|
| `ROMs/Shining_Soul_II_JP.gba` | **The starting file.** Japanese retail ROM, 16 MiB, SHA-256 `9f3e0d0653de6504c1aeaf03de3cca06ae0c15a24089f0236398ec56d382d17a`, CRC32 `7B39A7B2`. Players start from it, so every tool and test starts from it too. Same file as `Patch_Manager/Input_ROM/Shining_Soul_II_JP.gba` (never modify that folder). |
| `Patch_Manager/patches/english_translation.bps` | Japanese ROM → English ROM (SHA-256 of the patch `b0bf4f35…`). The same file is in `../SS2_Web_Patcher/patches/`. |
| English ROM `ss2-en-phase1d.gba` (SHA-256 `4343a9c7…53cb`, 32 MiB) | **Temporary.** Made from the Japanese ROM with `english_translation.bps`. It is not just the text: it carries the CN community's code baseline (`SS2_SC_bug_fixed`) plus the translation, so **every** mod's code and addresses live in it, and every mod `.bps` is an English → English+mod diff. `make_bps.py` makes it in memory; `--english-out PATH` saves a copy (scratchpad or the git-ignored `Build/`) for the emulator or disassembly. Treat any copy as disposable. |
| CN baseline (optional file `ROMs/Shining_Soul_II_CN_Baseline.gba`) | The CN community's ROM (`SS2_SC_bug_fixed`: Chinese text + their fixes), 32 MiB, SHA-256 `45ac38bb…c989`, profile `Tools/profiles/ss2-cn-baseline.json`. Same code and data addresses as the English ROM; the two differ **only** inside the translation's spans (verified byte for byte). Definitions' `before_hex` comes from it. You don't need the file: `Patch_Manager/patches/cn_baseline.bps` makes it from the JP ROM. |
| `ROMs/Shining_Soul_II_USA.gba` (optional) | US AU2E rev0, SHA-256 `b31c19d2…`, profile `Tools/profiles/ss2-us.json`. Only for US→CN ports and regenerating the translation. Its code and RAM layout differ from CN (see "Porting US → CN"). |
| `ROMs/Shining_Soul_II_CN.gba` | 16 MiB Chinese localization (not pristine Japanese). Rarely needed. `ROMs/Shining_Soul_II_EU.gba`: archived EU port only. |

When writing or porting a mod, ALWAYS start from `ROMs/Shining_Soul_II_JP.gba`; it is the only ROM
mod work needs. `Tools/Scripts/base_roms.py` gives scripts `jp_rom()`, `cn_baseline()` and
`english_rom()` (the last two built from JP with the two base patches, cached in `Build/`, hash-checked).
Work against the English ROM.
**The deliverable is always a `.bps` in `Patch_Manager/patches/`**, not a patched `.gba` or source
alone (see step 5 below).

Address rule: file offset = ROM address − `0x08000000`.
Save fixture (immutable; work on copies): `Savestates/Fixture_CN_English.sav` (CN/English save).
The user's desktop mGBA states (`Savestates/*.ss0`, and per-mod ones under `Patches/<id>/`) can be
replayed headlessly (see Testing).

## How a mod is made and shipped

1. **Definition.** A CN mod is a JSON write list bound to the CN baseline: `address`, `offset`,
   `before_hex` (full preimage), `after_hex`. Schema: `Patches/README.md`; skeleton:
   `Patches/Definitions/patch-template.json`. Real examples: `Patches/Definitions/Official/*.json`
   (official CN mods; `all_17_released`/`all_18_beta` are bundles of the 18 singles) and
   `Patches/Definitions/Custom/*.json` (ours). Put **new** mods in
   `Patches/Definitions/Custom/<id>.json` with `stage` set honestly and a `note` per write. Do the
   work (sources, `build.py`, probes, scratch ROMs, runs) in a working folder `Patches/<id>/`.
2. **Static checks.**
   - `python3 Tools/Scripts/mod_conflicts.py --defs Patches/Definitions/Custom Patches/Definitions/Official`:
     byte overlap with the translation's writes and allocations (from the tracked
     `Tools/profiles/translation_spans.json`), mods writing into functions the translation changed,
     region classes, and mod-vs-mod byte clashes across all the definitions given. Any byte overlap
     must be resolved (the known `counter_fix` × `counter_fix_slash` clash is by design).
   - Optional: `python3 Tools/Scripts/combine_patch.py <id> … --defs <dir>` merges translation + mods
     into one ss2tools patch. It needs the full translation write list `Build/ss2-en-phase1.patch.json`,
     which only `make_english_patch.py` can make (CN baseline + US ROM).
3. **Build the patch and a test ROM** from the Japanese ROM:
   `python3 Tools/Scripts/make_bps.py <id> [<id> ...] --rom-out <scratch dir> [--english-out <scratch>/en.gba]`
   It checks the Japanese ROM's hash, applies `english_translation.bps` in memory, checks the
   English hash, applies the definition (every preimage asserted, ledger names included), writes
   `Patch_Manager/patches/<id>.bps` (English → English+mod, round-trip checked; a stale
   `<id>.ips`/`.ips32` there is removed) and, with `--rom-out`, `<dir>/ss2-en+<id>.gba` to test.
   Then make its Chinese version: `python3 Tools/Scripts/make_cn_set.py <id>` writes
   `Patch_Manager/patches/cn/<id>.bps` if the mod can work on the CN baseline, and records the
   verdict in `cn/compat.json` (see "Chinese players").
4. **Test** in the emulator (below), English vs English+mod. To test it **stacked with other
   patches** (e.g. `respec` to learn a skill the savestate lacks), build the combination the same
   way the user will: `Patch_Manager/patch_manager.py`'s `build(rom_path, [patch paths])` with the
   Japanese ROM and `english_translation.bps` + the patches (headless, no GUI needed). Output goes
   to `Patch_Manager/Output_ROM/` unless you point `pm.OUTPUT_DIR` at a scratch folder.
5. **Deliver the `.bps` in `Patch_Manager/patches/`** (plus `cn/<id>.bps`) and tell the user its path.
   That is the hand-off: the user tests it in Patch_Manager (Japanese ROM in `Input_ROM/`, tick the
   translation + patches, Apply; or tick the Chinese base instead) and then copies it to the web
   patcher themselves. **Don't write to `../SS2_Web_Patcher/`** unless the user asks. For
   reference, when they do: the page's Chinese versions are made from *its* copies of the patches
   (`python3 Tools/Scripts/make_cn_set.py --patches ../SS2_Web_Patcher/patches`), a patch shows on
   the page only once it is listed in `patches/index.json` (`python3 tools/make_index.py` there,
   after make_cn_set; plus `patches/<id>.txt` with a `Title:` line), and the page must be served over HTTP
   (`python3 -m http.server` in that folder), since `fetch` doesn't work from `file://`.
   Patch_Manager and the web page use the same rules (translation first; a mod `.bps` is decoded
   against the English ROM into changed bytes, so it stacks with `.ips` and is conflict-checked)
   and give byte-identical ROMs. To check, `require()` `../SS2_Web_Patcher/patcher.js` in Node
   (`parseBps`, `parsePatch`, `buildRom`) and compare SHA-256s with Patch_Manager's result.
   Run `python3 Patch_Manager/selftest.py` after changing `patch_manager.py`. The Windows `.exe`
   in `Patch_Manager/Windows/` needs `build_exe.sh` to pick up changes.
   `ss2tools build` from the CN baseline (`cd Tools && .venv/bin/python -m ss2tools build …`) still
   works for extra hash/profile checks but is optional.
6. **Document** the mod in `Docs/mods/<id>.md` and add it to `Docs/INDEX.md`.

The 18 official CN singles are pairwise disjoint and stack in any combination (verified
2026-10-11). A new mod should keep that property.

## Space ownership (CN baseline / English ROM)

Record every allocation you make (address, length, fill, owner) in your definition and doc.

| Range | Owner |
|---|---|
| `0x09000000..0x090000FF` | baseline's own built-in fixes (code to `0x09000060`, rest reserved) |
| `0x09000100..0x090004E7` | `level_250` (EXP table) |
| `0x09001000..0x09001F17` | `shared_character_warehouses` (beta): code and tiles |
| `0x09400000..0x094FFFFF` | **English translation** (renderer, font, messages); never use |
| `0x0833C8C1..0x0833D353` | caves of `stackable_consumables`, `soul_return_auto_revive` |
| `0x08F00060..0x08F0016F` | `soul_ring` |
| `0x080BB120..0x080BB1EF`, `0x080BC000..0x080BC1B5` | `life_leech`, `money_drop_control`, warehouse stubs |
| `0x08019FD8..0x0801A093` | translation (centring helper + reserved dead code) |
| `0x080BB1F0..0x080BB21F` | `town_return_heal` (custom) stub |
| `0x080BC300..0x080BC31F`, `0x09004400..0x09004BFF`, `0x09A00000..0x09A0007F` | `enemy_hp_bars` (custom, CN modder's code); `0x09009BF0..0x09009BFF` must stay zero |
| `0x080BB220..0x080BB237`, `0x09010000..0x09010FFF`; RAM: EWRAM `0x0203D000..0x0203FFFF` (heap end lowered to `0x0203CFF0`), IWRAM `0x03007800..0x0300791F` | `enemy_pathing` (custom); see `Docs/mods/enemy_pathing.md` |
| `0x080BB238..0x080BB267`, `0x09011000..0x09012FFF`; RAM: EWRAM `0x0203D0C0..0x0203D0FF` (inside enemy_pathing's control block) | `summon_ai` (custom, needs enemy_pathing); see `Docs/mods/summon_ai.md` |
| `0x080BB268..0x080BB3B3`, `0x09013000..0x090131FF`; RAM: IWRAM `0x03007920..0x03007927`; OBJ palette 15 colour 1 | `counter_fix_slash` (custom test variant of `counter_fix`; don't stack the two); see `Docs/mods/counter_fix_slash.md` |

- **Free for new mods:** `0x09002000..0x093FFFFF` and `0x09500000..0x09FFFFFF`. The upper 16 MiB
  is **zero-filled** in this baseline (EU used 0xFF; don't assume either, check).
- **Reach:** a Thumb `bl` reaches ±4 MiB, so code in `0x09xxxxxx` needs a small stub inside the first
  16 MiB near the hook (`ldr rX,=target|1; bx rX`). Known zero gaps near the end of code are
  `0x080BB220..0x080BB400` and `0x080BC1B6..0x080BC48C`. They are candidates only: confirm they are
  zero and that nothing references them, then claim them in your doc. Zero runs elsewhere in
  `0x083xxxxx`+ are often real data (blank graphics, tables); don't treat them as free.

## Chinese players (CN baseline)

Every mod is made against the English ROM, but the English ROM equals the CN baseline outside the
translation's spans, so a mod that stays out of them is the same mod on the Chinese game.
`make_cn_set.py` decides per shipped patch and writes `cn/<name>.bps` (CN baseline → CN+mod).
A mod is **English-only** when it writes translation-owned bytes, points or `bl`s into
translation-only code/data (`0x094xxxxx`, the centring helper `0x08019FD8`), or is listed in
`Patches/Definitions/cn_overrides.json` (use that for mods that draw English glyph codes `0x701`+,
which the scan can't see). English item names (slot 1) are dropped from the CN version. Both
patchers grey out English-only mods when the result is the Chinese game, and treat a CN version as
missing if its English file changed since (`compat.json` stores the English file's SHA-256). Keep
new mods CN-compatible unless they truly need English text. As of 2026-10-24 all 28 shipped
patches are CN-compatible; the official CN mods' CN versions equal their own definitions on the
CN baseline byte for byte, and enemy_pathing behaves identically on both ROMs (A/B, 2 states).

## Living with the translation (only what affects mods)

- The translation's spans (every address it writes or reserves, no bytes) are tracked in
  `Tools/profiles/translation_spans.json`; `mod_conflicts.py` and `make_cn_set.py` read them. Don't
  patch those bytes. The full write list `Build/ss2-en-phase1.patch.json` (git-ignored; holds the
  English text) is regenerated with `Tools/.venv/bin/python Tools/Scripts/make_english_patch.py`,
  which needs the CN baseline and US ROMs and also rewrites the spans file.
- **Functions the translation rewrote** (stack frames grown for longer lines; hooks inside them must
  use the new sp offsets, so read them from the English ROM, not the CN baseline):
  - dialogue window `0x0805E8E4`;
  - identifier windows `0x080839A0` and `0x08083C9C`;
  - item detail view `0x08081D0C`, `0x08081EC8` and `0x08082BF4`;
  - name bar `0x08060A20..0x08060A8F` (name, space, enchant);
  - 57 `bl 0x0801A1F4` centring calls redirected to `0x08019FD8`.
- The **language word** `0x03003510` is 1 at runtime (was 0).
- **If your mod draws text:**
  - Record names come from `record + lang*0x3E`; slot 1 (`+0x3E`) is English. Never read `+0x00` directly.
  - Glyph codes: CN full-width glyphs are `0x0001..0x0700` (CN digits `0x00EF`+n, `Ｘ` `0x00C8`, `＋` `0x00A3`); half-width English is US code + `0x700` (`A`=`0x701`, `a`=`0x721`, `0`=`0x741`, space `0x751`). Mixed strings render fine.
  - English lines are about twice as many glyphs as Chinese; size buffers for 30+ glyphs.
  - To centre, call the width-aware helper `0x08019FD8` (returns tiles/2) rather than the raw count `0x0801A1F4`.
  - If a mod renames a record, add an English name to `Patches/Definitions/ledger.json`; `combine_patch.py` and `make_bps.py` apply it.

## Where the knowledge is

Full map: `Docs/INDEX.md`. The essentials:

- **CN internals (addresses are for this baseline; re-verify bytes, some docs have errors):**
  - `Docs/PROJECT_KNOWLEDGE.md`: stable entry points (map, player, combat, items, flash save).
  - `Docs/Analysis/FUNCTION_INDEX.md` (+ `.json`), `Docs/Analysis/STRUCTURE_FIELDS.md`, `Docs/Analysis/PSEUDOCODE_CORE.md`, `Docs/Analysis/DISCOVERY_GUIDE.md`.
  - `Docs/Analysis/historical_decompilation/`: old Ghidra output; leads only.
  - `Docs/Analysis/tracing_cases/`: worked traces from existing patches to fields and functions.
  - `Docs/ROM_STRUCTURE.md`, `Docs/ITEM_AND_WAREHOUSE.md`, `Docs/RESEARCH_TOPICS.md` (open topics: dynamic monster scaling, weapon skill hit rate, archer piercing), `Docs/PATCH_CATALOG.md`, `Docs/DEBUGGING_NOTES.md`, `Docs/EVIDENCE_BOUNDARY.md`, `Docs/MGBA_TEST_GUIDE.md`.
  - Errata for those docs: `Docs/Porting/HUGEAPPLEPACK_FINDINGS.md` §8.
  - Key RAM: player pointer `[0x03003580]` (bag `+0x158`, 25×16 B; storage `+0x2E8`, 75×16 B); actors `0x03003D80`, stride `0x154`; world pointer `0x03005DB4`; RNG state `0x030013B8`.
  - Typed record tables (items, equipment, monsters, sets…): bases and strides in `Tools/Scripts/name_tables.py` (`TABLES`); gameplay data starts at record `+0x174`.
  - Game data lookup (names, stats, recipes; secondary source): `python3 Tools/Scripts/query_reference_data.py`, `python3 Tools/Scripts/query_code_table.py`; see `Docs/CHINESE_CODE_TABLE_AND_EXCEL.md`.
  - What each official mod changes, and how it hooks: `Docs/Translation/PHASE2_COMPAT.md`.
  - Our own mods: `Docs/mods/<id>.md`.
- **US internals and US mods:**
  - `Docs/Porting/HUGEAPPLEPACK_FINDINGS.md`: US RAM map with CN equivalents, item format, hook lessons, what was tested.
  - `Other_Modders/`: other modders' material, read-only (`Other_Modders/README.md`). Some of it is private and only exists in some checkouts; never edit, commit or share it.
  - `Other_Modders/Nell/`: Nell's US mod handoffs (walk angles, archer summon, evade, break armor, sound fix, squirrel/pig).
  - `Docs/Porting/Chinese_and_US_ROM_differences.md`: a CN→US port of respec, the resistance fix and the counter fix. It is the same method in reverse and shows per-site shifts.

## Porting US → CN

- **No global offset.** Code shifts vary per site. Most IWRAM globals are US = CN + `0x80`, but not all (`0x030028E0→0x03002958` is +0x78; world pointer +0x90). The actor stride is `0x154` (CN) vs `0x158` (US), and player fields differ (US bag `+0x15C`). Prove every address, field and BL target on the CN side.
- **Tools:**
  - `python -m ss2tools port-candidates` (in `Tools/`): masked-BL window matching between ROMs.
  - `python3 Tools/Scripts/align.py <CN> <US> --json Build/align_cn_us.json`: whole-ROM CN↔US alignment (the JSON may already exist).
  - `Tools/Scripts/func_diff.py`, `func_pair_diff.py`: function-level CN/US diffs.
  - `frame_scan.py`: callers whose stack frames differ.
  - `disasm_addr.py ROM START END [ROM2 S2 E2]`: side-by-side Thumb disassembly.
- **Method:**
  1. Match each US site to CN by masked window (exactly one hit).
  2. Verify preimages.
  3. Re-encode every BL and literal for CN targets.
  4. Re-derive RAM literals and struct offsets.
  5. Relocate injected code into the free CN ranges above.

## Tooling

Run from the repo root. Plain `python3` for stdlib scripts; `Tools/.venv/bin/python` for anything
needing Capstone or the emulator. One line per script: `Tools/Scripts/SCRIPTS_INDEX.md`.

- **`python -m ss2tools`** (`cd Tools && .venv/bin/python -m ss2tools …`): `identify`, `verify --profile`, `inspect` (hex, halfwords, BL targets), `bl` (encode a BL), `build` (above; also `--ips`/`--bps`), `port-candidates`.
- **Disassembly:** `Tools/Scripts/disasm_addr.py`, `thumbdis.py`, `disassemble.py`, `xref.py` (Capstone is in `Tools/.venv`; Unicorn is not). An assembler is available: `llvm-mc -triple=thumbv4t-none-eabi` plus `llvm-objcopy`. See `Tools/Scripts/make_english_patch.py` `assemble()` for a working pattern. C mods: see `Patches/enemy_pathing/build.py`.
- **Emulator:** native headless mGBA, Python `Session` (`Tools/emulator/`, `Tools/emulator/README.md`; build with `Tools/.venv/bin/python Tools/Scripts/build_emulator.py`). Import it after `sys.path.insert(0, str(ROOT / "Tools"))`. It gives frame-exact input, memory reads, screenshots and savestates. Each session needs a **new `run_dir`** (put runs under `Build/runs/` or `Patches/<id>/runs/`).
- **Scenario helpers (CN/English ROMs):**
  - `Tools/Scripts/smoke_phase1.py ROM TAG`: cold boot from the CN save to the inn, ring menu, save dialogue, item menu.
  - `Tools/Scripts/smoke_state.py ROM STATE.ss0 TAG "frames:KEYS …"`: replay input from a user desktop state.
  - `Tools/Scripts/trace_renderer.py`: lists renderer calls.
  - Session gotcha: `run_until` also stops on its instruction budget, so check `r["hit"]`.
- **Profiler:** `Tools/perf/` (`ss2prof` + `perfreport.py`); findings in `GAME_PERFORMANCE.md`.
- **Unit tests:** `cd Tools && .venv/bin/python -m unittest discover -s tests` (set `TMPDIR` to a folder on the repo's disk; some tests hard-link).
- Old Windows tooling is in `Archive/Windows_mGBA/`.

## Working rules

- Keep ROM inputs (`ROMs/`, `Patch_Manager/Input_ROM/`) and tracked fixtures (`Savestates/`) immutable. Write builds to new paths (`Build/`, `Patches/<id>/`, scratchpad).
- Bind every patch to an exact profile and verify every preimage. Never remove a hash check to make a patch apply.
- **Tag every fact with its ROM** (CN baseline, English, US). Never carry an address between ROMs without proof.
- Injected code must be ARMv4T Thumb/ARM (no Thumb-2; NOP `0x46C0`), keep the ABI (registers, flags, SP alignment) and have documented allocations.
- Test real behaviour through visible game input on the **English ROM + your mod**, against English without it. Cover normal-save persistence when the mod touches saved state. Label diagnostic RAM writes separately.
- Record findings, commands and allocations in `Docs/` (e.g. `Docs/mods/<id>.md`, linked from `Docs/INDEX.md`) so the next session doesn't rediscover them. New reusable scripts go in `Tools/Scripts/` with a line in `SCRIPTS_INDEX.md`. Follow `REPO_INDEX.md` "Where things go".
- Don't push, publish or share ROMs, patched ROMs, saves or anything in `Other_Modders/` without the user's explicit request. Git-ignored files stay that way (ROMs, `Build/`, `LOCAL.md`, private `Other_Modders/` folders). The patches in `Patch_Manager/patches/` are tracked on purpose (they are public through the web patcher).

## Evidence vocabulary

- `candidate`: found by search; semantics not established.
- `static_verified`: byte, instruction or data-flow checks recorded.
- `runtime_verified`: named emulator scenarios passed, with exact ROM and save identities.
- `user_accepted`: the user explicitly confirmed the behaviour.

Labels apply to specific claims, not blanket guarantees. Never claim `user_accepted` without the
user's confirmation.
