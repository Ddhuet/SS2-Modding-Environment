
undefined4 FUN_080b9cd8(undefined2 *param_1)

{
  uint uVar1;
  undefined2 *puVar2;
  undefined4 unaff_lr;
  
  *DAT_080b9cf4 = (int)param_1 + 1;
  puVar2 = (undefined2 *)(DAT_080b9cf8 & 0xfffffffe);
  for (uVar1 = (DAT_080b9cfc - DAT_080b9cf8) * 0x8000; uVar1 >> 0x10 != 0;
      uVar1 = ((uVar1 >> 0x10) - 1) * 0x10000) {
    *param_1 = *puVar2;
    puVar2 = puVar2 + 1;
    param_1 = param_1 + 1;
  }
  return unaff_lr;
}

