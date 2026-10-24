# summon_ai: the Archer's pet hunts with the enemy_pathing field

Definition `Patches/Definitions/Custom/summon_ai.json` (8 writes, built by `Patches/summon_ai/build.py` from
`Patches/summon_ai/src/summon_ai.c`, which includes `Patches/enemy_pathing/src/pf_core.h`). Shipped as
`../SS2_Web_Patcher/patches/summon_ai.bps` (English ROM → English+summon_ai, 7,714 B) with
`summon_ai.txt`. **Requires `enemy_pathing`**: without it every hook resumes the vanilla code.

Status: `runtime_verified` for the scenarios below. `user_accepted`: not yet.

Test ROM (the user's `Patches/summon_ai/Starting_Info/` ROM + summon_ai) = `ss2tools build` of CN baseline + translation +
waitcnt_fix + walk_angles + enemy_pathing + persistent_archer_and_dark_mage_summons + summon_ai =
the web patcher stacking those five files (checked with `patcher.js` in Node). All three give
sha256 `900bba3738db77dcd1bb2d5e…` (`Patches/summon_ai/test.gba`).

## What changes for the player

All summon levels of the Archer (squirrel, pixie, …: they all run the coroutine `0x080717B4`).
Single player, owner = the local player, enemy targets only; everything else is vanilla.

- **Orbit** as vanilla, but after a return the pet waits 15 frames (vanilla 60) before looking
  for a target, and it circles where you are now (vanilla circled your old spot). If you walk
  more than 56 px away it walks back to you by the path.
- **Target**: the on-screen enemy closest to *you by walking distance* (field distance), alive,
  reachable within 60 cells (480 px) of path, and not one the pet gave up on in the last 300 frames.
  Enemies behind a closed door are unreachable, so the pet ignores them (vanilla hit them through it).
- **Chase**: straight at the target when its cell sees the target's cell; otherwise along the
  target's own downhill path to you, walked backwards (see Design). The pet never enters a closed
  cell or cuts a wall corner (vanilla walked into walls and stuck there).
- **Fight**: one attack per 60 frames (attack range as vanilla: 7 px, or the ±7 px box), then it
  stays on the same target and follows it.
- **Returns to you when**: the target dies or leaves the screen entirely (feet more than 12 px past a
  side, above the top edge, or 24 px below the bottom edge), it turns out unreachable (complete field,
  no path) or 150 frames pass without getting 4 px closer (straight or along the path), or **you were
  hurt** during the fight and, after its next attack, another enemy is now the closest to you
  (it comes back, then picks that one).
- **Return**: by your field, like an enemy, not through walls. If that makes no progress for 90
  frames it flies straight as vanilla (safety net).
- Hit count and the summon's end conditions are unchanged (with `persistent_archer_and_dark_mage_summons`
  the pet stays forever; without it, it still ends after its hits).

## Vanilla summon (English ROM = CN baseline addresses; traced in mGBA)

Coroutine `0x080717B4..0x08072AA6`, one task per summon. It is spawned at `0x0807438A` with a
`0xC00` B heap block as its stack (`malloc 0x08001494`, sp = base + `0xBFC`). It yields with
`0x080003F0`, which saves lr to task `+0xC`, so the resume address tells the phase
(`Patches/summon_ai/tools/scommon.py summon_tasks`). The task list head is `[0x030012D8]`, linked by `+0`.

| Phase | Yield | Loop | Notes |
|---|---|---|---|
| orbit + search | `0x08071F32` | `0x08071B86` | wait counter F+0x88 (target ≤ 0x3C: wait; centre F+0x90/94 only updated after); search every 6 frames (F+0x8C) |
| chase | `0x08072592` | `0x08072070` | contact scan `0x080720A8`; end checks `0x0807227E`; dist ≤ 7 → hit; step 3 px, collision `0x0800A950` on the **current** cell (that is how it gets into walls); 121 blocked frames → give up `0x0807203C` |
| hit | `0x080726B4` | `0x080725BA` | damage `0x080690A0(x, y, task)`; then hits −1 (`0x08072788`, the persist byte) |
| return | `0x08072A02` | `0x080727AC` | entry `0x0807279C` (hits = 0 → end `0x08072A70`); 3 px straight, no collision; ≤ 7 px → `bl 0x08071B76` (orbit) |

