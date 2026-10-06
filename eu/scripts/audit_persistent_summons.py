#!/usr/bin/env python3
"""Verify exact summon port sites and producer dispatch, with read-only evidence."""
from pathlib import Path
import argparse
import hashlib
import json
import sys

ROOT = Path(__file__).resolve().parents[1]
sys.path.insert(0, str(ROOT))
from capstone import Cs, CS_ARCH_ARM, CS_MODE_THUMB
from ss2tools.core import verify, parse_writes, assert_preimages
from ss2tools.bps import decode_bps as apply_bps
from ss2tools.porting import port_report


def main():
    p = argparse.ArgumentParser(description=__doc__)
    p.add_argument('--output', type=Path, required=True)
    args = p.parse_args()
    output = args.output.resolve()
    output.mkdir(parents=True, exist_ok=False)
    source = ROOT/'reference/upstream/patches/definitions/persistent_archer_and_dark_mage_summons.json'
    definition = ROOT/'patches/persistent-archer-and-dark-wizard-summons.json'
    patch = json.loads(definition.read_text())
    blobs = {}
    identities = {}
    for name in ('ss2-cn-baseline', 'ss2-eu'):
        blobs[name] = (ROOT/f'inputs/{name}.gba').read_bytes()
        identities[name] = verify(blobs[name], json.loads((ROOT/f'profiles/{name}.json').read_text()))
    cn, eu = blobs.values()
    assert_preimages(cn, parse_writes(json.loads(source.read_text()), len(cn)))
    assert_preimages(eu, parse_writes(patch, len(eu)))
    assert hashlib.sha256(source.read_bytes()).hexdigest() == patch['source_provenance']['source_definition_sha256']
    # Both tables are indexed by producer r1 minus one. The historical type18/
    # type20 labels are function nicknames, not the producer's numeric IDs.
    dispatch = []
    for kind, cn_case, eu_case, cn_entry, eu_entry, cn_site, eu_site in [
        (17, 0x74344, 0x73BCC, 0x705E8, 0x6FF1C, 0x713C4, 0x70CF0),
        (7, 0x7437C, 0x73C04, 0x717B4, 0x710DC, 0x72788, 0x7207C),
    ]:
        for data, table, case, entry, site in [
            (cn, 0x74068, cn_case, cn_entry, cn_site),
            (eu, 0x738FC, eu_case, eu_entry, eu_site),
        ]:
            assert int.from_bytes(data[table+(kind-1)*4:table+kind*4], 'little') == 0x08000000+case
            assert int.from_bytes(data[case+24:case+28], 'little') == 0x08000001+entry
            assert data[entry:entry+2].hex() == 'f0b5'
            assert data[site-2:site+8].hex() == '1a9801380004000c1a90'
        dispatch.append(dict(producer_type=kind, cn_entry=hex(0x08000000+cn_entry),
                             eu_entry=hex(0x08000000+eu_entry), eu_decrement=hex(0x08000000+eu_site)))
    claims = {
        0x738C4:'0760446061468160c56041464161', # descriptor owner, slot, target, type, parameter
        0x6FF6A:'139eb68a1a961996', # descriptor +14 -> stack +68/+64
        0x71120:'139eb68a1a961b961996',
        0x70CE4:'0b2810d0002d00d172e61a9801380004000c1a90',
        0x72070:'0b280dd0002e00d11de71a9801380004000c1a90',
        0x70D04:'002800d1cee11a98002800d1cae1', # independent zero cleanup remains
        0x72090:'1a98002800d160e1',
        0x710A8:'0a48404400210170', # clear per-owner live latch
        0x710BC:'106888431060', # clear allocated slot bit
        0x7235A:'0b481f9c201800210170',
        0x72370:'106888431060',
        0x56E90:'0348006880880009012108407047', # flag bit4 from [03005CF4]+4
    }
    for offset, value in claims.items():
        assert eu[offset:offset+len(bytes.fromhex(value))].hex() == value, hex(offset)
    decoder = Cs(CS_ARCH_ARM, CS_MODE_THUMB)
    decoder.skipdata = True
    for name, data, offset, size in [
        ('cn-first-site',cn,0x713A4,0x44), ('cn-second-site',cn,0x72760,0x48),
        ('cn-producer',cn,0x73FD4,0x49C), ('eu-producer',eu,0x7386C,0x488),
        ('eu-first-lifecycle',eu,0x6FF1C,0x11C0), ('eu-second-lifecycle',eu,0x710DC,0x12B4),
        ('eu-equipment-producer-caller',eu,0x12062,0x80),
    ]:
        (output/f'{name}.txt').write_text('\n'.join(
            f'{i.address:08X} {i.bytes.hex():10} {i.mnemonic:8} {i.op_str}'
            for i in decoder.disasm(data[offset:offset+size],0x08000000+offset))+'\n')
    candidates = port_report(ROOT/'inputs/ss2-cn-baseline.gba', ROOT/'inputs/ss2-eu.gba',
                             source, ROOT/'profiles/ss2-cn-baseline.json', ROOT/'profiles/ss2-eu.json')
    (output/'default-candidates.json').write_text(json.dumps(candidates,indent=2)+'\n')
    built = (ROOT/'artifacts/ss2-eu-persistent-summons-test.gba').read_bytes()
    diff = [i for i,(a,b) in enumerate(zip(eu,built)) if a!=b]
    assert len(eu)==len(built) and diff==[0x70CF0,0x7207C]
    assert apply_bps(eu,(ROOT/'releases/persistent-summons-test.bps').read_bytes()) == built
    ips = (ROOT/'releases/persistent-summons-test.ips').read_bytes()
    assert ips[:5]==b'PATCH' and ips[-3:]==b'EOF'
    result=bytearray(eu); cursor=5
    while cursor<len(ips)-3:
        offset=int.from_bytes(ips[cursor:cursor+3],'big'); size=int.from_bytes(ips[cursor+3:cursor+5],'big');cursor+=5
        assert size>0
        result[offset:offset+size]=ips[cursor:cursor+size];cursor+=size
    assert result==built
    report=dict(status='static_verified', identities=identities, dispatch=dispatch,
                byte_claims={hex(k):v for k,v in claims.items()}, changed_offsets=[hex(i) for i in diff],
                definition_sha256=hashlib.sha256(definition.read_bytes()).hexdigest(),
                output_sha256=hashlib.sha256(built).hexdigest(), bps_round_trip=True, ips_round_trip=True,
                source_inputs_unchanged=all(hashlib.sha256((ROOT/f'inputs/{n}.gba').read_bytes()).hexdigest()==i['sha256'] for n,i in identities.items()))
    assert report['source_inputs_unchanged']
    (output/'report.json').write_text(json.dumps(report,indent=2)+'\n')
    print(json.dumps(report,indent=2))


if __name__=='__main__':
    main()
