
undefined4 FUN_08056170(void)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 unaff_lr;
  
  uVar1 = DAT_08056180;
  iVar3 = *DAT_08056184 + DAT_08056188;
  for (uVar4 = 0; uVar4 < 0x1e; uVar4 = uVar4 + 1) {
    iVar2 = FUN_08000470(iVar3);
    if (iVar2 == 0) goto LAB_080561a4;
    iVar3 = iVar3 + 0x28;
  }
LAB_080561ce:
  uVar1 = DAT_080561dc;
  iVar3 = *DAT_080561e0 + DAT_080561e4;
  for (uVar4 = 0; uVar4 < 0x1e; uVar4 = uVar4 + 1) {
    iVar2 = FUN_08000470(iVar3);
    if (iVar2 == 0) goto LAB_08056200;
    iVar3 = iVar3 + 0x28;
  }
LAB_0805622a:
  uVar1 = DAT_08056238;
  iVar3 = *DAT_0805623c + DAT_08056240;
  for (uVar4 = 0; uVar4 < 0x1e; uVar4 = uVar4 + 1) {
    iVar2 = FUN_08000470(iVar3);
    if (iVar2 == 0) goto LAB_0805625c;
    iVar3 = iVar3 + 0x28;
  }
LAB_08056286:
  uVar1 = DAT_08056294;
  iVar3 = *DAT_08056298 + DAT_0805629c;
  for (uVar4 = 0; uVar4 < 0x1e; uVar4 = uVar4 + 1) {
    iVar2 = FUN_08000470(iVar3);
    if (iVar2 == 0) goto LAB_080562b8;
    iVar3 = iVar3 + 0x28;
  }
LAB_080562e2:
  uVar1 = DAT_080562f0;
  iVar3 = *DAT_080562f4 + DAT_080562f8;
  for (uVar4 = 0; uVar4 < 0x1e; uVar4 = uVar4 + 1) {
    iVar2 = FUN_08000470(iVar3);
    if (iVar2 == 0) goto LAB_08056314;
    iVar3 = iVar3 + 0x28;
  }
LAB_0805633e:
  uVar1 = DAT_0805634c;
  iVar3 = *DAT_08056350 + DAT_08056354;
  for (uVar4 = 0; uVar4 < 0x1e; uVar4 = uVar4 + 1) {
    iVar2 = FUN_08000470(iVar3);
    if (iVar2 == 0) goto LAB_08056370;
    iVar3 = iVar3 + 0x28;
  }
LAB_0805639a:
  uVar1 = DAT_080563a8;
  iVar3 = *DAT_080563ac + DAT_080563b0;
  for (uVar4 = 0; uVar4 < 0x1e; uVar4 = uVar4 + 1) {
    iVar2 = FUN_08000470(iVar3);
    if (iVar2 == 0) goto LAB_080563cc;
    iVar3 = iVar3 + 0x28;
  }
LAB_080563f6:
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
LAB_080561a4:
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
  FUN_08000274(iVar3,0x1e);
  goto LAB_080561ce;
LAB_08056200:
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
  FUN_08000274(iVar3,0x1f);
  goto LAB_0805622a;
LAB_0805625c:
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
  FUN_08000274(iVar3,0x20);
  goto LAB_08056286;
LAB_080562b8:
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
  FUN_08000274(iVar3,0x21);
  goto LAB_080562e2;
LAB_08056314:
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
  FUN_08000274(iVar3,0x22);
  goto LAB_0805633e;
LAB_08056370:
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
  FUN_08000274(iVar3,0x23);
  goto LAB_0805639a;
LAB_080563cc:
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
  FUN_08000274(iVar3,0x24);
  goto LAB_080563f6;
}

