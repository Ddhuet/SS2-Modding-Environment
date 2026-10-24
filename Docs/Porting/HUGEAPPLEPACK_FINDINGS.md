# HugeApplePack: what it teaches

Evaluation (2026-10-10) of `Other_Modders/HugeApplePack/`, a USA-English port of the CN
"MIE" mod chain received from one of the Chinese modders. It is the USA candidate `3D2356A8`,
built from frozen upstream `shiyi1133/SS2_GBA_HACK` commit `2a1adb43`, and needs the USA AU2E
rev0 ROM (SHA-256 `b31c19d2…`).

This document records **knowledge**, not a port. Nothing from the pack has been applied to any
ROM in this repository.

## Version tags and trust levels

Every fact carries a version tag:
- **[US]**: USA AU2E rev0.
- **[CN]**: the CN chain on the JP cartridge. Its baseline is the 32 MiB `SS2_SC_bug_fixed.GBA` (`ROMs/Shining_Soul_II_CN_Baseline.gba`, SHA-256 `45ac38bb…`). That is the 16 MiB Chinese localization (`ROMs/Shining_Soul_II_CN.gba`) plus small fixes; the repo has no pristine Japanese ROM.
- **[EU]**: from our own EU research, quoted only for contrast.
- **[fmt]**: a format or rule that does not depend on addresses.

Do not move an address between versions without re-proving it. EU facts live in
[Archive/EU_Port/docs/](../../Archive/EU_Port/docs/); reconcile the two only when needed.

Trust levels:
- **Verified here**: checked against retail ROM bytes during this evaluation.
- **Pack claim**: stated or encoded by the pack. Many pack claims are CPU-emulation (Unicorn) results, and many cite evidence JSON that was not shipped. In-game (mGBA) evidence exists only for the specific runs listed in §6.

## 1. Pack layout and signal-to-noise

The useful material is in
`Other_Modders/HugeApplePack/Source/SS2_USA_MIE_3D2356A8_Source/portable-3D2356A8/`, referred to as `PKG` below.

| Path | What it is | Worth reading? |
|---|---|---|
| `PKG/documentation/AI_HANDOFF.md` | Handoff guide for agents | Yes, compact rules and pitfalls |
| `PKG/base_source/documentation/ABI_REPRO_AND_AUDIT_APPENDIX.md` | ABI audit, SP alignment, weak symbols | Yes |
| `PKG/base_source/workspace/ordinary_work/ENGLISH_FEATURES.md` | Per-feature US porting notes | Yes |
| `PKG/base_source/workspace/**/COUNTEREXAMPLES*` | Bugs hit and why | Yes, best process lessons |
| `PKG/base_source/workspace/mie_engine_work/port/*.c,*.h` | MIE class, save record, skill model | Yes |
| `PKG/base_source/workspace/abi_work/parent_port/warehouse_next/` | Save tail, veneers, trampolines | Yes |
| `PKG/overlays/select-us/` (`detail.c`, `native_text.c`, `ore_descriptions.h`) | Item detail UI, effect/prefix tables | Yes |
| `PKG/overlays/{unidentified,ring-unknown,r1}-final-fix/` | Appraisal and unknown-item hooks | Yes, small |
| `PKG/base_source/components/joint/source/` | Main mod C/ASM (realm, boss, menus, stats) | Selectively |
| `PKG/base_source/components/native_font/` | Same tree as `joint`, 7 font files differ | No, duplicate |
| `PKG/overlays/{realm,field-drop}-final-fix/` | 381 of 389 files are copies of `joint` | Only `reward_guarantee.c`, `boss_scope_us.c`, `drop_context.c` |
| `PKG/qa_reference/` | 109 of 163 files duplicate other trees | Only `US_PREFIX_DATA.json`, harness scripts |
| `PKG/base_source/target/CANONICAL_WRITES.json` | 1468 writes: address, size, hashes only | Conflict ledger, no descriptions |
| `PKG/evidence/` | Run receipts | `APPRAISAL_BINDINGS.json`, `NATIVE_APPRAISER_LOCATION.json` |

