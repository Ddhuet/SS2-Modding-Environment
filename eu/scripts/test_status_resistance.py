#!/usr/bin/env python3
"""EU resistance gate and event-queue diagnostics, explicitly synthetic.

Cold boots each exact ROM from Paige's normal save. Each isolated case restores
its own ROM-bound state, calls the real EU routine with a disclosed RAM/CPU
fixture, and stops before gameplay resumes. A draw override at the comparison
exercises strict threshold boundaries; the real RNG draw is also recorded.
This is not naturally equipped combat or human acceptance.
"""
from __future__ import annotations
import argparse
import json
from pathlib import Path
import sys

ROOT = Path(__file__).resolve().parents[1]
sys.path.insert(0, str(ROOT))
from emulator import sha256
from game_fixture import BootGame, record_check

BASE_SHA = 'e5c64a1740263e9b26120e487f3688fbbf7b3954a2c043c0d84c333df467e0b2'
PATCH_SHA = '3e62e1035485b5fe3e4af1040625626686cb886d5680cfb8f2e4a2a721467d5e'
SAVE_SHA = 'c33cc290d3c44b977b2dc84fedd31539d48d7739252f2086f9c39196b63f45b7'
ENTRY, DIVIDE, COMPARE, DECISION = 0x08069080, 0x080690DA, 0x08069116, 0x0806912A
RETURN = 0x080003F0
SP, BLOCK = 0x0203F000, 0x0203F100
COUNT, QUEUE, RNG = 0x03006338, 0x03006300, 0x03001318


def signed(n):
    n &= 0xFFFFFFFF
    return n - 0x100000000 if n & 0x80000000 else n


