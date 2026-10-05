#!/usr/bin/env python3
"""Recheck catalog source identities/pre-images without modifying any input."""
from pathlib import Path
import hashlib
import json
import sys
ROOT=Path(__file__).resolve().parents[1]
sys.path.insert(0,str(ROOT))
from ss2tools.core import verify, parse_writes, assert_preimages


def main():
    catalog=json.loads((ROOT/'docs/PORT_STATUS.json').read_text())
    blobs={}
    for name in ('ss2-cn-baseline','ss2-cn-source','ss2-eu'):
        blob=(ROOT/'inputs'/f'{name}.gba').read_bytes()
        verify(blob,json.loads((ROOT/'profiles'/f'{name}.json').read_text()))
        assert hashlib.sha256(blob).hexdigest()==catalog['verification']['profiles'][name]['sha256']
        blobs[name]=blob
    rows=[]
    items=catalog['features']+catalog['combinations']
    defined={str(x.relative_to(ROOT)) for x in (ROOT/'reference/upstream/patches/definitions').glob('*.json')}
    assert {x['source_definition'] for x in items}==defined
    for item in items:
        path=ROOT/item['source_definition'];data=path.read_bytes()
        assert hashlib.sha256(data).hexdigest()==item['source_definition_sha256']
        patch=json.loads(data);blob=blobs[item['source_profile']]
        assert patch['baseline']==catalog['verification']['profiles'][item['source_profile']]|{'filename':patch['baseline']['filename']}
        writes=parse_writes(patch,len(blob));assert_preimages(blob,writes)
        assert len(writes)==item['source_write_count']
        assert sum(len(w['before']) for w in writes)==item['source_byte_count']
        comparison=blobs['ss2-cn-source']
        inside=[w for w in writes if w['offset']+len(w['before'])<=len(comparison)]
        assert_preimages(comparison,inside)
        assert len(inside)==item['source_16mib_comparison']['in_range_preimages_matched']
        rows.append({'id':item['id'],'source_preimages':len(writes),'comparison_preimages':len(inside)})
    assert len(catalog['features'])==18 and len(catalog['combinations'])==2 and len(catalog['baseline_fix_backlog'])==5
    for name,data in blobs.items():
        assert (ROOT/'inputs'/f'{name}.gba').read_bytes()==data
    print(json.dumps({'result':'PASS','definitions':rows,'source_inputs_unchanged':True},indent=2))
if __name__=='__main__':main()
