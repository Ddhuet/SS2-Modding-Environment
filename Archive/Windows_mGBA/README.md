# Windows Native Headless mGBA



This toolset provides mGBA headless execution independent of WSL, a Lua control protocol, and a GDB remote stub within the current project workspace. During runtime, the ROM and normal save files are first copied to an isolated instance; original inputs are never used as mGBA write targets.

## Capabilities and Evidence Boundaries



* `default` mode: Paused startup, native `pause/frame/resume`, 0–10x speed throttling, button inputs, ROM/RAM/register read/write, batch read-only memory, restricted file dumps, screenshots, reset, savestate save/load, and bounded PC tracing.


* `gdb` mode: Exposes a GDB remote stub listening strictly on `127.0.0.1`.


* Each instance uses an isolated directory, a random Lua port, and a random authentication token; clients must authenticate first.


* Automation can verify that infrastructure, specified memory watchpoints, and precise script paths actually executed; it cannot sign off game features as passed solely based on startup, screenshots, or absence of crashes.


* Final functional acceptance must still be performed and logged as `user accepted` by the owner according to `MGBA_TEST_GUIDE.md`.



## Minimal Usage



The following commands assume the PowerShell working directory is the root directory of the package. Paths may contain spaces; Chinese file names for personal ROM/SAV files have been tested. The runtime root directory should remain an ASCII path, which is a limitation of the current MinGW headless entry point.

```powershell
python .\tools\windows_mgba\windows_mgba_service.py start --instance test1 --rom ".\workspace\input\光明之魂2.gba" --save ".\workspace\input\光明之魂2.sav"
python .\tools\windows_mgba\mgba_client.py ".\workspace\runtime\test1\session.json" PING ROM FRAMES "WAIT 60" "REG pc" CRASHED
python .\tools\windows_mgba\windows_mgba_service.py status --instance test1
python .\tools\windows_mgba\windows_mgba_service.py stop --instance test1

```

Paused startup, single-stepping frames, and speed multiplier:

```powershell
python .\tools\windows_mgba\windows_mgba_service.py start --instance step1 --paused --speed 1 --rom ".\workspace\input\光明之魂2.gba" --save ".\workspace\input\光明之魂2.sav"
python .\tools\windows_mgba\windows_mgba_service.py frame --instance step1 1
python .\tools\windows_mgba\windows_mgba_service.py resume --instance step1
python .\tools\windows_mgba\windows_mgba_service.py pause --instance step1

```

During pause, `PING/ROM/FRAMES/READ*/REG/WRITE*/SAVESTATE` will still respond without advancing frames on their own. Taking a screenshot at frame 0 returns `ERR NOFRAME`; run `frame 1` first. `WAIT` and timed keypresses are consumed only with real frames and will not complete based on wall-clock time while paused.

Batch reading and dumping:

```powershell
python .\tools\windows_mgba\mgba_client.py ".\workspace\runtime\step1\session.json" "READBLOCK 0x08000000 16"
python .\tools\windows_mgba\mgba_client.py ".\workspace\runtime\step1\session.json" "DUMPBLOCK 0x08000000 16 ./workspace/runtime/step1/analysis/header.bin"

```

`READBLOCK` limit is `0x4000` bytes; `DUMPBLOCK` limit is `0x10000`, and it can only write to the `analysis/` directory of the current instance. For Windows paths, using `/` in Lua commands is recommended.

Bounded PC Tracing:

```powershell
python .\tools\windows_mgba\mgba_client.py ".\workspace\runtime\step1\session.json" "TRACE_PC_START 0x080001F8,0x08000248 100"
python .\tools\windows_mgba\windows_mgba_service.py resume --instance step1
python .\tools\windows_mgba\windows_mgba_service.py pause --instance step1
python .\tools\windows_mgba\mgba_client.py ".\workspace\runtime\step1\session.json" TRACE_PC_RESULT TRACE_PC_STOP

```

Trace supports up to 4,096 points, 100,000 hits, and a maximum output size of 16 MiB. Zero hits only indicate that this specific scenario did not pass through the sentinels; it does not prove the code is unreachable.

Screenshots and savestates must be written to that instance:

```powershell
python .\tools\windows_mgba\mgba_client.py ".\workspace\runtime\test1\session.json" "SHOT .\workspace\runtime\test1\screenshots\check.png" "SAVESTATE .\workspace\runtime\test1\savestates\check.ss1"

```

GDB mode and read-only probe:

```powershell
python .\tools\windows_mgba\windows_mgba_service.py start --instance debug1 --mode gdb --rom ".\workspace\input\光明之魂2.gba" --save ".\workspace\input\光明之魂2.sav"
python .\tools\windows_mgba\gdb_remote_probe.py ".\workspace\runtime\debug1\session.json"
python .\tools\windows_mgba\windows_mgba_service.py stop --instance debug1

```

Lua mode and GDB mode are separate startup modes and cannot be enabled simultaneously within the same process. When switching modes, first save the isolated savestate, stop the original instance, and then start a new instance in the other mode.

The GDB stub accepts only a single client. The manager will not occupy this slot with probe connections; after starting, you should connect real GDB directly or run `gdb_remote_probe.py` only once. The `gdb-running` field in `status` proves the process and configuration exist, while remote protocol availability should still be confirmed via probe or real GDB handshake.

## One-Click Integration Test



```powershell
python .\tools\windows_mgba\integration_test.py --rom ".\workspace\input\光明之魂2.gba" --save ".\workspace\input\光明之魂2.sav"

```

The test creates an isolated path containing spaces in the system temp directory to verify Chinese input file names, authentication, frame 0 pause, single-stepping, batch reading, restricted dumping, same-value RAM write-back, screenshots, savestates, bounded PC tracing, GDB stop packets, and source ROM/SAV hash invariance. Finally, it stops the process and cleans up temporary files.

## Security Rules



1. Run strictly against copies under `workspace/runtime/<instance>/`; do not use the original SAV as mGBA's save path.


2. RAM writes must be preceded by a read and restricted in address and width; infrastructure tests are only allowed to write back the exact same value.


3. Although the protocol supports ROM write operations, formal modifications must still go through patch JSON, baseline hashes, and `before_hex` assertions.


4. Do not send `session.json` to others; it contains local ports and temporary authentication tokens.


5. Only use the manager to stop PIDs created by itself whose process image path matches.



## Frequently Asked Questions



If an older version of the manager reports the following error during `frame/pause/resume`:

```text
Permission denied: ...\control.state

```

This is a transient read race condition that occurs when Windows replaces state files in a headless process; it does not indicate a failure in the ROM, SAV, or mGBA. Updating `windows_mgba_service.py` automatically handles transient `FileNotFoundError/PermissionError` as polling retries. Do not modify directory permissions, disable security software, or run as administrator for this.

See [BUILD_NOTES.md] for build sources and known limitations.