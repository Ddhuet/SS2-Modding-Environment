# Known Structures and Fields

| Base / Source | Offset | Width | Current Interpretation | Evidence |
| --- | --- | --- | --- | --- |
| `[0x03003580]` → PLAYER | `+0x24` | 32-bit | Current EXP | confirmed/static |
| PLAYER | `+0x28` | At least 8-bit | Level, stored value = displayed value - 1 | confirmed/static |
| PLAYER | `+0x54` | Path-dependent | COUNTER-related skill value | confirmed/static, class mapping depends on call path |
| PLAYER | `+0x158` | 25×16 bytes | Inventory | confirmed/static |
| PLAYER | `+0x2E8` | 75×16 bytes | Character Storage | confirmed/static |
| battle struct `0x03003D80` | `+0x6A` | 16-bit | MaxHP | confirmed/static |
| battle struct | `+0x72` | Path-dependent | Lifesteal percentage | confirmed/static |
| battle struct | `+0xCC` | 16-bit | HP | confirmed/static |
| `[0x03005DB4]` → MAP_CTX | `+0x00` | 16-bit | area, 1-based | confirmed/static |
| MAP_CTX | `+0x40` | 32-bit | floor | confirmed/static |
| item record | `+0x00` | 8-bit | type | confirmed/static |
| item record | `+0x01` | 8-bit | code; must be interpreted together with type | confirmed/static |
| item record | `+0x04` | Type-dependent | Quantity / purity / partial amount; cannot be uniformly named | confirmed/static |
| timed effect descriptor | `+0x14` | Path-dependent | Type 18/20 natural lifespan | confirmed/static, these paths only |

Fields not registered in this table still require proof of their address, bit width, signedness, and lifecycle. Do not name a field solely because it is located near a known structure or because its value changes during gameplay operations.