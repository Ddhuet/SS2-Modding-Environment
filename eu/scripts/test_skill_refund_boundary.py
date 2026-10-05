#!/usr/bin/env python3
"""Synthetic max-level boundary check, separate from unmodified-save acceptance.
Sets three known RAM fields in an isolated core; all refund/spend steps use buttons.
"""
from pathlib import Path
import argparse
import json
from test_skill_refund import ROOT, Game, fields, total, sha256, PATCH_SHA, SAVE_SHA


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('--patched', type=Path, default=ROOT / 'artifacts/ss2-eu-skill-refund.gba')
    parser.add_argument('--output', type=Path, required=True)
    args = parser.parse_args()
    save = ROOT / 'inputs/ss2-eu.sav'
    if sha256(args.patched) != PATCH_SHA or sha256(save) != SAVE_SHA:
        raise SystemExit('Unexpected input identity')
    folder = args.output.resolve()
    folder.mkdir(parents=True, exist_ok=False)
    checks = []
    report = {'scope': 'synthetic valid max-level skill RAM fixture, not naturally earned on this save',
              'ram_or_register_writes': True, 'checks': checks}
    game = Game(args.patched, save, folder / 'level-seven', checks)
    try:
        game.boot()
        report['original'] = fields(game.live())
        writes = [(game.player + 0x30, 1), (game.player + 0x38, 7), (game.player + 0x3A, 0)]
        report['setup_writes'] = [{'address': hex(a), 'before': game.session.read16(a), 'after': v}
                                  for a, v in writes]
        for address, value in writes:
            game.session.write16(address, value)
        initial = game.live()
        game.enter_status()
        game.allocate()
        game.select(1)
        game.point('RIGHT')
        game.check('max level refuses further investment', game.temp() == initial)
        game.point('LEFT')
        decoded = fields(game.temp())
        game.check('max-level refund crosses boundary correctly',
                   decoded['pool'] == 2 and decoded['skills'][1] == [6, 6], actual=decoded)
        game.point('RIGHT')
        game.check('reinvestment restores max level exactly', game.temp() == initial)
        for _ in range(28):
            game.point('LEFT')
        zero = game.temp()
        decoded = fields(zero)
        game.check('all 28 max-level points refundable',
                   decoded['pool'] == 29 and decoded['skills'][1] == [0, 0], actual=decoded)
        game.point('LEFT')
        game.check('zero bound remains no-op', game.temp() == zero)
        for _ in range(28):
            game.point('RIGHT')
        game.check('28 re-spends restore exact max-level block', game.temp() == initial)
        game.shot('restored-level-seven')
        game.press('B')
        game.check('cancel preserves synthetic entry block', game.live() == initial)
        game.check('source normal save unchanged', sha256(save) == SAVE_SHA)
        report['result'] = 'PASS'
    except BaseException as exc:
        report['result'] = 'FAIL'
        report['error'] = str(exc)
        raise
    finally:
        game.close()
        (folder / 'report.json').write_text(json.dumps(report, indent=2) + '\n')
    print(json.dumps({'result': report['result'], 'checks': len(checks), 'report': str(folder / 'report.json')}, indent=2))


if __name__ == '__main__':
    main()
