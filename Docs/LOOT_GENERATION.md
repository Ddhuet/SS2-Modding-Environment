# Loot generation: crates, chests and monster drops

Addresses are for the **CN baseline = English ROM** (same code and tables). Found 2026-10-31 by
tracing the user's `Crate.ss0`, `Wooden_Chest.ss0` and `Iron_Chest.ss0` states, then reading the
code. Everything below is reproduced by `Tools/Scripts/loot_model.py`, which predicts the game's
result **bit for bit** from the RNG state:

- chests and crates: 200 of 200 breaks match (`loot_verify.py`; Crate 60, Wooden 80, Iron 80;
  four early misses fixed the "count+1" detail under [Enchantments](#enchantments));
- monster drops: 24 of 24 kill rolls in `HP_Bar_Bug.ss0` match, including a Goblin Axe from the
  goblin's own drop slot.

Evidence: `runtime_verified` for the generator, the enchant pass, the chest call and the monster
roll on the English ROM (normal mode, Warrior, single player). Items marked *candidate* are read
from code but not exercised.

## The short version

1. Every breakable object and every monster carries a **loot row** number (1–100). Hard mode adds 50.
2. A row has an **enchant chance** (25/40/70/100 %) and, per class, a weighted **item list** (out
   of 65536) that can contain "nothing", gold, consumables, equipment, accessories and pastes.
3. One roll picks the item; gold gets a random amount; equipment then gets the enchant roll. An
   enchanted weapon/armour piece is **unidentified**. Accessories, consumables, pastes and gold
   are never enchanted. Equipment with built-in effects is never enchanted either.
4. Better maps use rows with better item lists and bigger gold. The chest **type** decides the
   row family (crate < wooden < iron < gold chest); the **map** decides the tier.
5. Chests use the **class of the player who landed the breaking hit**; their weapon lists hold
   only that class's weapons. Crates and monsters use shared lists with every class's weapons,
   which is where most other-class gear comes from.
6. Nothing is decided before the break: the roll happens on the frame the object breaks, from the
   global RNG, so waiting a frame changes the result.

## Call chain

| Address | What |
|---|---|
| `0x080202CC..` | Object hit handler: damage to the object, then `obj+0x12 = effective class (0x0801DC54)` of the attacker. |
| `0x080280BC..0x08028188` | Object break: `0x0805CBA4(sp+0x218, def+0x184 level (+50 if hard), obj+0x12 class)`, then spawn with `0x08066B04` (ground-item event 0x96). Afterwards: if `[0x0300329C] > 10` and the result is a paste, it becomes consumable 1 (Healing Drop). |
| `0x08019580` | Monster death: unless the map mode `[[0x03005DB4]]` is 0x0B or 0x0D, `0x0805CCC8(monster, sp+0x10)`, then spawn with `0x08066B04`. |
| `0x0805CCC8` | Monster drop roll (below). Second caller `0x080B5818` not examined. |
| `0x0805CBA4` | **Generator** `gen(out, level, class)`. |
| `0x0805C884` | **Enchant pass** `enchant(rec, flags)`; flags bit 0 = shop table. |
| `0x0805CE60` | Shop-stock style generator (12 entries per class from `0x084F5764`, enchant with the shop +N table, 50 % `gen(level 20)`). Not examined further. |
| `0x080008C8` | RNG: 8-byte shift register at `0x030013B8`, 32-bit output (model: `loot_model.RNG`). |
| `0x0800C780` | Hard-mode test: bit 9 of `0x03003518` (*candidate* name: it adds 50 to rows, 100 to pastes and unlocks +10..+15). |

Item record (16 bytes): `+0` u16 type, `+2` u16 code, `+4` u16 prefix (gold: u32 amount; paste:
u16 value), `+6` u8 +N, `+7` u8 element, `+8` u8 unidentified. Types: 1 consumable, 2 weapon
(spell books included), 3 body, 4 head, 5 hand (gloves, shields), 6 accessory, 7 soul, 8 card,
9 paste, 10 gold.

## The generator `0x0805CBA4(out, level, class)`

```
out = 0; if level == 0: return 0                     # "never drops"
row = 0x084F4954 + (level-1)*36                       # 100 rows
enchant = row.u16[0] >= (rand() & 0xFFFF) % 100       # value v -> (v+1) %: 26/41/71/100 % (0 on fixed rows)
if class == 8: class = 6
list = row.ptr[1+class]                               # 8 per-class lists (shared rows: 8 equal pointers)
r = rand() % (list.total + 1)                         # total is 65535
pick first entry with cum >= r                        # entries {u16 type, u16 code, u16 cum, pad}
if gold: amount = rand() % (code*3/2); amount = max(amount, code/2)
if enchant: enchant(out, 0)
if paste: out.u16[+4] = rand()%10 + 10*[0x0300329C] (+100 if hard)
```

- The enchant percentages in the tables below are the row values; the real chance is one more
  (`>=`): 26 %, 41 %, 71 %, 100 %.
- A row entry of type 0 is "nothing" (crates have 75 % of it).
- Gold: `code` is the row's gold base; the amount is uniform in `code/2 .. code*1.5-1` (the low
  third is clamped to `code/2`, so the minimum is about a third likely).
- Paste strength: `[0x0300329C]` was 1 in the wooden-chest map and 6 in the iron-chest map, so it
  is a progress/area number (*candidate*: the HugeApplePack calls it MAP_ID). Above 10 a chest
  paste turns into a Healing Drop (`0x08028114`).

## Rows: what each container uses

The 100 rows come in tiers. Within a tier the five families are always the same shape (the item
pool and gold base rise with the tier). Odds are per break; "unidentified" counts only enchantable
equipment.

| Family | Rows (normal mode) | Nothing | Gold | Consumable | Weapon | Armour | Accessory | Paste | Enchant | Unidentified |
|---|---|---|---|---|---|---|---|---|---|---|
| Monster | 1, 9, 15, 21, 26, 30, 34, 38, 43, 47 | – | 25.4 | 27.7 | 19.5 | 24.6 | 2.0 | 0.8 | 25 % | ≈11 % |
| Crate | 4, 12 | **75.0** | 6.2 | 7.0 | 5.1 | 6.2 | 0.4 | – | 25 % | 2.8 % |
| Wooden chest | 2, 10, 16, 22, 27, 31, 35, 39, 44, 48 | – | 13.7 | 0.4 | 28.1 | 51.6 | 3.1 | 3.1 | 40 % | 31.9 % |
| Iron chest | 3, 11, 17, 23, 28, 32, 36, 40, 45, 49 | – | 13.7 | 0.4 | 28.1 | 51.6 | 3.1 | 3.1 | 70 % | 55.8 % |
| Gold chest | 5, 13, 18, 24, 29, 33, 37, 41, 46, 50 | – | **0** | 2.0 | 32.0 | 56.6 | 4.7 | 4.7 | 100 % | 88.7 % |

- **Hard mode** uses row + 50 (51–100): the same shapes with tier-10-and-up item pools.
- The 0.4 % / 2 % "consumables" in chest rows are the novelty items (Face Balloon, Dog, Cat, Pig,
  Sheep, Tuna, Squid, Egg, Cucumber, the S/E/G/A letters, Yogurt Doll). Real consumables (Herb,
  Healing Drop/Water, Goddess Tear, Ray of Hope, Angel Wing, Antidote, the stat foods, Valuing
  Scroll, Grenade, Bomb) only come from crates and monsters.
- Wooden and iron chests of a tier share the **same item list**; iron only has the higher enchant
  chance. Gold chests have a slightly different list with no gold.
- Fixed rows (enchant 0 %): 6 Prison Key, 7 Candy, 8 Red Shoe, 14 Graveyard Key, 56/57/58/64
  repeats, 19 Arbiter II soul, 42 Oblivion III soul, 69/75/92 souls, 25 Yogurt Ring, 20/70 an
  item-shop-like list (fruit, Valuing Scroll, Bomb, Molotov; Case/Chest/Knapsack/Backpack).
- Gold base per tier (wooden/iron; monsters and crates use half): 24, 27, 96, 150, 216, 294, 384,
  486, 600, 726 (hard: 726 … 1050).

Example pools (Warrior lists; `loot_model.py list ROW CLASS` prints any row):

| Tier | Wooden/iron weapons | Armour examples | Accessories |
|---|---|---|---|
| 1 (rows 2/3) | Short Sword … Battle Blade, Tomahawk … Francisca, Short Spear … Javelin | Robe, Leather Clothes, Hood, Gloves, Wooden Shield | Needle Ring, Imitation Ring |
| 2 (10/11) | Iron Blade … Long Sword, Short Axe … Middle Axe, Bronze Lance … Spear | Suit, Leather Vest, Leather Beret, Small Shield | Attack/Protect/Might/Quick/Wisdom/Life Ring |
| 6 (31/32) | Scimitar … Saber, Power Tomahawk … Broad Axe, War Fork … Power Spear | Half/Studded/Copper Armor, Tunic, Large/Round Shield | Vision Ring, Storm Pendant |
| 10 (48/49) | Estoc … Damascus Blade, Tabar … Battle Axe, Heavy Lance … Hunter's Spear | Splint/Brass/Banded Armor, Bassinet, Targe | Moon Pendant, White/Platinum Ring, Platinum Medal |

Each weapon family is a sliding window of four that moves up one or two items per tier.

### Classes

List index = class: 0 Warrior (swords, axes, spears), 1 Magician (staves + fire/ice/thunder/
blast/inferno/magic-shield books), 2 Archer (spears, bows, Summon books), 3 Dragonute (axes,
flails), 4 Priest (flails, staves, Heal/Protect/Resist books), 5 Brawler (knives, claws),
6 Dark Mage (staves, Demon Breath/Venom/Darkness books), 7 Ninja (swords, knives, Debris/Shadow
books). Class 8 uses list 6. Armour lists are class-filtered too (Warrior gets Vest/Beret/Bracers/
Wooden Shield, Magician gets Cape/Wizard Hat/Mittens instead).

Chests read the class from `obj+0x12`, written on every hit by the attacker's effective class, so
in link play the player who breaks the chest decides the list. Monster drops pass class 0, but
their rows are shared (all 8 pointers equal), so the class doesn't matter. Shared rows (monster,
crate) list every class's weapons with equal weight. That, plus armour pieces that suit other
classes, is where off-class drops come from.

