# Patch Manager

Tick the patches you want, press **Apply**, and get a patched English ROM. Start from the Japanese
ROM `Shining Soul II (Japan).gba` (SHA-256 `9f3e0d06…d17a`) with **English translation** ticked
(it is ticked by default and applied first), or from the English ROM `ss2-en-phase1d.gba`
(the translation is then skipped). Same rules and byte-identical output as the web patcher
(`../SS2_Web_Patcher`), so a patch tested here works there.

```sh
python3 patch_manager.py
```

It needs tkinter. On Arch/Omarchy, install it with `sudo pacman -S tk`.

**Windows:** `SS2_Patch_Manager.exe` is the same program with Python and Tk bundled (one file,
about 10 MB, nothing to install). Put it in a folder with `patches/` and `Input_ROM/`. It creates
any missing folders, including `Output_ROM/`, the first time it runs. Windows SmartScreen or an
antivirus may warn about an unsigned PyInstaller exe; choose "More info → Run anyway".
Rebuild it on Linux with `Patch_Manager/build_exe.sh`, which uses Steam Proton's Wine and Windows
Python 3.12.10 + PyInstaller 6.11.1 in a private Wine prefix, and runs `selftest.py` first.

- `patches/`: `.ips`, `.ips32` and `.bps` files. Add or remove files at any time; the list refreshes
  by itself. `english_translation.bps` turns the Japanese ROM into the English one. Every other
  patch is made against the English ROM; a mod `.bps` is decoded there and turned into a list of
  changed bytes, so it stacks and is conflict-checked like an IPS. `base_rom.sha256` lists the
  accepted input ROMs (Japanese, English), and the window warns when the input ROM is neither.
- `Input_ROM/`: the ROM to patch. The first `.gba` file is used, or pick one from the menu when
  there are several.
- `Output_ROM/`: results, named `<input>+<patches>_<timestamp>.gba`, each with a `.txt` that lists
  the input, the patches and their SHA-256. Nothing is overwritten.

`level_250` and `shared_character_warehouses_beta` write above 16 MiB, which standard IPS cannot
address. They are **IPS32** files (32-bit offsets). Flips and most other IPS tools can't read
them; this manager can. Any combination of the 18 patches is safe: none of them overlap. If two
selected patches ever write different bytes to the same place, Apply refuses and names them.

New mods arrive here as `.bps` from `translation/tools/make_bps.py` (see `AGENTS.md`). Test them
here, then copy them to the web patcher. `make_ips_set.py` (the old IPS set) is retired.

The Windows `.exe` predates BPS support; rebuild it with `build_exe.sh` before using it.

`weapon_balance_rework.ips` also renames "Combat Claw" to "Combat Knife", from
`translation/mods/ledger.json`.
