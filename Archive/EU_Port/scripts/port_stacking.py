#!/usr/bin/env python3
"""Generate the EU experimental stacking definition from verified CN bytes.

The source payload is reconstructed, never sparsely pasted over EU resources.
Every relocation and EU instruction adaptation is explicit. Run from eu/.
"""
from pathlib import Path
import json
import struct
import subprocess
import sys
import tempfile
ROOT = Path(__file__).resolve().parents[1]
sys.path.insert(0,str(ROOT))
from ss2tools.core import (load_profile, verify, parse_writes, assert_preimages,
                          encode_bl, decode_bl, identity, publish_new)
SOURCE_START, SOURCE_END = 0x33CD40, 0x33D354
ALLOCATION = 0x33B80C
HOOKS = {
    0x5B11C:0x5AB20, 0x5B696:0x5B04A, 0x5DC50:0x5D580,
    0x606DC:0x5FFCC, 0x60D04:0x60592, 0x61910:0x61190,
    0x7CED8:0x7C770, 0x7CF7A:0x7C812, 0x7D110:0x7C9A8,
    0x7D42E:0x7CCC6, 0x7D43A:0x7CCD2, 0x7D484:0x7CD1C,
    0x7D51A:0x7CDB2, 0x7D52C:0x7CDC4, 0x7D5E0:0x7CE78,
    0x7EC16:0x7E46A, 0x81632:0x80E4E,
}
# Complete original instruction pre-images, including compiler differences.
PREIMAGES = {
 0x5AB20:'f0b5071c38880349',0x5B04A:'051c05e0',0x5D580:'011c182908d80548',
 0x5FFCC:'151c1293',0x60592:'08700020',0x61190:'38048023',
 0x7C770:'0a2a11d0',0x7C812:'0a284ed0',0x7C9A8:'0a2800d1',
 0x7CCC6:'0a284cd1',0x7CCD2:'0e4b9842',0x7CD1C:'0e4e8019',
 0x7CDB2:'0a2801d0',0x7CDC4:'03488142',0x7CE78:'03480d18',
 0x7E46A:'fdf785fc',0x80E4E:'00220023',0x5FFC6:'9ab0',0x605C0:'1ab0',
 0xBC448:'70213308',
}
POINTERS = {
 0x03003580:0x030034E0,0x03006500:0x03006440,
 0x0807CEDD:0x0807C775,0x0807CF7F:0x0807C817,
 0x0807D117:0x0807C9AF,0x0807D433:0x0807CCCB,
 0x0807D4CD:0x0807CD65,0x0807D523:0x0807CDBB,
 0x0807D51F:0x0807CDB7,0x0805B125:0x0805AB29,
 0x0807D01D:0x0807C8B5,0x0807CF01:0x0807C799,
 0x0805B6A7:0x0805B05B,0x0807D3F9:0x0807CC91,
 0x0805B4C1:0x0805AE95,0x0807C779:0x0807C015,
 0x0807CFCF:0x0807C863,0x08061925:0x080611A5,
 0x08081659:0x08080E75,
}
CALLS={0x0807C604:0x0807BEA0,0x0807C4DC:0x0807BD78,
       0x0805D6AC:0x0805CFF8}


