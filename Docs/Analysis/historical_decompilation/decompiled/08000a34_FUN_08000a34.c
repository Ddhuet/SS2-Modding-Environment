
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_08000a34(uint param_1,uint param_2,uint param_3,undefined4 param_4,short param_5)

{
  byte *pbVar1;
  undefined4 unaff_lr;
  
  pbVar1 = DAT_08000a88;
  *DAT_08000a88 =
       *DAT_08000a88 & 0x8f | (byte)((-(param_3 & 0xffff) >> 0x1f) << 4) |
       (byte)((-(param_2 & 0xffff) >> 0x1f) << 5) | (byte)((-(param_1 & 0xffff) >> 0x1f) << 6);
  if (param_5 != 0) {
    _DAT_04000000 = *(undefined2 *)pbVar1;
  }
  return unaff_lr;
}

