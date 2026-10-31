# Docs index

Addresses are for the **CN baseline**, which shares code and data addresses with the English ROM,
unless a doc says otherwise. Many of these docs are snapshots: re-verify bytes before relying on
them. Known errata are in `Porting/HUGEAPPLEPACK_FINDINGS.md` §8.

## Start here

| Doc | What it covers |
|---|---|
| [`PROJECT_KNOWLEDGE.md`](PROJECT_KNOWLEDGE.md) | Baseline identity, the five built-in CN fixes, stable entry points (map, player, combat, items, flash save). 2026-08-30 snapshot. |
| [`ROM_STRUCTURE.md`](ROM_STRUCTURE.md) | Confirmed entry points and fields with evidence tags (player pointer, RNG, damage, attack, equipment rebuild). |
| [`ITEM_AND_WAREHOUSE.md`](ITEM_AND_WAREHOUSE.md) | 16-byte item records, bag `+0x158`, storage `+0x2E8`, shared-warehouse hooks. |
| [`EVIDENCE_BOUNDARY.md`](EVIDENCE_BOUNDARY.md) | What counts as evidence; dynamic results don't carry across ROMs/states; log fields. AGENTS.md's vocabulary (`candidate` … `user_accepted`) is the one in use. |
| [`MGBA_TEST_GUIDE.md`](MGBA_TEST_GUIDE.md) | Acceptance checklist: normal, boundary, regression, save + reboot. |
| [`DEBUGGING_NOTES.md`](DEBUGGING_NOTES.md) | Minimum bug-report checklist and common misjudgments. |
| [`../GAME_PERFORMANCE.md`](../GAME_PERFORMANCE.md) | Frame budget, the WAITCNT cause, per-task cycle costs (root file). |

## Mods we made or ported: `mods/`

One doc per mod: what it changes, hooks, allocations, tests, evidence. Definitions are in
`Patches/Definitions/Custom/`, working folders in `Patches/<id>/`.

