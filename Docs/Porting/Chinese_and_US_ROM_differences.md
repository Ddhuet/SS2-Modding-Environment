# Shining Soul II (GBA) ROM patching handoff — USA ROM port of Chinese-mod fixes

## Goal
Port small fixes from a Chinese community mod ("SHARE" package) to the USA ROM of Shining Soul II. Patches are byte edits applied to a copy; originals are never modified.

## ROMs
- USA: Shining_Soul_II__USA_.gba, 16,777,216 bytes, header code AU2E,
  SHA-256 b31c19d2d25683a0941d5d501912b5f21d4590cd7071fa01882e62aa5227a7c9
- Chinese (simplified, built on the Japanese release): 光明之魂2简体中文版.GBA, 16,777,216 bytes, header AU2J,
  SHA-256 8a7ebaa88682995fd7bf1bf8dc8e77a3f4fc4a9893a7639af953c553821d9ab9, CRC32 0DFB6770
- The source package's baseline is a different 32 MB ROM (SHA-256 45ac38bb...c989). Neither ROM here matches it, so everything is matched by code pattern, not hash. File offset = ROM address - 0x08000000.


## Method (no disassembler or internet was available; no Capstone)
1. Check the Chinese ROM: confirm the "before" bytes in the patch definition match exactly.
2. Locate the same code in the USA ROM: take a 0x30-0x60 byte window around the site from the Chinese ROM, mask BL (call) instruction pairs as wildcards, search the USA ROM. Require exactly one hit.
3. Compute the offset delta from the hit, then verify every edited byte in the USA ROM against the expected "before" bytes. Stop if they don't match.
4. Hand-decode Thumb encodings (ADD Rd,SP,#imm; LDRH offsets; LDRSH; BL halfword pairs) to check the patch makes sense.
5. Re-encode BL calls when the target distance changes (see counter fix).
6. Write the change to a copy, build an IPS, apply the IPS to the original, and check it reproduces the patched ROM exactly.
- Whole-ROM comparison: about 69% of 24-byte blocks in the first 2 MB match exactly, but the shift between the builds is not constant (e.g. 0x9B8, 0x9D4, 0xAC, 0x1AA0 lower, and 0x472B4 higher for item-table regions). Always map each site separately.

## Patches applied to the USA ROM (offsets are file offsets)
1. Respec (stat point refund in the stat screen). Tested by the user: works.
   - 0x7ACAA: 2e -> 40  (add r5,sp,#0xb8 -> #0x100)
   - 0x7ACB6: c0 -> 80  (ldrh r0,[r0,#6] -> #4)
   - 0x7ACD2: 12 bytes d9 68 89 00 69 18 c8 88 01 38 c8 80 -> six Thumb NOPs (c0 46 x6)
   - Matches the package's respec.json byte for byte (Chinese addresses are 0x0807B662/B66E/B68A; USA is 0x9B8 lower).
2. Resistance >= 100 fix (resistance over 100 made 100-resistance negative, and an unsigned divide turned it into a huge number, so status effects always landed). NOT yet tested.
   - Chinese: 2-byte change at 0x08069738 (a1 f9 -> b5 f8) retargets the BL at 0x08069736 from the unsigned divide (0x080BAA7C) to the signed divide (0x080BA8A4).
   - USA: the site is 0x08068EC2. It needs 4 bytes: 50 f0 8b f8 -> 4f f0 9f ff at file offset 0x68EC2, retargeting from the unsigned divide at 0x080B8FDC to the signed divide at 0x080B8E04 (the new target crosses a 4 KB boundary, so the first halfword changes too).
3. Warrior COUNTER fix. NOT yet tested.
   - Cause (inferred): the attack function writes 0x0A into the target's state field [r5,#0x0C] before calling the damage routine; the counter check inside that routine needs the state to equal 2, so it never triggered.
   - Fix: swap the order, 16 bytes in place at USA file offset 0x1F114 (Chinese 0x1F1C0):
     before: 0a 20 a8 81 40 46 29 1c 4a 46 00 23 ff f7 c6 f8
     after:  40 46 29 1c 4a 46 00 23 ff f7 c8 f8 0a 23 ab 81
   - The BL moves 4 bytes earlier, so its encoding changes c6 f8 -> c8 f8. It still targets 0x0801E2B0 (the USA damage routine; Chinese 0x0801E358). The callee has the same prologue and 208 of its first 256 halfwords match, but one structure offset differs (#0xA4 vs #0xA6).

## Output files
- Shining_Soul_II_USA_respec.ips / .gba (respec only)
- Shining_Soul_II_USA_resistance_fix.ips
- Shining_Soul_II_USA_counter_only.gba (SHA-256 6350f97026b7459aa2f95f20c6a328605b0df2fe0c3e390051f8a8bc7233ae7c), Shining_Soul_II_USA_counter_fix.ips
- Shining_Soul_II_USA_respec_resfix_counter.ips (5 records, 34 bytes: 0x1F114 x16, 0x68EC2 x4, 0x7ACAA x1, 0x7ACB6 x1, 0x7ACD2 x12). IPS SHA-256 1901feab143825b3b6461feeaa9ffd2fc1d8ad325cadf2eb0a3de783805d8dd7.
- Shining_Soul_II_USA_respec_resfix_counter.gba (SHA-256 20434fddb9934dad23aea3db1500ffef7d3220207f708aa6b0d6e132beac3b78)

## Important findings and warnings
- Player structure offsets shift by +4 in the USA build in the places checked (e.g. PLAYER+0x74 in the Chinese ROM reads as +0x78 in the USA ROM). Any patch using player-structure offsets (stat caps, the forging hidden value, etc.) needs each offset re-verified.
- Key code mapping examples (Chinese -> USA): RNG 0x080008C8 same; flash erase 0x08001B14 same; general damage 0x08019824 -> 0x08019838; monster drop 0x0805CCC8 -> 0x0805C5D4; forging core 0x080845DC -> 0x08083C08.
- Item-table patches (rings, weapons, temple fusion, equipment sets) map to the USA ROM at +0x472B4, and "before" bytes match: ring 16/16, temple 135/135, weapon 47/48, equipment set 283/287. Not yet applied.
- Persistent summons candidates (1-byte 01->00 on a subs r0,#1 in each lifecycle function): Chinese 0x080713C4 and 0x08072788; USA candidates 0x08070ADC and 0x08071E70. Surrounding bytes differ slightly (register choice), so these are candidates, not confirmed.
- Larger features (level 250, shared storage, etc.) write beyond 16 MB (the baseline is 32 MB) or inject new code into free space, so they are not ported.
- Nothing in the package covers summon HP or hits taken, buff duration, Brawler Evade, or the Dragonute.
- I cannot run the game. All claims are static analysis only. Only the respec has been accepted by the user in an emulator.

## Suggested next steps
Have the user test the counter and resistance fixes in an emulator (use the counter_only ROM and a Warrior with COUNTER). Then port the item-table patches, the persistent-summons patch (after verifying the functions), and the world-map warehouse byte.