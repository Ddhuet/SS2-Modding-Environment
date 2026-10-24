#!/usr/bin/env python3
"""Stacking A/B diagnostics and real inventory controls, each from a cold boot.

The controlled cases explicitly mutate RAM/CPU and restore each ROM's own
state. The gameplay case uses only controls and the unchanged normal save.
"""
from pathlib import Path
import argparse
import hashlib
import json
import struct
import subprocess
import sys
ROOT=Path(__file__).resolve().parents[1]
sys.path.insert(0,str(ROOT))
from emulator import sha256
from game_fixture import BootGame, record_check
from ss2tools.core import load_profile,verify,parse_writes,assert_preimages
RETURN=0x080003F0
STACK=0x0203F000
ITEM=0x0203F100
BAG=0x150


def item(kind,code,quantity=0):
    return struct.pack('<8H',kind,code,quantity,0,0,0,0,0)


def inventory(game):
    return game.session.read_memory(game.player+BAG,400)


def records(data):
    return [struct.unpack_from('<8H',data,i*16) for i in range(25)]


def counts(data):
    result={}
    for rec in records(data):
        kind,code,qty=rec[:3]
        if not kind:continue
        key=f'{kind}:{code}'
        n=max(1,qty) if kind==1 and code!=7 else 1
        result[key]=result.get(key,0)+n
    return result


class Diagnostic:
    def __init__(self,game,state):
        self.game=game;self.s=game.session;self.state=state;self.rows=[]
    def reset(self,name):
        self.s.load_state(self.state);self.row=dict(name=name,mutations=[],stops=[])
        self.rows.append(self.row)
    def memory(self,address,data):
        assert len(data)%2==0
        self.row['mutations'].append(dict(space='ram',address=hex(address),before_hex=self.s.read_memory(address,len(data)).hex(),after_hex=data.hex()))
        for i in range(0,len(data),2):self.s.write16(address+i,int.from_bytes(data[i:i+2],'little'))
    def register(self,name,value):
        self.row['mutations'].append(dict(space='register',name=name,before=self.s.register(name),after=value))
        self.s.write_register(name,value)
    def call(self,entry,**regs):
        for name,value in {'cpsr':0xFF,'sp':STACK,'lr':RETURN|1,'pc':entry,**regs}.items():self.register(name,value)
        stop=self.s.run_until(RETURN,instructions=100000,frames=5)
        self.row['stops'].append(stop)
        self.game.check('bounded real routine returns',stop['hit'],case=self.row['name'])
        return stop['registers']
    def bag(self,items):
        self.memory(self.game.player+BAG,b''.join(items)+bytes(400-len(items)*16))


