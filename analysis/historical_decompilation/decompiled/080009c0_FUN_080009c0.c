
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_080009c0(ushort param_1,ushort param_2,short param_3)

{
  ushort uVar1;
  undefined4 unaff_lr;
  
  uVar1 = param_2 & 0xe000 | param_1 & 0x1f00 | *DAT_080009f4;
  *DAT_080009f4 = uVar1;
  if (param_3 != 0) {
    _DAT_04000000 = uVar1;
  }
  return unaff_lr;
}

