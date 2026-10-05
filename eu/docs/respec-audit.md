# EU skill-point refund audit

Static audit of the original `patches/definitions/respec.json`, actual 32 MiB CN baseline, and actual EU ROM, 2026-10-04. No original ROM or save was modified. This document records code evidence. Completed gameplay and normal-save persistence checks are recorded separately in [TEST_RESULTS.md](TEST_RESULTS.md).

## Baseline and port sites

EU input: `ROMs/Shining_Soul_II_EU.gba`, 16,777,216 bytes, header AU2P, revision 0, SHA-256 `e5c64a1740263e9b26120e487f3688fbbf7b3954a2c043c0d84c333df467e0b2`.

CN baseline: `workspace/input/光明之魂2.gba`, SHA-256 `45ac38bb1bfba779592b5c79ce94982cf7c00fda5b3c5b84735e55c77d6fc989`.

All addresses below are CPU addresses unless identified as file offsets.

| CN file offset | EU file offset | Actual EU preimage | Replacement | Decoded effect |
| --- | --- | --- | --- | --- |
| `0x7B662` | `0x7AE5E` | `2e` (instruction `2ead`) | `40` (`40ad`) | `add r5,sp,#0xB8` becomes `add r5,sp,#0x100` |
| `0x7B66E` | `0x7AE6A` | `c0` (instruction `c088`) | `80` (`8088`) | `ldrh r0,[r0,#6]` becomes `ldrh r0,[r0,#4]` |
| `0x7B68A` | `0x7AE86` | `d96889006918c8880138c880` | `c046c046c046c046c046c046` | Remove six instructions decrementing the second record's progress |

All preimages exactly match both actual baselines. The full refund block EU `0x0807AE56..0x0807AED0` has identical bytes to CN `0x0807B65A..0x0807B6D4`, except the four-byte BL at EU `0x0807AE72` / CN `0x0807B676`. The untouched call targets EU `0x0805865C`, CN `0x08059A8C`; both are used throughout their respective menu for sound IDs. The refund call is ID `0x3C`. The branch instructions, register allocation, and stack-relative operands are identical. EU literal `0x0807AEE8` contains the correct EU menu pointer address `0x03006440`; the corresponding CN literal contains `0x03006500`.

Replacements are ARMv4T Thumb instructions; `c046` is `mov r8,r8`, used here as a NOP. There is no moved branch, new call, injected code, expanded ROM requirement, or ROM literal copied from CN. The three edits touch 14 bytes total and preserve every instruction boundary.

The local code offset difference is `-0x804`; it is not a whole-function or whole-ROM offset. EU menu prologue `0x0807A5D4` corresponds to CN `0x0807AE6C` (difference `-0x898`). Use the recorded EU sites, never a global relocation rule.

## Feature semantics

This is **skill-point refund**, despite the upstream English `PROJECT_KNOWLEDGE.md` label “Attribute Respec”. It does not reset attributes or remove the existing stat-menu restriction to undoing changes made during the current visit.

On the skill allocation screen, Left refunds **one spent point per handled input** from the selected skill. Right spends one available point. Up/Down select one of eight skills. A accepts the temporary skill allocation into the live player record and returns to the skill overview. B discards it and restores the entry snapshot. This patch adds no UI text, button legend, or confirmation dialog.

A skill record stores a learned level and partial progress toward the next level. Advancing from level `n` to `n+1` costs `n+1` points, so the points invested are `n*(n+1)/2 + progress`. On refund with progress greater than zero, progress decreases by one. On refund with progress zero, level decreases by one and progress becomes the new level. Pool always increases by one. This reuses the game's existing point-undo algorithm.

Examples: level 3/progress 2 -> level 3/progress 1; level 3/progress 0 -> level 2/progress 2; level 1/progress 0 -> level 0/progress 0; level 7/progress 0 -> level 6/progress 6. Each adds exactly one available point.

Original behavior gates Left on the per-visit session progress (`sp+0xB8+6+4*i`). After the patch it gates on the current learned level (`sp+0x100+4+4*i`), enabling refund of points from earlier sessions. Since `r5` then names the same table as `r4`, retaining the second decrement would refund progress twice; the 12-byte removal prevents that.

## EU RAM and stack fields to observe

These fields are derived from actual EU instructions, not an assumed shift from CN.

