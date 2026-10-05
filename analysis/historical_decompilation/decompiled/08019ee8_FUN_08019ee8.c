
undefined4 FUN_08019ee8(int param_1)

{
  int *piVar1;
  ushort *puVar2;
  int iVar3;
  undefined4 unaff_lr;
  
  piVar1 = DAT_08019f20;
  param_1 = param_1 * DAT_08019f24;
  iVar3 = param_1 + *DAT_08019f20;
  puVar2 = (ushort *)(iVar3 + 0x7a);
  *puVar2 = *puVar2 | 4;
  *(undefined1 *)(iVar3 + DAT_08019f28) = 0;
  *(undefined1 *)(param_1 + *piVar1 + DAT_08019f2c) = 0xff;
  return unaff_lr;
}

