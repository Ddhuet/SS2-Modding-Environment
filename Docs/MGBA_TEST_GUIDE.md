# mGBA Manual Testing Guide



## Execution Responsibility Boundary



This distribution package now includes native headless mGBA for Windows: Python can launch it in a paused state on an isolated copy, advance natively frame-by-frame, run with frame limiting, send keypresses via an authenticated protocol, read ROM/RAM/registers, perform batch read-only/restricted dumps, take screenshots, save/load savestates, execute bounded PC tracking, and switch to GDB remote stub mode. See `Archive/Windows_mGBA/README.md` for usage instructions and limitations.

These capabilities are suitable for infrastructure self-checks, precise observation of known addresses, and reproducible scripts. They do not include reliable screen semantic recognition, nor can they replace manual character control and functional judgment. When an AI runs a script, it must log the ROM/SAV hashes, instance, commands, addresses, expected, and actual results; `PING`, launching, taking screenshots, or having no crash still do not equal completed functional testing.

When a precise starting point is needed, prioritize using `--paused`: first check the ROM/savestate and observation addresses at Frame 0, then step forward to an active screen using `frame 1`. In the paused state, do not wait for `WAIT` to complete; it only advances with real frames. Zero hits in PC tracking, successful batch reads, or a connectable GDB stub only prove their respective tool paths and do not automatically prove game mechanics.

The following complete functional testing must still be manually operated in mGBA by the responsible person. Once explicitly confirmed by the responsible person, record it as `user accepted`. If the responsible person only confirms startup, the title screen, or no crash, log only this limited scope. Results from automated scripts for a specific, clear observation point can be separately recorded as script dynamic observations, but must not automatically elevate the evidence level of the whole feature.

Before starting, you must run `verify_rom.py` to verify the actual input. The current patch definition only accepts the current SS2_SC baseline with SHA-256 `45ac38bb1bfba779592b5c79ce94982cf7c00fda5b3c5b84735e55c77d6fc989` and CRC32 `AFCFC96D`. The old clean baseline SHA-256 `12c0c32b…927ea380`, CRC32 `96BE2127`, and the earlier CRC32 `01444ADB` cannot be used as current defined inputs, nor can they inherit current acceptance conclusions.

## Before Testing



1. Back up the standard `.sav` file and test only on a copy.


2. Record the MD5, SHA-256, and CRC32 of both the input baseline and output ROM.


3. Record the mGBA version and patch JSON.


4. Do not use `.ss0`–`.ss9` savestates from unknown sources, other ROMs, or other BIOS identities.



## Minimum Checklist



* Cold boot the output ROM to confirm Nintendo/GBA boot animation and title screen.


* Start a new game or load a standard `.sav` file to enter a playable scene.


* Execute the normal path of the target feature and record expected vs. actual behavior.


* Execute a boundary path, such as 0, 1, maximum limit, full inventory, or no target.


* Execute an adjacent regression path to confirm original functionality still works.


* Save the game, completely exit mGBA (do not just return to title screen), relaunch, and load the save file.


* Check that characters, items, money, storage/warehouse, and progress show no anomalies.



When UI is involved, record specific screens, values, truncation/overlapping; when combat is involved, record class, weapon, skill level, enemies, hit/damage phenomena; when saving is involved, record the test copy filename and full reboot results.

## Record Form



```text
Date:
mGBA Version:
ROM SHA-256:
Patch ID:
Standard Save Copy:
Starting Point:
Keypress Steps:
Expected:
Actual:
Normal Path: PASS/FAIL/UNTESTED
Boundary Path: PASS/FAIL/UNTESTED
Regression Path: PASS/FAIL/UNTESTED
Save and Complete Reboot: PASS/FAIL/UNTESTED
Black Screen/Crash: None/Present (Reproduction Steps)
Responsible Person Conclusion: Pass/Fail/Unaccepted
Evidence Level: user accepted/untested

```

If testing only reaches the title screen or only confirms "no crash", log only the startup scope confirmed by the responsible person; do not mark it as completed functional acceptance.