
ulonglong FUN_08019b3c(int param_1,uint param_2,uint param_3)

{
  int iVar1;
  undefined4 unaff_lr;
  int local_18;
  uint local_14;
  
  local_18 = param_1 + param_2 * 0x38;
  iVar1 = *DAT_08019b94;
  local_14 = ((local_14 & DAT_08019b98 | (uint)*(ushort *)(iVar1 + 8) << 0x10) & DAT_08019b9c |
             (param_2 & 0xff) << 8) & DAT_08019ba0 | param_3 & 0xff;
  *(short *)(iVar1 + 8) = *(short *)(iVar1 + 8) + 1 + (short)param_3;
  FUN_0806666c(&local_18);
  return CONCAT44(unaff_lr,(local_14 >> 0x10) + (local_14 & 0xff)) & 0xffffffff0000ffff;
}

