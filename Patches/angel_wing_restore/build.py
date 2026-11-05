#!/usr/bin/env python3
"""Build Patches/Definitions/Custom/angel_wing_restore.json (CN baseline / English ROM).

    Tools/.venv/bin/python Patches/angel_wing_restore/build.py

1. Angel Wing effect. The use-item function 0x0805C3B8 switches on the consumable record's
   effect type (+0x178). Effect 4 is only the Angel Wing (bag type 1, code 6); its branch at
   0x0805C60E checks town/arena/etc. and starts the beam-out (action 0xC). That branch is
   rewritten in place: if HP and SP are both full, fail (buzz, item kept, as a Herb at full HP);
   otherwise SP = max SP, HP = max HP, then the game's own HP-heal tail at 0x0805C830 (clears the
   low-HP flag, heal sound 0x91, success). The heal sparkle 0x08075590(actor id, 8) is called too.
2. One Angel Wing out of town. The map loader 0x08026C0C(area, mode, fade) (every warp) and
   area_change 0x08022D78(area, mode) (world-map pick) get an entry hook
   `ldr r3,=stub; bx r3` over their first instructions; the stub replays them. Before that, if
   the "in town" flag (0x03003518 bit 3) is set and the destination is neither town (0) nor the
   arena (0xB), the local bag keeps the first Angel Wing (a stackable_consumables count at +4 is
   cut to 1) and every other Angel Wing slot is emptied (type = 0, as the game deletes items).
Docs/mods/angel_wing_restore.md has the evidence.
"""
import hashlib, json, struct, sys, tempfile
from pathlib import Path
ROOT = Path(__file__).resolve().parents[2]
sys.path.insert(0, str(ROOT / "Tools/Scripts"))
from base_roms import cn_baseline  # noqa: E402
from make_english_patch import assemble  # noqa: E402

CN_SHA = "45ac38bb1bfba779592b5c79ce94982cf7c00fda5b3c5b84735e55c77d6fc989"
EFFECT4 = 0x0805C60E          # effect-4 branch of the use-item function
EFFECT4_END = 0x0805C6D2      # next case starts at 0x0805C6D8 (literal pool before it)
SPARKLE, HEAL_TAIL, FAIL = 0x08075590, 0x0805C830, 0x0805C85C
LOADER, AREA_CHANGE = 0x08026C0C, 0x08022D78
FAR = 0x09018000              # allocation 0x09018000..0x090180FF


def bl(src, dst):
    off = dst - (src + 4)
    assert -0x400000 <= off < 0x400000 and not off & 1
    off &= 0x7FFFFF
    return struct.pack("<HH", 0xF000 | off >> 12, 0xF800 | (off >> 1) & 0x7FF)


def b_to(src, dst):
    off = dst - (src + 4)
    assert -2048 <= off < 2048 and not off & 1
    return f"0x{0xE000 | (off >> 1) & 0x7FF:04X}"


def hw(b):
    return ", ".join(f"0x{v:04X}" for v in struct.unpack("<HH", b))


def effect_asm(sparkle_bl, fail_b, tail_b):
    return f"""
    .syntax unified
    .thumb
    .text
@ Effect 4 (Angel Wing) at {EFFECT4:#010x}; r5 = local player actor, r8 = item record.
    adds    r6, r5, #0
    adds    r6, #0xCA           @ &SP (x10)
    adds    r7, r5, #0
    adds    r7, #0x68           @ &max SP (x10)
    ldrh    r1, [r7, #0]        @ max SP
    ldrh    r2, [r7, #2]        @ +0x6A max HP
    ldrh    r3, [r6, #0]        @ SP
    ldrh    r4, [r6, #2]        @ +0xCC HP
    eors    r3, r1
    eors    r4, r2
    orrs    r3, r4
    bne     heal
    .hword  {fail_b}            @ b 0x0805C85C; nothing missing: buzz, return 0, item kept
heal:
    strh    r1, [r6, #0]        @ SP = max
    strh    r2, [r6, #2]        @ HP = max
    adds    r6, #2              @ r6 = &HP, r7 = &max HP, as the HP-heal tail expects
    adds    r7, #2
    ldrh    r0, [r5, #0]        @ actor id
    movs    r1, #8
    .hword  {sparkle_bl}        @ bl 0x08075590: heal sparkle (as Herb etc. at 0x0805C82C)
    .hword  {tail_b}            @ b 0x0805C830; low-HP flag, sound 0x91, success
"""


