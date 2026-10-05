
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_080009f8(ushort param_1,ushort param_2,short param_3)

{
  ushort uVar1;
  undefined4 unaff_lr;
  
  uVar1 = *DAT_08000a30 & ~(param_1 & 0x1f00) & ~(param_2 & 0xe000);
  *DAT_08000a30 = uVar1;
  if (param_3 != 0) {
    _DAT_04000000 = uVar1;
  }
  return unaff_lr;
}

