# Current Project Knowledge (2026-08-30)

## Baseline and Address Rules

The sole active baseline comes from `SS2_SC_bug_fixed.GBA`: 33,554,432 bytes, MD5 `35eb6567d94f855480c5d7ba2dff4389`, SHA-256 `45ac38bb1bfba779592b5c79ce94982cf7c00fda5b3c5b84735e55c77d6fc989`, zlib CRC32 `AFCFC96D`.

This baseline includes five built-in fixes that must not be reapplied: ore/gold bag limit, infinite warehouse withdrawal, throwing race condition, ground item updates after Chaos completion, and localization dialogue padding cleanup. Extended code occupies `0x09000000–0x09000060`, with `0x09000060–0x09000100` reserved.

```text
File Offset = ROM Address - 0x08000000
ROM Address = File Offset + 0x08000000
Example: 0x0805CCEA -> 0x0005CCEA

```

Multi-byte integers are typically little-endian. The ARM7TDMI executes both ARM and Thumb; a function pointer's lowest bit set to 1 usually indicates Thumb state, so the actual code address requires clearing this bit. Modifications to BLs, jumps, function entry points, literal pools, and injection areas must verify state, alignment, reachable range, overwritten instructions, ABI, return paths, and region ownership.

## Current Lifecycle

* `released` (17 items): Status condition resistance overflow fix, Lifesteal/Manasteal, Attribute Respec, Gold drop control based on first inventory slot, World Map Stash, Level Cap 250, COUNTER fix, Soul Slot Rings, Consumable Stacking, 4-Digit UI, Per-Character Stat Caps, Automatic Revival via Soul of Return, Permanent Summoning for two classes, Ring/Weapon/Set balance, and Temple Soul Fusion adjustments.
* `beta` (1 item): Multi-character shared stash.
* `candidate` (1 item): Archer piercing attack.
* `research` (2 items): Dynamic monster scaling, Weapon skill hit rate.

The 17-item Release output is registered under SHA-256 `dcdb1e041eee3676c6398de6080d7cb1be73176f7b5e3a615a973fd3f5f0f868`; the 18-item Beta output is registered under SHA-256 `ba7223dd7ac7de5d631bc9e6918bd668d67809813d899cdd41a74c61e0ccf377`. Both have passed static reconstruction, preimage, and byte-overlap checks, but dynamic combination testing remains `not_run`.

## Stable Address Entries

* Map: `0x08022D84` area/floor write; `0x08023EB0` monster group selection; `0x08024D4E` floor transition; `0x08026F88` initialization; `0x080008C8` RNG.
* Player: `[0x03003580]` current PLAYER pointer; Inventory `PLAYER+0x158` (25 × 16 bytes); Character stash `PLAYER+0x2E8` (75 × 16 bytes).
* Combat: `0x08019824` generic object damage taken; `0x0801F150` attack processing; `0x08013594` player death settlement; `0x08077374` hit/target loop.
* Stats: `0x0801B690` equipment/status stat recalculation; `0x0801B18C` weapon skill attack power dispatch.
* Items & Stash: `0x0807D268` item type dispatch; `0x080836FC` stash dispatch vicinity; Item records are 16 bytes, and type/code must be interpreted jointly.
* Flash: `0x08001B14` 4 KiB main sector erase/write; `0x08001B54` read-back verification; `0x080B9CD8` low-level command primitive.

These addresses mainly originate from historical decompilation and existing audits. Following the migration to SS2_SC, the recorded preimages across the 21 write ranges remain byte-for-byte compatible according to the authoritative status notes; however, this does not mean all historical pseudocode has been re-decompiled against the new baseline.

## How to Think and Debug

Do not treat "keyword not found" as non-existence of a mechanism, nor name a function based solely on a single constant match. First distinguish between input identity, data tables, control flow, runtime state, UI, save files, and combination conflicts; establish minimal reproduction cases and single-variable controls. Once a candidate match is found, downstream and upstream logic as well as data flow must be inspected. For details, see [DEBUG_THINKING_GUIDE.md].

For historical pseudocode, see [analysis/README.md]; for code patch audits, see [docs/code_audits/README.md]; for evidence labels, see [EVIDENCE_BOUNDARY.md].