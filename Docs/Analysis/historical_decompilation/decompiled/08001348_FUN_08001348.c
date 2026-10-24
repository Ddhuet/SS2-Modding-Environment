
undefined4 FUN_08001348(undefined4 param_1,undefined4 param_2,uint param_3)

{
  uint *puVar1;
  undefined4 *puVar2;
  undefined4 unaff_lr;
  
  puVar1 = DAT_08001388;
  if (*DAT_08001388 <= DAT_0800138c) {
    puVar2 = (undefined4 *)(*DAT_08001390 + *DAT_08001388 * 0xc);
    *puVar2 = param_1;
    puVar2[1] = param_2;
    puVar2[2] = param_3;
    if ((param_3 & 0x1f) == 0) {
      puVar2[2] = param_3 | 0x80000000;
    }
    *puVar1 = *puVar1 + 1;
  }
  return unaff_lr;
}