def diagnostics(game,is_patch,allocation):
    s=game.session
    stop=s.run_until(RETURN,instructions=1000000,frames=2)
    game.check('running Thumb fixture reached',stop['hit'])
    state=s.save_state('states/diagnostic.ss1');d=Diagnostic(game,state)
    cases=[('empty legacy',[],item(1,0),{'1:0':1}),
           ('empty 100',[],item(1,0,100),{'1:0':100}),
           ('split 101',[],item(1,0,101),{'1:0':101}),
           ('merge legacy',[item(1,0)],item(1,0),{'1:0':2}),
           ('overflow 99+2',[item(1,0,99)],item(1,0,2),{'1:0':101}),
           ('different codes',[item(1,0,4)],item(1,3,2),{'1:0':4,'1:3':2}),
           ('nonstack Soul Return',[item(1,7)],item(1,7),{'1:7':2}),
           ('ore',[item(9,1,50)],item(9,1,60),{'9:1':2})]
    for name,existing,incoming,expected in cases:
        d.reset(name);d.bag(existing);d.memory(ITEM,incoming)
        before=inventory(game);adjacent=s.read_memory(game.player+BAG+400,32)
        regs=d.call(0x0805AB20,r0=ITEM)
        after=inventory(game);d.row.update(before_hex=before.hex(),after_hex=after.hex(),result=regs['r0'])
        game.check('acquisition success',regs['r0']==1,case=name)
        if is_patch:
            game.check('exact acquisition quantities',counts(after)==expected,case=name,actual=counts(after))
            game.check('stacks bounded at 100',all(r[2]<=100 for r in records(after) if r[0]==1 and r[1]!=7))
        else:
            game.check('baseline creates new slot',sum(r[0]!=0 for r in records(after))==len(existing)+1,case=name)
        game.check('adjacent inventory boundary preserved',adjacent==s.read_memory(game.player+BAG+400,32))
    for name,items,incoming in [('full failure',[item(2,1)]*25,item(1,0)),
                                ('partial capacity failure',[item(1,0,99)]+[item(2,1)]*24,item(1,0,2))]:
        d.reset(name);d.bag(items);d.memory(ITEM,incoming);before=inventory(game)
        regs=d.call(0x0805AB20,r0=ITEM)
        game.check('failed acquisition atomic',regs['r0']==0 and inventory(game)==before and s.read_memory(ITEM,16)==incoming,case=name)
    for qty in (0,1,2,100):
        d.reset(f'consume {qty}');d.bag([item(1,0,qty)])
        d.call(0x0805D580,r0=0);rec=records(inventory(game))[0]
        game.check('slot consume boundary',rec[0]==(1 if is_patch and qty>1 else 0) and (not is_patch or qty<=1 or rec[2]==qty-1))
    for qty in (0,1,2,100):
        d.reset(f'Herb sale valuation {qty}');d.memory(ITEM,item(1,0,qty))
        regs=d.call(0x0805AE94,r0=ITEM)
        expected=20*(max(1,qty) if is_patch else 1)
        game.check('real Herb valuation scales with quantity',regs['r0']==expected,quantity=qty,actual=regs['r0'])
    for slot in (25,255):
        d.reset(f'invalid slot {slot}');d.bag([item(1,0,2)])
        before=inventory(game);d.call(0x0805D580,r0=slot)
        game.check('invalid slot is no-op',inventory(game)==before)
    if is_patch:
        for code in range(0x5B):
            d.reset(f'classifier {code}');d.memory(ITEM,item(1,code))
            regs=d.call(0x08000000+allocation+0x33CD7C-0x33CD40,r0=ITEM,r1=0xABCD)
            expected=int(code!=7 and (code<=0x13 or 0x15<=code<=0x1D or code==0x24 or 0x54<=code<=0x58))
            game.check('exact code whitelist and r1 preservation',regs['r0']==expected and regs['r1']==0xABCD,code=code)
    s.load_state(state)
    game.frames(2)  # Resume the partial-frame scheduler stop before one-frame keys.
    return d.rows


def gameplay(game,is_patch):
    g=game;s=g.session;initial=inventory(g);initialcounts=counts(initial)
    g.press('START',20);g.press('A',240);g.press('RIGHT',30)
    menu=s.read32(0x03006440)
    g.check('inventory menu state pointer',0x02000000<=menu<0x02040000)
    g.shot('herb-before')
    g.press('A',45)
    if is_patch:
        # Quantity selector: B cancels with no item loss; then choose one.
        g.press('B',45)
        g.check('quantity selector cancel conserves inventory',counts(inventory(g))==initialcounts)
        g.press('A',45);g.press('A',45)
    g.press('RIGHT',30);g.press('A',45);g.shot('merge')
    merged=inventory(g)
    g.check('real controls conserve all inventory quantities',counts(merged)==initialcounts)
    r=records(merged)
    if is_patch:g.check('two natural Herbs merged',r[1][0]==0 and r[2][:3]==(1,0,2))
    else:g.check('baseline Herbs remain separate',r[1][:3]==(1,0,0) and r[2][:3]==(1,0,0))
    if is_patch:
        # Select one from the stack, place in vacant slot1, then merge it back.
        g.press('A',45);g.press('DOWN',30);g.press('A',45);g.press('LEFT',30);g.press('A',45);g.shot('split')
        r=records(inventory(g));g.check('split exactly one Herb',r[1][:3]==(1,0,1) and r[2][:3]==(1,0,1))
        g.check('split conserves quantity',counts(inventory(g))==initialcounts)
        g.press('A',45);g.press('A',45);g.press('RIGHT',30);g.press('A',45)
        g.check('merge after split restores exact stack',records(inventory(g))[2][:3]==(1,0,2) and counts(inventory(g))==initialcounts)
    # Close Item menu, invoke game's Save, export to a separate process.
    g.press('B',180)
    saved_bag=inventory(g)
    g.press('START',15);g.press('DOWN',10);g.press('A',180)
    saved=False
    for i in range(30):
        g.press('A',120);save=s.flush_save()
        if sha256(save)!=sha256(ROOT/'inputs/ss2-eu.sav'):
            saved=True;g.frames(360);break
    g.check('ordinary game save updated',saved)
    g.shot('saved')
    return dict(initial_hex=initial.hex(),merged_hex=merged.hex(),expected_counts=initialcounts,
                expected_bag_hex=saved_bag.hex(),save=str(s.save_path),button_only=True)


