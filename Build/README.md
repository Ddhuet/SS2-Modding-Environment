# Build

Git-ignored scratch for generated files; everything here except this README is disposable and can be
regenerated. Typical contents:

- `ss2-en-phase1.patch.json`: the translation's write set, needed by `mod_conflicts.py` and
  `combine_patch.py`. Generate it with `Tools/.venv/bin/python Tools/Scripts/make_english_patch.py`
  (needs the CN baseline and US ROMs in `ROMs/`).
- Test ROMs (`make_bps.py --rom-out Build`, `--english-out Build/en.gba`).
- `align_cn_us.json` from `Tools/Scripts/align.py`.
- `runs/`: emulator run folders from the smoke/test scripts.
