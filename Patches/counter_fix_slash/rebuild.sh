#!/bin/sh
# Rebuild the definition, Patch_Manager/patches/counter_fix_slash.bps and a test ROM in translation/build/
set -e
cd "$(dirname "$0")/.."
python3 slash/build.py
python3 translation/tools/make_bps.py counter_fix_slash --rom-out translation/build
