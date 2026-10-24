
undefined4 FUN_0801a630(ushort param_1)

{
  ushort *puVar1;
  undefined4 unaff_lr;
  
  puVar1 = DAT_0801a67c;
  if ((-1 < *DAT_0801a678) || ((*DAT_0801a67c & 0x8000) == 0)) {
    *DAT_0801a678 = -1;
    *DAT_0801a680 = param_1;
    *puVar1 = param_1;
    FUN_08000420(100);
    *DAT_0801a684 = *DAT_0801a684 & 0xffd7 | 2;
  }
  return unaff_lr;
}

