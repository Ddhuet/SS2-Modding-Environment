## ROM Structure Reference

### Addresses, Offsets, and Endianness

ROM address `0x08000000` corresponds to file offset `0`. Only addresses in the range `0x08000000` to `0x09FFFFFF` that map inside the 32 MiB file are valid. Tooling requires JSON files to specify both address and offset while verifying consistency.

GBA uses little-endian format. When writing multi-byte numerical values to data tables, verify bit width and signedness; do not guess fields purely from UI representations. Code regions must distinguish between ARM and Thumb modes.

### Confirmed Structures and Entry Points

| Address / Offset | Type | Current Conclusion | Evidence |
| --- | --- | --- | --- |
| `[0x03003580]` | RAM Pointer | Current player structure `PLAYER` | Dynamic/Static cross-confirmed |
| `PLAYER+0x158` | RAM Data | Inventory, 25 slots × 16 bytes | confirmed/static |
| `PLAYER+0x2E8` | RAM Data | Current character warehouse, 75 slots × 16 bytes | confirmed/static |
| Item Record `+0x00/+0x02/+0x04` | Data | `type:u16`, `code:u16`, category-specific fields | confirmed/static |
| `0x080008C8` | Thumb | RNG32 entry point | confirmed/static |
| `0x08013594` | Thumb | Player pending damage & lethality check | confirmed/static |
| `0x08019824` | Thumb | Generic object damage processing | confirmed/static |
| `0x0801B18C` | Thumb | Weapon skill attack power bonus dispatch | Static + Historical dynamic location |
| `0x0801B690` | Thumb | Player equipment/status attribute rebuild | Static + Historical watchpoint |
| `0x0801F150` | Thumb | Attack processing | confirmed/static |
| `0x08022D84` | Thumb | Map entry `area`/`floor` write point | confirmed/static |
| `0x08023EB0` | Thumb | Level monster group table selection by `area`/`floor` | confirmed/static |
| `0x08024D4E` | Thumb | Layer transition write new `floor` | confirmed/static |
| `0x08026F88` | Thumb | Post-map entry complete initialization | confirmed/static; do not overwrite arbitrarily |
| `0x0805CCC8` | Thumb | Monster intrinsic drop check | confirmed/static |
| `0x08077374` | Thumb | Attack hit and target loop | confirmed/static |
| `0x0807D268` | Thumb | Near item type dispatch | confirmed/static |
| `0x080836FC` | Thumb | Near warehouse page dispatcher | confirmed/static |
| `0x08001B14` | Thumb | 4 KiB Flash main sector erase/write | confirmed/static |
| `0x08001B54` | Thumb | Flash read-back verification | confirmed/static |

### Item Semantic Warnings

`type` and `code` form a joint namespace. `type=0x01` is the regular item domain; stacking research only considers `+0x04` as stacked quantity for the 34 explicitly whitelisted items. `type=0x09` is the ore/crystal domain where `+0x04` contributes to forge value/purity calculations rather than herb count. `type=0x0A` represents gold currency, using an independent 32-bit amount path. Do not perform `0x01 ↔ 0x09` conversions.

### Code Modification Warnings

Thumb function pointers usually require `code_address + 1`. Before modifying BL calls or function pointers, recalculate using a disassembler to ensure ARMv4T validity, target reachability, register preservation, and stack conventions. Simple patch tools are suitable for known data bytes or vetted short writes, not for custom inline hooks.

---