- **Signal:** roughly 5–15% of bytes per area carry reusable explanation. The rest is hashes, hex payloads, generated tables and receipts.
- **Not standalone:** it rebuilds only with the private upstream repo, the CN baseline plus a CN final reference ROM, and a pinned toolchain (Python 3.12, Zig 0.13.0, armips 0.11.0, keystone 0.9.2, unicorn 2.1.4). Many scripts hardcode `/workspace/…` paths.
- **CN mod source is not in the pack (checked 2026-10-11).** The CN chain lives in private `shiyi1133/SS2_GBA_HACK` @ `2a1adb43`; `PKG/base_source/workspace/abi_work/cn_rebuild/rebuild.py` only wraps it (materializes 1,013 files from that repo's git history, output CN final SHA-256 `96915425…`, CRC32 `13243E94`). Neither the repo nor that CN final ROM is bundled. CN-side fragments that are present:
  - 19 headers (realm/boss/NPC/parent APIs) vendored under `*/workspace/SS2_GBA_HACK/research/native_feature_integration/`, copied 3× across joint/overlays.
  - `PKG/base_source/workspace/resource_work/historical880/`: verbatim CN MiEMiE-class generators and ~19 `.s` files that still use CN addresses (e.g. `ldr r0,=0x03003580`). Marked "text-only review inputs".
  - `cn_picker_disassembly.txt` and similar CN disassembly dumps in `mie_engine_work/`.
  - Everything else (`joint/source`, overlays, `.c` files) is retargeted to US (`0x03003600`/`0x03003E00`; zero CN literals in `joint/source`).
- **Status labels:** the pack is honest about candidate status overall. Stage labels such as `BUILD_ONLY_NOT_VALIDATED` sometimes contradict which output was delivered.

Git note: `Other_Modders/HugeApplePack/` is local reference material and is **not tracked** (whole folder in
`.gitignore`). Treat it as read-only; write extracted knowledge here instead. A fresh clone
will not have it, so ask the user for the pack.

## 2. Game internals: RAM and records

### Owner (player) record [US], per-version comparison

| Field | CN | US | EU |
|---|---|---|---|
| Owner pointer cell | `0x03003580` | `0x03003600` | `0x030034E0` |
| Owner size | `0xCAC` | `0xCB0` | — |
| Raw class (u16) | `+0x10` | `+0x14` | — |
| Bag (25 × 16 B) | `+0x158` | `+0x15C` | `+0x150` |
| Storage (75 × 16 B) | `+0x2E8` | `+0x2EC` | — |

The owner and EU pointer literals were verified here: 429 aligned literals each of US
`0x03003600` and CN `0x03003580`, and 425 of EU `0x030034E0`. `0x03003580` also occurs 5 times
in US as a graphics table, so never search-and-replace it.

Other US owner fields (pack claims):
- **Identity:** `+0x00..0x13` name (10 × u16); `+0x16` appearance; `+0x18` save-slot identity.
- **Skill ranks:** `+0x40 + 4*i`, u16, stored 0..7 where 7 reads as 8; partial points in the next halfword. Same shape as EU `skill_rows` at `+0x34`.
- **Equipment:** `+0x74` equipped-slot index. `+0x7C` holds ten 16-byte records (weapon block, 3 × 16). Armour type 3 at `+0x11C`, type 4 at `+0x10C`, type 5 at `+0x12C`.
- **Secondary soul/ring slot:** type `+0x13C` (6 = ring), code `+0x13E`, flag byte `+0x145`.
- **Save:** the save-backed storage refresh copies 0x4B0 B from `0x0E0002EC + slot*0x1000` into `owner+0x2EC`.

### Actors [US]

- Actor base `0x03003E00`, stride `0x158`. CN is `0x03003D80`, stride `0x154`. US literal verified at file `0x270A4`, CN at `0x271D4`.
- Fields: coordinates `+0x98`/`+0x9C` (CN `+0x94`/`+0x98`); current HP/SP `+0xD0`/`+0xCE`; max HP/SP `+0x6E`/`+0x6C`.
- **No global +4 rule.** It holds for these fields but must be proved per field; the actor stride and CN bag offset are both 0x158, so don't conflate them.
- **Enemy pool** (runtime scripts): `0x03005844`, mask `0x0300584C`, stride `0x454`; HP `+0x5C`, max HP `+0x1D6`.
- **Dark Mage card state:** actor `+0x20` = 0x52 transform / 0x53 private-active; marker `0xA55A` at actor `+0x24`; `[0x03003E40]` points to an 8-entry actor list.

### Other US globals (pack claims)

- **Where CN→US deltas hold:** IWRAM globals mostly shift +0x80, but not universally (`0x030028E0→0x03002958` is +0x78). The world pointer is +0x90.

| Address | Meaning | CN equivalent |
|---|---|---|
| `0x03005E44` | World/map-state pointer (size 0x1E78): `+0x4C` floor counter; `+0x54` NPC-slot mask; NPC slots `+0x7A4 + slot*0x70` (15); 40-byte tasks `+0xE34..0x12E4` (task `+0x24` finalizer) | `0x03005DB4` (1499 literals each, verified) |
| `0x0300331C` / `0x03003320` | MAP_ID / ROOM_ID | |
| `0x03003598` | Mode word | |
| `0x030013BC` | Mode | |
| `0x03001354` | Current PCB | |
| `0x03001438` | RNG32 state | `0x030013B8` (EU `0x03001318`) |
| `0x03002464` | Native VBlank-wait counter. Cadence only, not FPS | `0x030023E4` |
| `0x03001444` | Generic key edge | `0x030013C4` |
| `0x03001428` | Directional edge/repeat | `0x030013A8` |
| `0x0300142C` | KEYINPUT latch | |
| `0x03006590` | UI root. word0 == 6 is the Smith page; `+0xF4` selected item type, same field as EU menu `+0xF4` | |
| `0x03003590` | Text language word (see TEXT_ARCHITECTURE.md) | JP `0x03003510` |
| `0x03005DF0` | Font bank pointer table | |
| `0x03002478` / `0x0300247C` | VBlank copy-queue count (about 390–399 max) / base pointer; 12-byte entries `{src, dst, 0x80000000|len}` | |
| `0x03001450` | Shadow OAM, 8 B/entry; count `0x030029D4` (≤ 127) | |
| `0x030029D8` / `0x030029DC` | OBJ tile count (≤ 1024) / OBJ VRAM pointer | |
| `0x03002490` | Heap root. 16-byte block header `[prev|0x80000000 used, next]`; EWRAM `0x02000010..0x0203EFF0` | |
| `0x0203F000` | Mod challenge context (`0xA8` bytes, magic `0x31535242`) | |
| `0x0203F0B4` | Mod NPC root cell | |
| `0x0203EFC8` | MIE sidecar pointer | |

The RNG routine (`0x080008C8..0x0800093B`) is **byte-identical across JP, US and EU**; only
its state literal differs. Verified here.

## 3. Game internals: items and equipment [fmt unless noted]

- **Item record (16 bytes):**
  - `+0` u16 type: 1 consumable, 2 weapon, 3/4/5 armour families, 6 ring, 7 soul, 8 card (dispatched as 7), 9 ore, 10 gold.
  - `+2` u16 id/code.
  - `+4` u16 prefix id (1–71, 0 = none); for gold, a u32 amount at `+4`.
  - `+8` u8 unidentified flag.
  - Tail effect words at `+0x0A/+0x0C/+0x0E`: low byte = effect id (0 = template, `0x00FF` = opened empty socket), high byte = signed value.
  - Only a nonzero type makes a record valid.
- **Effect ids:**
  - 1–4 Str/Dex/Int/Vit; 5/6 Max HP/SP; 7 move speed.
  - 8–13 Fire/Ice/Thunder/Light/Dark/Poison resist; 14/15 Atk/Def; 16 attack timing.
  - 17/18 vs undead/flying; 19 crit; 20 shield; 21 curse damage; 22 ignore curse; 23 SP cost; 24/25 HP/SP absorb.
  - 26/27 shortcut capacity (value ≤ 1); 28 throw distance; 29 SP recovery; 30 charge time; 31 knockback; 32/33 block; 34 status; 35 drop.
  - 36–38 transforms; 40 soul activation cost. 39 is invalid.
  - Signed ids: 16, 20, 23, 24, 25, 30, 34, 40.
- **Elements 0–7:** none, fire, ice, thunder, light, curse, poison, deadly poison.
- **Prefixes:** 71 records, starting at ROM `0x0847C874`, stride `0x188` [US] (= SSDT type 0x13). Examples: 1–4 Power/Force/Might/Wrath = STR +2/+4/+6/+8; 50–52 Moons/Stars/Suns = fire/ice/thunder; 62–64 Lore/Legend/Heroes = Atk+Def. The full list is in `PKG/qa_reference/select-us/US_PREFIX_DATA.json`.
- **Catalog sizes** for types 2–6: 664 / 158 / 150 / 183 / 96 (1251 total).
- **Templates:** `native_item_data(((type+9)<<16)|id)`, which is SSDT types 0x0B–0x0F. Effect-table offsets in the template: `{0x188, 0x180, 0x180, 0x184, 0x178}`.
- **Ore codes:** 0x1000 strength, 0x1001 prefix, 0x1002 element, 0x1003 effect, 0x1004 drill.
- **Appraisal:** price by grade `{11,19,41,73,127,199,293,397}`. The appraiser NPC is area 0, room 1, world (168,200) [US].
- **Mod (not native) rules:**
  - Refine = `byte@6 + min(3, ceil(points/2))`.
  - Reroll costs 1000 G, upgrade cap 255.
  - PRNG is xorshift32 seeded by FNV-1a, mixing TM0CNT_L.
  - Quality tier = `min(4, ((grade+2n)*171)>>9)`.
- **Temple fusion table:** `0x08540820` (1040 B) [US]. Final bytes: four equal souls become two equal souls plus two Angel Feathers. The release prose says the reverse; trust the bytes.
- **World-map warehouse count:** immediate at `0x08058094` (0x18→0x63); count function `0x08058064` [US] (CN `0x08059610`).
- **Stacking difference to check:** the pack excludes consumable code 0x0C from stacking, but our CN `Docs/ITEM_AND_WAREHOUSE.md` includes it.

## 4. Game internals: classes, skills, combat

- **Classes:** raw 0–7 are Warrior, Magician, Archer, Dragonute, Priest, Brawler, Dark Mage, Ninja. Raw 8 is native class 8, which uses skill group 6 (ids 48–55), donor profession 6. Raw 9 is the mod's MIE class.
  - Gate the class on `owner+0x14` numerically, never by name.
  - Setting class 8→9 without the MIE save record creates an invalid character.
- **Skills:** 64 skill ids in 8 groups of 8 (group = `id>>3`; class j<8, slot s → `j*8+s`). Example US labels: 0 SWORD (War), 7 TACTICS, 23 HEALING (Arc), 29 BREATH, 30 WEAKEN (Drg), 44 COUNTER (Braw), 56 SWORD (Nin), 62 REPLACE.
- **Native getters [US]:**
  - Effective class `0x0801DB50` (CN `0x0801DC54`).
  - Skill rank `0x0801DDA4` (CN `0x0801DEB0`, EU `0x0801E0AC`). The rank getter's first 24 bytes are **identical in all three ROMs**; verified here.
  - Weapon-bonus dispatch `0x0801B15C` (CN `0x0801B18C`).
- **Native formulas (pack claims):**
  - Proficiency `value*(10+level)/10 + level`; gid 33 uses `100+8*level` over 100.
  - Skill 7 attack term `2a(a+20)/20`.
  - Reactions: PRESS29 `5L+10`, SPURN44 `7L`, DODGE62 `8L`.
- **Class creation template table [US]:** `0x084DC2EC`, stride 0x20, classes 0–7. CN class table: 9 × 32 B at `0x08495038`, companion 9 × 48 B at `0x084A63FC`.
- **Chest generation [US]:** row table `0x0853BC08` (100 groups × 36 B, with a 29-bit weapon mask).
  - Ore drop = `rand%10 + 10*MAP_ID` (+100 if hard).
  - Gold = `rand(code*1.5)`, minimum `code/2`.
- **Native NPC table [US]:** `0x08506820`, 76 records; MIE is added as record 77.
- **Secret Realm (mod):**
  - 300 s timer, −30 s per death, and the timer keeps running in town.
  - Angel return at world (184,312).
  - Boss maps are index 14 (area 10, floor 14) and 17 (area 13, floor 0).
- **Dynamic monster scaling (mod):** 10 levels, HP `100+50(n-1)%`, ATK `100+10(n-1)%`. Our `Docs/PATCH_CATALOG.md` lists this as research only.

## 5. Save, text, graphics, native services

- **Flash save [US]:** 16 × 4 KB sectors, main at sector `slot` and aux at `slot+8`. Each block ends with a checksum byte `~sum`.
  - Flash services: read `0x080B829C`, sector write `0x080B899C`, verify `0x080B8368`; low-level program `0x08001B15`, verify `0x08001B55`, read `0x08001B05`.
  - Save caller LRs: ordinary save `0x08061E67` (a second claim says `0x0806255F`; reconcile), pre-scene `0x080036A7`, title load `0x0807A3B3` / `0x0807A28B`.
- **Mod save tail:** 544 bytes from owner `+0xCB4`, magic `GHT512R1`, CRC32.
  - MIE record `MM9S` (16 B): version 3, 8 skill ids, style mask, checksum.
  - Creation seed `MMUI`.
- **Text and font [US]:** see [TEXT_ARCHITECTURE.md](TEXT_ARCHITECTURE.md). Glyph lookup = `*(0x03005DF0 + ((code-1)>>8)*4) + ((code-1)&255)*128`. Ink palette index 1, shadow 3.
- **Graphics [fmt]:**
  - 4bpp tiles of 32 B, low nibble = left pixel. Palettes BGR555.
  - Compression is BIOS LZ77 type 0x10. Decoder and scanner: `PKG/base_source/workspace/abi_work/reproducible/display_sources/find_lz.py`.
  - BIOS palette copies need **4-byte-aligned** sources; a 2-byte-aligned source shifted every bank.
- **Resource lookup [US]:** `0x08006E35` (Thumb), id = `(type<<16)|index`. Resource count `0x08006D09`. MIE name/title/intro resources: `0x14045D`, `0x140441`, `0x140442`.
- **Native service table [US]** (`native_calls.inc`): alloc `0x08001495`, free `0x08001539`, task register `0x08000275`, wait `0x080003F5`, signal `0x08000421`, yield `0x080003F1`, VBlank queue `0x08001349`, palette `0x08000AF1`, cursor sound `0x08058589`, signed divide `0x080B8E05`, modulo `0x080B9055`, RNG `0x080008C9` (unsigned) / `0x0800086D` (signed), scene pause/unpause `0x0800CAD9`/`0x0800CAED`, fades `0x0801A7B9`/`0x0801A6B1`/`0x0801A721`.

## 6. What was actually tested in-game (final candidate 3D2356A8)

Only these:
- a three-enemy Goblin Fort battle, compared with the pre-SELECT build;
- a field smoke test;
- native save and fresh-process cold load;
- three appraisals (11 G each, 400→367 G).

Secret Realm in-game runs were on the earlier `833b4059` build. Everything else is CPU-level or static.

## 7. Process lessons [fmt]

**Emulation and assembly**
- Run Unicorn with `UC_CPU_ARM_TI925T`; the default model accepts Thumb-2. A Keystone `add r5,#24` became `ADD.W` and caused a black screen; write `adds`.
- Audit reachable code for ARMv4T only (no BLX/CBZ/IT/REV; NOP is `0x46C0`). Don't disassemble literal pools as code.
- Invalidate Unicorn's translation cache after patching executed code (`ctl_remove_cache`). Count real hook executions, not assertions.

**Calling convention and hooks**
- Check SP alignment at every hook. A 348-byte native frame enters callbacks with SP%8 == 4; a typed stub hid it.
- Preserve NZCV, IRQ state and R12 across hooks. Exact-LR dispatch once changed the carry flag.
- Hook techniques:
  - The 16-byte veneer `push {r3}; ldr r3,=t; mov ip,r3; pop {r3}; bx ip; nop; .word t` preserves R0–R11, LR and NZCV.
  - Trampolines replay the displaced prologue.
  - Exact-caller-LR dispatch avoids widening a hook.
- Never put a 4-byte BL where a live native branch targets its second halfword.

**Porting and evidence**
- Map CN→US addresses with unique exact-byte anchors and BL-masked windows plus literal filters. Deltas vary per site; 36 boss call sites had 28 distinct deltas.
- If the target ROM lacks a branch, port the whole branch; the one-byte CN fix doesn't apply.
- A weak default symbol passed CPU tests but left a menu missing in-game. Surviving bytes don't prove the code runs.
- Final bytes beat prose. Screenshot filenames are not evidence of screen contents.
- Use ownership receipts for emulator runs. Never count an emulator-state transfer as cold-boot evidence.

## 8. Issues found in our own docs (not yet fixed)

- `Docs/Analysis/STRUCTURE_FIELDS.md:15-16` says the item record has a u8 type at `+0x00` and a u8 code at `+0x01`. The pack, `Docs/ITEM_AND_WAREHOUSE.md` and `Docs/ROM_STRUCTURE.md` all say u16 at `+0` and u16 at `+2`, and starter ids reach 407. STRUCTURE_FIELDS is very likely wrong.
- The base-folder CN docs call `[0x03003580]` "current PLAYER". That is correct for CN/JP only; EU has no such literal.
- Expansion fill differs: the pack pads to 32 MiB with 0x00, our EU tooling with 0xFF. Free-space claims depend on the fill.
