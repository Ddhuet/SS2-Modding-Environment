
undefined4 FUN_0805d6ac(uint param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 unaff_lr;
  
  param_1 = param_1 & 0xff;
  if (0x18 < param_1) {
    param_1 = 0;
  }
  iVar1 = param_1 * 0x10 + *DAT_0805d6d8;
  uVar2 = param_2[1];
  uVar3 = param_2[2];
  *(undefined4 *)(iVar1 + 0x158) = *param_2;
  *(undefined4 *)(iVar1 + 0x15c) = uVar2;
  *(undefined4 *)(iVar1 + 0x160) = uVar3;
  *(undefined4 *)(iVar1 + 0x164) = param_2[3];
  return unaff_lr;
}

