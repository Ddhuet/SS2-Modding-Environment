
undefined4 FUN_08015824(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  undefined4 unaff_lr;
  
  iVar1 = DAT_08015858;
  *(undefined4 *)(DAT_08015858 + 8) = 0x34;
  iVar2 = FUN_08001494(0x400);
  *(int *)(iVar1 + 0x20) = iVar2;
  *(undefined4 *)(iVar1 + 0xc) = DAT_0801585c;
  *(int *)(iVar1 + 0x10) = iVar2 + 0x3fc;
  *(undefined4 *)(iVar1 + 0x24) = 0;
  FUN_08000274(iVar1,param_1);
  return unaff_lr;
}