def far_asm():
    return f"""
    .syntax unified
    .thumb
    .text
@ Entry hook of 0x08026C0C(area, mode, fade): replays push/lsls/lsrs/lsls, resumes at +8.
loader_hook:
    push    {{r0, r1, r2, lr}}
    bl      purge
    pop     {{r0, r1, r2}}
    pop     {{r3}}
    mov     lr, r3
    push    {{r4, r5, lr}}
    lsls    r0, r0, #16
    lsrs    r5, r0, #16
    lsls    r1, r1, #16
    ldr     r3, ={LOADER + 8 | 1:#010x}
    bx      r3

@ Entry hook of 0x08022D78(area, mode): replays push/adds/cmp/bne, resumes at +10 or 0x080230BA.
area_hook:
    push    {{r0, r1, r2, lr}}
    bl      purge
    pop     {{r0, r1, r2}}
    pop     {{r3}}
    mov     lr, r3
    push    {{r4, r5, r6, r7, lr}}
    adds    r4, r0, #0
    cmp     r1, #0
    bne     1f
    ldr     r3, =0x080230BB
    bx      r3
1:  ldr     r3, ={AREA_CHANGE + 10 | 1:#010x}
    bx      r3

@ purge(r0 = destination area): leaving town for anywhere but the arena keeps one Angel Wing.
purge:
    push    {{r4, r5, r6, lr}}
    lsls    r0, r0, #16
    lsrs    r0, r0, #16
    cmp     r0, #0
    beq     done                @ to town
    cmp     r0, #0xB
    beq     done                @ to the arena
    ldr     r1, =0x03003518
    ldr     r1, [r1]
    lsls    r1, r1, #28         @ bit 3 "in town" -> N
    bpl     done
    ldr     r4, =0x03003580
    ldr     r4, [r4]            @ local player
    ldr     r1, =0x158
    adds    r4, r4, r1          @ bag, 25 x 16 B
    movs    r5, #25
    movs    r6, #0              @ kept one yet?
loop:
    ldrh    r0, [r4, #0]
    cmp     r0, #1              @ consumable
    bne     next
    ldrh    r0, [r4, #2]
    cmp     r0, #6              @ Angel Wing
    bne     next
    cmp     r6, #0
    bne     drop
    movs    r6, #1
    ldrh    r0, [r4, #4]        @ stackable_consumables count (0/1 = single)
    cmp     r0, #1
    bls     next
    movs    r0, #1
    strh    r0, [r4, #4]
    b       next
drop:
    movs    r0, #0
    strh    r0, [r4, #0]        @ empty slot
next:
    adds    r4, #16
    subs    r5, #1
    bne     loop
done:
    pop     {{r4, r5, r6}}
    pop     {{r0}}
    bx      r0
    .pool
"""


def entry_hook(at, far):
    assert at % 4 == 0
    # ldr r3,[pc,#0] ; bx r3 ; .word far|1
    return struct.pack("<HHI", 0x4B00, 0x4718, far | 1)


def write(cn, addr, after, note):
    o = addr - 0x08000000
    return {"address": f"0x{addr:08X}", "offset": f"0x{o:08X}", "before_hex": cn[o:o + len(after)].hex(),
            "after_hex": after.hex(), "mode": "thumb", "note": note}


