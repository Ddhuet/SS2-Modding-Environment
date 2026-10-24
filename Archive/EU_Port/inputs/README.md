# Local game inputs

ROM files in this directory are private, ignored working copies. The normal
save below is a tracked test fixture. Never patch or save directly into either
ROMs or tracked saves; emulator sessions make isolated copies.

- `ss2-eu.gba`: supplied European AU2P ROM, 16 MiB.
- `ss2-eu.sav`: tracked 64 KiB EU test save, SHA-256 `c33cc290d3c44b977b2dc84fedd31539d48d7739252f2086f9c39196b63f45b7`.
- `ss2-cn-source.gba`: 16 MiB Chinese localization on AU2J, matching the old USA-port notes.
- `ss2-cn-baseline.gba`: exact 32 MiB modified Chinese baseline used by upstream patch definitions.

`profiles/` contains immutable ROM identities. `artifacts/` holds new patched ROMs and patch files; `runs/` holds isolated emulator copies plus tracked `.sav`, `.ss1` and `.ss1.json` test fixtures. ROMs remain excluded from Git; save and state fixtures are deliberately tracked at their existing paths. Generated run output stays ignored.