| Source | Width | Meaning/evidence |
| --- | --- | --- |
| `[0x030034E0]` | 32-bit pointer | Player/live persistent record used by menu copies |
| Player `+0x30` | u16 | Available skill points; copied to temp pool, decremented/incremented by Right/Left |
| Player `+0x32` | u16 | Additional header halfword preserved by the 36-byte copies; meaning not established |
| Player `+0x34+4*i`, i=0..7 | u16 | Learned skill level, displayed by EU `0x0807B520` |
| Player `+0x36+4*i`, i=0..7 | u16 | Partial progress, displayed by EU `0x0807B548` |
| `[0x03006440]` | 32-bit pointer | Menu object |
| Menu `+0x04` | u32 | View state: 0 attribute overview, 1 skill overview, 2 attribute allocation, 3 skill allocation |
| Menu `+0x0C` | u32 | Selected row; allocation navigation constrains skill row to 0..7 |
| `0x03001308` | u16 | Direction-input field used with Right `0x10`, Left `0x20`, Up `0x40`, Down `0x80`; precise repeat timing not yet dynamically checked |
| `0x03001324` | u16 | Action-input field used with A `0x01` and B `0x02`; precise press timing not yet dynamically checked |
| Current menu SP `+0xB8` | 36 bytes | Per-visit skill-change table, initially filled with zeros |
| Current menu SP `+0xDC` | 36 bytes | Entry skill snapshot, restored on B |
| Current menu SP `+0x100` | 36 bytes | Editable skill table: pool +0; preserved header +2; rows {level:+4+4*i, progress:+6+4*i} |

Menu entry at `0x0807A5D4` saves `{r4,r5,r6,r7,lr}` (20 bytes), saves r8/r9/r10 via another 12-byte push, then subtracts `0x15C` from SP. Thus the stable menu SP is entry SP minus `0x17C`. Read the actual SP at a menu/refund breakpoint; do not hard-code an absolute stack address. Calls temporarily use their own frames and restore SP on return.

The CN corpus's `[0x03003580]`, menu pointer `[0x03006500]`, and CN field offsets do not apply to EU. CN skill pool is at player +0x34 while actual EU pool is +0x30. In particular, do not apply a blanket RAM/structure conversion rule from the historical docs.

## Disassembly evidence

Actual EU initialization and BIOS copy wrapper:

```text
0807AA18 movs r0,#3
0807AA1A str r0,[r1,#4]             ; skill allocation state
0807AA26 add r1,sp,#0xB8
0807AA28 ldr r2,[pc,#0x3C]          ; literal 0x01000012: CpuSet fill 18 halfwords
0807AA2A bl 0x080B8578              ; zero session table
0807AA2E ldr r4,[pc,#0x30]          ; literal 0x030034E0
0807AA30 ldr r0,[r4]
0807AA32 adds r0,#0x30
0807AA34 add r1,sp,#0xDC
0807AA36 movs r2,#0x12
0807AA38 bl 0x080B8578              ; copy live skill block -> entry snapshot
0807AA3C ldr r0,[r4]
0807AA3E adds r0,#0x30
0807AA40 add r1,sp,#0x100
0807AA42 movs r2,#0x12
0807AA44 bl 0x080B8578              ; copy live skill block -> edit table
080B8578 svc #0x0B                 ; BIOS CpuSet
080B857A bx lr
```

Input/commit evidence:

```text
0807ACEA ldr r0,[pc,#0x28]          ; literal 0x03001324
0807ACEC ldrh r2,[r0]
0807ACEE movs r0,#2                 ; B
0807ACF0 ands r0,r2
0807ACF4 beq 0x0807AD20
0807ACF6 add r0,sp,#0xDC
0807ACF8 ldr r1,[pc,#0x1C]          ; literal 0x030034E0
0807ACFA ldr r1,[r1]
0807ACFC adds r1,#0x30
0807ACFE movs r2,#0x12
0807AD00 bl 0x080B8578              ; restore snapshot -> live record
0807AD08 movs r0,#1
0807AD0A str r0,[r1,#4]             ; return to skill overview
0807AD20 ldr r0,[pc,#0x18]          ; literal 0x03001308
0807AD22 ldrh r1,[r0]
0807AD24 movs r0,#0x80              ; Down
0807AD32 cmp r0,#6                 ; only increase selected index <=6
0807AD44 movs r0,#0x40              ; Up
0807AD52 cmp r0,#0                 ; only decrease nonzero selected index
0807AD68 movs r4,#1                 ; A mask in r2
0807AD6C ands r6,r2
0807AD78 ldr r0,[pc,#0x14]          ; literal 0x03006440
0807AD7A ldr r0,[r0]
0807AD7C str r4,[r0,#4]             ; return to skill overview
0807AD7E add r0,sp,#0x100
0807AD80 ldr r1,[pc,#0x10]          ; literal 0x030034E0
0807AD82 ldr r1,[r1]
0807AD84 adds r1,#0x30
0807AD86 movs r2,#0x12
0807AD88 bl 0x080B8578              ; edit table -> live record
0807AD98 movs r0,#0x10              ; Right
0807ADA4 add r4,sp,#0x100
0807ADA6 ldrh r0,[r4]               ; available points
0807ADAA bne 0x0807ADAE             ; reject empty pool
0807ADB8 ldrh r0,[r0,#4]            ; selected learned level
0807ADBA cmp r0,#6                 ; reject level7 or above
```

