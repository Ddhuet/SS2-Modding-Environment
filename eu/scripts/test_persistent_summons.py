#!/usr/bin/env python3
"""Synthetic producer calls, followed by real scheduled EU summon lifecycles.

Independent cold boots replay Paige's button-only combat route for each ROM.
This does not claim Archer/Dark Wizard ability acquisition or user acceptance.
Every synthetic RAM/register write is logged; states remain ROM bound.
"""
import argparse
import hashlib
import json
from pathlib import Path
import sys

ROOT=Path(__file__).resolve().parents[1]
sys.path.insert(0,str(ROOT))
from emulator import sha256
from game_fixture import BootGame, record_check

BASE_SHA='e5c64a1740263e9b26120e487f3688fbbf7b3954a2c043c0d84c333df467e0b2'
PATCH_SHA='6f790b89b6f9131577e9a7424adfd2f178171d8a0c20f9f385e61471d1832a6a'
SAVE_SHA='c33cc290d3c44b977b2dc84fedd31539d48d7739252f2086f9c39196b63f45b7'
YIELD=0x080003F0
SP=0x0203F000
MASK=0x030063E0
SITES={17:dict(entry=0x0806FF1C,tick=0x08070CF0,zero=0x08070D0A,cleanup=0x080710A8,latch=0x03006430),
       7:dict(entry=0x080710DC,tick=0x0807207C,zero=0x08072090,cleanup=0x0807235A,latch=0x03006410)}


def mutate(s,row,*,address=None,width=4,name=None,value):
    if name is not None:
        row['mutations'].append(dict(space='register',name=name,before=s.register(name),after=value))
        s.write_register(name,value)
    else:
        row['mutations'].append(dict(space='ram',address=hex(address),width=width,before=s.read(address,width),after=value))
        s.write(address,value,width)


def stop(game,row,address,frames=120,instructions=10000000):
    result=game.session.run_until(address,frames=frames,instructions=instructions)
    row.setdefault('stops',[]).append(result)
    game.check('bounded observation reaches instruction',result['hit'],address=hex(address))
    return result


def spawn(game,row,kind,level):
    s=game.session
    stop(game,row,YIELD)
    registers={r:s.register(r) for r in ['cpsr']+[f'r{i}' for i in range(13)]+['sp','lr','pc']}
    registers['pc']-=2 if registers['cpsr']&32 else 4
    old=s.read32(MASK)
    mutate(s,row,address=SP,value=0)
    for name,value in dict(cpsr=0xFF,r0=0,r1=kind,r2=0,r3=level,sp=SP,lr=YIELD|1,pc=0x0807386C).items():
        mutate(s,row,name=name,value=value)
    stop(game,row,YIELD,frames=2,instructions=100000)
    new=s.read32(MASK)
    allocated=new^old
    game.check('producer allocates one previously unused slot',new&old==old and allocated>0 and allocated&(allocated-1)==0)
    slot=allocated.bit_length()-1
    descriptor=s.read32(0x03006380)+24*slot
    game.check('real descriptor contains exact producer arguments',
               [s.read32(descriptor+x) for x in (0,4,8,12,16,20)]==[0,slot,0,kind,0,level])
    for name,value in registers.items():
        mutate(s,row,name=name,value=value)
    row.update(kind=kind,level=level,slot=slot,descriptor=hex(descriptor),allocated_bit=allocated)
    return slot,descriptor


def advance_tick(game,row,kind,patched):
    s=game.session;tick=SITES[kind]['tick'];sp=s.register('sp')
    before=s.read32(sp+0x68);adjacent=s.read_memory(sp+0x60,0x14)
    stop(game,row,tick+8,frames=2,instructions=100)
    after=s.read32(sp+0x68)
    expected=before if patched else (before-1)&0xFFFF
    game.check('scheduled counter follows original/patched model',after==expected,before=before,after=after)
    current=s.read_memory(sp+0x60,0x14)
    game.check('decrement preserves adjacent stack fields',adjacent[:8]==current[:8] and adjacent[12:]==current[12:])
    row.setdefault('ticks',[]).append(dict(frame=s.frame,sp=hex(sp),before=before,after=after))
    return after