def trunc(n, d):
    return (-1 if n < 0 else 1) * (abs(n) // d)


def experiment(game, state, *, kind, resistance, strength, roll, scale=100,
               stale=0, player_target=False):
    s = game.session
    s.load_state(state)
    row = dict(kind=kind, resistance=resistance, strength=strength,
               roll_override=roll, scaling_percent=scale if player_target else None,
               stale_payload_kind=stale, target_id=0 if player_target else 4,
               mutations=[], stops=[])

    def memory(addr, value, width):
        row['mutations'].append(dict(space='ram', address=hex(addr), width=width,
                                     before=s.read(addr, width), after=value))
        s.write(addr, value, width)

    def reg(name, value):
        row['mutations'].append(dict(space='register', name=name,
                                     before=s.register(name), after=value))
        s.write_register(name, value)

    def stop(addr):
        result = s.run_until(addr, instructions=10000, frames=2)
        row['stops'].append(result)
        if not result['hit']:
            raise AssertionError(f'Bounded call missed {addr:#x}: {result}')
        return result['registers']

    # Allocate a separate diagnostic stack/block. Initialize all six halfwords
    # so neighboring field preservation can be checked; only kind 1/4 is read.
    for i in range(6):
        memory(BLOCK + 2*i, resistance & 0xFFFF, 2)
    memory(SP, row['target_id'], 4)
    memory(SP + 4, kind, 4)
    memory(SP - 40, stale << 8, 4)
    memory(SP - 36, 0, 4)
    memory(COUNT, 0, 4)
    if player_target:
        memory(0x03003CE0 + 0x73, scale & 0xFF, 1)
    # IRQ/FIQ masked; switch only after reaching a running Thumb task, never
    # redirect the CPU while the core is halted inside BIOS IntrWait.
    for name, value in {'cpsr':0xFF, 'r0':BLOCK, 'r1':100, 'r2':strength,
                        'r3':0, 'sp':SP, 'lr':RETURN|1, 'pc':ENTRY}.items():
        reg(name, value)
    before = s.read_memory(BLOCK, 12)
    regs = stop(DIVIDE)
    numerator = (100-resistance)*(10*strength+5)
    denominator = 25 if kind == 1 else 50
    game.check('exact EU pre-division operands',
               signed(regs['r0']) == numerator and regs['r1'] == denominator,
               kind=kind, resistance=resistance)
    regs = stop(COMPARE)
    chance = trunc(numerator, denominator) if s.rom_sha256 == PATCH_SHA else (numerator & 0xFFFFFFFF)//denominator
    if player_target:
        chance = trunc(signed(chance * scale), 100)
    row.update(expected_chance=chance, actual_chance=signed(regs['r4']),
               rng_draw=regs['r5'], rng_after=s.read_memory(RNG,8).hex())
    game.check('signed chance equals instruction model', signed(regs['r4']) == chance,
               expected=chance, actual=signed(regs['r4']))
    game.check('actual RNG is in 0..99', 0 <= regs['r5'] < 100)
    # Deliberately substitute the draw after its real calculation to exercise
    # roll 0, 1, 50 and 99 without probabilistic sampling claims.
    reg('r5', roll)
    stop(DECISION)
    row['gate_passed'] = chance > roll
    row['payload_kind'] = s.read8(SP - 39)
    expected_kind = kind if row['gate_passed'] else stale
    game.check('strict greater-than gate sets or preserves payload byte',
               row['payload_kind'] == expected_kind)
    stop(RETURN)
    row['queue_count'] = s.read32(COUNT)
    game.check('queue matches payload kind (includes stale payload diagnostic)',
               row['queue_count'] == int(expected_kind in (1,4)))
    if row['queue_count']:
        queue = s.read32(QUEUE)
        row['event'] = dict(address=hex(queue), kind=s.read8(queue),
                            payload=s.read_memory(queue+8,8).hex())
        game.check('real EU queue receives 0x8B and exact payload',
                   s.read8(queue) == 0x8B and
                   s.read_memory(queue+8,8) == s.read_memory(SP-40,8))
    game.check('adjacent resistance fields untouched by outer gate',
               before == s.read_memory(BLOCK,12))
    return row


def unsupported(game, state, kind):
    s=game.session
    s.load_state(state)
    mutations=[]
    for addr,value in [(SP,4),(SP+4,kind),(SP-40,0),(SP-36,0),(COUNT,0)]:
        mutations.append(dict(space='ram',address=hex(addr),width=4,before=s.read32(addr),after=value))
        s.write32(addr,value)
    for name,value in {'cpsr':0xFF,'r0':BLOCK,'r1':100,'r2':4,'sp':SP,'lr':RETURN|1,'pc':ENTRY}.items():
        mutations.append(dict(space='register',name=name,before=s.register(name),after=value))
        s.write_register(name,value)
    result=s.run_until(RETURN,instructions=10000,frames=2)
    game.check('unsupported kind returns without queueing', result['hit'] and s.read32(COUNT)==0,kind=kind)
    return dict(kind=kind,mutations=mutations,stop=result)


def run(args,report,games):
    report['cases']={}
    report['unsupported_kinds']={}
    for name,rom in [('original',args.baseline),('signed',args.patched)]:
        game=BootGame(rom,args.save,args.output/name,report['checks'])
        games.append(game)
        game.boot()
        s=game.session
        # Test bounded observer before invoking any synthetic code.
        current=s.register('pc')-(2 if s.register('cpsr')&32 else 4)
        hit=s.run_until(current,instructions=0,frames=0)
        miss=s.run_until(ENTRY,instructions=0,frames=0)
        frame_miss=s.run_until(ENTRY,instructions=1000000,frames=0)
        game.check('native zero-step hit and budget misses', hit['hit'] and not miss['hit'] and miss['instructions']==0 and frame_miss['stop']=='frame_budget')
        running=s.run_until(RETURN,instructions=1000000,frames=2)
        game.check('observer reaches actual running Thumb scheduler', running['hit'] and running['registers']['cpsr']&32 != 0)
        sp=s.register('sp')
        state=s.save_state('states/running-task.ss1')
        s.step(1)
        # Scheduler begins movs r0,#1; verified bytes 0120 at 0x3F0.
        game.check('observer pauses before instruction (step executes it)', s.register('sp')==sp and s.register('r0')==1 and s.register('pc')==RETURN+4)
        s.load_state(state)
        report.setdefault('fixtures',{})[name]=dict(state=str(state.relative_to(ROOT)),
            sidecar=json.loads(Path(str(state)+'.json').read_text()),
            rng=s.read_memory(RNG,8).hex(),player=hex(game.player),
            character='Paige',character_class='Priestess',level=19,
            language='English',location='inn room (source normal save)',
            reached='game_fixture.BootGame.boot; native read-only stop at 0x080003F0')
        rows=report['cases'][name]=[]
        for kind in (1,4):
            for strength in (0,4,7):
                for resistance in (-32768,-1,0,50,99,100,101,125,200,32767):
                    for roll in (0,1,50,99):
                        rows.append(experiment(game,state,kind=kind,resistance=resistance,strength=strength,roll=roll))
        # Positive player scaling path and disclosed non-normal scaling signs.
        for scale in (0,50,100,-100):
            for resistance in (50,100,101,125):
                rows.append(experiment(game,state,kind=1,resistance=resistance,strength=4,
                                       roll=50,scale=scale,player_target=True))
        # A failed gate can inherit kind1/4 from the uninitialized local byte.
        # Prove this separately; do not call it part of the signed-division fix.
        for stale in (1,4):
            rows.append(experiment(game,state,kind=1,resistance=100,strength=4,roll=50,stale=stale))
        report['unsupported_kinds'][name]=[unsupported(game,state,k) for k in (0,2,3,5,6,7,255)]
        game.close()
    original,patched=report['cases']['original'],report['cases']['signed']
    record_check(report['checks'],'A/B','independent cold boots have identical RNG fixture',report['fixtures']['original']['rng']==report['fixtures']['signed']['rng'])
    for a,b in zip(original,patched):
        record_check(report['checks'],'A/B','equivalent RNG and below/equal-100 behavior',
                     a['rng_draw']==b['rng_draw'] and a['rng_after']==b['rng_after'] and
                     (a['resistance']>100 or a['actual_chance']==b['actual_chance'] and a['payload_kind']==b['payload_kind']))
    report['summary']=dict(cases_per_rom=len(original),unsupported_kinds_per_rom=7,
        changed_above_100=sum(a['gate_passed']!=b['gate_passed'] for a,b in zip(original,patched)),
        scope='Synthetic outer chance gate and event queue; not naturally equipped combat, inner status landing, persistence or user acceptance')


def main():
    p=argparse.ArgumentParser(description=__doc__)
    p.add_argument('--baseline',type=Path,default=ROOT/'inputs/ss2-eu.gba')
    p.add_argument('--patched',type=Path,default=ROOT/'artifacts/ss2-eu-resistance-candidate-001.gba')
    p.add_argument('--save',type=Path,default=ROOT/'inputs/ss2-eu.sav')
    p.add_argument('--output',type=Path,required=True)
    args=p.parse_args();args.output=args.output.resolve();args.output.mkdir(parents=True,exist_ok=False)
    fixtures=[(args.baseline,BASE_SHA),(args.patched,PATCH_SHA),(args.save,SAVE_SHA)]
    report=dict(schema_version=1,scope=__doc__,synthetic=True,ram_or_register_writes=True,
                checks=[],source_sha256={str(x.resolve()):h for x,h in fixtures})
    games=[];failure=None
    try:
        for x,h in fixtures:
            if sha256(x)!=h:raise ValueError(f'Unexpected exact fixture: {x}')
        a=args.baseline.read_bytes();b=args.patched.read_bytes()
        record_check(report['checks'],'build','only intended complete BL pair differs',
            len(a)==len(b) and a[0x690DA:0x690DE].hex()=='50f047fa' and b[0x690DA:0x690DE].hex()=='50f05bf9' and
            a[:0x690DA]==b[:0x690DA] and a[0x690DE:]==b[0x690DE:])
        run(args,report,games);report['result']='PASS'
    except BaseException as exc:
        failure=exc;report.update(result='FAIL',error=str(exc))
    finally:
        for game in games:
            try:game.close()
            except BaseException as exc:
                failure=failure or exc;report.update(result='FAIL',cleanup_error=str(exc))
        try:
            intact=all(sha256(x)==h for x,h in fixtures)
            report['source_inputs_unchanged']=intact
            record_check(report['checks'],'inputs','exact source identities remain unchanged',intact)
        except BaseException as exc:
            failure=failure or exc;report.update(result='FAIL',input_preservation_error=str(exc))
        report['assertion_count']=len(report['checks'])
        report['passed_assertions']=sum(x['passed'] for x in report['checks'])
        (args.output/'report.json').write_text(json.dumps(report,indent=2)+'\n')
    print(json.dumps(dict(result=report['result'],checks=report['assertion_count'],
                          summary=report.get('summary'),report=str(args.output/'report.json')),indent=2))
    if failure:print(str(failure),file=sys.stderr)
    return int(failure is not None)

if __name__=='__main__':raise SystemExit(main())
