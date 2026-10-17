# waitcnt_fix: run the cartridge at the wait states the developers chose

Definition: `patches/custom/waitcnt_fix.json`. Shipped as `Patch_Manager/patches/waitcnt_fix.ips`
(27 B, sha256 `0f985881…73ce4`, made against the English ROM `ss2-en-phase1d.gba`).
English + fix ROM: sha256 `86400c4a1563306df814352e41ece947e6b3a871ad61cba2fe00cfc660c37576`
(differs from English phase1d in 14 bytes, `0x61C..0x629`). Background and measurements:
`GAME_PERFORMANCE.md` (R1).

## The bug (CN baseline = English = modpack; same bytes in all three)

Boot init `0x08000618`:

```
0800061C  ldr  r1,=0x04000204      ; WAITCNT
0800061E  ldr  r2,=0x4014          ; ROM 3/1 wait states + prefetch buffer
08000620  adds r0,r2,#0
08000622  strh r0,[r1]
08000624  movs r0,#0xE0
08000626  bl   0x080B9A98          ; RegisterRamReset(0xE0): bit 7 also clears WAITCNT
```

RegisterRamReset runs after the write and puts WAITCNT back to 0 (4/2 wait states, no prefetch).
The flash library later does `WAITCNT = (WAITCNT & 0xFFFC) | 3` (`0x080B9FD6` and others), so the
game runs with `0x0003` forever. Every instruction and every data read from ROM pays the slowest
timing. Stepping in mGBA shows `0x4014 → 0` at the SWI and `0 → 3` on frame 6 of a cold boot.

## The fix

One write of 14 bytes at `0x0800061C`, which swaps the order:

```
0800061C  movs r0,#0xE0                      e020
0800061E  bl   0x080B9A98   ; RegisterRamReset  b9f0 3bfa
08000622  ldr  r1,=0x04000204 (0x08000714)   3c49
08000624  ldr  r2,=0x4014     (0x08000718)   3c4a
08000626  strh r2,[r1]                       0a80
08000628  nop                                c046
```

* Same literal pool; no new space is used and there are no allocations.
* r1 and r2 are reloaded at `0x0800062E`/`0x08000632` and r0 at `0x08000634` before any use, so the
  register state after the block does not matter.
* The flash library then ORs in its SRAM bits: WAITCNT ends at **`0x4017`**.
* The region `0x08000000..0x09FFFFFF` (WS0) covers every mod's code in `0x09xxxxxx`, so injected
  mods get faster too.
* The other WAITCNT writer at `0x08FE00xx` is dead IS-AGB debugger code, never executed (see
  `GAME_PERFORMANCE.md`).

## Checks

* Preimage matches on the CN baseline and English phase1d.
* `mod_conflicts.py --defs patches/custom`: ok (code:1).
* `combine_patch.py` with all 18 official singles + every custom mod: no overlap.
* `ss2tools build` from the CN baseline: ok, 14 bytes differ from English.

## Runtime (mGBA 0.10.5, HLE BIOS; `runtime_verified` for these scenarios only)

| Scenario | English | English + fix |
|---|---|---|
| Cold boot from `workspace/input/光明之魂2.sav` → title → file select → inn → ring menu → Save (spam A) | WAITCNT `0x0003` at every checkpoint | `0x4017` at every checkpoint (frame 540 on) |
| Exported save after that run | sha256 `5afaf155…` | **byte-identical** (`5afaf155…`); differs from the fixture, so the flash write happened |
| Reboot from the exported save → inn | loads | loads, WAITCNT `0x4017` |

Screens differ only in animation phase: loads finish in fewer frames, so later animations are a few
frames ahead. Script: `save_ab.py` (session scratch; the sequence is `smoke_phase1.py`'s boot +
`START RIGHT RIGHT A DOWN A` + 14× `A` every 90 frames).

Performance (`tools/perf/ss2prof`):

| Run | Average busy | Peak | Lagged frames |
|---|---|---|---|
| 9-patch modpack, cold boot to inn (1,920 frames) | 104,909 | — | 31 |
| 9-patch modpack + fix, same | 81,338 | — | 24 |
| 9-patch modpack, `5_mobs.ss0` (300 frames) | 194,651 | 230,661 | 0 |
| same, WAITCNT poked to `0x4017` (what-if) | 128,430 | 154,817 | 0 |

## Things to know

* **Savestates keep the old value.** WAITCNT is a hardware register stored in `.ss0` states, so a
  state made on an unpatched ROM still runs at `0x0003` on the patched ROM until the game is reset
  (power cycle, soft reset, or start from the normal save). States made after a reset on the patched
  ROM carry `0x4017`.
* not_run: real hardware and flash carts, including saving. The setting is the one the developers
  wrote (and retail carts are rated for 3/1), but it has only been tested in mGBA.
* Lag that came from CPU load drops; the game's per-frame logic is unchanged (identical final frame
  in the 5_mobs what-if; identical saves above).
