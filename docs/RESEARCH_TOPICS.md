## Research Topic Summaries

The following "Implementation Status" is based on the authoritative state as of 2026-08-30; historical artifacts do not alter the current stage.

### Random Map

* **Known:** Entry point at `08022D84`, layer transition write at `08024D4E`, map/monster group selection at `08023EB0`, initialization at `08026F88`, RNG at `080008C8`.
* **Status:** Historical research/prototype; not registered as a current catalog feature.
* **Risks:** Conflicts with the `life_leech` injection region (`080BB120-080BB190`); Boss/special scenes and legacy state cannot be inherited.
* **Next Steps:** Register research ID, reallocate injection region, cross-check current pre-image, and establish cold-boot and scene matrices.
* **Weak AI Micro-Task:** Only check if the new address range overlaps with the catalog, and output the address/offset table.

### Decompilation Mainline

* **Known:** Source references record 3,774 pseudo-C functions, ~71% coverage, and key system addresses; Ghidra output is not perfect source code.
* **Status:** Large static knowledge base; this package extracts only stable entry points without copying exports.
* **Risks:** Pseudo-C types, function boundaries, and variable names may contain errors; 8 key points only have complete disassembly without standalone pseudo-C.
* **Next Steps:** Cross-verify raw bytes, Thumb disassembly, callers, and callees around a specific function.
* **Weak AI Micro-Task:** Write a four-paragraph summary covering "Known / Unknown / Required Evidence" for a single address.

### Shared Warehouse

* **Known:** PLAYER / Inventory / Warehouse structures; Hooks at `08002E7A`, `080836F8`, `080838A8`, `080851BC`; Injection at `080BC000-080BC1B8`, `09001000-09001F18`.
* **Status:** `beta`; current baseline static pre-image and build passed, historical dynamic acceptance cannot be inherited, Beta combined dynamic testing not executed.
* **Risks:** Flash main sector, exception interrupts, 5-byte baseline difference in save function, semantics combination with stack quantity.
* **Next Steps:** Re-verify save, full restart, multi-character, full warehouse, and failure paths using save file copies.
* **Weak AI Micro-Task:** Organize manual test logs by character, operation, expected, actual, and evidence tags.

### Consumable Stacking

* **Known:** 16-byte record; type1 whitelist `00..06,08..13,15..1D,24,54..58`; legacy count 0 read as 1; cap 100; type9/type0A must retain original semantics.
* **Status:** `released`; current baseline static build passed, current Release combined dynamic acceptance incomplete.
* **Risks:** Acquisition sources, success/failure/cancellation deductions, UI, normal/shared warehouse, save restart, gold and ore regression.
* **Next Steps:** Item-by-item verification of acquisition, merging, splitting, usage, display, selling, and persistence.
* **Weak AI Micro-Task:** Inspect a 16-byte sample for type/code/+4 interpretation; explicitly do not guess names across types.

### Weapon Skill Hit Rate

* **Known:** Hook at `0807746A-0807746E`, injection at `0833A6C0-0833A7C0`; related to `08077374` physical hit parameter construction.
* **Status:** `research`; static reconstruction available, no complete dynamic evidence.
* **Risks:** Lv0/Lv1/Lv7, class/weapon mapping, enemy/magic/block regression; belongs to the attack main function alongside archer piercing, but does not overlap.
* **Next Steps:** Lock character and weapon, record hit samples at level boundaries and unaffected paths.
* **Weak AI Micro-Task:** Generate mGBA manual test steps for a single level boundary without calculating unknown probability conclusions.

### Dynamic Monster Scaling

* **Known:** Group selection at `08023EB0`, iteration over 0x38-byte group records at `08024000`, entity scan candidate at `08024054`; generated entries consist of four u16s.
* **Status:** `research`, no patch available.
* **Risks:** Monster core fields, player/NPC/summon categorization, repeated scaling multipliers, and respawn healing are not finalized.
* **Next Steps:** Perform read-only capture of field writes to PC/LR during normal/Boss monster creation; establish N Proof-of-Concept only after obtaining direct evidence.
* **Weak AI Micro-Task:** Summarize inputs, outputs, and unknown points for three candidate functions; memory writing recommendations are strictly forbidden.

### Four-Digit UI

* **Known:** 14 catalog ranges, including `080034xx`, `080144xx`, `0806028E-080602E6`, and font/text regions.
* **Status:** `released`; current baseline static build passed, visual and combined dynamic acceptance still pending.
* **Risks:** UI resource ownership, different page layouts, semantic combination with level_250.
* **Next Steps:** Visual regression for character stats, shop/warehouse, max values, boundary values, and official combinations.
* **Weak AI Micro-Task:** Convert manual screenshot observations into a table of Page / Value / Truncated (Y/N) (do not place actual screenshots in the sharing package).

### Per-Character Attribute Caps

* **Known:** `0807B32A-0807B408`; class ID index is related to respec.
* **Status:** `released`; static build with default parameters passed, custom parameter output does not inherit stage.
* **Risks:** Class mapping, negative numbers/overflow, leveling and respec boundaries.
* **Next Steps:** Class-by-class verification of default caps, reaching caps, respec, and save/load cycles.
* **Weak AI Micro-Task:** Verify whether a set of parameters is within 0–32767 and mark as custom.

### Archer Piercing Attack

* **Known:** Hook at `08077AE8-08077AEC`, injection at `0833A7C0-0833A860`; `08077374` ranged target loop originally stopped after the first hit.
* **Status:** `candidate`; maintainer observed enemy damage/downing and XP, but official combination evidence on current baseline is lacking.
* **Risks:** RNG call counts, secondary target sorting, save state save points post-collision, attack main function combinations.
* **Next Steps:** Cold-boot official combination, record visible results and regression in a two-target linear alignment scenario.
* **Weak AI Micro-Task:** Generate a two-target visual test procedure without inferring unobserved internal flags.

### Soul Return Auto-Revive

* **Known:** Hook at `080135C4-080135C8`, injection at `0833C8C0-0833C9C0`; player lethal damage processing starts at `08013594`; uses existing type1/code07 record with no new save fields.
* **Status:** `released`; historical manual acceptance by maintainer, not re-tested under current SS2_SC Release combination.
* **Risks:** Inventory boundaries, consecutive deaths, zero items, online character mapping, and stacking record semantic combination.
* **Next Steps:** Re-verify on current baseline with 1 / multiple / 0 items, 80% HP/SP, save restart, and combination regression.
* **Weak AI Micro-Task:** Categorize a death test result as either user accepted or dynamically verified, stating the rationale.

---