Patched refund path, with the existing underflow handling preserved:

```text
0807AE56 movs r0,#0x20              ; Left
0807AE58 ands r0,r1
0807AE5C beq 0x0807AED0
0807AE5E add r5,sp,#0x100           ; patched: current editable table
0807AE60 ldr r6,[pc,#0x84]          ; literal 0x03006440
0807AE62 ldr r0,[r6]
0807AE64 ldr r0,[r0,#0x0C]          ; selected index
0807AE66 lsls r0,r0,#2
0807AE68 adds r0,r5,r0
0807AE6A ldrh r0,[r0,#4]            ; patched: learned level
0807AE6E beq 0x0807AED0             ; reject level0
0807AE70 movs r0,#0x3C
0807AE72 bl 0x0805865C              ; unchanged sound call
0807AE76 add r4,sp,#0x100
0807AE80 ldrh r0,[r1,#6]
0807AE82 subs r0,#1
0807AE84 strh r0,[r1,#6]            ; one progress decrement
0807AE86..0807AE90 mov r8,r8        ; six patched NOPs
0807AE92 ldrh r0,[r4]
0807AE94 adds r0,#1
0807AE96 strh r0,[r4]               ; refund one point to pool
0807AE9E ldrh r1,[r2,#6]
0807AEA0 movs r5,#0x80
0807AEA2 lsls r5,r5,#8              ; 0x8000
0807AEA6 ands r0,r1
0807AEAA beq 0x0807AED0             ; progress did not underflow
0807AEAC ldrh r0,[r2,#4]
0807AEAE subs r0,#1
0807AEB0 strh r0,[r2,#4]            ; lower learned level
0807AECC ldrh r1,[r0,#4]
0807AECE strh r1,[r0,#6]            ; progress = new level
```

## Runtime checks and limits

- Baseline control: enter skill allocation with an already learned skill and no current-session edits. Left should have no effect. Patched counterpart should increase pool by one and reduce invested points by one.
- Pool can initially be zero: refund must still work on a nonzero learned skill. Right with zero pool must remain blocked.
- Check refund with nonzero progress, with zero progress, level1 -> level0, level7 -> level6, and repeated Left at zero. Zero should stop without pool growth or underflow. A valid level0 skill cannot have partial progress, because advancing to level1 costs one point; corrupted records are outside that invariant.
- After every accepted point operation, verify `pool + sum(level*(level+1)/2 + progress)` stays constant, all eight rows remain within valid bounds, and unselected rows are unchanged. Valid progress is 0..level for level0..6, and 0 at level7.
- While editing, observe the temporary stack table. The live record is committed/restored by A/B; reading only the persistent fields before acceptance can miss a correct operation.
- Verify mixed Right/Left sequences, refund of old and newly added points, navigation between rows, A commit, B cancel, and re-entry. Session-change table no longer tracks refunds exactly; the patched path intentionally does not rely on it to gate Left. Exercise mixed paths rather than assuming that table is the persistent truth.
- Check live attributes before/after (`player+0x10..+0x2F`) and existing stat-menu Left behavior: this patch should affect only the skill block `player+0x30..+0x53` at commit.
- Use a copied save, perform the game's normal save, restart the emulator, and inspect pool/levels/progress again. A menu commit by itself is not proof of flash-save persistence.
- Verify skill names/selection and accepted results in supported EU languages and classes. Static code identifies eight indexed skills but does not independently prove the class-specific name mapping.
- Pool and rows use halfword arithmetic. No added overflow handling exists for artificially invalid pool `0xFFFF` or malformed skill levels/progress. Normal bounds, old-save compatibility, and long repeated-input timing require runtime evidence.

The historical pseudo-C files at CN `0x0807B662`, `0x0807B66E`, and `0x0807B696` contain bad-instruction/coprocessor warnings from incorrect mode/function interpretation. They do not substantiate feature semantics. Capstone 5.0.9 in the project-local environment decoded the actual ROM in Thumb mode for this audit.

## Runtime task-stack clarification

At frame boundaries the emulator often reports BIOS wait PC `0x000001F8` and scheduler SP `0x03007E14`. That is not the skill menu task stack. The task yield at `0x080003F0` saves task registers/SP and switches stacks. The regression locates the unique adjacent 36-byte entry snapshot and editable skill block in EWRAM, matching the live block on menu entry, rather than deriving it from the halted BIOS SP. It refuses zero or multiple matches.