def route(game,row):
    script=json.loads((ROOT/'docs/fixtures/goblin-fort-buttons.json').read_text())
    for command in script['commands']:
        if command['op']=='frames':game.frames(command['count'],command['keys'])
        else:
            result=game.session.run_until(int(command['address'],0),instructions=command['instructions'],frames=command['frames'],keys=command['keys'])
            game.commands.append({**command,'result':result})
            game.check('independent button-only route reaches expected combat call',result['hit']==command['expected_hit'])
    stop(game,row,game.session.register('lr')&~1,frames=2,instructions=10000)
    game.frames(91)
    stop(game,row,YIELD)
    return game.session.save_state('states/base.ss1')


def run(args,report,games):
    report['roms']={}
    for name,rom in [('original',args.baseline),('patched',args.patched)]:
        patched=name=='patched'
        game=BootGame(rom,args.save,args.output/name,report['checks']);games.append(game);s=game.session
        boot=dict(mutations=[])
        base=route(game,boot)
        record=dict(route=boot,cases=[]);report['roms'][name]=record
        for kind in (17,7):
            for level in (1,7):
                s.load_state(base)
                row=dict(scenario='scheduled-counter',mutations=[]);record['cases'].append(row)
                slot,descriptor=spawn(game,row,kind,level)
                stop(game,row,SITES[kind]['entry'])
                game.check('scheduler supplies real descriptor to correct lifecycle',s.register('r0')==descriptor)
                stop(game,row,SITES[kind]['tick'])
                state=s.save_state(f'states/type-{kind}-level-{level}-first-tick.ss1')
                row['first_tick_state']=str(state.relative_to(ROOT))
                count=s.read32(s.register('sp')+0x68);row['initial_count']=count
                game.check('initialized counter equals audited level formula',count==level+(2 if kind==17 else 4))
                row['first_tick_ram_sha256']={hex(a):hashlib.sha256(s.read_memory(a,n)).hexdigest() for a,n in [(0x02000000,0x40000),(0x03000000,0x8000)]}
                # One or two scheduled activations from this fixture. The
                # nearby goblin then stops supplying further activations; idle
                # elapsed frames must not be treated as counter consumption.
                for index in range(2 if level==1 else 1):
                    if index:stop(game,row,SITES[kind]['tick'])
                    remaining=advance_tick(game,row,kind,patched)
                    if not remaining:
                        stop(game,row,SITES[kind]['cleanup'],frames=2,instructions=10000)
                        stop(game,row,YIELD,frames=2,instructions=10000)
                        game.check('original expiration clears slot and live latch',not s.read32(MASK)&(1<<slot) and s.read8(SITES[kind]['latch'])==0)
                if patched:
                    game.check('patched counter is unchanged over scheduled activations',remaining==count)
                    game.shot(f'type-{kind}-level-{level}-persistent')
                # Each boundary restores this same ROM's actual scheduled task.
                for value in (1,65535):
                    s.load_state(state)
                    boundary=dict(scenario='counter-boundary',kind=kind,level=level,value=value,mutations=[]);record['cases'].append(boundary)
                    mutate(s,boundary,address=s.register('sp')+0x68,value=value)
                    mutate(s,boundary,name='r0',value=value)
                    advance_tick(game,boundary,kind,patched)
                    if value==1 and not patched:
                        stop(game,boundary,SITES[kind]['cleanup'],frames=2,instructions=10000)
                        stop(game,boundary,YIELD,frames=2,instructions=10000)
                        game.check('one remaining activation expires original summon',not s.read32(MASK)&(1<<slot) and s.read8(SITES[kind]['latch'])==0)
                    elif value==1:
                        game.frames(600)
                        game.check('one remaining activation survives in patched runtime',s.read32(MASK)&(1<<slot)!=0 and s.read8(SITES[kind]['latch'])==1 and s.read32(int(boundary['ticks'][0]['sp'],0)+0x68)==1)
                s.load_state(state)
                zero=dict(scenario='existing-zero-gate',kind=kind,level=level,mutations=[]);record['cases'].append(zero)
                mutate(s,zero,address=s.register('sp')+0x68,value=0)
                mutate(s,zero,name='pc',value=SITES[kind]['zero'])
                stop(game,zero,SITES[kind]['cleanup'],frames=2,instructions=10000)
                stop(game,zero,YIELD,frames=2,instructions=10000)
                game.check('existing zero gate still reclaims the slot',not s.read32(MASK)&(1<<slot))
                # Exercise the original shared cleanup flag at a normal frame
                # after resuming this actual task, without redirecting its PC.
                s.load_state(state)
                flag=dict(scenario='shared-cleanup-flag',kind=kind,level=level,mutations=[]);record['cases'].append(flag)
                location=s.read32(0x03005CF4)+4
                mutate(s,flag,address=location,width=2,value=s.read16(location)|0x10)
                stop(game,flag,SITES[kind]['cleanup'])
                stop(game,flag,YIELD,frames=2,instructions=10000)
                game.check('shared flag still clears slot and latch',not s.read32(MASK)&(1<<slot) and s.read8(SITES[kind]['latch'])==0)
                s.load_state(state)
                owner=dict(scenario='owner-state-11',kind=kind,level=level,mutations=[]);record['cases'].append(owner)
                mutate(s,owner,address=0x03003CE0+0x20,width=2,value=11)
                stop(game,owner,SITES[kind]['cleanup'])
                stop(game,owner,YIELD,frames=2,instructions=10000)
                game.check('owner state 11 still clears slot and latch',not s.read32(MASK)&(1<<slot) and s.read8(SITES[kind]['latch'])==0)
                # A second same-type summon is refused by its existing latch.
                s.load_state(state)
                duplicate=dict(scenario='resummon',kind=kind,level=level,mutations=[]);record['cases'].append(duplicate)
                oldmask=s.read32(MASK)
                second,_=spawn(game,duplicate,kind,level)
                stop(game,duplicate,SITES[kind]['entry'])
                stop(game,duplicate,YIELD,frames=2,instructions=10000)
                game.check('resummon removes duplicate and retains original',s.read32(MASK)==oldmask and second!=slot)
        game.close()
    original=[c for c in report['roms']['original']['cases'] if c['scenario']=='scheduled-counter']
    patched=[c for c in report['roms']['patched']['cases'] if c['scenario']=='scheduled-counter']
    for a,b in zip(original,patched):
        record_check(report['checks'],'A/B','independent first activation has identical RAM',a['first_tick_ram_sha256']==b['first_tick_ram_sha256'],kind=a['kind'],level=a['level'])
        record_check(report['checks'],'A/B','first activation frame matches',a['ticks'][0]['frame']==b['ticks'][0]['frame'],kind=a['kind'],level=a['level'])