Frame F = the routine's sp (task sp + 0x30 while it is yielded):

| Field | Meaning |
|---|---|
| F+0x4C | task descriptor (key for the mod's state) |
| F+0x50 | target enemy pointer (found by id at chase start, `0x08071FF8`) |
| F+0x58 | owner actor `0x03003D80 + owner*0x154` |
| F+0x60 | target id (enemy `+0x02`; `0xFF`/`0xFFFF` none; ≤ 3 a player, in PvP) |
| F+0x68 | hits left |
| F+0x70 | x (24.8); **y is r10**; heading 0..255 is r8; r9 = owner*5 |
| F+0x74 | facing 0..7 = `[0x0843EED0 + (heading >> 4)]` |
| F+0x7C / F+0x80 | local player / owner index (owner > 3: an enemy's summon) |
| F+0x48/0x4A, F+0x9C/0xA0 | s16 dx/dy to the goal, and pointers to them (draw calls) |

Search `0x08074664(0x20, 100)`: nearest live enemy (used, `+0xC` ≠ 0xB, `+0x5C` HP ≠ 0, `+0x1DC` ≠ 0)
within 100 px of the owner; the angle test is always true. Non-local owners use `0x080748D0`.
Collision probe `0x0800A950(x, y, 0)`: class (bits 8..11) | bit12 << 4 | 1 for the barrier byte;
passable if `(f & 0xF) == 0` or `f & 0x10`. Other facts used: BIOS ArcTan2 `0x080B9A80`, Sqrt
`0x080B9A9C`; sin table `0x080BAC14` (s16 ×256, 256 steps, cos = +0x40); link flag
`[0x03002870] & 2`; camera (screen top-left px) map struct `0x03003210 + 0x7C/+0x7E`; player HP
actor `+0xCC`.

The US handoff (`Other_Modders/Nell/HANDOFF_ARCHER_SUMMON.md`) maps cleanly: US `0x08070EC8` = CN
`0x080717B4` (+0x8EC there), US persist byte `0x71E70` = CN `0x08072788`. Note the CN
`Docs/Analysis/FUNCTION_INDEX.md` names this "type 20"; it is the Archer's.

## Design

Six hooks, each `bl stub` replacing two instructions (or one bl) at a site where no flags and no
low register except the ones the C sets are live, and no branch targets the second halfword
(checked). Stub (`0x080BB238 + 8n`): `ldr r3,=sm_trampN|1; bx r3`. `sm_trampN` puts N in r3;
`sm_tramp` saves r0–r3, r8, r10, r9 in R[], calls `sm_hook(N, F, R)` and jumps (bx ip) to the
returned address with the registers restored from R[].

| N | Site | Replaced | Mod | Vanilla resume |
|---|---|---|---|---|
| 0 | `0x08071B86` orbit step | `ldr r0,[sp,#0x88]; adds r3,r0,#0` | leash → return; wait ≥ 0x3C−15, centre = owner | r0 = r3 = counter, `0x08071B8A` |
| 1 | `0x08071BE2` search | `bl 0x08074664` | `closest()` | original call, `0x08071BE6` |
| 2 | `0x080720A8` contact scan | `movs r2,#0; mov sb,r2` | skip the any-enemy contact scan → `0x0807227E` | r2 = r9 = 0, `0x080720AC` |
| 3 | `0x08072376` chase step | `cmp r0,#7; bhi` | `chase()` → hit `0x08072598` / draw `0x08072486` / return `0x080727A4` | `0x0807237C` or `0x08072598` |
| 4 | `0x0807279C` return entry | `ldr r2,[sp,#0x68]; cmp r2,#0` | after an attack: keep fighting → `0x08072070`, or return | `0x080727A4` / end `0x08072A70` |
| 5 | `0x080727AC` return step | `ldr r0,[sp,#0x80]; cmp r0,#3` | `home()` → orbit `0x08071B76` / draw `0x080728EA` | `0x080727B2` / `0x080727DC` |

- **Shared field.** The pet calls the same one-slice-per-frame service as `pf_approach` (same
  seed rule: owner cell, rebuild after 2 cells or 90 frames), so while a summon is out the
  field is kept fresh even if no enemy needs it. No second map.
- **Chase without sight** (`chase_aim`): walk the target's downhill chain (≤ 120 cells) toward
  the owner, keep only the last 7 cells in a ring buffer, find the chain cell nearest the pet, and
  aim at the cell up to 6 steps before it (toward the target) that the pet's cell can see. If it
  sees none, it rejoins the chain via the owner (`home_aim`, the enemy steering). Path length for
  the progress check = aimed cell's chain index + the straight part; when rejoining via the owner,
  field(pet) + field(target). Aim and sight are cached; recomputed every 4 frames or when the
  pet's or the target's cell changes.
- **Line of sight to a target on a slope cell**: the target's cell is closed in the field, so its
  open 4-neighbours count too (`los_target`); within 16 px the pet aims straight at it, and within
  12 px it moves without collision (the last cell).
- **Movement** (`step_toward`): ArcTan2 heading and the game's sin table, 3 px/frame; a step into a
  closed cell slides on one axis; diagonal cell changes need both side cells open; a pet already
  inside a wall moves freely (its aim is an open cell). Passability = the summon's own probe rule.
- **State**: `struct sm` (48 B) at `PF_BASE + 0xC0` = `0x0203D0C0`, the unused end of
  enemy_pathing's 0x100 control block (`struct pf` is 0x74 B). Keyed by the task descriptor
  (reset on a new summon), magic `SMA1`. Owner HP is sampled every hook call: a drop sets `hurt`,
  cleared when a target is picked and when it is checked after an attack.
- **Safety**: only when `PF->magic` is already there (enemy_pathing booted, or adopted the RAM in
  an old savestate) and `map_check()` passes. summon_ai never adopts RAM itself.
- **IWRAM BFS copy**: both mods copy 72 words from their own blob to `0x03007800` and check words
  0, 36, 71. The ARM loop is 68 words; summon_ai pads its blob with the 4 words that follow
  bfs_arm in enemy_pathing's shipped blob, so both leave the same copy (build.py asserts it).

## Allocations (owner summon_ai)

| Range | Size | Fill before | Contents |
|---|---|---|---|
| `0x080BB238..0x080BB267` | 48 B | zero | 6 far stubs |
| hooks `0x08071B86`, `0x08071BE2`, `0x080720A8`, `0x08072376`, `0x0807279C`, `0x080727AC` | 4 B each | code | `bl stub` |
| `0x09011000..0x09012D9F` | 7,584 B | zero | code (owned to `0x09012FFF`) |
| EWRAM `0x0203D0C0..0x0203D0FF` | 64 B | inside enemy_pathing's control block | `struct sm` |

Stack: `sm_hook` + callees use ~200 B of the summon task's 3 KB stack (no large arrays).

## Evidence

Tools (`Patches/summon_ai/tools/`): `scommon.py` (state loading, task walk), `run_summon.py` (per-frame log of
phase, pet, wall test, target, HP; `--keys` schedule; `--png` track), `events.py` (attacks, returns
with reason, owner hits), `batch.sh` / `walk.sh` (all states, vanilla vs mod), `dbg_hook.py`
(break at a stub), `tdis.py` (annotated disassembly; `Patches/summon_ai/dis_717b4.txt` is the routine),
`cast_probe*.py`, `find_camera.py`.

Runs: mGBA 0.10.5 headless, user states from `Patches/summon_ai/Starting_Info/` (squirrel, level 1). Vanilla = the user's
`Patches/summon_ai/Starting_Info/Shining Soul II (English)+4_patches.gba` (sha256 `5d5151ca…`); mod = that + summon_ai
(`900bba37…`). 900 frames each, no RAM writes. Cells: attacks / total enemy damage / frames the pet
stood in a closed cell.

| State | idle: vanilla | idle: mod | walking: vanilla | walking: mod |
|---|---|---|---|---|
| Open_Area_One_Enemy_Squirrel | 8 / 32 / 136 | 15 / 81 / 0 | 7 / 22 / 169 | 15 / 39 / 0 |
| Corridor_Two_Enemies_Squirrel | 9 / 44 / 0 | 11 / 81 / 0 | 9 / 44 / 23 | 12 / 63 / 0 |
| Dumb_Stuck_Wall | 6 / 32 / 64 | 10 / 56 / 0 | 2 / 17 / 437 | 10 / 56 / 0 |
| Stuck_Wall_2 | 8 / 46 / 14 | 15 / 111 / 0 | 10 / 54 / 22 | 15 / 88 / 0 |
| Stuck_Wall_3 | 8 / 35 / 169 | 15 / 87 / 3 | 3 / 12 / 454 | 15 / 101 / 3 |
| Stuck_Wall_4 | 1 / 1 / 38 | 1 / 1 / 0 | 0 / 0 / 267 | 1 / 1 / 0 |
| Through_Wall | 3 / 14 / 414 | 11 / 49 / 0 | 2 / 7 / 393 | 12 / 55 / 0 |
| Bottom_Of_Wall | 2 / 11 / 432 | 9 / 74 / 0 | 7 / 43 / 28 | 9 / 74 / 0 |

Walking = `walk.sh` schedule (R, L, D, U, LD, RU with pauses). Stuck_Wall_4 has one enemy with 1 HP:
the mod kills it with its first attack at f30 (vanilla: f~400 idle, never while walking).
The 3 wall frames are the last-cell move onto a target standing on a slope cell.

- **Returns, by reason** (`events.py`, idle runs): `gone` after kills in every state; `rescue` in
  Stuck_Wall_2 (f819, then it picks the enemy that hit you) and Stuck_Wall_3 (f397, f532);
  no `stuck` give-ups left after the path-progress fix.
- **Ready_To_Cast.ss0** (hold A 100 frames = squirrel; 160+ = the next summon, same routine): vanilla
  stands on the steps hitting the enemies behind the closed door (59 damage in 1000 frames); the mod
  ignores them (unreachable) and circles the player.
- **Through_Wall track** (`Patches/summon_ai/runs/through_wall_*.png` from an earlier build): the pet goes down
  the corridor, round the bottom and up to the enemies, then walks back the same way.
- **Cost** (`Tools/perf/build/ss2prof`, 900 frames): summon_ai code 2.7–4.8k cycles/frame average
  (≤ 1.7% of 280,896), extra BFS 0.1–0.8k; busiest frame 231k (vanilla 215k) in Through_Wall;
  no lag frames.
- Static: `mod_conflicts.py --defs Patches/Definitions/Custom` ok (code:7, expansion:1); `combine_patch.py` with
  all 18 official singles + 8 custom mods: no overlap, ss2tools build ok.

not_run: real hardware; multiplayer (the mod is off when the link flag is set); an enemy-owned
summon; boss fights; map changes / town / death while a summon is out (vanilla end checks are
untouched); summon levels above 2; cold boot with summon_ai but without enemy_pathing (static:
`active()` only reads `PF->magic`).

## Tuning knobs (`Patches/summon_ai/src/summon_ai.c`)

`ORBIT_WAIT`, `ORBIT_LEASH`, `ATTACK_EVERY`, `CONTACT`, `CHASE_SPEED`, `HOME_SPEED`, `CHASE_STUCK`,
`SKIP_FRAMES`, `HOME_STUCK`, `AIM_EVERY`, `CHAIN_MAX`, `LOOK`, `MAX_PATH`, `SCREEN_SIDE`,
`SCREEN_BELOW`. Rebuild: `python3 Patches/summon_ai/build.py --rom Patches/summon_ai/test.gba` (writes the definition),
then `python3 Tools/Scripts/make_bps.py summon_ai` and `python3 Tools/Scripts/make_index.py` in
`SS2_Web_Patcher/`.

## Dead ends and lessons (so nobody repeats them)

- First contact rule only used the 7 px distance: a target on a slope cell 8 px away was never hit
  (vanilla also uses a ±7 px box), and line of sight to its closed cell always failed, so the pet
  aimed at its own cell and froze (Stuck_Wall_4).
- Chase progress by straight distance gave up on long corridor detours (Through_Wall). The nearest
  chain cell measured *through a wall* gave a bogus short path length; only a seen chain cell counts.
- "On screen" by the feet with an 8 px margin dropped targets whose sprite was still visible at the
  bottom edge (sprites stand ~24 px tall; the camera keeps the player 96 px from the top).
- `Patches/enemy_pathing/src/enemy_pathing.c` at HEAD no longer compiles to the shipped blob (clang 23.1.3 gives
  3,854 B vs the 3,916 B from an older clang). The pf_core.h split is identical under the same compiler.
  Rebuilt and reshipped as `enemy_pathing.bps` on 2026-10-23 (A/B identical; see `enemy_pathing.md`).
