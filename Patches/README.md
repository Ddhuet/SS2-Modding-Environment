# Patches

Everything needed to *build* a mod lives here. The finished deliverable is always a `.bps` in
`Patch_Manager/patches/` (built by `Tools/Scripts/make_bps.py`); see AGENTS.md "How a mod is made
and shipped".

## Layout

| Path | What it is |
|---|---|
| `Definitions/Official/` | The 18 official CN mods (+ `all_17_released` / `all_18_beta` bundles) as JSON write lists. Read its README for hashes. Don't edit. |
| `Definitions/Custom/` | Our mods' definitions, one `<id>.json` each. `make_bps.py`, `mod_conflicts.py` and `combine_patch.py` read this folder (`--defs`). |
| `Definitions/ledger.json` | English names for records a mod renames; applied by `combine_patch.py` and `make_bps.py`. |
| `Definitions/patch-template.json` | Skeleton of the current definition schema. Copy it to start a new mod. |
| `<mod_id>/` | Working folder for one mod: sources (`src/`), its `build.py` / `make_<id>.py` that writes `Definitions/Custom/<id>.json`, probes, tests, scratch ROMs, `runs/`. Messy is fine. Name it after the mod id. |

Current working folders: `enemy_pathing/`, `summon_ai/` (`Starting_Info/` holds the user's test
states and ROM), `counter_fix_slash/`, `enemy_hp_bars/`, `town_return_heal/`,
`normal_attack_charge_accuracy/`, `guaranteed_fusing/`, `stackable_consumables/` (upstream version
candidates). `waitcnt_fix` and `walk_angles` were written by hand and have no folder.

## Definition schema

A definition is bound to the **CN baseline** (`ROMs/Shining_Soul_II_CN_Baseline.gba`, SHA-256
`45ac38bb…`), which has the same code and data addresses as the English ROM. Fields:

- `id`, `name`, `stage` (be honest: `static_candidate`, `beta`, `released`), `profile_id`, `baseline`.
- `source_provenance`: where the bytes come from (`new`, a port, or a CN modder's build).
- `allocations`: every free-space range you claim (address, length, fill, owner). Also claim it in
  the AGENTS.md space-ownership table.
- `evidence`: `status` uses AGENTS.md's vocabulary (`candidate`, `static_verified`,
  `runtime_verified`, `user_accepted`); `runtime` names the scenarios and ROM hashes.
- `writes`: `address`, `offset` (= address − `0x08000000`), `before_hex` (full preimage from the CN
  baseline), `after_hex` (same length), `mode` (`thumb`, `data`, …), and a `note` per write.

Rules: no overlapping writes; every preimage is re-asserted at build time; never guess bytes. To
roll back, rebuild from the baseline; never reverse-patch a built ROM.
