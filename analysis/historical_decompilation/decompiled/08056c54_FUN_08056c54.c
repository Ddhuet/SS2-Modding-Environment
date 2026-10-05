
undefined4 FUN_08056c54(void)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 unaff_lr;
  
  uVar1 = DAT_08056c64;
  iVar3 = *DAT_08056c68 + DAT_08056c6c;
  for (uVar4 = 0; uVar4 < 0x1e; uVar4 = uVar4 + 1) {
    iVar2 = FUN_08000470(iVar3);
    if (iVar2 == 0) goto LAB_08056c88;
    iVar3 = iVar3 + 0x28;
  }
LAB_08056cb2:
  uVar1 = DAT_08056cc0;
  iVar3 = *DAT_08056cc4 + DAT_08056cc8;
  for (uVar4 = 0; uVar4 < 0x1e; uVar4 = uVar4 + 1) {
    iVar2 = FUN_08000470(iVar3);
    if (iVar2 == 0) goto LAB_08056ce4;
    iVar3 = iVar3 + 0x28;
  }
LAB_08056d0e:
  iVar3 = FUN_0800c5e8();
  if (iVar3 == 0) {
    iVar3 = FUN_0801a720();
    if (iVar3 == 1) {
      FUN_0801a74c(6);
    }
    else if (iVar3 < 2) {
      if (iVar3 == 0) {
        FUN_08058b6c();
      }
    }
    else if (iVar3 == 2) {
      FUN_0801a78c(6);
    }
    while (iVar3 = FUN_0801a6dc(), iVar3 == 0) {
      FUN_080003f0();
    }
  }
  return unaff_lr;
LAB_08056c88:
  while( true ) {
    iVar2 = FUN_08001494(0x400);
    *(int *)(iVar3 + 0x20) = iVar2;
    if (iVar2 != 0) break;
    FUN_080003f0();
  }
  *(undefined4 *)(iVar3 + 8) = 0x3c;
  *(undefined4 *)(iVar3 + 0xc) = uVar1;
  *(int *)(iVar3 + 0x10) = iVar2 + 0x3fc;
  *(undefined4 *)(iVar3 + 0x24) = 0;
  FUN_08000274(iVar3,0x39);
  goto LAB_08056cb2;
LAB_08056ce4:
  while( true ) {
    iVar2 = FUN_08001494(0x400);
    *(int *)(iVar3 + 0x20) = iVar2;
    if (iVar2 != 0) break;
    FUN_080003f0();
  }
  *(undefined4 *)(iVar3 + 8) = 0x3c;
  *(undefined4 *)(iVar3 + 0xc) = uVar1;
  *(int *)(iVar3 + 0x10) = iVar2 + 0x3fc;
  *(undefined4 *)(iVar3 + 0x24) = 0;
  FUN_08000274(iVar3,0x3a);
  goto LAB_08056d0e;
}

