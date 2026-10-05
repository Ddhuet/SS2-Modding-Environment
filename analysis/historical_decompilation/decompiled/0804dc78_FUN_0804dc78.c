
undefined4 FUN_0804dc78(void)

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
  uVar1 = DAT_0804dccc;
  iVar2 = *DAT_0804dcd0 + DAT_0804dcd4;
  for (uVar4 = 0; uVar4 < 0x1e; uVar4 = uVar4 + 1) {
    iVar3 = FUN_08000470(iVar2);
    if (iVar3 == 0) goto LAB_0804dcf0;
    iVar2 = iVar2 + 0x28;
  }
LAB_0804dd1a:
  uVar1 = DAT_0804dd28;
  iVar2 = *DAT_0804dd2c + DAT_0804dd30;
  for (uVar4 = 0; uVar4 < 0x1e; uVar4 = uVar4 + 1) {
    iVar3 = FUN_08000470(iVar2);
    if (iVar3 == 0) goto LAB_0804dd4c;
    iVar2 = iVar2 + 0x28;
  }
LAB_0804dd76:
  uVar1 = DAT_0804dd84;
  iVar2 = *DAT_0804dd88 + DAT_0804dd8c;
  for (uVar4 = 0; uVar4 < 0x1e; uVar4 = uVar4 + 1) {
    iVar3 = FUN_08000470(iVar2);
    if (iVar3 == 0) goto LAB_0804dda8;
    iVar2 = iVar2 + 0x28;
  }
LAB_0804ddd2:
  uVar1 = DAT_0804dde0;
  iVar2 = *DAT_0804dde4 + DAT_0804dde8;
  for (uVar4 = 0; uVar4 < 0x1e; uVar4 = uVar4 + 1) {
    iVar3 = FUN_08000470(iVar2);
    if (iVar3 == 0) goto LAB_0804de04;
    iVar2 = iVar2 + 0x28;
  }
LAB_0804de2e:
  uVar1 = DAT_0804de3c;
  iVar2 = *DAT_0804de40 + DAT_0804de44;
  for (uVar4 = 0; uVar4 < 0x1e; uVar4 = uVar4 + 1) {
    iVar3 = FUN_08000470(iVar2);
    if (iVar3 == 0) goto LAB_0804de60;
    iVar2 = iVar2 + 0x28;
  }
LAB_0804de8a:
  uVar1 = DAT_0804de98;
  iVar2 = *DAT_0804de9c + DAT_0804dea0;
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
  FUN_08000274(iVar2,5);
  return unaff_lr;
LAB_0804dcf0:
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
  FUN_08000274(iVar2,0);
  goto LAB_0804dd1a;
LAB_0804dd4c:
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
  FUN_08000274(iVar2,1);
  goto LAB_0804dd76;
LAB_0804dda8:
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
  FUN_08000274(iVar2,2);
  goto LAB_0804ddd2;
LAB_0804de04:
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
  FUN_08000274(iVar2,3);
  goto LAB_0804de2e;
LAB_0804de60:
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
  FUN_08000274(iVar2,4);
  goto LAB_0804de8a;
}