def reload_worker(args):
    data=json.loads(args.reload.read_text())
    g=BootGame(args.patched,Path(data['save']),args.output,[])
    try:
        g.boot();g.check('separate process exact saved inventory',inventory(g).hex()==data['expected_bag_hex'])
        g.press('START',20);g.press('A',240);g.press('RIGHT',10);g.press('RIGHT',20);g.shot('reloaded-stack')
        (g.folder/'report.json').write_text(json.dumps({'result':'PASS','checks':g.checks},indent=2)+'\n')
    finally:g.close()


def main():
    p=argparse.ArgumentParser(description=__doc__);p.add_argument('--output',required=True,type=Path)
    p.add_argument('--patched',type=Path,default=ROOT/'artifacts/ss2-eu-inventory-stacking-test.gba')
    p.add_argument('--definition',type=Path,default=ROOT/'patches/stackable-consumables.json')
    p.add_argument('--reload',type=Path);args=p.parse_args()
    if args.reload:reload_worker(args);return
    args.output.mkdir(parents=True,exist_ok=False)
    clean=(ROOT/'inputs/ss2-eu.gba').read_bytes();verify(clean,load_profile(ROOT/'profiles/ss2-eu.json'))
    definition=json.loads(args.definition.read_text());writes=parse_writes(definition)
    expanded=clean+bytes([int(definition['expansion']['fill_byte'],0)])*(definition['expansion']['size']-len(clean))
    assert_preimages(expanded,writes);expected=bytearray(expanded)
    for w in writes:expected[w['offset']:w['offset']+len(w['after'])]=w['after']
    for c in definition.get('copies',[]):
        origin=int(c['source_offset'],0);dest=int(c['offset'],0);length=c['length']
        original=clean[origin:origin+length]
        assert hashlib.sha256(original).hexdigest()==c['source_sha256']
        assert hashlib.sha256(expected[dest:dest+length]).hexdigest()==c['destination_sha256']
        expected[dest:dest+length]=original
    assert args.patched.read_bytes()==expected
    protected=[ROOT/'inputs/ss2-eu.gba',ROOT/'inputs/ss2-cn-baseline.gba',ROOT/'inputs/ss2-eu.sav']
    hashes={str(p):sha256(p) for p in protected}
    report=dict(result='RUNNING',checks=[],rom_sha256=sha256(args.patched),source_hashes=hashes,diagnostics={},gameplay={})
    games=[]
    try:
        for name,rom in [('baseline',ROOT/'inputs/ss2-eu.gba'),('patched',args.patched)]:
            g=BootGame(rom,ROOT/'inputs/ss2-eu.sav',args.output/name,report['checks']);games.append(g);g.boot()
            report['diagnostics'][name]=diagnostics(g,name=='patched',int(definition['allocation']['offset'],0))
            # Own diagnostic state restored to button-only entry before inputs.
            report['gameplay'][name]=gameplay(g,name=='patched');g.close()
            reloadinput=args.output/(name+'-reload-input.json');reloadinput.write_text(json.dumps(report['gameplay'][name]))
            r=subprocess.run([sys.executable,__file__,'--reload',str(reloadinput),'--patched',str(rom),'--output',str(args.output/(name+'-reload'))],capture_output=True,text=True,timeout=60)
            report['gameplay'][name]['reload_process']=dict(returncode=r.returncode,stdout=r.stdout,stderr=r.stderr)
            record_check(report['checks'],name,'fresh process normal save reload',r.returncode==0,error=r.stderr)
        report['result']='PASS'
    except BaseException as e:
        report.update(result='FAIL',error=str(e));raise
    finally:
        for g in games:g.close()
        report['inputs_unchanged']=all(sha256(p)==hashes[str(p)] for p in protected)
        (args.output/'report.json').write_text(json.dumps(report,indent=2)+'\n')
        print(json.dumps(dict(result=report['result'],checks=len(report['checks']),report=str(args.output/'report.json'))))
        assert report['inputs_unchanged']

if __name__=='__main__':main()
