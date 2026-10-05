# Local game inputs

These are private, ignored working copies. Never patch or save directly into them.

- `ss2-eu.gba`: supplied European AU2P ROM, 16 MiB.
- `ss2-eu.sav`: supplied 64 KiB EU save, SHA-256 `c33cc290d3c44b977b2dc84fedd31539d48d7739252f2086f9c39196b63f45b7`.
- `ss2-cn-source.gba`: 16 MiB Chinese localization on AU2J, matching the old USA-port notes.
- `ss2-cn-baseline.gba`: exact 32 MiB modified Chinese baseline used by upstream patch definitions.

`profiles/` contains immutable ROM identities. `artifacts/` holds new patched ROMs and patch files; `runs/` holds isolated emulator ROM/save copies. ROM/save files are not source code and must not be committed or included in a public distribution.
