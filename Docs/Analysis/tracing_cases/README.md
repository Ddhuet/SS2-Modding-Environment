# Cheat Codes and Existing Patch Tracing Cases



These cases demonstrate how to step-by-step trace from an external phenomenon, runtime address, or registered patch to structure fields, functions, data tables, and control flow. They are method demonstrations, not patch tutorials where "seeing similar bytes means you can copy them verbatim".

| Case | Starting Point | Tracing Endpoint | Key Point |
| --- | --- | --- | --- |
| [01_EXP_CHEAT_TO_LEVEL_PATCH.md]<br> | EXP cheat code `0x02003C14`<br> | Level-up function, level cap, and EXP table

 | RAM addresses cannot be directly converted into ROM offsets

 |
| [02_ITEM_CHEAT_TO_RECORD_LAYOUT.md]<br> | First inventory slot cheat code

 | 16-byte item record and type dispatch

 | Bit width, little-endian, and high bytes

 |
| [03_SUMMON_PATCH_TO_LIFECYCLE.md]<br> | Two single-byte released patches

 | Type 18/20 lifecycle

 | Recovering complete Thumb instructions from surrounding bytes

 |
| [04_BL_PATCH_TO_CALL_GRAPH.md]<br> | 4-byte BL replacement of `money_drop_control`<br> | Call graph of RNG and inventory money statistics

 | BL target decoding and semantic risks

 |
| [05_COUNTER_PATCH_TO_DATAFLOW.md]<br> | In-place rewrite of `counter_fix`<br> | Damage function and target status dataflow

 | Same-length rearrangement still requires ABI review

 |

Common rules:

1. First verify all identity values of the current baseline.


2. `0x02000000/0x03000000` in cheat codes are RAM addresses and do not use `address-0x08000000` conversion.


3. Only ROM patch addresses are converted according to `offset=address-0x08000000`.


4. Historical dynamic records only document historical evidence; if not re-tested in the current sharing session, it cannot be written as current dynamic verification.


5. The goal of tracing is to establish a chain of evidence, not to guess modified bytes as quickly as possible.



---