# Build

Git-ignored scratch for generated files; everything here except this README is disposable and can be
regenerated. Typical contents:

- `ss2-en-phase1.patch.json`: the translation's full write list (holds the English text), needed only
  by `combine_patch.py`. Generate it with `Tools/.venv/bin/python Tools/Scripts/make_english_patch.py`
  (needs the CN baseline and US ROMs); that also refreshes the tracked
  `Tools/profiles/translation_spans.json` that `mod_conflicts.py` uses.
- `en.gba` and `cn_baseline.gba`: the English ROM and the CN baseline, cached by
  `Tools/Scripts/base_roms.py` (made from the JP ROM; re-hashed on every load).
- Test ROMs (`make_bps.py --rom-out Build`).
- `align_cn_us.json` from `Tools/Scripts/align.py`.
- `runs/`: emulator run folders from the smoke/test scripts.
