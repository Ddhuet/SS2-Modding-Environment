# How gold works at the blacksmith (fuse +X formula)

Research notes, 2026-10-12. Addresses are for the CN baseline and English ROM; they are identical
in this code. The tables are byte-identical in EU (`0x084ECB30`/`0x084ECB84`) and US
(`0x08541960`/`0x085419B4`), and the EU routine is the same code shifted (see `guaranteed_fusing.md`).

Evidence: `static_verified` (disassembly of the fuse routine `0x080845DC..0x080850B0`) and
`runtime_verified` for the formula. That means 32 synthetic configurations × 2000 seeds of the
real routine: `Patches/guaranteed_fusing/probe_fuse_gold.py`, results in
`Docs/mods/evidence/fuse_gold_probe.json`. The exact model `Patches/guaranteed_fusing/fuse_plus_model.py`
matches every measured distribution to within sampling noise (total variation 0.01–0.03).
**Not verified:** that the field the probe writes (materials block `+0x34` = forge UI `[0x03006500]+0x138`)
is the gold typed at the blacksmith. The code uses it as gold (it is added to the item worths and
split into digits by the entry screen), but no real forge screen has been traced.

## Short version for players

1. **Gold gives two separate bonuses to +X.** Both are rolls, so it is never guaranteed.
2. **The sweet spot is about 100,000–150,000 gold.** That roughly doubles the average +X
   (1 gold ≈ +1.2 on average; 100,000 ≈ +2.6; up to ≈ +3.1 for a smith who likes you, see below).
3. **More is not better.** At 300,000 gold or more the main gold bonus becomes **zero**,
   and the result is *worse* than paying 1 gold for the most likely outcomes.
4. **30,000 gold barely helps:** average +1.5 vs +1.2, with +3 or better 17% vs 10%. That matches
   the common experience.
5. **Gold also buys the smith's goodwill** (a hidden per-character number, starts at 20000,
   max 65535). Every fuse adds `gold/10` plus a tenth of the materials' worth, minus a tenth of the
   result's worth. Goodwill raises the chance that a recipe works (`(goodwill+1)/65536`: 30.5% at
   the start, 100% at max) and widens the +X roll. So big payments mostly pay off on **later** fuses.

## Exact formula

Inputs: three slots (materials or equipment), gold `G`, goodwill `L` = `[player]+0x74`.

**Points.** For each slot:
- Equipment (types 2–5): its own +X.
- Material (type 9): stored value ÷ k, where k is chosen by the material code: Mithril ÷20,
  Orihalcon ×8/100, Dark Matter ÷10, Bone/Scale ÷100. Stored value = displayed ÷ 2.
  Game quirk: one k is used for all three slots, picked from the first entry of the routine's
  random shuffle of the slots (code reads `[sp+2]` at `0x08084E18`). Mixed stacks therefore score
  inconsistently. Confirmed only by the fit of the DM/Scale/Scale runs.

`P = points₁ + points₂ + points₃ + ⌊G / 10000⌋ + 1`

**Roll 1 (base).** `n = min(((P × L) >> 18) + 3, 20)` and `r₁ = rng % (T1[n] + 1)`, with
T1 = `0x084FA6AC` = 24325, 39528, 49030, 54969, 58681, 61001, 62451, 63357, … (21 entries, each step
about ×0.625 of the last). The base is `i` where `T1[i-1] ≤ r₁ < T1[i]` (`i < n`). The top slice
`r₁ ≥ T1[n-1]` stores nothing, which leaves +0. With P small and L = 20000, n = 3, so the
base is +0 55%, +1 28%, +2 17%. Gold adds 1 to P per 10,000, but that only raises n by 1 per
≈131,000 gold at L = 20000 (≈40,000 at L = 65535).

**Roll 2 (gold).** `r₂ = G + rng % 200000`, then the bonus from T2 = `0x084FA700`:

| r₂ | bonus |
| --- | --- |
| < 99,999 | +0 |
| 99,999 – 188,505 | +1 |
| 188,506 – 243,822 | +2 |
| 243,823 – 278,395 | +3 |
| 278,396 – 299,999 | +4 |
| ≥ 300,000 | +0 (no bucket matches) |

`+X = min(base + bonus, 20)`. Some weapon results are forced to +0 (`0x08084F36..58`: weapon whose
record `+0x174` = 9).

**Goodwill update** (`0x08085044..A0`, after every fuse):
`L ← clamp(L + ⌊(W₁+W₂+W₃+G)/10⌋ − ⌊W_result/10⌋, 0, 65535)`, where `W` is the per-item value
function `0x0805B4C0` (not yet mapped to a shop price). Verified: for the same seed and the same
result, raising G raises L by exactly `⌊G/10⌋`. Initial value 20000 is written at `0x080134C4`
(a per-character init routine, static candidate). Persistence across saves is not verified.

L is also compared with `rng & 0xFFFF` at `0x08084BA4` and `0x08084C56`, which pick the result's
byte `+7` and its special field `+4` (better table when the roll passes). These are not decoded further.

## Expected +X with plain materials (points 0), from the model

| Gold | L = 20000 (start) | L = 65535 (max) |
| --- | --- | --- |
| 1 | +1.18 (+3 or more: 10%) | +1.18 |
| 30,000 | +1.48 (17%) | +1.48 |
| 100,000 | +2.57 (48%) | +3.04 |
| 130,000 | +2.68 (best) | ≈ +3.1 |
| 150,000 | +2.58 | +2.95 |
| 200,000 | +2.28 | +2.85 |
| 300,000 | +1.10 | +1.57 |
| 1,000,000 | +1.57 | +1.66 |

Run `python3 Patches/guaranteed_fusing/fuse_plus_model.py [L]` for full distributions.
