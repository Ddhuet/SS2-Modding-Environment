# no_sp_regen: no passive SP regeneration

Characters no longer regain SP over time. SP still comes back from items, level-ups,
`town_return_heal` and anything else that sets it explicitly. The MP-regen skill is not handled
separately (the user will change those skills later); with this patch it also regenerates nothing,
because the skill only shortens the same timer.

Patch: `Patch_Manager/patches/no_sp_regen.bps` (English) and `cn/no_sp_regen.bps` (CN-compatible).
Definition: `Patches/Definitions/Custom/no_sp_regen.json`. No allocations.

## How SP regen works (English ROM = CN baseline here)

- Current SP is stored **×10** as a halfword at actor `+0xCA` (actor 0 = `0x03003D80`); the HUD shows
  `value/10`. (US is `+0xCE`.)
- The regen tick is in the per-frame player update around `0x0800D8D4..0x0800D922`:
  a threshold is computed (`0x080BA8A4` on base + skill level from `0x0801DEB0(…, 7)` ×100 + 200),
  a frame counter at `[sp+0x198]` is incremented, and once it reaches the threshold it is reset and
  `0x0800D908..0x0800D922` does `SP += 10`, clamped to max SP (pointer at `[sp+0x1B0]`).
- Found by single-stepping from `Savestates/SP_Regen.ss0` until actor `+0xCA` changed
  (store at `0x0800D90E`, `runtime_verified`).

## Write

| Address | Before | After | |
|---|---|---|---|
| `0x0800D90C` | `0a30` `adds r0,#0xa` | `0030` `adds r0,#0` | regen adds nothing; counter, store and clamp unchanged |

## Tests

`Tools/.venv/bin/python Patches/no_sp_regen/test.py` (state `Savestates/SP_Regen.ss0`: Warrior at
0/10 SP in a safe spot, 1200 frames, no input):

- English ROM: SP×10 goes 0 → 10 at frame 22, then +10 every 236 frames; 5/10 on the HUD at the end.
- English + no_sp_regen: stays 0 all 1200 frames; HUD shows 0/10.

Status: `runtime_verified` (this scenario only); not yet `user_accepted`.
