
undefined4 FUN_0804ed80(void)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 unaff_lr;
  
  iVar2 = FUN_0800c5e8();
  if (iVar2 == 0) {
    iVar2 = FUN_0801a720();
    if (iVar2 == 1) {
      FUN_0801a74c(6);
    }
    else if (iVar2 < 2) {
      if (iVar2 == 0) {
        FUN_08058b6c();
      }
    }
    else if (iVar2 == 2) {
      FUN_0801a78c(6);
    }
    while (iVar2 = FUN_0801a6dc(), iVar2 == 0) {
      FUN_080003f0();
    }
  }
  uVar1 = DAT_0804edd4;
  iVar2 = *DAT_0804edd8 + DAT_0804eddc;
  for (uVar4 = 0; uVar4 < 0x1e; uVar4 = uVar4 + 1) {
    iVar3 = FUN_08000470(iVar2);
    if (iVar3 == 0) goto LAB_0804edf8;
    iVar2 = iVar2 + 0x28;
  }
LAB_0804ee22:
  uVar1 = DAT_0804ee30;
  iVar2 = *DAT_0804ee34 + DAT_0804ee38;
  uVar4 = 0;
  while( true ) {
    if (0x1d < uVar4) {
      return unaff_lr;
    }
    iVar3 = FUN_08000470(iVar2);
    if (iVar3 == 0) break;
    uVar4 = uVar4 + 1;
    iVar2 = iVar2 + 0x28;
  }
  while( true ) {
    iVar3 = FUN_08001494(0x400);
    *(int *)(iVar2 + 0x20) = iVar3;
    if (iVar3 != 0) break;
    FUN_080003f0();
  }
  *(undefined4 *)(iVar2 + 8) = 0x3c;
  *(undefined4 *)(iVar2 + 0xc) = uVar1;
  *(int *)(iVar2 + 0x10) = iVar3 + 0x3fc;
  *(undefined4 *)(iVar2 + 0x24) = 0;
  FUN_08000274(iVar2,0xd);
  return unaff_lr;
LAB_0804edf8:
  while( true ) {
    iVar3 = FUN_08001494(0x400);
    *(int *)(iVar2 + 0x20) = iVar3;
    if (iVar3 != 0) break;
    FUN_080003f0();
  }
  *(undefined4 *)(iVar2 + 8) = 0x3c;
  *(undefined4 *)(iVar2 + 0xc) = uVar1;
  *(int *)(iVar2 + 0x10) = iVar3 + 0x3fc;
  *(undefined4 *)(iVar2 + 0x24) = 0;
  FUN_08000274(iVar2,0xc);
  goto LAB_0804ee22;
}

