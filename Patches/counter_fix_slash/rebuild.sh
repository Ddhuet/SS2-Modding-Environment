#!/bin/sh
# Rebuild the definition, Patch_Manager/patches/counter_fix_slash.bps and a test ROM in Build/
set -e
cd "$(dirname "$0")/.."
python3 Patches/counter_fix_slash/build.py
python3 Tools/Scripts/make_bps.py counter_fix_slash --rom-out Build
