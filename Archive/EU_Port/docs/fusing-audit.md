# Fusing (blacksmith forge) audit — EU

Patch: `patches/guaranteed-fusing-recipes.json` (stage `static_candidate`, one byte).
Build: `artifacts/ss2-eu-guaranteed-fusing.gba` / `.ips`.

## Mapped EU code (profile `ss2-eu`, sha256 `e5c64a17…467e0b2`)

| Address | Role | Evidence |
| --- | --- | --- |
| `0x0808441C` | Fuse result routine. `r0` = pointer to three 16-byte material records (slot order). | static + runtime |
| `0x0808445C`–`0x080844C4` | Three `rng % 3` draws build a random permutation copy of the materials at `sp`, `sp+0x10`, `sp+0x20`, which the random generator uses. | static + runtime |
| `0x08084200` | Recipe matcher. Returns recipe id 1..0x18 (0 = no recipe). Three scales returned `0x18`, Dark Matter/Scale/Scale returned 0. | static + runtime |
| `0x080844D4`–`0x080844E6` | **Recipe gate:** `(rng() & 0xFFFF) <= [player]+0x6C` or jump to the random generator `0x0808481C`. `[player]+0x6C` = 20000 in both supplied states (≈30.5%). | static + runtime |
| `0x080844E8`–`0x0808451A` | Grade = sum of material `+0x04` values: <100 → 0, 100–299 → 1, 300–499 → 2, ≥500 → 3. | static |
| `0x080847E4` | Grade 0: only recipe `0x17` (Bone set, table `0x084EC870`) and `0x18` (Scale set, table `0x084EC8B0`) have outputs; everything else goes to the random generator. | static |
| `0x08084524` | Grade 1–3: jump table indexed by recipe id − 1. | static |
| `0x080008C8` | Global RNG; state is 8 bytes at `0x03001318`. | prior audit |

Material records: `+0` type (u16, 9 = material), `+2` code (Dark Matter 2, Scale 4), `+4` value (u16). The value the game shows is a multiple of the stored value: scales displayed 6/100/110 are stored as 3/50/55, and Dark Matter displayed 1200 is stored as 60.

The RNG does not advance between frames on the fuse screen. A savestate therefore always produces the same fuse, which is why players have to make real saves and reload them.

## Patch

`0x080844E5`: `D9` → `E0` (`bls 0x080844E8` → `b 0x080844E8`). The RNG draw before it is kept, so all later draws (piece choice, bonuses) match the vanilla run on the same seed. No-recipe combinations never reach the gate and are unchanged. Grade-0 Bone and Scale recipe matches now always yield their grade-0 set.

## Runtime A/B (300 seeded fuses each)

Fixtures: user-supplied `docs/fusing_info/{three_scales,dm_scale_scale}.ss0`, bound under `runs/fusing-fixtures/`. The patched-ROM copies are labeled rebinds; the ROMs differ only at `0x844E5`. Seeds: `random.Random(1234)` written to the RNG state after load (run 0 keeps the state as saved). One A press, then 150 frames. The result is read from the inventory diff.

| State | Vanilla | Patched |
| --- | --- | --- |
| Three scales (stored 3/50/55, recipe `0x18`, grade 1) | 91/300 Lizard (30.3%), 209 random | **300/300 Lizard** (Gloves 106, Helm 70, Shield 67, Armor 57) |
| DM/Scale/Scale (recipe 0) | 202 Scale-family random + 98 other random | identical to vanilla for every seed |

For all 91 vanilla seeds that produced Lizard items, the patched ROM produced the same piece. Results: `runs/fusing-ab-*/results.json`.

Owner acceptance: see [USER_ACCEPTANCE.md](USER_ACCEPTANCE.md) (2026-10-07).

Not yet tested by automation: grade 2/3 recipes, order-sensitive recipes (e.g. Darkness), grade-0 Bone/Scale recipe matches and normal-save persistence.
