# Patch Manager

Tick the CN mod patches you want, press **Apply**, and get a patched English ROM.

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

- `patches/`: `.ips` and `.ips32` files. Add or remove files at any time; the list refreshes
  by itself. `base_rom.sha256` names the ROM the patches were made for, and the window warns
  when the input ROM differs.
- `Input_ROM/`: the ROM to patch. The first `.gba` file is used, or pick one from the menu when
  there are several.
- `Output_ROM/`: results, named `<input>+<patches>_<timestamp>.gba`, each with a `.txt` that lists
  the input, the patches and their SHA-256. Nothing is overwritten.

`level_250` and `shared_character_warehouses_beta` write above 16 MiB, which standard IPS cannot
address. They are **IPS32** files (32-bit offsets). Flips and most other IPS tools can't read
them; this manager can. Any combination of the 18 patches is safe: none of them overlap. If two
selected patches ever write different bytes to the same place, Apply refuses and names them.

To regenerate the folder from the repo (English ROM, 18 patches, self-check against the
combined builds), run:

```sh
python3 translation/tools/make_ips_set.py
```

`weapon_balance_rework.ips` also renames "Combat Claw" to "Combat Knife", from
`translation/mods/ledger.json`.
