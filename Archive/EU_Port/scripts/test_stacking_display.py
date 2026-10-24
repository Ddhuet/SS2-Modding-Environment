#!/usr/bin/env python3
"""EU glyph/quantity display checks in five languages with disclosed RAM setup."""
from pathlib import Path
import argparse
import json
import sys
ROOT=Path(__file__).resolve().parents[1]
sys.path.insert(0,str(ROOT))
from emulator import sha256
from game_fixture import BootGame,LANGUAGE_BUTTONS


def main():
    p=argparse.ArgumentParser(description=__doc__)
    p.add_argument('--output',type=Path,required=True)
    p.add_argument('--patched',type=Path,default=ROOT/'artifacts/ss2-eu-inventory-stacking-test.gba')
    args=p.parse_args();args.output.mkdir(parents=True,exist_ok=False)
    manifest=json.loads(Path(str(args.patched)+'.manifest.json').read_text())
    if sha256(args.patched)!=manifest['output_identity']['sha256'] or manifest['patch_sha256']!=sha256(ROOT/'patches/stackable-consumables.json'):
        raise ValueError('ROM/definition binding mismatch')
    save=ROOT/'inputs/ss2-eu.sav';original=sha256(save)
    report=dict(result='RUNNING',checks=[],cases=[],rom_sha256=sha256(args.patched),synthetic=True)
    games=[]
    try:
        for lang in LANGUAGE_BUTTONS:
            g=BootGame(args.patched,save,args.output/lang,report['checks'],lang);games.append(g);g.boot()
            g.press('START',20);g.press('A',240)
            state=g.session.save_state('states/empty-selection.ss1')
            for qty in (0,1,9,10,99,100):
                s=g.session;s.load_state(state);address=g.player+0x164
                case=dict(language=lang,quantity=qty,mutation=dict(address=hex(address),width=2,before=s.read16(address),after=qty))
                s.write16(address,qty)
                before=s.run_until(0x08060592,instructions=10000000,frames=60,keys='RIGHT')
                g.check('real EU name terminator instruction reached',before['hit'],language=lang,quantity=qty)
                regs=before['registers'];sp=regs['sp'];terminal=regs['r0']&255
                prefix=s.read_memory(sp,regs['r1']-sp)
                after=s.run_until(0x08060596,instructions=10000,frames=1)
                g.check('suffix helper returns to EU renderer',after['hit'])
                end=after['registers']['r1'];actual=s.read_memory(sp,end-sp+1)
                digits=bytes(0x41+int(n) for n in str(max(1,qty)))
                expected=prefix+b'\x51\x38'+digits+bytes([terminal])
                g.check('exact custom glyph suffix and preserved terminator',actual==expected,language=lang,quantity=qty,actual=actual.hex(),expected=expected.hex())
                g.check('renderer returns zero and keeps its stack',after['registers']['r0']==0 and after['registers']['sp']==sp)
                s.run_frames(2)
                shot=g.shot('quantity-'+str(qty))
                case.update(before_stop=before,after_stop=after,text_hex=actual.hex(),screenshot=shot)
                report['cases'].append(case)
            g.close()
        report['result']='PASS'
    except BaseException as exc:
        report.update(result='FAIL',error=str(exc));raise
    finally:
        for g in games:g.close()
        report['source_save_unchanged']=sha256(save)==original
        (args.output/'report.json').write_text(json.dumps(report,indent=2)+'\n')
        print(json.dumps(dict(result=report['result'],checks=len(report['checks']),report=str(args.output/'report.json'))))
        assert report['source_save_unchanged']

if __name__=='__main__':main()