## Breakable objects

Object definitions: `0x084A6468`, stride `0x194`, data from `+0x174`: `+0x174` toughness
(object HP = 3×), `+0x176` defence, `+0x17C` sprite, `+0x184` **loot row**. A map places a
definition index; the object keeps `+0x20` = definition, `+0x10` HP, `+0x12` class
(`loot_model.py objects` lists all 65).

| Sprite | Seen as | Definitions → rows | HP / defence |
|---|---|---|---|
| 7 | crate / barrel | def 13 → 4, def 14 → 12, def 16 → **0 (always empty)**, def 10 → 8 (Red Shoe) | 6/4, 12/8, 30/10 |
| 0 | wooden chest | defs 30, 33, 37, 40 … 58 → wooden rows; def 36 → 14 (Graveyard Key), def 61 → 0 | 12/4 rising to 66/22 |
| 1 | iron chest | defs 31, 34, 38, 41 … 59 → iron rows | 24/8 rising to 132/44 |
| 3 | gold chest (*candidate*: boss reward) | defs 32, 35, 39, 42 … 60 → gold rows | as iron |
| 4 | special chest, defence 2000 (*candidate*: the purple chests) | def 62 → 25 Yogurt Ring, def 63 → 42 Oblivion III, def 64 → 19 Arbiter II | 150/2000 |

