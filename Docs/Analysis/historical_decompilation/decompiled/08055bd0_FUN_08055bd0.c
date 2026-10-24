
undefined4 FUN_08055bd0(void)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 unaff_lr;
  
  uVar1 = DAT_08055be0;
  iVar3 = *DAT_08055be4 + DAT_08055be8;
  for (uVar4 = 0; uVar4 < 0x1e; uVar4 = uVar4 + 1) {
    iVar2 = FUN_08000470(iVar3);
    if (iVar2 == 0) goto LAB_08055c04;
    iVar3 = iVar3 + 0x28;
  }
LAB_08055c2e:
  uVar1 = DAT_08055c3c;
  iVar3 = *DAT_08055c40 + DAT_08055c44;
  for (uVar4 = 0; uVar4 < 0x1e; uVar4 = uVar4 + 1) {
    iVar2 = FUN_08000470(iVar3);
    if (iVar2 == 0) goto LAB_08055c60;
    iVar3 = iVar3 + 0x28;
  }
LAB_08055c8a:
  uVar1 = DAT_08055c98;
  iVar3 = *DAT_08055c9c + DAT_08055ca0;
  for (uVar4 = 0; uVar4 < 0x1e; uVar4 = uVar4 + 1) {
    iVar2 = FUN_08000470(iVar3);
    if (iVar2 == 0) goto LAB_08055cbc;
    iVar3 = iVar3 + 0x28;
  }
LAB_08055ce6:
  uVar1 = DAT_08055cf4;
  iVar3 = *DAT_08055cf8 + DAT_08055cfc;
  for (uVar4 = 0; uVar4 < 0x1e; uVar4 = uVar4 + 1) {
    iVar2 = FUN_08000470(iVar3);
    if (iVar2 == 0) goto LAB_08055d18;
    iVar3 = iVar3 + 0x28;
  }
LAB_08055d42:
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
LAB_08055c04:
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
  FUN_08000274(iVar3,0x10);
  goto LAB_08055c2e;
LAB_08055c60:
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
  FUN_08000274(iVar3,0x11);
  goto LAB_08055c8a;
LAB_08055cbc:
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
  FUN_08000274(iVar3,0x12);
  goto LAB_08055ce6;
LAB_08055d18:
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
  FUN_08000274(iVar3,0x13);
  goto LAB_08055d42;
}

