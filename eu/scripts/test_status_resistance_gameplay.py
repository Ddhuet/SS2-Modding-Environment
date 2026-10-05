#!/usr/bin/env python3
"""Replay normal-save combat, then resistance diagnostics at the actual call.

The route and original kind-5 combat event use buttons and read-only native
stops. Save a combat-ready state separately for each ROM. Boundary variants
change only the caller's effect-kind word and the corresponding enemy RAM
resistance halfword; no PC/register writes or artificial stack are used.
These variants are synthetic, not naturally equipped immunity acceptance.
"""
from __future__ import annotations
import argparse
import json
from pathlib import Path
import sys
ROOT=Path(__file__).resolve().parents[1]
sys.path.insert(0,str(ROOT))
from emulator import sha256
from game_fixture import BootGame, record_check
from test_status_resistance import BASE_SHA, PATCH_SHA, SAVE_SHA, ENTRY, DIVIDE, COMPARE, DECISION, RNG, COUNT, signed, trunc


def run(args,report,games):
    transcript=ROOT/'docs/fixtures/goblin-fort-buttons.json'
    script=json.loads(transcript.read_text())
    report['transcript_sha256']=sha256(transcript)
    report['roms']={}
    for name,rom in [('original',args.baseline),('signed',args.patched)]:
        game=BootGame(rom,args.save,args.output/name,report['checks']);games.append(game)
        s=game.session
        observations=[]
        for c in script['commands']:
            if c['op']=='frames':game.frames(c['count'],c['keys'])
            else:
                result=s.run_until(int(c['address'],0),instructions=c['instructions'],frames=c['frames'],keys=c['keys'])
                game.commands.append({**c,'result':result})
                observations.append(result)
                game.check('button-only replay has expected bounded call hit',result['hit']==c['expected_hit'])
        sp=s.register('sp');ptr=s.register('r0');back=s.register('lr')&~1
        game.check('actual enemy combat call and original effect',back==0x0801F73C and s.read32(sp)==4 and s.read32(sp+4)==5 and ptr==s.register('r5')+0x218)
        entry=s.save_state('states/natural-combat-call.ss1')
        game.shot('natural-combat-call')
        record=dict(observations=observations,entry_state=str(entry.relative_to(ROOT)),
            original_effect_kind=5,target_id=4,resistance_block=hex(ptr),entry_sp=hex(sp),
            natural_ram_or_register_writes=False,entry_ram_sha256={},variants=[])
        import hashlib
        record['entry_ram_sha256']={hex(a):hashlib.sha256(s.read_memory(a,n)).hexdigest() for a,n in [(0x02000000,0x40000),(0x03000000,0x8000)]}
        # Finish this actual unsupported kind-5 call normally, then release keys
        # to create a convenient frame-boundary state after all goblin dialogue.
        finish=s.run_until(back,instructions=10000,frames=2)
        game.check('original kind-5 combat call returns',finish['hit'])
        # Release input and let the in-flight attack animation settle before
        # saving the convenient fixture. This is ordinary gameplay time.
        game.frames(91)
        ready=s.save_state('states/combat-ready.ss1')
        record['combat_ready_state']=str(ready.relative_to(ROOT))
        record['combat_ready_sidecar']=json.loads(Path(str(ready)+'.json').read_text())
        game.shot('combat-ready')
        # Record visual movement from this clean state, then restore it. Real
        # attack execution is independently proven by the preceding call hit.
        coordinate=0x03003CE0+0x8C
        start_x=s.read32(coordinate)
        before=game.shot('movement-before');game.frames(16,'RIGHT')
        right_x=s.read32(coordinate);game.frames(1)
        after=game.shot('movement-right')
        game.check('button movement changes rendered scene after dialogue',sha256(before)!=sha256(after))
        s.load_state(ready)
        game.frames(16,'LEFT');left_x=s.read32(coordinate);game.frames(1)
        game.shot('movement-left')
        record['directional_coordinate_observation']=dict(address=hex(coordinate),width=4,
            entry=start_x,after_16_right=right_x,after_16_left=left_x,
            scope='Observed directionally opposite responses in indexed player record +0x8C; full position encoding not audited')
        game.check('opposite buttons produce opposite actor coordinate changes',left_x<start_x<right_x)
        s.load_state(ready)
        for kind in (1,4):
            for resistance in (0,99,100,101,125):
                s.load_state(entry)
                field=ptr+(0 if kind==1 else 6)
                variant=dict(kind=kind,resistance=resistance,synthetic=True,
                    mutations=[dict(space='ram',address=hex(sp+4),width=4,before=s.read32(sp+4),after=kind),
                               dict(space='ram',address=hex(field),width=2,before=s.read16(field),after=resistance)],stops=[])
                s.write32(sp+4,kind);s.write16(field,resistance)
                old=s.read32(COUNT);stale=s.read8(sp-39)
                block=s.read_memory(ptr,12)
                for address in (DIVIDE,COMPARE,DECISION,back):
                    result=s.run_until(address,instructions=10000,frames=2)
                    variant['stops'].append(result)
                    game.check('natural-stack diagnostic reaches bounded observation',result['hit'],address=hex(address))
                    if address==COMPARE:
                        regs=result['registers'];denom=25 if kind==1 else 50
                        numerator=(100-resistance)*5 # actual caller strength=0
                        expected=trunc(numerator,denom) if name=='signed' else (numerator&0xFFFFFFFF)//denom
                        variant.update(chance=signed(regs['r4']),rng_draw=regs['r5'],gate_passed=signed(regs['r4'])>regs['r5'],stale_payload_kind=stale,rng_after=s.read_memory(RNG,8).hex())
                        game.check('real caller boundary chance agrees with model',variant['chance']==expected)
                    if address==DECISION:variant['payload_kind']=s.read8(sp-39)
                variant['queue_delta']=s.read32(COUNT)-old
                expected_kind=kind if variant['gate_passed'] else stale
                game.check('actual stack payload and dispatch follow gate',variant['payload_kind']==expected_kind and variant['queue_delta']==int(expected_kind in (1,4)))
                game.check('outer diagnostic preserves neighboring resistance fields',s.read_memory(ptr,12)==block)
                record['variants'].append(variant)
        report['roms'][name]=record
        game.close()
    a,b=report['roms']['original'],report['roms']['signed']
    record_check(report['checks'],'A/B','independent natural combat entries have identical RAM',a['entry_ram_sha256']==b['entry_ram_sha256'])
    for x,y in zip(a['variants'],b['variants']):
        record_check(report['checks'],'A/B','same original RNG at actual caller',x['rng_draw']==y['rng_draw'] and x['rng_after']==y['rng_after'])
        if x['resistance']>100:
            record_check(report['checks'],'A/B','above100 real-stack A/B gate and dispatch difference',x['gate_passed'] and not y['gate_passed'] and x['queue_delta']==1 and y['queue_delta']==0)
        else:
            record_check(report['checks'],'A/B','below/equal100 actual caller behavior unchanged',x['chance']==y['chance'] and x['queue_delta']==y['queue_delta'])