The colours of sprites 3 and 4 were not seen in game. A savestate next to a gold or purple chest
would settle which is which.

**Damage to objects** (`0x080202CC`): `A = attacker+0x60` (attack), `D` = definition defence,
`dmg = max(1, (A²·10 / (A+D)) · (100 + rand()%50) / 100 / 10)`. So it is damage-based: a crate
(6 HP, D 4) breaks in one hit; a tier-6 iron chest (84 HP, D 28) takes several hits with a weak
weapon; the defence-2000 chests take dozens.

## Monster drops `0x0805CCC8(monster, out)`

```
r = rand() & 0xFFFF
for 3 own slots at monster+0x3A4 {u16 type, u16 code, u32 cum}:   # from the monster record +0x1A0
    if type and lo <= r <= cum: drop it (paste value = monster+0x388); lo = cum+1
    # gold from an own slot needs monster+0x39B bit 0, else nothing
otherwise:
    killer = actor[monster+0x58] (0x03003D80 + i*0x154, i > 3 → 0)
    chance = killer+0x7C + {1:16, 2:21, 3:26, 4:32}[players]            # out of 256
    if (rand() & 0xFF) >= chance: nothing
    gen(out, monster+0x78 level (+50 if hard; level 0 in hard = nothing), class 0)
    paste → value = monster+0x388;  gold without monster+0x39B bit 0 → nothing
```

- Single player: **6.25 %** per kill for a generic drop (`killer+0x7C` was 0 on every tested
  character; the Luck prefix "Drop+1" probably feeds it, *candidate*). Four players: 12.5 %.
- Own slots are per monster. The first-dungeon goblins have a 0.78 % card (type 8, code 6/7) and a
  0.78 % Goblin Axe, checked before the generic roll.
- The generic drop uses the monster's row: 25 % gold, 27.7 % consumable, 44 % equipment
  (25 % of it enchanted → unidentified), 2 % accessory, 0.8 % paste. Monsters seen in the first
  dungeon have level 1 (row 1). Where `+0x78` is set at spawn was not traced.

## Enchantments `0x0805C884`

Three slots, chosen by item kind. Each chosen slot always gets a value.

