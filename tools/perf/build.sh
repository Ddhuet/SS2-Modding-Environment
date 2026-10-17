#!/bin/sh
# Build ss2prof against the project's mGBA (eu/emulator, built by eu/scripts/build_emulator.py).
set -e
HERE=$(cd "$(dirname "$0")" && pwd)
E=$(cd "$HERE/../../eu/emulator" && pwd)
mkdir -p "$HERE/build"
cc -O2 -Wall -o "$HERE/build/ss2prof" "$HERE/ss2prof.c" \
   -I"$E/vendor/mgba/include" -I"$E/build/mgba/include" -DMGBA_DLL \
   -L"$E/build/mgba" -lmgba -Wl,-rpath,"$E/build/mgba"
echo "built $HERE/build/ss2prof"
