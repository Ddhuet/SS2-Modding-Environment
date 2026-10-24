#!/usr/bin/env python3
"""Launch the local native mGBA player with new isolated ROM/save copies."""
from pathlib import Path
import argparse
import datetime
import hashlib
import json
import os
import shutil
import subprocess

ROOT = Path(__file__).resolve().parents[1]


def digest(path):
    return hashlib.sha256(path.read_bytes()).hexdigest()


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('--rom', type=Path, default=ROOT / 'artifacts/ss2-eu-skill-refund.gba')
    parser.add_argument('--save', type=Path, default=ROOT / 'inputs/ss2-eu.sav')
    parser.add_argument('--run-dir', type=Path, help='Must not exist; generated under runs/ by default')
    parser.add_argument('--prepare-only', action='store_true', help='Prepare copies and print command without opening a window')
    args = parser.parse_args()
    binary = ROOT / 'emulator/play-build/sdl/mgba'
    if not binary.is_file():
        raise SystemExit('Build the player first: python scripts/build_player.py')
    rom, save = args.rom.resolve(strict=True), args.save.resolve(strict=True)
    source_hashes = {str(path): digest(path) for path in (rom, save)}
    stamp = datetime.datetime.now().strftime('%Y%m%d-%H%M%S-%f')
    folder = (args.run_dir or ROOT / 'runs' / ('manual-' + stamp)).resolve()
    folder.mkdir(parents=True, exist_ok=False)
    for source, name in [(rom, 'game.gba'), (save, 'game.sav')]:
        with source.open('rb') as src, (folder / name).open('xb') as dest:
            shutil.copyfileobj(src, dest)
    config = folder / 'config'
    config.mkdir()
    environment = dict(os.environ, XDG_CONFIG_HOME=str(config))
    command = [str(binary), '-4', '-C', 'logLevel=7', str(folder / 'game.gba')]
    manifest = {'source_sha256': source_hashes, 'command': command,
                'save_path': str(folder / 'game.sav'), 'config_home': str(config),
                'backend_revision': '26b7884bc25a5933960f3cdcd98bac1ae14d42e2'}
    (folder / 'session.json').write_text(json.dumps(manifest, indent=2) + '\n')
    print(f'Run: {folder}\nSave: {folder / "game.sav"}', flush=True)
    print('Controls: arrows; X=A, Z=B, Enter=Start, Backspace=Select, A=L, S=R.', flush=True)
    print('Menu: Enter -> Left (Status) -> X -> Right (Skills) -> X.', flush=True)
    print('Refund: select a learned skill, Left. X commits; Z cancels.', flush=True)
    if args.prepare_only:
        print(json.dumps(command))
        return
    try:
        subprocess.run(command, env=environment, cwd=folder, check=True)
    finally:
        unchanged = all(digest(Path(path)) == sha for path, sha in source_hashes.items())
        manifest['source_inputs_unchanged'] = unchanged
        (folder / 'session.json').write_text(json.dumps(manifest, indent=2) + '\n')
        if not unchanged:
            raise RuntimeError('A source input changed while playing; investigate external edits.')
        print(f'Your play-session save remains at {folder / "game.sav"}')


if __name__ == '__main__':
    main()
