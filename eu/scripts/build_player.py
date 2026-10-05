#!/usr/bin/env python3
"""Build a local SDL mGBA frontend for manual play, using the harness's pinned source."""
from pathlib import Path
import argparse
import os
import subprocess
import sys

ROOT = Path(__file__).resolve().parents[1]
REVISION = '26b7884bc25a5933960f3cdcd98bac1ae14d42e2'


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('--jobs', type=int, default=min(4, os.cpu_count() or 1))
    args = parser.parse_args()
    if args.jobs < 1:
        parser.error('--jobs must be positive')
    source = ROOT / 'emulator/vendor/mgba'
    if not source.is_dir():
        raise SystemExit('Run scripts/build_emulator.py first to fetch the pinned source.')
    revision = subprocess.check_output(['git', '-C', str(source), 'rev-parse', 'HEAD'], text=True).strip()
    dirty = subprocess.check_output(['git', '-C', str(source), 'status', '--porcelain'], text=True)
    if revision != REVISION or dirty.strip():
        raise SystemExit('Expected the unmodified, pinned mGBA source.')
    build = ROOT / 'emulator/play-build'
    command = ['cmake', '-S', str(source), '-B', str(build),
               '-DCMAKE_POLICY_VERSION_MINIMUM=3.5', '-DCMAKE_BUILD_TYPE=Release',
               '-DBUILD_QT=OFF', '-DBUILD_SDL=ON', '-DBUILD_GL=ON',
               '-DBUILD_GLES2=OFF', '-DBUILD_GLES3=OFF', '-DUSE_FFMPEG=OFF',
               '-DUSE_LIBZIP=OFF', '-DUSE_SQLITE3=OFF', '-DUSE_LUA=OFF',
               '-DUSE_ELF=OFF', '-DUSE_LZMA=OFF', '-DUSE_DISCORD_RPC=OFF',
               '-DBUILD_SHARED=OFF', '-DBUILD_STATIC=ON', '-DBUILD_TEST=OFF']
    subprocess.run(command, check=True)
    subprocess.run(['cmake', '--build', str(build), '-j', str(args.jobs)], check=True)
    subprocess.run([str(build / 'sdl/mgba'), '--version'], check=True)


if __name__ == '__main__':
    main()
