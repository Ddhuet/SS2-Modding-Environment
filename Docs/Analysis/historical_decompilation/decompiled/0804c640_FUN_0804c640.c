
undefined4 FUN_0804c640(void)

{
  short sVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  undefined4 unaff_lr;
  
  iVar2 = FUN_0800c61c();
  piVar6 = DAT_0804c6b4;
  if (iVar2 != 0) goto LAB_0804c8f4;
  uVar5 = *(uint *)(*DAT_0804c6b4 + 0x38);
  if ((uVar5 & 0x20) != 0) goto LAB_0804c8f4;
  *(uint *)(*DAT_0804c6b4 + 0x38) = uVar5 | 0x20;
  iVar2 = FUN_080020f4();
  iVar2 = iVar2 * 0x154 + DAT_0804c6b8;
  *(uint *)(iVar2 + 0x38) = *(uint *)(iVar2 + 0x38) | 1;
  FUN_0800ca44();
  FUN_08019ee8(2);
  FUN_08019ee8(1);
  FUN_08028b3c(2,0x78,0x50,10);
  FUN_08028b3c(2,DAT_0804c6bc,DAT_0804c6bc,0);
  uVar3 = DAT_0804c6c0;
  iVar2 = *piVar6 + DAT_0804c6c4;
  for (uVar5 = 0; uVar5 < 0x1e; uVar5 = uVar5 + 1) {
    iVar4 = FUN_08000470(iVar2);
    if (iVar4 == 0) goto LAB_0804c6e0;
    iVar2 = iVar2 + 0x28;
  }
  goto LAB_0804c70a;
LAB_0804c804:
  while( true ) {
    iVar4 = FUN_08001494(0x400);
    *(int *)(iVar2 + 0x20) = iVar4;
    if (iVar4 != 0) break;
    FUN_080003f0();
  }
  *(undefined4 *)(iVar2 + 8) = 0x3c;
  *(undefined4 *)(iVar2 + 0xc) = uVar3;
  *(int *)(iVar2 + 0x10) = iVar4 + 0x3fc;
  *(undefined4 *)(iVar2 + 0x24) = 0;
  FUN_08000274(iVar2,1);
  goto LAB_0804c82e;
LAB_0804c6e0:
  while( true ) {
    iVar4 = FUN_08001494(0x400);
    *(int *)(iVar2 + 0x20) = iVar4;
    if (iVar4 != 0) break;
    FUN_080003f0();
  }
  *(undefined4 *)(iVar2 + 8) = 0x3c;
  *(undefined4 *)(iVar2 + 0xc) = uVar3;
  *(int *)(iVar2 + 0x10) = iVar4 + 0x3fc;
  *(undefined4 *)(iVar2 + 0x24) = 0;
  FUN_08000274(iVar2,2);
LAB_0804c70a:
  sVar1 = 0x1e;
  do {
    FUN_080003f0();
    iVar2 = FUN_080021a8();
    if (iVar2 != 0) break;
    sVar1 = sVar1 + -1;
  } while (sVar1 != 0);
  FUN_080745a8(0x7800,0x5000,0x29,1);
  sVar1 = 2;
  do {
    FUN_080003f0();
    iVar2 = FUN_080021a8();
    if (iVar2 != 0) break;
    sVar1 = sVar1 + -1;
  } while (sVar1 != 0);
  FUN_080745a8(0x7000,0x5000,0x29,1);
  FUN_080745a8(0x7c00,0x4800,0x29,1);
  sVar1 = 2;
  do {
    FUN_080003f0();
    iVar2 = FUN_080021a8();
    if (iVar2 != 0) break;
    sVar1 = sVar1 + -1;
  } while (sVar1 != 0);
  FUN_080745a8(0x8000,0x5000,0x29,1);
  FUN_080745a8(0x7400,0x4800,0x29,1);
  sVar1 = 8;
  do {
    FUN_080003f0();
    iVar2 = FUN_080021a8();
    if (iVar2 != 0) break;
    sVar1 = sVar1 + -1;
  } while (sVar1 != 0);
  FUN_08028b3c(1,DAT_0804c7dc,DAT_0804c7dc,0);
  uVar3 = DAT_0804c7e0;
  iVar2 = *DAT_0804c7e4 + DAT_0804c7e8;
  for (uVar5 = 0; uVar5 < 0x1e; uVar5 = uVar5 + 1) {
    iVar4 = FUN_08000470(iVar2);
    if (iVar4 == 0) goto LAB_0804c804;
    iVar2 = iVar2 + 0x28;
  }
LAB_0804c82e:
  iVar2 = FUN_08028a50(0xf,0x78,0x50);
  FUN_0802917c(iVar2,0);
  FUN_08029444(iVar2,0x14);
  FUN_08028b3c(iVar2,0x78,0x50,0);
  while (iVar4 = FUN_0805fa94(), iVar4 != 0) {
    FUN_080003f0();
  }
  while (iVar4 = FUN_0805f8b4(), iVar4 != 0) {
    FUN_080003f0();
  }
  uVar3 = FUN_0805e608(1,0xf,2,0,0x2d,DAT_0804c888);
  while (iVar4 = FUN_0805f820(uVar3), iVar4 == 0) {
    FUN_080003f0();
  }
  FUN_08029444(iVar2,0x10);
  FUN_08028e2c(iVar2,0,0x78,100);
  piVar6 = (int *)(*DAT_0804c904 + DAT_0804c908);
  uVar5 = 0;
  do {
    if (*piVar6 == iVar2) goto LAB_0804c8cc;
    uVar5 = uVar5 + 1;
    piVar6 = piVar6 + 0x1c;
  } while (uVar5 < 0xf);
  FUN_080003f0();
  piVar6 = (int *)0x0;
LAB_0804c8cc:
  if (piVar6 != (int *)0x0) {
    *(undefined2 *)((int)piVar6 + 0x36) = 4;
  }
  iVar2 = FUN_080020f4();
  iVar2 = iVar2 * 0x154 + DAT_0804c90c;
  *(uint *)(iVar2 + 0x38) = *(uint *)(iVar2 + 0x38) & 0xfffffffe;
  FUN_0800ca58();
LAB_0804c8f4:
  iVar2 = FUN_0800c780();
  if (iVar2 == 0) {
    iVar4 = *DAT_0804c92c;
    iVar2 = DAT_0804c930;
  }
  else {
    iVar4 = *DAT_0804c904;
    iVar2 = DAT_0804c910;
  }
  *(byte *)(iVar4 + iVar2) = *(byte *)(iVar4 + iVar2) | 4;
  return unaff_lr;
}

