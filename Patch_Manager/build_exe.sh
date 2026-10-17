#!/usr/bin/env bash
# Build Patch_Manager/SS2_Patch_Manager.exe (Windows, one file, Python + Tk bundled) on Linux,
# using Steam Proton's Wine and Windows Python in a private Wine prefix.
#
#   Patch_Manager/build_exe.sh [WORKDIR]
#
# Env: PROTON (default: ~/.local/share/Steam/steamapps/common/Proton 11.0). WORKDIR (default
# ~/.cache/ss2_exe_build) holds the Wine prefix, downloads and PyInstaller's build files; it is
# reused on later runs. First run downloads python-3.12.10-amd64.exe from python.org (SHA-256
# checked) and pyinstaller==6.11.1 from PyPI. The .exe expects patches/, Input_ROM/ and
# Output_ROM/ next to it and creates them if missing.
set -euo pipefail

HERE="$(cd "$(dirname "${BASH_SOURCE[0]}")" && pwd)"
WORK="${1:-$HOME/.cache/ss2_exe_build}"
PROTON="${PROTON:-$HOME/.local/share/Steam/steamapps/common/Proton 11.0}"
PY_URL=https://www.python.org/ftp/python/3.12.10/python-3.12.10-amd64.exe
PY_SHA=67b5635e80ea51072b87941312d00ec8927c4db9ba18938f7ad2d27b328b95fb
PYI=pyinstaller==6.11.1

F="$PROTON/files"
[ -x "$F/bin/wine" ] || { echo "Proton Wine not found at $F/bin/wine (set PROTON=...)" >&2; exit 1; }
export WINEPREFIX="$WORK/wineprefix" WINEDEBUG=-all WINEDLLOVERRIDES="mscoree,mshtml="
export PATH="$F/bin:$PATH" WINEDLLPATH="$F/lib/wine"
export LD_LIBRARY_PATH="$F/lib/x86_64-linux-gnu:$F/lib/i386-linux-gnu:${LD_LIBRARY_PATH:-}"
mkdir -p "$WORK/dl" "$WORK/src"

if [ ! -x "$WINEPREFIX/drive_c/Py312/python.exe" ]; then
    wine wineboot -u
    [ -f "$WORK/dl/python.exe" ] || curl -fsSL -o "$WORK/dl/python.exe" "$PY_URL"
    echo "$PY_SHA  $WORK/dl/python.exe" | sha256sum -c -
    wine "$WORK/dl/python.exe" /quiet InstallAllUsers=0 'TargetDir=C:\Py312' Include_tcltk=1 \
        Include_test=0 Include_doc=0 Include_launcher=0 Shortcuts=0
fi
PY='C:\Py312\python.exe'
wine "$PY" -m pip show pyinstaller >/dev/null 2>&1 || wine "$PY" -m pip install --no-warn-script-location "$PYI"

# Test the patch logic with Windows Python first, then package.
cp "$HERE/patch_manager.py" "$HERE/selftest.py" "$WORK/src/"
cd "$WORK/src"
wine "$PY" selftest.py
wine "$PY" -m PyInstaller --noconfirm --clean --onefile --windowed --name SS2_Patch_Manager \
    --distpath dist --workpath build --specpath . patch_manager.py
cp dist/SS2_Patch_Manager.exe "$HERE/SS2_Patch_Manager.exe"
ls -l "$HERE/SS2_Patch_Manager.exe"
sha256sum "$HERE/SS2_Patch_Manager.exe"