def main():
    parser=argparse.ArgumentParser(description=__doc__)
    parser.add_argument('--baseline',type=Path,default=ROOT/'inputs/ss2-eu.gba')
    parser.add_argument('--patched',type=Path,default=ROOT/'artifacts/ss2-eu-persistent-summons-test.gba')
    parser.add_argument('--save',type=Path,default=ROOT/'inputs/ss2-eu.sav')
    parser.add_argument('--output',type=Path,required=True)
    args=parser.parse_args();args.output=args.output.resolve();args.output.mkdir(parents=True,exist_ok=False)
    inputs=[(args.baseline,BASE_SHA),(args.patched,PATCH_SHA),(args.save,SAVE_SHA)]
    report=dict(schema_version=1,scope=__doc__,checks=[],source_sha256={str(p.resolve()):h for p,h in inputs},
                transcript_sha256=sha256(ROOT/'docs/fixtures/goblin-fort-buttons.json'),synthetic=True,user_acceptance='not_recorded')
    games=[];failure=None
    try:
        for path,digest in inputs:
            if sha256(path)!=digest:raise ValueError(f'Unexpected input identity: {path}')
        run(args,report,games);report['result']='PASS'
    except BaseException as exc:
        failure=exc;report.update(result='FAIL',error=str(exc))
    finally:
        for game in games:
            try:game.close()
            except BaseException as exc:failure=failure or exc;report.update(result='FAIL',cleanup_error=str(exc))
        intact=all(sha256(path)==digest for path,digest in inputs)
        report['source_inputs_unchanged']=intact
        try:record_check(report['checks'],'inputs','source ROMs and normal save unchanged',intact)
        except AssertionError as exc:failure=failure or exc;report.update(result='FAIL',input_preservation_error=str(exc))
        report['assertion_count']=len(report['checks']);report['passed_assertions']=sum(c['passed'] for c in report['checks'])
        (args.output/'report.json').write_text(json.dumps(report,indent=2)+'\n')
    print(json.dumps(dict(result=report['result'],checks=report['assertion_count'],report=str(args.output/'report.json')),indent=2))
    if failure:print(str(failure),file=sys.stderr)
    return int(failure is not None)


if __name__=='__main__':raise SystemExit(main())
