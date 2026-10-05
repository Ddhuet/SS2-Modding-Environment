# Windows Headless mGBA Known Issues Fix Guide



This document is for the AI maintaining `tools/windows_mgba/`. The working directory is the current workspace; do not hardcode drive letters. Only modifications to the Windows mGBA tools and related documentation are permitted; do not modify input ROMs, normal save files (SAV), save states, or patch definitions.

## Boundaries Before Starting

Read completely first:

* `tools/windows_mgba/README.md`

* `tools/windows_mgba/BUILD_NOTES.md`

* `MGBA_TEST_GUIDE.md`

* `tools/windows_mgba/integration_test.py`

* `tools/windows_mgba/windows_mgba_service.py`

* `tools/windows_mgba/mgba_server.lua`


Run the ROM verification tool first and record the actual ROM/SAV SHA-256 hashes. Do not guess baseline identities, and do not overwrite input files. All mGBA instances must be created and stopped by the instance manager using isolated copies.

Address only one failure at a time. Use a maximum of 2 agents; if performing parallel analysis, a lead agent must merge the conclusions. Do not just search for error strings—follow the full logic flow across "Python manager → control file/Lua protocol → mGBA process → output files" to check how data flows.

## Issue 1: Permission denied when reading `control.state`

### Symptoms



`start`, PING, and memory reads may work normally, but when executing `frame`, `pause`, or `resume`, the following error occurs:

```text
PermissionError: [Errno 13] Permission denied: ...\control.state

```

`stdout.log` and `stderr.log` might be empty. This does not mean the ROM, SAV, or mGBA itself failed.

### Cause



The Lua side replaces `control.state` using a temporary file. During file replacement on Windows, if Python attempts to read the file at that exact moment, it may briefly encounter:

* `FileNotFoundError`: The old file has been moved, but the new file is not yet visible;


* `PermissionError`: The file is currently being replaced or its file handle has not been released yet.



This is a transient read/write race condition. Do not modify directory permissions, do not require running as administrator, and do not disable security software.

### Minimal Fix



In `windows_mgba_service.py`, locate the function polling and reading `control.state`. Within the polling timeout limit, treat both `FileNotFoundError` and `PermissionError` as "state not yet readable," wait briefly, and continue polling.

The fix pattern should look like:

```python
deadline = time.monotonic() + timeout
while time.monotonic() < deadline:
    try:
        state = json.loads(state_path.read_text(encoding="utf-8"))
    except (FileNotFoundError, PermissionError, json.JSONDecodeError):
        time.sleep(0.02)
        continue
    # Check whether the command sequence number or target state has taken effect here.

```

Do not retry indefinitely, do not swallow the final timeout, and do not ignore all `OSError` exceptions. The timeout report must include the instance name, control command, and last visible state.

## Issue 2: Inconsistency Between 8.3 Short Paths and Long Paths in DUMPBLOCK



### Symptoms



The one-click test passes PING, FRAMES, READ16, READ32, and READBLOCK, but then fails with:

```text
FileNotFoundError: ...\runtime\lua\analysis\header.bin

```

A common environmental characteristic is that `%TEMP%` or `%TMP%` uses an 8.3 short path, such as `C:\Users\ADMINI~1\...`.

### Cause



The legacy `integration_test.py` directly used the short path returned by `tempfile.mkdtemp()` to construct DUMPBLOCK commands; meanwhile, the instance manager might register the same directory as a long path using `Path.resolve()`.

Lua's DUMPBLOCK strictly restricts output to within the current instance's `analysis/` directory, so it performs a string boundary check. Although the short path and long path point to the same directory, their string representations differ, causing Lua to correctly return `ERR BADPATH`. The legacy test did not check this response first; instead, it directly called `dump.stat()`, ultimately masking the real error as a `FileNotFoundError`.

### Minimal Fix



Only modify client/test path handling—do not relax the `analysis/` security boundary in `mgba_server.lua`.

In `integration_test.py`:

1. Create the runtime directory first, then normalize `test_base` and `runtime` using `resolve(strict=True)`;


2. After starting the instance and reading `session.json`, derive the authoritative instance directory using the registered `rom_copy`;


3. Derive the output paths for `screenshots/`, `savestates/`, and `analysis/` from the authoritative instance directory;


4. Assert that the DUMPBLOCK response starts with `OK ` before checking whether the file exists and has the correct size;


5. Stop instances and clean up the test temporary directory in a `finally` block.



Key implementation:

```python
test_base = Path(tempfile.mkdtemp(prefix="mGBA Windows Test "))
runtime = test_base / "path with spaces" / "runtime"
runtime.mkdir(parents=True)
test_base = test_base.resolve(strict=True)
runtime = runtime.resolve(strict=True)

```

After reading the session:

```python
session = json.loads(session_path.read_text(encoding="utf-8"))
lua_instance = Path(session["rom_copy"]).resolve(strict=True).parent.parent
dump = lua_instance / "analysis" / "header.bin"

```

When sending the command, verify both the protocol response and the file presence separately:

```python
if not results[5].startswith("OK "):
    raise RuntimeError(f"DUMPBLOCK failed: {results[5]!r}")
if not dump.is_file() or dump.stat().st_size != 16:
    raise RuntimeError(
        f"DUMPBLOCK output missing or invalid: response={results[5]!r}, path={dump}"
    )

```

Continue converting `\` to `/` when passing paths to Lua. Do not remove the server-side prefix check due to Windows case sensitivity, path separators, or 8.3 path issues; otherwise, DUMPBLOCK might write outside the instance directory.

## Issue 3: Leftover Large Temporary Directories After Test Failures



### Symptoms & Cause



The legacy script only called `shutil.rmtree(test_base)` upon successful completion. An exception mid-execution would enter `finally` to stop the instance, but it would not delete the test directory containing the 32 MiB isolated ROM copy.

### Minimal Fix



Place the temporary directory cleanup inside the `finally` block, executing it after stopping all started instances. Windows may require a few dozen milliseconds to release file handles, so perform short, bounded retries specifically for `PermissionError`:

```python
def remove_test_tree(path: Path) -> None:
    for attempt in range(20):
        try:
            shutil.rmtree(path)
            return
        except FileNotFoundError:
            return
        except PermissionError:
            if attempt == 19:
                raise
            time.sleep(0.05)

```

```python
finally:
    for instance in reversed(started):
        subprocess.run(common + ["stop", "--instance", instance])
    remove_test_tree(test_base)

```

Do not recursively delete the entire `%TEMP%` directory. When cleaning up old leftovers, first confirm there are no active mGBA processes, and only delete `mGBA Windows Test ...` instance directories specifically listed in reports.

## Mandatory Verification After Fixes



Run a Python syntax check first, then execute the full integration test:

```powershell
python -c "import ast,pathlib; p=pathlib.Path(r'tools/windows_mgba/integration_test.py'); ast.parse(p.read_text(encoding='utf-8')); print('SYNTAX OK')"
python tools/windows_mgba/integration_test.py --rom "workspace/input/光明之魂2.gba" --save "workspace/input/光明之魂2.sav"

```

Do not stop just because PING or FRAMES succeeds. A complete pass requires seeing all of the following:

* PING returns PONG;


* Frame 0 pause and single-frame stepping pass;


* READ16, READ32, and READBLOCK pass;


* DUMPBLOCK returns `OK ... path=...` and the file is exactly 16 bytes;


* Screenshot and savestate are generated;


* RAM writeback with identical values succeeds and reads back consistently;


* Unauthenticated connections are rejected;


* Bounded PC trace file loop completes;


* GDB returns `S02` stop packet;


* Input ROM and SAV SHA-256 hashes remain unchanged before and after;


* No leftover mGBA processes or new test directories remain after the test completes.



Repeat the run at least 3 times to cover Windows file replacement timing edge cases. The testing party must also re-test once on a machine using a real 8.3 `%TEMP%`; passing on a standard long-path machine cannot replace this requirement.

## How to Register Results



Infrastructure can only register "Windows headless debugging capability available" after the full integration test is completely green. The following conclusions must be recorded separately:

* PING/FRAMES pass: Only proves the Lua control channel and frame gating are locally available;


* DUMPBLOCK pass: Only proves restricted dump path is functional;


* GDB `S02`: Only proves remote stub handshake works;


* Script runs without crashing: Does NOT equal game functionality verification;


* Lead agent completes in-game path and verifies: Only then can `user accepted` be registered for the actual scope verified.



Failure reports must retain original exceptions, failure stages, commands, ROM/SAV hashes, both mGBA binary hashes, instance log paths, and leftover process statuses at exit. Stop when uncertain; do not guess or expand the scope of modifications.

## Prompt Prompt to Pass to Maintenance AI



```text
You are responsible for fixing the Windows headless mGBA tools in the current workspace. Read WINDOWS_MGBA_FIX_GUIDE.md, tools/windows_mgba/README.md, tools/windows_mgba/BUILD_NOTES.md, and MGBA_TEST_GUIDE.md completely first.

Fix one issue at a time, using at most 2 agents. Do not just search for error strings; trace the full logical chain across Python manager, control file/Lua protocol, mGBA process, and output files.
Do not modify or overwrite input ROM/SAV files, do not create patches, do not relax Lua DUMPBLOCK's security boundary restricting writes to the current instance's analysis/ directory, and do not require administrator privileges or disabling security software.

Fix in order:
1. Bounded polling for FileNotFoundError/PermissionError during control.state replacement;
2. DUMPBLOCK ERR BADPATH caused by TEMP 8.3 short paths vs. long paths mismatch;
3. Instance stopping and temporary directory cleanup upon integration test exception exit.

Before each modification, report the root cause and target files to be modified; make minimal changes only. Check syntax after modification, run full integration_test.py at least 3 times, and run at least once on a machine with real 8.3 TEMP.
You must report item-by-item: PING, FRAMES, READBLOCK, DUMPBLOCK, single frame, screenshot, savestate, identical RAM writeback, authentication rejection, PC trace, GDB S02, input hashes unchanged, leftover processes, and leftover directories.
If any single item fails, do not declare the tool available; startup, screenshot, or crash-free operation must not be reported as game functionality verification. If evidence is insufficient, stop and state clearly what is missing.

```