| Item | Slot pattern (rolls of `rand()&15`) |
|---|---|
| Weapon | 3/16 prefix+element+N; 5/16 × (5/16 prefix+element, 6/16 element+N, 5/16 prefix+N); 8/16 × (5/16 element, 5/16 prefix, 6/16 +N) |
| Spell book (weapon whose record `+0x174` = 9) | always prefix, 50 % element, never +N |
| Body / head / hand | 50 % prefix+N, 25 % prefix, 25 % +N; shields (hand record `+0x17C` ≠ 0) use the shield prefix table |
| Accessory, soul, consumable, paste, gold | none |

Afterwards, if the base item's record has built-in effects (three words at `+0x188` weapon,
`+0x180` body/head, `+0x184` hand), all three slots are cleared and the item stays identified.
Otherwise `+8 unidentified = 1` whenever any slot is set. So **unidentified ⇔ enchanted** (your
observation was right), and accessories are always identified.

**Prefix** (`+4`, value v → prefix record v−1 at `0x084355C0`, stride 0x188, effects at `+0x178`):
weighted tables `0x0843DC80` weapon (65 entries), `0x0843DD88` spell book (68), `0x0843DE9C`
armour (49), `0x0843DF64` shield (52). Most common (3.5–4.1 % each): Power STR+2, Skill DEX+4,
Wisdom INT+4, Life VIT+4, and the +10 fire/ice/thunder resistances. Each stat ladder thins out
as it climbs (e.g. STR+2/+4/+6/+8 at about 3.5/2.3/1.0/0.3 % on weapons). Rarest (≈0.2 %): Prey
HP absorb+5, Spirit SP absorb+9, Storms attack timing−4, Dawn SP cost−3, Evil SP regen+2, Flux
knockback+8, Luck Drop+1. Exclusions: weapons never get SP absorb (23/24), Evil (58) or the
block prefixes (67–69); spell books only lack the block prefixes; body/head/gloves never get
vs-undead/flying, absorb, crit, attack timing (17–28), SP cost (54–56) or 58–61; shields are
armour plus the block prefixes (Echo Block+100, Wonder/Guile Block2+5/+10). Names are the English
name slots of those records; `loot_model.py enchant` prints every table with odds and effects.

**Element** (`+7`, table `0x0843E038`): fire 28.1 %, ice 9.4 %, thunder 15.6 %, light 9.4 %,
curse 15.6 %, poison 21.9 %. Names follow the HugeApplePack element list (*candidate*: not
checked on screen).

**+N** (`+6`): normal `0x0843E054` +1 47.5 %, +2 25 %, +3 13.2 %, +4 6.9 %, +5 3.7 %, +6 1.9 %,
+7 1 %, +8 0.5 %, +9 0.3 %. Hard `0x0843E07C` continues to +15. Shop `0x0843E0BC` +1..+4.

**Count+1 quirk:** the element and +N loops run `count+1` times, so they use one entry past the
stated count (element 6 = poison, +9, +15, +4). The prefix and item-list loops use the count as is.

## Answers to the original questions

- **Map level:** a map places specific object definitions, and each definition names its row, so
  quality is per map. Gold, item pools and paste strength rise with the tier; the enchant chance
  does not (it depends only on the container type).
- **Crates/barrels:** 75 % nothing; otherwise mostly consumables, small gold and tier-appropriate
  gear for any class. Some crates (def 16) are always empty.
- **Wooden chests are never empty** (except def 61, row 0). Iron chests **can** drop gold (13.7 %).
  Gold chests never drop gold; besides equipment they give accessories (4.7 %), pastes (4.7 %) and
  novelty items (2 %).
- **Unidentified share of equipment:** wooden 40 %, iron 70 %, gold 100 % (less the rare fixed-effect
  items), monsters and crates 25 %.
- **Other-class items:** chest weapon lists are class-only; off-class gear comes from crates,
  monsters, and armour types other classes prefer. A per-class percentage needs an equip-rule
  table, which was not mapped.
- **Not established:** monster `+0x78` assignment per map, the player drop stat `+0x7C` source,
  the colours of sprites 3/4, and the bit-9 hard-mode flag's name.

## Mods

[`mods/loot_rebalance.md`](mods/loot_rebalance.md) rewrites the crate, wooden/iron chest and
monster lists and doubles the monster drop chance.

## Tools

```bash
python3 Tools/Scripts/loot_model.py tiers 0        # family table per tier for a Warrior
python3 Tools/Scripts/loot_model.py list 32 0      # one row in full
Tools/.venv/bin/python Tools/Scripts/loot_verify.py Savestates/Iron_Chest.ss0 0 20
```