| Doc | Mod |
|---|---|
| [`mods/enemy_pathing.md`](mods/enemy_pathing.md) | Flow-field enemy pathing (C blob, EWRAM heap reservation). |
| [`mods/summon_ai.md`](mods/summon_ai.md) | Archer pet hunting on enemy_pathing's field (needs enemy_pathing). |
| [`mods/counter_fix_slash.md`](mods/counter_fix_slash.md) | counter_fix + red slash effect (test variant; don't stack with counter_fix). |
| [`mods/enemy_hp_bars.md`](mods/enemy_hp_bars.md) | CN modder's enemy HP bars + our three fixes. |
| [`mods/walk_angles.md`](mods/walk_angles.md) | True 45° diagonals (port of Nell's US patch). |
| [`mods/waitcnt_fix.md`](mods/waitcnt_fix.md) | Cartridge wait states fix (performance). |
| [`mods/town_return_heal.md`](mods/town_return_heal.md) | Refill HP/SP on return to town. |
| [`mods/lose_all_on_death.md`](mods/lose_all_on_death.md) | Death destroys everything but the soul; also maps the death drop, ground-item list, map-state block P and save layout. |
| [`mods/end_dungeon_on_death.md`](mods/end_dungeon_on_death.md) | Death ends the dungeon run (no Angel); also maps the death flow, the Angel task, flags word `0x03003518` bits 3/7/14/21, transitions and the world-map forfeit cleanup. |
| [`mods/normal_attack_charge_accuracy.md`](mods/normal_attack_charge_accuracy.md) | Tap attacks use charge-attack accuracy. |
| [`mods/guaranteed_fusing.md`](mods/guaranteed_fusing.md) | Matching forge recipe skips the roll (EU port). |
| [`mods/fusing_gold.md`](mods/fusing_gold.md), [`mods/forge_calculator.html`](mods/forge_calculator.html) | Forge gold / +X research and a calculator page. |
| [`mods/stackable_consumables_versions.md`](mods/stackable_consumables_versions.md) | Our stackable_consumables vs upstream 1.0.1–1.0.4. |
| `mods/evidence/` | Screenshots and A/B JSON logs referenced by the mod docs. |

## Official CN mods

| Doc | What it covers |
|---|---|
| [`Translation/PHASE2_COMPAT.md`](Translation/PHASE2_COMPAT.md) | What each of the 18 official CN mods changes and how it hooks; all apply on the English ROM. |
| [`PATCH_CATALOG.md`](PATCH_CATALOG.md) | Catalog of CN definitions by status (2026-08-30 snapshot). |
| [`code_audits/`](code_audits/README.md) | Static audits of life_leech, level_250, counter_fix, soul_ring + `INJECTION_OWNERSHIP.md`. |
| `../Patches/Definitions/Official/README.md` | Release 17 / Beta 18 registry with hashes. |

## Reverse-engineering references: `Analysis/`

| Doc | What it covers |
|---|---|
| [`Analysis/README.md`](Analysis/README.md) | Reading order for the package below. |
| [`Analysis/FUNCTION_INDEX.md`](Analysis/FUNCTION_INDEX.md) (+ `.json`) | Core functions by system. Search with `Tools/Scripts/search_analysis_index.py`. |
| [`Analysis/STRUCTURE_FIELDS.md`](Analysis/STRUCTURE_FIELDS.md) | Player and battle-struct fields (item record type is u16, not u8, see errata). |
| [`Analysis/PSEUDOCODE_CORE.md`](Analysis/PSEUDOCODE_CORE.md) | Hand pseudocode: damage, lethal, COUNTER, level-up, Soul Return. |
| [`Analysis/DISCOVERY_GUIDE.md`](Analysis/DISCOVERY_GUIDE.md) | Method for tracing an unknown mechanism. |
| [`Analysis/tracing_cases/`](Analysis/tracing_cases/README.md) | Worked traces from patches to fields/functions (case 02 was lost; see its README). |
| `Analysis/historical_decompilation/` | Old Ghidra output from older ROMs: leads only. |
| [`LOOT_GENERATION.md`](LOOT_GENERATION.md) | Crate, chest and monster drops: loot rows, per-class lists, gold, enchant/unidentified rules, object HP; model `Tools/Scripts/loot_model.py` (runtime-verified). |
| [`RESEARCH_TOPICS.md`](RESEARCH_TOPICS.md) | Open topics (dynamic monster scaling, weapon skill hit rate, archer piercing, …). |
| [`RANDOM_MAP.md`](RANDOM_MAP.md) | Random-map hook research. |

## Text and the translation: `Translation/`

The English translation is finished. These matter only if a mod draws text or touches a
function the translation rewrote.

| Doc | What it covers |
|---|---|
| [`Translation/TEXT_ARCHITECTURE.md`](Translation/TEXT_ARCHITECTURE.md) | Language table, string format, name tables, font, renderer. |
| [`Translation/PHASE1_SURVEY.md`](Translation/PHASE1_SURVEY.md) | CN vs US text paths and the translation's change list. |
| [`Translation/PHASE1_BUILD.md`](Translation/PHASE1_BUILD.md) | Build record for English builds 1–1d (frames, identifier window, name bar). |
| [`CHINESE_CODE_TABLE_AND_EXCEL.md`](CHINESE_CODE_TABLE_AND_EXCEL.md) | Decoding CN text and querying the extracted reference workbook. |
| `Reference_Data/` | Glyph table `汉字码表.txt` + extracted workbook (names, stats, recipes). Secondary source; query with `Tools/Scripts/query_*.py`. |

## US ROM and porting: `Porting/`

| Doc | What it covers |
|---|---|
| [`Porting/HUGEAPPLEPACK_FINDINGS.md`](Porting/HUGEAPPLEPACK_FINDINGS.md) | US RAM map with CN equivalents, item format, hook lessons; §8 errata for our docs. |
| [`Porting/Chinese_and_US_ROM_differences.md`](Porting/Chinese_and_US_ROM_differences.md) | A CN→US port of respec, resistance fix, counter fix with per-site shifts (same method in reverse). |
| `../Other_Modders/Nell/` | Nell's US mod handoffs (walk angles, archer summon, evade, break armor, sound fix, squirrel/pig). |

## Old_Docs/

Kept for history; not needed for current work: `DEBUG_THINKING_GUIDE.md` (generic debugging
method), `AGENTS_Translation.md` (translation handoff), `EU_MODDING_ASSESSMENT.md` (EU feasibility),
`README_CN_VERSION.md` and `SHARE_MANIFEST.md` (Chinese Windows share package), and
`tools_README_CN_era.md`. EU port docs are in `Archive/EU_Port/docs/`.
