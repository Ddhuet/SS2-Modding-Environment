#!/usr/bin/env python3
"""Record read-only COUNTER port discovery and exact instruction evidence (no emulation)."""
from pathlib import Path
import argparse
import hashlib
import json
import sys

ROOT = Path(__file__).resolve().parents[1]
sys.path.insert(0, str(ROOT))
from capstone import Cs, CS_ARCH_ARM, CS_MODE_THUMB
from ss2tools.core import verify, parse_writes, assert_preimages, decode_bl, encode_bl
from ss2tools.porting import port_report


def disassembly(data, offset, length):
    decoder = Cs(CS_ARCH_ARM, CS_MODE_THUMB)
    return '\n'.join(
        f'{i.address:08X}  {i.bytes.hex():<10} {i.mnemonic:<8} {i.op_str}'
        for i in decoder.disasm(data[offset:offset + length], 0x08000000 + offset)
    ) + '\n'


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('--output', type=Path, required=True, help='New evidence directory')
    args = parser.parse_args()
    source_path = ROOT / 'inputs/ss2-cn-baseline.gba'
    target_path = ROOT / 'inputs/ss2-eu.gba'
    source_definition = ROOT / 'reference/upstream/patches/definitions/counter_fix.json'
    definition = ROOT / 'patches/warrior-counter-fix.json'
    cn, eu = source_path.read_bytes(), target_path.read_bytes()
    identities = {}
    for name, data in [('ss2-cn-baseline', cn), ('ss2-eu', eu)]:
        identities[name] = verify(data, json.loads((ROOT / f'profiles/{name}.json').read_text()))
    source_patch = json.loads(source_definition.read_text())
    patch = json.loads(definition.read_text())
    assert_preimages(cn, parse_writes(source_patch, len(cn)))
    assert_preimages(eu, parse_writes(patch, len(eu)))
    assert hashlib.sha256(source_definition.read_bytes()).hexdigest() == patch['source_provenance']['source_definition_sha256']
    cn_after = bytearray(cn[0x1F1C0:0x1F1D0])
    for write in parse_writes(source_patch, len(cn)):
        start = write['offset'] - 0x1F1C0
        cn_after[start:start + len(write['after'])] = write['after']
    replacement = bytes.fromhex(patch['writes'][0]['after_hex'])
    assert decode_bl(cn[0x1F1CC:0x1F1D0], 0x1F1CC) == 0x0801E358
    assert decode_bl(cn_after[8:12], 0x1F1C8) == 0x0801E358
    assert decode_bl(eu[0x1F3F0:0x1F3F4], 0x1F3F0) == 0x0801E5B0
    assert replacement[8:12] == encode_bl(0x1F3EC, 0x0801E5B0)
    assert replacement[:8] == cn_after[:8] and replacement[12:] == cn_after[12:]
    # Actual EU bytes, not presumed CN structure offsets.
    byte_claims = {
        0x1F380: '80460d1c9146',  # caller saves arguments in r8/r5/r9
        0x1E5BE: '8846',          # damage callee retains target argument in r8
        0x1E85C: 'fff700fb000600281fd1',  # class helper returns zero
        0x1E86A: '081c4c300088002818d0',  # current player +0x4C nonzero
        0x1E874: '4646b089022814d1',       # target +0x0C == 2
        0x1E878: '0228',
        0x1E880: '30300621fff712fc',       # skill index 6 on player +0x30
        0x1E976: '281c',                  # result moves from r5 into r0
        0x1E978: '02b038bc9846a146aa46f0bc02bc0847',  # saved registers restored
        0x1F3F4: '0004000c',              # caller consumes low half of r0
    }
    for offset, expected in byte_claims.items():
        assert eu[offset:offset + len(bytes.fromhex(expected))].hex() == expected
    assert int.from_bytes(eu[0x1E91C:0x1E920], 'little') == 0x030034E0
    assert int.from_bytes(eu[0x1DE70:0x1DE74], 'little') == 0x030034E0
    output = args.output.resolve()
    output.mkdir(parents=True, exist_ok=False)
    for name, window, before in [('default-candidates', 96, 32), ('short-candidates', 32, 8)]:
        report = port_report(source_path, target_path, source_definition,
                             ROOT / 'profiles/ss2-cn-baseline.json', ROOT / 'profiles/ss2-eu.json',
                             window=window, before=before)
        (output / f'{name}.json').write_text(json.dumps(report, indent=2) + '\n')
        if name == 'short-candidates':
            for row, offset in zip(report['writes'], ['0x0001F3E4', '0x0001F3EA']):
                assert row['status'] == 'unique_static_candidate'
                assert row['candidates'][0]['offset'] == offset
    ranges = [
        ('eu-caller-entry', eu, 0x1F374, 0x60), ('eu-caller-window', eu, 0x1F3E4, 0x28),
        ('eu-damage-entry', eu, 0x1E5B0, 0x86), ('eu-counter-block', eu, 0x1E850, 0x56),
        ('eu-damage-return', eu, 0x1E976, 0x12), ('eu-class-helper', eu, 0x1DE60, 0x10),
        ('eu-class-helper-tail', eu, 0x1DE74, 4), ('eu-skill-helper', eu, 0x1E0AC, 0x10),
        ('cn-caller-window', cn, 0x1F1C0, 0x24), ('cn-counter-block', cn, 0x1E608, 0x56),
    ]
    for name, data, offset, length in ranges:
        (output / f'{name}.txt').write_text(disassembly(data, offset, length))
    # Decode at the real CPU address; the replacement is an isolated code window.
    decoder = Cs(CS_ARCH_ARM, CS_MODE_THUMB)
    (output / 'eu-replacement.txt').write_text('\n'.join(
        f'{i.address:08X}  {i.bytes.hex():<10} {i.mnemonic:<8} {i.op_str}'
        for i in decoder.disasm(replacement, 0x0801F3E4)) + '\n')
    report = {
        'evidence_status': 'static_verified', 'identities': identities,
        'source_preimages_verified': True, 'eu_preimage_verified': True,
        'rewrite_offset': '0x0001F3E4', 'rewrite_length': 16,
        'before_hex': eu[0x1F3E4:0x1F3F4].hex(), 'after_hex': replacement.hex(),
        'original_call_offset': '0x0001F3F0', 'moved_call_offset': '0x0001F3EC',
        'callee': '0x0801E5B0', 'moved_bl_hex': replacement[8:12].hex(),
        'eu_byte_claims': {f'0x{offset:08X}': value for offset, value in byte_claims.items()},
        'definition_sha256': hashlib.sha256(definition.read_bytes()).hexdigest(),
        'runtime': 'not_run_at_owner_request', 'user_acceptance': 'not_recorded',
    }
    report['source_inputs_unchanged'] = all(
        hashlib.sha256(path.read_bytes()).hexdigest() == identities[name]['sha256']
        for path, name in [(source_path, 'ss2-cn-baseline'), (target_path, 'ss2-eu')])
    assert report['source_inputs_unchanged']
    (output / 'report.json').write_text(json.dumps(report, indent=2) + '\n')
    print(json.dumps(report, indent=2))


if __name__ == '__main__':
    main()
