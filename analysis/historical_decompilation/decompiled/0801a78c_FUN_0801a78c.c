
undefined4 FUN_0801a78c(ushort param_1)

{
  ushort *puVar1;
  undefined4 unaff_lr;
  
  puVar1 = DAT_0801a7d8;
  if ((-1 < *DAT_0801a7d4) || ((*DAT_0801a7d8 & 0x8000) == 0)) {
    *DAT_0801a7d4 = -1;
    *DAT_0801a7dc = param_1;
    *puVar1 = param_1;
    FUN_08000420(100);
    *DAT_0801a7e0 = *DAT_0801a7e0 & 0xfff7 | 0x10;
  }
  return unaff_lr;
}

