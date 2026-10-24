# Build Notes and Known Limitations

* Windows x64 build with `BUILD_HEADLESS=ON` based on the project's existing mGBA 0.10.5 source code.


* Enables Headless, Lua scripting, GDB stub, screenshot, and savestate support; does not depend on Qt/SDL windows.


* Added `SocketSubsystemInit()` / `SocketSubsystemDeinit()` to the Windows headless entry point; otherwise, Lua sockets on Windows return Winsock `10093`.


* Default / frame-gated binary SHA-256: `c8cf3ffce8f37c84c3c1ef18f61487b5dcbcae186595ac751ee0a03693a0b6cb`.


* GDB-dedicated binary SHA-256: `bad51e793db0dbe844497382c35790aed7a3a025f96c27f2542bbee1f4fb4e6a`.


* In default mode on Windows, the Linux-private FIFO is adapted into per-instance append control files while handling the issue where Windows `rename()` does not overwrite the target.


* The GDB-dedicated build reads dynamic ports from `GBA_GDB_PORT`; the upstream entry point fixes the port to 2345, which is unsuitable for isolating multiple instances. The manager automatically selects the binary based on the mode.


* The current delivery uses a Debug configuration. The previous Release optimization build failed at the Lua frame callback registration and has not yet been used as a runnable release.


* `mgba-headless-debug.exe` is an identical copy of the default frame-gated binary, retained solely as a build identity indicator.


* The MinGW headless entry point cannot reliably receive startup paths containing Chinese characters. The manager supports Chinese source ROM/SAV file names because it copies them to an ASCII runtime directory first; the shared bundle and `--runtime-root` itself should be placed in ASCII paths.


* The `default` Lua/frame-gated mode and the `gdb` mode must be started separately. The single-client GDB port cannot be checked using standard TCP readiness probes, as doing so occupies the accept slot.



These source-level adjustments occurred only within isolated build copies without modifying the upstream project.