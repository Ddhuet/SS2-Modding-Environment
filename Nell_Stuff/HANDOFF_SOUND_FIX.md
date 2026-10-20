# Shining Soul II (USA) Enhanced Edition – shared-warehouse exit sound fix

## Status
Tested in-game (mGBA, 2026-10-19): the glitch noise when leaving the shared warehouse is gone.
Only the warehouse exit was tested. Normal game saves are not changed by this patch.

## Target ROM
Shining Soul II (USA) Enhanced Edition, 32MB.
- Tested base CRC32 **75EB3809** -> patched CRC32 **4C1A110E**.
- `Shining_Soul_II_USA_Warehouse_Exit_Sound_Fix.bps` is locked to that exact base (BPS checks the CRC).
- For another build of the ROM with the same warehouse code, use
  `python apply_warehouse_exit_sound_fix.py <in rom> <out rom>`. It refuses to patch if the original call
  or the blank stub area is not where it expects.
- Test on a copy of your save. The patch only adds a sound-off call, but the exit does write the save.

## The problem
At character select, START opens the shared warehouse, and B leaves it and saves. Leaving makes a short, harsh glitch sound.

## Cause (measured)
All of the game's sound work runs in the VBlank interrupt handler (0x08001180 calls m4aSoundVSync 0x080B65AC and m4aSoundMain 0x080B6C6C). The sound DMA is hardware, so it keeps playing while that handler can't run. Without the handler it plays an old buffer and then past its end, which is the noise.

The warehouse exit routine (0x09F1814A) does this:
1. `bl 0x09F18804` loads the data.
2. `bl 0x09F19180` saves it, retried until it succeeds. The save first runs a bit-by-bit CRC32 over 0xCB0 bytes with interrupts off (loop 0x09FB83C2-0x09FB83EC, about 3 frames). Then come flash writes through the game's sector-write routine 0x08001B14, which also turns interrupts off (about 16 frames per sector in mGBA).
3. `svc 0` does a soft reset. The game reboots, and its boot code re-initialises the sound with interrupts fully off (about 2 frames).

The included logger (`sound_gap_logger.lua`) confirmed this. It reads the m4a SoundInfo each frame and logs the frames where the VBlank sound update did not happen, with PC / LR / stack.

## The fix
Mute the sound engine once, at the start of the exit. The game's own m4aSoundVSyncOff (0x080B7211) stops sound DMA 1/2 and clears the PCM buffer, so the stalls are silent. Sound stays off until the soft reset, and the boot code switches it on again (m4aSoundInit), so there is nothing to undo.

| File offset | Original | New | Meaning |
|---|---|---|---|
| 0x1F1814C (4 B) | `00 f0 5a fb` | `f7 f7 58 ff` | `bl 0x09F18804` -> `bl 0x09F10000` |
| 0x1F10000-0x1F10017 (24 B) | all `00` | `01 b5 04 4b 00 f0 04 f8 01 bc 08 f0 fb fb 00 bd 18 47 c0 46 11 72 0b 08` | stub, below |

Stub at 0x09F10000 (Thumb):
```
push {r0, lr}
ldr  r3, =0x080B7211      ; m4aSoundVSyncOff
bl   bx_r3
pop  {r0}
bl   0x09F18804           ; the original call, same r0
pop  {pc}
bx_r3: bx r3
nop
.word 0x080B7211
```
The free area used is part of a long zero run (0x1EE1FFF-0x1F17FFF). Full before / after disassembly: `disassembly_before_after.txt`.

## Files
- `Shining_Soul_II_USA_Warehouse_Exit_Sound_Fix.bps`: 75EB3809 -> 4C1A110E.
- `apply_warehouse_exit_sound_fix.py`: applies the same bytes to any matching build (Python 3, no extra modules).
- `disassembly_before_after.txt`: exit routine before / after, the stub, m4aSoundVSyncOff, the CRC loop.
- `sound_gap_logger.lua`: mGBA script (Tools > Scripting > Load script). It writes `sound_gap_log.txt` beside itself and is read-only.

## What did not work (for reference)
A first attempt muted only around the flash sector write (wrapping 0x08001B14 with m4aSoundVSyncOff / On). The noise stayed: the CRC32 before the writes and the soft reset after them were still unmuted (5 frames).

## Open
- Normal game saves also write flash with interrupts off, so they may have a smaller glitch. They have not been measured. Muting them would need a wrapper around 0x08001B14 that turns sound back on only if it turned it off itself, so that it does not undo this fix in the middle of the warehouse exit.
