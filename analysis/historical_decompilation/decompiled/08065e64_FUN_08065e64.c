
undefined4 FUN_08065e64(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined4 unaff_lr;
  
  iVar2 = *DAT_08065e78;
  uVar3 = 0;
  while( true ) {
    if (3 < uVar3) {
      return unaff_lr;
    }
    iVar1 = FUN_08000470(iVar2);
    if (iVar1 == 0) break;
    uVar3 = uVar3 + 1;
    iVar2 = iVar2 + 0x28;
  }
  iVar1 = FUN_08001494(0x400);
  *(int *)(iVar2 + 0x20) = iVar1;
  if (iVar1 == 0) {
    return unaff_lr;
  }
  *(undefined4 *)(iVar2 + 8) = 0x3c;
  *(undefined4 *)(iVar2 + 0xc) = DAT_08065ec8;
  *(int *)(iVar2 + 0x10) = iVar1 + 0x3fc;
  *(undefined4 *)(iVar2 + 0x24) = 0;
  FUN_08000274(iVar2,param_1,param_2);
  return unaff_lr;
}