def main():
    p=argparse.ArgumentParser(description=__doc__)
    p.add_argument('--baseline',type=Path,default=ROOT/'inputs/ss2-eu.gba')
    p.add_argument('--patched',type=Path,default=ROOT/'artifacts/ss2-eu-resistance-candidate-001.gba')
    p.add_argument('--save',type=Path,default=ROOT/'inputs/ss2-eu.sav')
    p.add_argument('--output',type=Path,required=True)
    args=p.parse_args();args.output=args.output.resolve();args.output.mkdir(parents=True,exist_ok=False)
    fixtures=[(args.baseline,BASE_SHA),(args.patched,PATCH_SHA),(args.save,SAVE_SHA)]
    report=dict(schema_version=1,scope=__doc__,checks=[],source_sha256={str(x.resolve()):h for x,h in fixtures})
    games=[];failure=None
    try:
        for x,h in fixtures:
            if sha256(x)!=h:raise ValueError(f'Unexpected fixture identity: {x}')
        run(args,report,games);report['result']='PASS'
    except BaseException as exc:failure=exc;report.update(result='FAIL',error=str(exc))
    finally:
        for game in games:
            try:game.close()
            except BaseException as exc:failure=failure or exc;report.update(result='FAIL',cleanup_error=str(exc))
        try:
            intact=all(sha256(x)==h for x,h in fixtures);report['source_inputs_unchanged']=intact
            record_check(report['checks'],'inputs','source ROMs and normal save unchanged',intact)
        except BaseException as exc:failure=failure or exc;report.update(result='FAIL',input_preservation_error=str(exc))
        report['assertion_count']=len(report['checks']);report['passed_assertions']=sum(x['passed'] for x in report['checks'])
        (args.output/'report.json').write_text(json.dumps(report,indent=2)+'\n')
    print(json.dumps(dict(result=report['result'],checks=report['assertion_count'],report=str(args.output/'report.json')),indent=2))
    if failure:print(str(failure),file=sys.stderr)
    return int(failure is not None)
if __name__=='__main__':raise SystemExit(main())