def generate(output):
    cn=(ROOT/'inputs/ss2-cn-baseline.gba').read_bytes()
    eu=(ROOT/'inputs/ss2-eu.gba').read_bytes()
    verify(cn,load_profile(ROOT/'profiles/ss2-cn-baseline.json'))
    baseline=verify(eu,load_profile(ROOT/'profiles/ss2-eu.json'))
    definition=ROOT/'reference/upstream/patches/definitions/stackable_consumables.json'
    source=json.loads(definition.read_text());writes=parse_writes(source,len(cn))
    assert identity(cn)=={k:source['baseline'][k] for k in baseline}
    assert_preimages(cn,writes)
    modified=bytearray(cn)
    for w in writes:modified[w['offset']:w['offset']+len(w['after'])]=w['after']
    payload=bytearray(modified[SOURCE_START:SOURCE_END]);relocations=[]
    def patch(off,data,reason):
        pos=off-SOURCE_START
        previous=bytes(payload[pos:pos+len(data)])
        payload[pos:pos+len(data)]=data
        relocations.append(dict(source_offset=hex(off),eu_offset=hex(ALLOCATION+pos),
                                before_hex=previous.hex(),after_hex=data.hex(),reason=reason))
    # Explicit literal pools, never infer a pointer from instruction-like bytes.
    for off in [0x33CD78,*range(0x33D070,0x33D0A8,4),*range(0x33D28C,0x33D2AC,4),0x33D34C,0x33D350]:
        v=struct.unpack_from('<I',modified,off)[0]
        if v in POINTERS:patch(off,struct.pack('<I',POINTERS[v]),'audited EU pointer/continuation')
        else:assert v in (0x186A0,0xFFFE7960),(hex(off),hex(v))
    # Original player inventory base is 0x158 in CN and 0x150 in EU.
    for off in [0x33CD50,0x33CF6C,0x33D25E,0x33D26E,0x33D312]:
        assert modified[off]==0xAC
        patch(off,b'\xA8','EU inventory base 0x150')
    # EU name renderer: reserve two new stack words; keep original locals fixed.
    patch(0x33CEE6,bytes.fromhex('1a92'),'capture item pointer at caller sp+0x68')
    patch(0x33CEE8,bytes.fromhex('1293'),'replay EU str r3,[sp,#0x48]')
    with tempfile.TemporaryDirectory(prefix='ss2-stack-') as temp:
        obj=Path(temp)/'display.o';binary=Path(temp)/'display.bin'
        subprocess.run(['llvm-mc','-triple=thumbv4t-none-eabi','-filetype=obj',
            str(ROOT/'patches/source/stacking-display.s'),'-o',str(obj)],check=True)
        subprocess.run(['llvm-objcopy','-O','binary','--only-section=.text',str(obj),str(binary)],check=True)
        display=binary.read_bytes();assert len(display)==0x5E
        patch(0x33CEEC,display,'EU glyph-encoded byte-string quantity suffix; original pointer from reserved stack word')
    # Re-encode all external payload BLs from exact audited code ranges.
    for off in [0x33CED0,0x33CEDA,0x33D00E,0x33D01C]:
        original=decode_bl(modified[off:off+4],off)
        patch(off,encode_bl(ALLOCATION+off-SOURCE_START,CALLS[original]),'EU external callee')
    newwrites=[]
    def write(off,after,note):
        before=bytes.fromhex(PREIMAGES[off]) if off in PREIMAGES else eu[off:off+len(after)] if off<len(eu) else b'\xff'*len(after)
        assert (eu[off:off+len(before)]==before if off<len(eu) else before==b'\xff'*len(before)) and len(before)==len(after)
        newwrites.append(dict(address=f'0x{0x08000000+off:08X}',offset=f'0x{off:08X}',
                             before_hex=before.hex(),after_hex=after.hex(),mode='thumb',note=note))
    for cn_hook,eu_hook in HOOKS.items():
        if cn_hook in (0x5B11C,0x5DC50):
            dest=0x33CF4A if cn_hook==0x5B11C else 0x33CD40
            dest=0x08000001+ALLOCATION+dest-SOURCE_START
            # ldr r3,[pc]; bx r3; complete aligned absolute Thumb entry.
            after=bytes.fromhex('004b1847')+struct.pack('<I',dest)
        else:
            dest=decode_bl(modified[cn_hook:cn_hook+4],cn_hook)
            assert 0x08000000+SOURCE_START<=dest<0x08000000+SOURCE_END
            after=encode_bl(eu_hook,ALLOCATION+dest-0x08000000-SOURCE_START+0x08000000)
        write(eu_hook,after,f'Port CN hook 0x{cn_hook:08X}; full EU instruction pre-image')
    write(0x5FFC6,bytes.fromhex('9cb0'),'Reserve 8 bytes above original renderer locals')
    write(0x605C0,bytes.fromhex('1cb0'),'Release original locals plus 8 reserved bytes')
    assert eu[ALLOCATION:ALLOCATION+len(payload)]==bytes(len(payload))
    write(ALLOCATION,payload,'Owned payload allocation in resource relocated intact to appended ROM')
    resource=eu[0x332170:0x33BE64]
    assert struct.unpack_from('<I',resource,12)[0]==0x9CE4
    assert len(resource)==0x9CF4
    write(0xBC448,struct.pack('<I',0x09000000),'Relocate complete ROM resource to appended ROM')
    copies=[dict(source_offset='0x00332170',offset='0x01000000',length=len(resource),
                 source_sha256=identity(resource)['sha256'],destination_sha256=identity(b'\xff'*len(resource))['sha256'],
                 owner='stackable_consumables_eu')]
    patchdef=dict(schema_version=1,id='stackable_consumables_eu',name='EU inventory / consumable stacking',
      stage='static_candidate',profile_id='ss2-eu',baseline=baseline,
      source_provenance=dict(definition=str(definition.relative_to(ROOT)),source_sha256=identity(definition.read_bytes())['sha256'],
                             source_profile_id='ss2-cn-baseline',generator='scripts/port_stacking.py'),
      evidence=dict(status='experimental',audit='docs/stacking-audit.md',user_acceptance='not_run'),
      expansion=dict(size=0x2000000,fill_byte='0xFF',owner='stackable_consumables_eu'),
      allocation=dict(offset=hex(ALLOCATION),length=len(payload),fill='00',owner='stackable_consumables_eu',
                      relocated_resource=dict(original_offset='0x00332170',offset='0x01000000',length=len(resource),
                                              sha256=identity(resource)['sha256'],descriptor_offset='0x000BC448')),
      copies=copies,writes=newwrites)
    encoded=(json.dumps(patchdef,indent=2)+'\n').encode()
    publish_new({output:encoded},protected=(definition,ROOT/'inputs/ss2-eu.gba',ROOT/'inputs/ss2-cn-baseline.gba'))
    return dict(definition=str(output),relocations=relocations,hooks={hex(k):hex(v) for k,v in HOOKS.items()})

if __name__=='__main__':
    import argparse
    p=argparse.ArgumentParser(description=__doc__);p.add_argument('--output',required=True,type=Path)
    args=p.parse_args();print(json.dumps(generate(args.output),indent=2))
