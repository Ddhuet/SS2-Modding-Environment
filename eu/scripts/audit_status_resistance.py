#!/usr/bin/env python3
"""Reproduce exact-profile resistance discovery, BL encoding and disassembly."""
from pathlib import Path
import argparse
import hashlib
import json
import subprocess
import sys
ROOT=Path(__file__).resolve().parents[1]
sys.path.insert(0,str(ROOT))
from ss2tools.core import verify, parse_writes, assert_preimages, decode_bl, encode_bl
from ss2tools.porting import port_report


def main():
    p=argparse.ArgumentParser(description=__doc__);p.add_argument('--output',type=Path,required=True);args=p.parse_args()
    output=args.output.resolve();output.mkdir(parents=True,exist_ok=False)
    cnpath=ROOT/'inputs/ss2-cn-baseline.gba';eupath=ROOT/'inputs/ss2-eu.gba'
    source=ROOT/'reference/upstream/patches/definitions/status_resistance_overflow_fix.json'
    cn=cnpath.read_bytes();eu=eupath.read_bytes();patch=json.loads(source.read_text())
    identities={}
    for name,data in [('ss2-cn-baseline',cn),('ss2-eu',eu)]:
        identities[name]=verify(data,json.loads((ROOT/'profiles'/f'{name}.json').read_text()))
    assert_preimages(cn,parse_writes(patch,len(cn)))
    source_after=cn[0x69736:0x69738]+bytes.fromhex(patch['writes'][0]['after_hex'])
    assert decode_bl(cn[0x69736:0x6973a],0x69736)==0x080BAA7C
    assert decode_bl(source_after,0x69736)==0x080BA8A4
    assert decode_bl(eu[0x690da:0x690de],0x690da)==0x080B956C
    replacement=encode_bl(0x690da,0x080B9394)
    assert replacement.hex()=='50f05bf9'
    candidate=json.loads((ROOT/'patches/status-resistance-signed-division.json').read_text())
    assert_preimages(eu,parse_writes(candidate,len(eu)))
    assert candidate['writes'][0]['after_hex']==replacement.hex()
    matches=[]
    for a,b in [(0xBAA7C,0xB956C),(0xBA8A4,0xB9394)]:
        pattern=cn[a:a+128];hits=[];start=0
        while True:
            i=eu.find(pattern,start)
            if i<0:break
            if i%2==0:hits.append(i)
            start=i+1
        assert hits==[b]
        matches.append(dict(source_offset=hex(a),eu_offset=hex(b),length=128,
                            prefix_sha256=hashlib.sha256(pattern).hexdigest(),aligned_hits=[hex(i) for i in hits]))
    (output/'division-prefix-matches.json').write_text(json.dumps(matches,indent=2)+'\n')
    for name,window,before in [('default-candidates',96,32),('short-candidates',32,16)]:
        result=port_report(cnpath,eupath,source,ROOT/'profiles/ss2-cn-baseline.json',ROOT/'profiles/ss2-eu.json',window=window,before=before,mode='thumb-bl',limit=20)
        (output/f'{name}.json').write_text(json.dumps(result,indent=2)+'\n')
        if name=='short-candidates':assert result['writes'][0]['candidates'][0]['offset']=='0x000690DC'
    ranges=[('eu-outer',eupath,0x69080,0x1a4),('eu-inner',eupath,0x69224,0x164),
      ('eu-outer-duration',eupath,0x69144,0x4c),('eu-outer-dispatch',eupath,0x69194,0x76),
      ('eu-player-caller',eupath,0x29a7c,0x120),('eu-enemy-caller',eupath,0x1f650,0x150),
      ('eu-second-enemy-caller',eupath,0x64a90,0x120),('eu-queue',eupath,0x67d28,0x4c),
      ('eu-rng',eupath,0x8c8,0x74),('eu-current-player',eupath,0x20f4,0x24),
      ('eu-udiv',eupath,0xb956c,0x78),('eu-sdiv',eupath,0xb9394,0x1d8),
      ('cn-outer',cnpath,0x696dc,0x1a4)]
    commands=[]
    for name,rom,offset,length in ranges:
        command=[sys.executable,str(ROOT/'scripts/disassemble.py'),str(rom),'--offset',hex(offset),'--length',hex(length)]
        result=subprocess.run(command,check=True,text=True,capture_output=True)
        (output/f'{name}.txt').write_text(result.stdout)
        commands.append(dict(command=command,output=f'{name}.txt'))
    (output/'commands.json').write_text(json.dumps(commands,indent=2)+'\n')
    # A linear decoder can stop on an inline literal; split the later blocks
    # above and record actual literal values rather than decoding them as code.
    literals={hex(0x08000000+i):hex(int.from_bytes(eu[i:i+4],'little'))
              for i in [0x68fb8,0x69008,0x6913c,0x69190,
                        *range(0x6920c,0x69224,4)]}
    assert literals['0x8069220']=='0x30034e0'
    assert literals['0x806920c']=='0x30056f4'
    (output/'eu-literals.json').write_text(json.dumps(literals,indent=2)+'\n')
    assert hashlib.sha256(cnpath.read_bytes()).hexdigest()==identities['ss2-cn-baseline']['sha256']
    assert hashlib.sha256(eupath.read_bytes()).hexdigest()==identities['ss2-eu']['sha256']
    report=dict(result='PASS',identities=identities,source_preimages_verified=True,
                source_original_target='0x080BAA7C',source_replacement_target='0x080BA8A4',
                eu_original_target='0x080B956C',eu_replacement_target='0x080B9394',
                eu_complete_replacement_hex=replacement.hex(),source_inputs_unchanged=True)
    (output/'report.json').write_text(json.dumps(report,indent=2)+'\n');print(json.dumps(report,indent=2))
if __name__=='__main__':main()