def main():
    cn = cn_baseline()
    assert hashlib.sha256(cn).hexdigest() == CN_SHA, "wrong CN baseline"
    with tempfile.TemporaryDirectory() as tmp:
        sparkle_at = EFFECT4 + 2 * 19
        src = Path(tmp) / "effect.s"; src.write_text(effect_asm(hw(bl(sparkle_at, SPARKLE)),
                                                       b_to(EFFECT4 + 2 * 12, FAIL), b_to(EFFECT4 + 2 * 21, HEAL_TAIL)))
        effect = assemble(src, base=EFFECT4, code_end=44)
        src = Path(tmp) / "far.s"; src.write_text(far_asm())
        far = assemble(src, base=FAR)
    assert effect[sparkle_at - EFFECT4:sparkle_at - EFFECT4 + 4] == bl(sparkle_at, SPARKLE)
    assert EFFECT4 + len(effect) <= EFFECT4_END, len(effect)
    loader_hook = FAR
    area_hook = FAR + far_asm_offset(far)
    # preimages of what the hooks and the effect overwrite
    o = lambda a: a - 0x08000000
    assert cn[o(LOADER):o(LOADER) + 8] == bytes.fromhex("30b50004050c0904"), "loader entry changed"
    assert cn[o(AREA_CHANGE):o(AREA_CHANGE) + 8] == bytes.fromhex("f0b5041c002900d1"), "area_change entry changed"
    assert cn[o(EFFECT4) - 4:o(EFFECT4) + 2] == bytes.fromhex("042b64d1281c"), "effect 4 branch changed"
    assert not any(cn[o(FAR):o(FAR) + 0x100]), "far area not zero"
    writes = [
        write(cn, EFFECT4, effect,
              "Use-item 0x0805C3B8, effect 4 (Angel Wing only): beam-out checks replaced by a full restore. "
              "HP and SP full -> b 0x0805C85C (fail, item kept); else +0xCA = +0x68, +0xCC = +0x6A, "
              "bl 0x08075590(id, 8) sparkle, b 0x0805C830 (HP-heal tail: low-HP flag, sound, success). "
              "The rest of the old branch up to 0x0805C6D7 stays as dead bytes."),
        write(cn, LOADER, entry_hook(LOADER, loader_hook),
              f"Map loader 0x08026C0C entry -> `ldr r3,=0x{loader_hook | 1:08X}; bx r3` (stub replays the 4 "
              "overwritten instructions and returns to 0x08026C14). r3 is not an argument."),
        write(cn, AREA_CHANGE, entry_hook(AREA_CHANGE, area_hook),
              f"area_change 0x08022D78 entry (world-map pick) -> `ldr r3,=0x{area_hook | 1:08X}; bx r3` (stub "
              "replays push/adds/cmp/bne and resumes at 0x08022D82 or 0x080230BA)."),
        write(cn, FAR, far,
              f"Allocation 0x{FAR:08X}..0x{FAR + 0xFF:08X} (zero; owner angel_wing_restore), {len(far)} B used: "
              "the two entry stubs and purge(area): when 0x03003518 bit 3 (in town) is set and area is not 0 "
              "(town) or 0xB (arena), the first bag Angel Wing (type 1 code 6) stays (count +4 cut to 1) and the "
              "others get type 0."),
    ]
    d = {
        "schema_version": 1,
        "id": "angel_wing_restore",
        "name": "Angel Wing fully restores HP/SP; only one may leave town",
        "stage": "static_candidate",
        "profile_id": "ss2-cn-baseline",
        "baseline": {"filename": "SS2_SC_bug_fixed.GBA", "size": 33554432,
                     "md5": "35eb6567d94f855480c5d7ba2dff4389", "sha256": CN_SHA, "crc32": "AFCFC96D"},
        "source_provenance": {"kind": "new", "source": "Patches/angel_wing_restore/build.py",
                              "notes": "Docs/mods/angel_wing_restore.md"},
        "allocations": [{"range": f"0x{FAR:08X}..0x{FAR + 0xFF:08X}", "fill": "zero",
                         "what": f"code ({len(far)} B used)"}],
        "evidence": {
            "status": "static_verified",
            "semantics": "Using an Angel Wing sets HP and SP to max (refused, item kept, when both are full) "
                         "instead of returning to town. Leaving town for any area but the arena deletes every "
                         "Angel Wing in the bag after the first.",
            "static_audit": "Docs/mods/angel_wing_restore.md",
            "user_acceptance": "not_run",
            "runtime": "not_run"},
        "writes": writes,
    }
    out = ROOT / "Patches/Definitions/Custom/angel_wing_restore.json"
    old = json.loads(out.read_text()) if out.exists() else {}
    if old:
        d["stage"] = old.get("stage", d["stage"])
        d["evidence"] = old.get("evidence", d["evidence"])
    out.write_text(json.dumps(d, indent=2, ensure_ascii=False) + "\n")
    print(out, f"effect {len(effect)} B, far {len(far)} B, area_hook 0x{area_hook:08X}")


def far_asm_offset(far):
    # loader_hook is 11 halfwords + 2 literal-free... locate area_hook by its first instruction pair
    # (push {r0-r2,lr}; bl purge) appearing a second time.
    first = far[:2]
    i = far.find(first, 2)
    assert i > 0 and i % 2 == 0
    return i


if __name__ == "__main__":
    main()
