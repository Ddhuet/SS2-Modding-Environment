# guaranteed_fusing (CN baseline / English ROM)

Port of the EU mod `Archive/EU_Port/patches/guaranteed-fusing-recipes.json` (audit: `Archive/EU_Port/docs/fusing-audit.md`).
When the blacksmith's three materials match a recipe, the fuse always uses that recipe's table
instead of passing a ~30% roll first. Combinations with no recipe are unchanged.

- Definition: `Patches/Definitions/Custom/guaranteed_fusing.json` (stage `static_candidate`).
- One write: `0x080846A5` `D9` → `E0` (`bls 0x080846A8` → `b 0x080846A8`).
- Allocations: none.
- Ship: `Patch_Manager/patches/guaranteed_fusing.ips` (made against the English ROM, 1 byte).

## Mapping EU → CN (`static_verified`)

The whole forge code block is shifted by **+0x1C0** (EU → CN).

| Role | EU | CN baseline (= English ROM) |
| --- | --- | --- |
| Recipe matcher (returns id 1..0x18, 0 = none) | `0x08084200` | `0x080843C0`, byte-identical over `0x21C` bytes |
| Fuse result routine (`r0` = 3×16 B materials, `r1` = output) | `0x0808441C` | `0x080845DC` |
| Recipe gate `(rng & 0xFFFF) <= [player]+off` | `0x080844D4..E6` | `0x08084694..A6` |
| Gate branch patched | `0x080844E5` | `0x080846A5` |
| Random generator (fallback) | `0x0808481C` | `0x080849DC` |
| Player pointer literal / threshold field | `0x030034E0` (literal at `0x0808450C`), `+0x6C` | `0x03003580` (literal at `0x080846CC`), `+0x74` |
| RNG function / state | `0x080008C8` / `0x03001318` | `0x080008C8` / `0x030013B8` (literal at `0x08000938`) |

The fuse routine differs from EU only in BL offsets, jump-table entries (+0x1C0), RAM literals
and the player field offset. The English ROM equals the CN baseline over `0x08084600..0x080849F0`,
so the translation does not touch this code. `mod_conflicts.py`: `ok`. `combine_patch.py` with
the translation plus all 18 official singles: no overlap (4385 writes). `temple_soul_fusion_rework`
writes only data at `0x084F95xx..0x084F98xx` and does not touch this code.

## Runtime A/B (`runtime_verified`, synthetic call)

Script: `Patches/guaranteed_fusing/test_guaranteed_fusing.py`; results in `Docs/mods/evidence/guaranteed_fusing_ab.json`.

```
Tools/.venv/bin/python Tools/Scripts/test_guaranteed_fusing.py ../Build/ss2-en-phase1d.gba ../Build/ss2-en+guaranteed_fusing.gba ../Savestates/Dragon_JIC.ss0 ../Docs/mods/evidence/guaranteed_fusing_ab.json 300
```

- ROMs: English `ss2-en-phase1d.gba` (SHA-256 `4343a9c7…53cb`) vs English + mod
  `Build/ss2-en+guaranteed_fusing.gba` (SHA-256 `cf829625…b4e5`). The two differ only at `0x846A5`.
- Start state: user state `Savestates/Dragon_JIC.ss0`. It runs to `0x080002F2` (System-mode Thumb, a running
  task). From there it calls the real `0x080845DC` with diagnostic RAM/CPU writes: material records at EWRAM
  `0x0203F100`, output at `0x0203F200`, stack `0x0203F000`, CPSR `0xFF`, and the RNG state seeded
  from `random.Random(1234)`. The inputs are the stored records captured at the EU fuse entry from the
  user's EU fixtures `three_scales` (Scale ×3, values 3/50/55) and `dm_scale_scale`.
- The gate threshold `[0x03003580]+0x74` was 20000 (30.5%) at every call. It is the smith goodwill value; the routine raises it after each fuse, see `Docs/mods/fusing_gold.md`.

| Case | English | English + mod |
| --- | --- | --- |
| Three Scales (recipe `0x18`, same as EU) | 100/300 Lizard, 200 random | **300/300 Lizard** (Gloves 114, Armor 71, Helm 69, Shield 46) |
| Dark Matter/Scale/Scale (recipe 0) | random | identical to English on all 300 seeds |

All 100 English seeds that produced Lizard gave the same piece with the mod. The RNG draw is kept,
so later draws are unchanged.

## Not yet tested

- A real fuse through the blacksmith menu on the English ROM. No CN/English savestate at a blacksmith exists yet.
- Grade 2/3 and order-sensitive recipes, grade-0 Bone/Scale matches, and normal-save persistence
  (the mod does not touch saved state).
- `user_accepted`: not yet.
