
undefined4 FUN_08055d8c(void)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 unaff_lr;
  
  uVar1 = DAT_08055d9c;
  iVar3 = *DAT_08055da0 + DAT_08055da4;
  for (uVar4 = 0; uVar4 < 0x1e; uVar4 = uVar4 + 1) {
    iVar2 = FUN_08000470(iVar3);
    if (iVar2 == 0) goto LAB_08055dc0;
    iVar3 = iVar3 + 0x28;
  }
LAB_08055dea:
  uVar1 = DAT_08055df8;
  iVar3 = *DAT_08055dfc + DAT_08055e00;
  for (uVar4 = 0; uVar4 < 0x1e; uVar4 = uVar4 + 1) {
    iVar2 = FUN_08000470(iVar3);
    if (iVar2 == 0) goto LAB_08055e1c;
    iVar3 = iVar3 + 0x28;
  }
LAB_08055e46:
  uVar1 = DAT_08055e54;
  iVar3 = *DAT_08055e58 + DAT_08055e5c;
  for (uVar4 = 0; uVar4 < 0x1e; uVar4 = uVar4 + 1) {
    iVar2 = FUN_08000470(iVar3);
    if (iVar2 == 0) goto LAB_08055e78;
    iVar3 = iVar3 + 0x28;
  }
LAB_08055ea2:
  uVar1 = DAT_08055eb0;
  iVar3 = *DAT_08055eb4 + DAT_08055eb8;
  for (uVar4 = 0; uVar4 < 0x1e; uVar4 = uVar4 + 1) {
    iVar2 = FUN_08000470(iVar3);
    if (iVar2 == 0) goto LAB_08055ed4;
    iVar3 = iVar3 + 0x28;
  }
LAB_08055efe:
  uVar1 = DAT_08055f0c;
  iVar3 = *DAT_08055f10 + DAT_08055f14;
  for (uVar4 = 0; uVar4 < 0x1e; uVar4 = uVar4 + 1) {
    iVar2 = FUN_08000470(iVar3);
    if (iVar2 == 0) goto LAB_08055f30;
    iVar3 = iVar3 + 0x28;
  }
LAB_08055f5a:
  uVar1 = DAT_08055f68;
  iVar3 = *DAT_08055f6c + DAT_08055f70;
  for (uVar4 = 0; uVar4 < 0x1e; uVar4 = uVar4 + 1) {
    iVar2 = FUN_08000470(iVar3);
    if (iVar2 == 0) goto LAB_08055f8c;
    iVar3 = iVar3 + 0x28;
  }
LAB_08055fb6:
  uVar1 = DAT_08055fc4;
  iVar3 = *DAT_08055fc8 + DAT_08055fcc;
  for (uVar4 = 0; uVar4 < 0x1e; uVar4 = uVar4 + 1) {
    iVar2 = FUN_08000470(iVar3);
    if (iVar2 == 0) goto LAB_08055fe8;
    iVar3 = iVar3 + 0x28;
  }
LAB_08056012:
  uVar1 = DAT_08056020;
  iVar3 = *DAT_08056024 + DAT_08056028;
  for (uVar4 = 0; uVar4 < 0x1e; uVar4 = uVar4 + 1) {
    iVar2 = FUN_08000470(iVar3);
    if (iVar2 == 0) goto LAB_08056044;
    iVar3 = iVar3 + 0x28;
  }
LAB_0805606e:
  uVar1 = DAT_0805607c;
  iVar3 = *DAT_08056080 + DAT_08056084;
  for (uVar4 = 0; uVar4 < 0x1e; uVar4 = uVar4 + 1) {
    iVar2 = FUN_08000470(iVar3);
    if (iVar2 == 0) goto LAB_080560a0;
    iVar3 = iVar3 + 0x28;
  }
LAB_080560ca:
  uVar1 = DAT_080560d8;
  iVar3 = *DAT_080560dc + DAT_080560e0;
  for (uVar4 = 0; uVar4 < 0x1e; uVar4 = uVar4 + 1) {
    iVar2 = FUN_08000470(iVar3);
    if (iVar2 == 0) goto LAB_080560fc;
    iVar3 = iVar3 + 0x28;
  }
LAB_08056126:
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
LAB_08055dc0:
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
  FUN_08000274(iVar3,0x14);
  goto LAB_08055dea;
LAB_08055e1c:
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
  FUN_08000274(iVar3,0x15);
  goto LAB_08055e46;
LAB_08055e78:
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
  FUN_08000274(iVar3,0x16);
  goto LAB_08055ea2;
LAB_08055ed4:
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
  FUN_08000274(iVar3,0x17);
  goto LAB_08055efe;
LAB_08055f30:
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
  FUN_08000274(iVar3,0x18);
  goto LAB_08055f5a;
LAB_08055f8c:
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
  FUN_08000274(iVar3,0x19);
  goto LAB_08055fb6;
LAB_08055fe8:
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
  FUN_08000274(iVar3,0x1a);
  goto LAB_08056012;
LAB_08056044:
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
  FUN_08000274(iVar3,0x1b);
  goto LAB_0805606e;
LAB_080560a0:
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
  FUN_08000274(iVar3,0x1c);
  goto LAB_080560ca;
LAB_080560fc:
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
  FUN_08000274(iVar3,0x1d);
  goto LAB_08056126;
}

