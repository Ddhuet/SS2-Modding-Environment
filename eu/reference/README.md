# Chinese research archive

`upstream/` contains the supplied package's docs, function indexes/pseudocode, extracted reference tables and patch definitions. It is a local, ignored snapshot. It contains historical CN addresses and assumptions, not the active EU project's instructions.

The originals now ship in the parent repository. On a fresh clone, run
`python scripts/setup_reference.py` from `eu/` to recreate this snapshot.
The script verifies existing copies and refuses to overwrite differing files.

Start with `upstream/analysis/FUNCTION_INDEX.md` or search a mechanic:

```sh
rg -n -i 'counter|forging|warehouse' reference/upstream/docs reference/upstream/analysis
```

For a Chinese patch port, start with the exact definition in `upstream/patches/definitions/` and follow `docs/PORTING.md`. The exact source ROM copies and profiles are available locally. For ordinary EU skill-refund work, read the short EU audit rather than the entire archive.
