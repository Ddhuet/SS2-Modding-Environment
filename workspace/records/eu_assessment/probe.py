"""Read-only CN-to-EU candidate search. No ROM writes. Run from repository root."""
import collections,hashlib,json,re,zlib
from pathlib import Path
root=Path(__file__).resolve().parents[3]
cn=(root/'ROMs/Shining_Soul_II_JP.GBA').read_bytes()
eu=(root/'ROMs/Shining_Soul_II_EU.gba').read_bytes()
def identity(d):
 return dict(size=len(d),sha256=hashlib.sha256(d).hexdigest(),crc32=f'{zlib.crc32(d):08X}',game_code=d[0xac:0xb0].decode())
def matches(off,size=96,before=32):
 start=max(0,(off-before)&~1); data=cn[start:start+size]; parts=[]; i=0
 while i<len(data):
  if i+4<=len(data) and int.from_bytes(data[i:i+2],'little')&0xf800==0xf000 and int.from_bytes(data[i+2:i+4],'little')&0xf800==0xf800:
   parts.append(b'.{4}'); i+=4
  else: parts.append(re.escape(data[i:i+2])); i+=2
 pat=re.compile(b''.join(parts),re.DOTALL)
 return [m.start()+off-start for m in pat.finditer(eu) if m.start()%2==0]
def bl(d,off):
 a=int.from_bytes(d[off:off+2],'little'); b=int.from_bytes(d[off+2:off+4],'little')
 if a&0xf800!=0xf000 or b&0xf800!=0xf800: return None
 delta=((a&2047)<<12)|((b&2047)<<1)
 if delta&0x400000: delta-=0x800000
 return f'0x{0x8000000+off+4+delta:08X}'
report={'identities':{'cn':identity(cn),'eu':identity(eu)},'code_candidates':[],'patch_preimages':[]}
for name,off in [('respec_1',0x7b662),('respec_2',0x7b66e),('respec_3',0x7b68a),('resistance_call',0x69736),('counter',0x1f1c0),('rng',0x8c8),('flash_erase',0x1b14),('damage',0x19824),('monster_drop',0x5ccc8),('forging',0x845dc),('summon_1',0x713c4),('summon_2',0x72788)]:
 hits=matches(off); row=dict(name=name,cn_offset=hex(off),eu_candidates=[hex(x) for x in hits],window_bytes=96,masked='Thumb BL pairs only')
 if len(hits)==1:
  x=hits[0]; row.update(delta=hex(x-off),cn_bytes=cn[off:off+16].hex(),eu_bytes=eu[x:x+16].hex(),cn_bl_target=bl(cn,off),eu_bl_target=bl(eu,x))
 report['code_candidates'].append(row)
for p in sorted((root/'patches/definitions').glob('*.json')):
 if p.stem.startswith('all_'): continue
 d=json.loads(p.read_text(encoding='utf-8-sig')); writes=d.get('writes',[])
 good=sum(cn[int(w['offset'],16):int(w['offset'],16)+len(bytes.fromhex(w['before_hex']))]==bytes.fromhex(w['before_hex']) for w in writes)
 report['patch_preimages'].append(dict(id=d['id'],writes=len(writes),cn_matching=good,beyond_16MiB=sum(int(w['offset'],16)>=len(cn) for w in writes)))
report['baseline_identity']=identity((root/'workspace/input/光明之魂2.gba').read_bytes())
report['short_window_candidates']=[]
for off in [0x69736,0x1f1c0,0x8c8,0x1b14,0x19824,0x5ccc8,0x845dc,0x713c4,0x72788]:
 for before,size in [(8,32),(0,32),(16,48)]:
  report['short_window_candidates'].append(dict(cn_offset=hex(off),before=before,size=size,eu_candidates=[hex(x) for x in matches(off,size,before)]))
report['anchor_votes']=[]
for off in [0x69736,0x713c4,0x72788,0x5ccc8]:
 votes=collections.Counter()
 for rel in range(-64,64,2):
  pat=cn[off+rel:off+rel+12];pos=eu.find(pat)
  if pos>=0 and eu.find(pat,pos+1)<0: votes[pos-rel]+=1
 report['anchor_votes'].append(dict(cn_offset=hex(off),method='unique exact 12-byte anchors; overlapping votes are not independent evidence',candidates=[dict(eu_offset=hex(k),votes=v) for k,v in votes.most_common(5)]))
report['division_routine_prefix_matches']=[]
for off in [0xbaa7c,0xba8a4]:
 pat=cn[off:off+128];hits=[];pos=eu.find(pat)
 while pos>=0:
  hits.append(hex(pos));pos=eu.find(pat,pos+1)
 report['division_routine_prefix_matches'].append(dict(cn_offset=hex(off),exact_prefix_bytes=128,eu_candidates=hits))
report['decoded_calls']=[dict(cn_offset=hex(c),cn_target=bl(cn,c),eu_offset=hex(e),eu_target=bl(eu,e)) for c,e in [(0x69736,0x690da),(0x1f1cc,0x1f3f0)]]
report['table_candidates']=[]
for name in ['ring_balance_rework','temple_soul_fusion_rework','weapon_balance_rework','equipment_set_balance_rework']:
 d=json.loads((root/f'patches/definitions/{name}.json').read_text());votes=collections.Counter()
 for w in d['writes']:
  off=int(w['offset'],16);pat=cn[off-16:off+32];pos=eu.find(pat)
  if pos>=0 and eu.find(pat,pos+1)<0: votes[pos+16-off]+=1
 candidates=[]
 for delta,v in votes.most_common(5):
  good=sum(eu[int(w['offset'],16)+delta:int(w['offset'],16)+delta+len(bytes.fromhex(w['before_hex']))]==bytes.fromhex(w['before_hex']) for w in d['writes'])
  candidates.append(dict(delta=hex(delta),unique_48_byte_context_matches=v,matching_preimages=good,total_writes=len(d['writes'])))
 report['table_candidates'].append(dict(id=name,candidates=candidates))
print(json.dumps(report,indent=2))
