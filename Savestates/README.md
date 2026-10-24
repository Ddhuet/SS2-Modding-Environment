# Savestates and saves

Test fixtures for the headless emulator (`Tools/emulator`, `Tools/Scripts/smoke_state.py`). Work
on copies: the emulator copies inputs into a fresh `run_dir` and never writes back.

- `Fixture_CN_English.sav`: the CN/English cold-boot save (was `workspace/input/光明之魂2.sav`).
  Used by `smoke_phase1.py`, `smoke_state.py` and most mod tests. Immutable.
- `*.ss0`: the user's desktop mGBA 0.10 states, taken on English builds (mostly
  `ss2-en-phase1d.gba`, some with mods). A state binds to the ROM it was taken on: replay it on that
  ROM or on the same ROM plus a mod that doesn't move RAM the state depends on. Name new states for
  the scene they capture (`Warrior_Pathing.ss0`, `5_Mobs.ss0`).

States made for one mod belong with that mod (e.g. `Patches/summon_ai/Starting_Info/`).
