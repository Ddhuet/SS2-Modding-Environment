# stackable_consumables: versions in shiyi1133's SS2_GBA_HACK vs ours (2026-10-13)

Source repo: `SS2_GBA_HACK/` (local clone of github.com/shiyi1133/SS2_GBA_HACK, HEAD `e9e72e10`).
All builds are against the CN baseline `45ac38bb…` (same as ours), built with armips
(Kingcom/armips master, built in the session scratchpad). `static_verified` only: no emulator runs yet.

## Ours = 1.0.0

`patches/definitions/stackable_consumables.json` / `Patch_Manager/patches/stackable_consumables.ips`
came from his `光明之魂2_离线补丁构建器_0830.html`. Its whitelist has no `cmp r1,#0x0C`, so it still
stacks Identify Scrolls: it is **1.0.0** (2026-08-29), before every fix below.

## His version history (from release notes, `research/stackables/state.md`, GitHub issues)

| Version | Date | Fixes |
|---|---|---|
| 1.0.1 | 08-31 | Identify Scroll (`type1/code0C`) removed from stacking: a stacked scroll didn't identify. |
| 1.0.2 | 08-31 | Shop catalog: bombs/molotovs got a fake ×N and a multiplied price (unbuyable). Herb stack dropped on a money bag merged into the gold (herbs lost). Name suffix/value only for real player bag/storage slots. |
| 1.0.3-beta1 | 09-02 | Item-page full swaps; ×N on ground items; quickbar long-B throw built an uninitialised quantity (new hook `0x0805BD32` throws exactly 1); bag "drop" keeps the whole stack and picking it back up restores the count. |
| 1.0.3-beta2 | 09-11 | Moving part of a stack into an empty warehouse slot erased the whole source slot (hook `0x0807F242`, helper `0x09003C00`). Rebuilt SHA `d4b19307…` = his manifest. |
| 1.0.4-beta1 | 10-03 | GitHub #19: partial same-type merge read the wrong stack slot as the target identity (e.g. Angel Feather treated as Herb). #20: no ×N on warehouse page cache slots. SC39: partial money-bag/stack swapped with a different item lost the remainder; overflow transactions. Source `rom/mods/legacy_issue_repairs/1d391fd6/source/stackable_consumables/patch.asm`; reproduces his builder payload (`rom/tools/current_feature_payloads.json`) byte for byte. |
| 1.0.4 + consume fix | 10-12 | Research layer `research/native_feature_integration/backpack_consume_remaining`: using 1 item from a bag stack via the quantity picker deleted the rest of the stack (or set it to 1). Now decrements the real bag slot by 1. Not yet a formal release on his side. |

Other copies are not separate versions: `research/stackables/analysis/occupied_guard_dev8.asm`
(dev8-v003, SC39 research, superseded by 1.0.4), `research/ports/fanatic_7_0` (different ROM).

## Builds made (all IPS32 against the English ROM `4343a9c7…`)

`Patch_Manager/candidates/stackable_consumables/` (definitions JSON + `patches/*.ips32`):
`stackable_consumables_103b2`, `_104b1`, `_104b1_consumefix`. Preimages verified on the English ROM.

New allocations beyond ours (all zero in the baseline, free per AGENTS.md):
`0x09003C00..0x09003DFB` (1.0.3/1.0.4 helpers, his reservation to `0x09003E00`),
`0x09F7D000..0x09F7D0FF` (consume fix, 100 B used). New hooks: `0x0805BD32`, `0x0807F242`,
`0x0833CF1A` (consume fix trampoline).

Checks: `mod_conflicts.py` finds no byte overlap with the translation (only the known shared
name-bar function `0x080606CC`, same hooks as 1.0.0). No overlap with any other definition in
`patches/definitions` or `patches/custom`.

Rebuild: copy the asm, replace every `/home/app/...光明之魂2.gba` path (`.open` and the `readu32`
preimage checks) with the CN baseline, run `armips`. The consume fix asm has no `.open`; wrap it
in `.gba` / `.open "<1.0.4 rom>","<out>",0x08000000` / `.close`.
