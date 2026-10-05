# SHARE Delivery Manifest

Updated Date: August 30, 2026 (Asia/Shanghai)

## Current Sources & Baseline

This update is based on the repaired `PROJECT_HANDOFF.md`, `PROJECT_STATUS.md`, official Release/Beta registrations, SS2_SC acceptance snapshots, official offline builder BUNDLE, and existing historical analysis materials in the sharing package. The source project was not modified.

Current sole baseline: `SS2_SC_bug_fixed.GBA`, size `33554432`, MD5 `35eb6567d94f855480c5d7ba2dff4389`, SHA-256 `45ac38bb1bfba779592b5c79ce94982cf7c00fda5b3c5b84735e55c77d6fc989`, CRC32 `AFCFC96D`.

Five underlying fixes are built into the baseline and should not be reapplied as patches; `0x09000000–0x09000060` is occupied, and `0x09000060–0x09000100` is reserved.

## What's Included in This Update

* Updated README, Quick Start, project knowledge, mGBA acceptance notes, patch directory, research stages, and AI prompts; example commands no longer hardcode working drive letters.
* Switched Python verification constants and empty templates to the SS2_SC identity.
* Regenerated 17 released and 1 beta individual item definitions, as well as the Release 17 / Beta 18 combined definitions, from the 18-item BUNDLE of the current official offline builder; all `before_hex` values were directly read from the new baseline.
* Retained thousands of historical Ghidra pseudocode files and explicitly tagged their source as the old clean baseline; these addresses serve only as candidate navigation.
* Retained Chinese character encoding tables, JSONL extraction results from historical Excel files, code audits, cheat code / existing patch tracking cases, and Debug thought guides.

## Executed Verification

* New baseline four-part identity check: `MATCH`.
* All Python tools passed syntax compilation checks.
* Standard library self-tests passed: error baseline rejection, input overwrite rejection, existing output rejection, paths with Chinese characters and spaces, CRC32, and diff summary.
* Release 17 rebuilt from the new baseline yields SHA-256 `dcdb1e041eee3676c6398de6080d7cb1be73176f7b5e3a615a973fd3f5f0f868` and CRC32 `A1E0B4B0`, matching the official registration.
* Beta 18 rebuilt from the new baseline yields SHA-256 `ba7223dd7ac7de5d631bc9e6918bd668d67809813d899cdd41a74c61e0ccf377` and CRC32 `D1877FB6`, matching the official registration.
* Both rebuilt validation ROMs and Python cache files have been cleaned up.

## Dynamic Evidence Boundaries

mGBA functional paths were not executed as part of this update. Dynamic tests for the Release/Beta combinations in the official registry remain as `not_run`. Following manual operations by the maintainer, status can only be registered as `user accepted` within the scope of actual confirmation; startup, title screen, or absence of crashes does not equate to functional acceptance.

## Intentional Exclusions

No new ROMs, BIOS files, standard save files, state saves, screenshots, logs, Ghidra projects, WSL toolchains, compilers, venvs, build caches, or raw Excel files were added. Retaining historical pseudocode is an explicit exception requested by the lead/maintainer as an analysis corpus.

The mGBA directory and `workspace/input` files previously added by the maintainer are not part of this generated content; the old baseline ROM among them will be rejected by the new tools. Before delivery and use, the maintainer should replace it with a copy of the SS2_SC baseline.

## Pending Verification

* A separate independent Windows/Python environment;
* Complete Ghidra re-analysis of the current SS2_SC baseline;
* Manual functional, boundary, regression, and save/cold-restart acceptance for Release 17 / Beta 18;
* Compatibility on real hardware and across mGBA versions.

## Package Scale

Final total for `SHARE`: 3,973 files, 98,225,255 bytes in total. Excluding the `mGBA-0.10.5-win64/` directory added by the maintainer: 3,900 files, 45,941,308 bytes in total.

The directory currently still contains 1 old baseline `.gba` file (33,554,432 bytes) and 1 standard `.sav` file (65,536 bytes) previously added by the maintainer; no BIOS, `.ss0`–`.ss9`, or raw `.xlsx` files were found. These two input files were not modified in this update, and the old ROM will be rejected by the current tools.

## 2026-08-30 Windows Headless mGBA Supplement

* Added `tools/windows_mgba/`: Windows x64 Headless mGBA, authenticated Lua control protocol, Python instance manager/client, GDB remote probe, and integration tests.
* Current input ROM is already the SS2_SC baseline with SHA-256 `45ac38bb1bfba779592b5c79ce94982cf7c00fda5b3c5b84735e55c77d6fc989`; standard SAV SHA-256 `bceb94d0190bfe1185852802dceae98d18278f9075128335b943b452a560c057`.
* Integration tests passed: authentication rejection, PING, frame stepping, ROM/RAM/register reads, RAM same-value writebacks, screenshots, savestates, GDB `S02` stop packets, Chinese input filenames, execution paths with spaces, and unchanged source ROM/SAV hashes.
* Updated README, mGBA guide, tool documentation, and AI prompts: limited scripted dynamic observation on isolated copies is allowed, but full game functionality still requires acceptance by the maintainer; startup, screenshots, or absence of crashes does not constitute a functional pass.
* Known limitations: Delivery utilizes the tested Debug configuration; Release optimization builds failed at Lua frame callback registration. The runtime root directory must remain ASCII; Chinese input filenames can be copied and processed by the manager.
* Source project, source ROM, and source SAV were all left unmodified; no residual headless mGBA processes remained during final checks.
* After WSL environment restoration, pure Windows integration tests were executed again, and Lua/GDB/isolation/source file hash constancy checks all passed; the Windows runtime does not depend on WSL. The isolated build copies previously located in WSL `/tmp` no longer exist and are not part of the delivery.

## 2026-08-31 Headless Tool Synchronization

* Synchronized new Lua protocol: `READBLOCK`, restricted `DUMPBLOCK`, delayed status barrier, paused-state idle service, and `TRACE_PC_START/RESULT/STOP`; retained Windows random token authentication.
* Added Windows native paused startup, `pause/frame/resume`, `--speed 0..10`. Linux FIFO adapted to per-instance append control files; status file writes are compatible with Windows replace semantics.
* Default frame-gated binary SHA-256 `c8cf3ffce8f37c84c3c1ef18f61487b5dcbcae186595ac751ee0a03693a0b6cb`; GDB-dedicated binary SHA-256 `bad51e793db0dbe844497382c35790aed7a3a025f96c27f2542bbee1f4fb4e6a`.
* GDB-dedicated build supports port selection via instance environment; the manager avoids consuming the single GDB client slot with generic TCP readiness checks.
* Windows integration regression passed: Frame 0 pause, paused-state protocol, single-frame advance, screenshots, savestate, batch reads, restricted dumps, same-value RAM writebacks, auth rejection, PC trace files, GDB `S02`, Chinese input names, paths with spaces, and source ROM/SAV hash constancy.
* The PC trace regression sample yielded zero hits, proving only trace start/stop and file loop closure; business path hits and game functional acceptance were not proven by this.
* Fixed transient read-write race condition when publishing `control.state` on Windows: Python reads encountering transient `FileNotFoundError/PermissionError` now continue polling rather than erroneously aborting `frame/pause/resume`. After the fix, 5 consecutive full integration test runs were performed, all passing single-frame and GDB `S02` checks.