# Simple Patch Definitions

This directory is intended solely for small, explicit, targeted modifications backed by raw byte evidence. It is not suitable for auto-assembly, relocation, BL calculation, large data tables, or unknown hooks.

## JSON Format

```json
{
  "schema_version": 1,
  "id": "my_patch",
  "name": "My Small Patch",
  "stage": "research",
  "baseline": {
    "filename": "SS2_SC_bug_fixed.GBA",
    "size": 33554432,
    "md5": "35eb6567d94f855480c5d7ba2dff4389",
    "sha256": "45ac38bb1bfba779592b5c79ce94982cf7c00fda5b3c5b84735e55c77d6fc989"
  },
  "writes": [
    {
      "address": "0x08000000",
      "offset": "0x00000000",
      "before_hex": "0011",
      "after_hex": "2233",
      "mode": "data",
      "note": "Example value, not a real patch"
    }
  ]
}

```

Rules: Hex strings must use an even number of hexadecimal characters; `before` and `after` lengths must be identical and cannot be completely identical in value; each entry must provide both `address` and `offset`; writes must not overlap; tools will read the input file and re-assert `before`. The `baseline` specified in the definition must also strictly match the package's built-in baseline. Any uncertain addresses or raw bytes must never be filled in using guesses.

`examples/patch-template.json` intentionally uses an empty `writes` array and cannot be applied directly. `definitions/` already includes 17 released and 1 beta single-item definitions, as well as Release 17/Beta 18 combinations; read the `README.md` inside that directory first. When creating a new research definition, copy the template and complete it with reliable evidence—do not disguise unknown control-flow features as "simple patches".