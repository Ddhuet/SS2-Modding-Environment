
undefined4 FUN_0804b49c(void)

{
  short sVar1;
  int *piVar2;
  undefined4 uVar3;
  uint *puVar4;
  short sVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  undefined4 unaff_lr;
  undefined1 local_28 [4];
  undefined1 local_24 [4];
  
  piVar2 = DAT_0804b54c;
  if ((*(uint *)(*DAT_0804b54c + 0x38) & 1) == 0) {
    iVar6 = FUN_080020f4();
    iVar6 = iVar6 * 0x154 + DAT_0804b550;
    *(uint *)(iVar6 + 0x38) = *(uint *)(iVar6 + 0x38) | 1;
    FUN_0800ca44();
    *(uint *)(*piVar2 + 0x38) = *(uint *)(*piVar2 + 0x38) | 1;
    iVar6 = DAT_0804b558;
    sVar5 = *(short *)(DAT_0804b554 + 0x80);
    sVar1 = *(short *)(DAT_0804b554 + 0x82);
    iVar7 = 0;
    do {
      FUN_08066020(local_28,(int)sVar5,0,iVar7);
      FUN_08066020(local_24,(int)sVar1,iVar6 >> 0x10,iVar7);
      FUN_0800b4e8((int)local_28._0_2_,(int)local_24._0_2_);
      FUN_080003f0();
      uVar3 = DAT_0804b55c;
      iVar7 = iVar7 + 0x400;
    } while (iVar7 < 0x401);
    iVar6 = *DAT_0804b54c + DAT_0804b560;
    for (uVar8 = 0; uVar8 < 0x1e; uVar8 = uVar8 + 1) {
      iVar7 = FUN_08000470(iVar6);
      if (iVar7 == 0) goto LAB_0804b57c;
      iVar6 = iVar6 + 0x28;
    }
    goto LAB_0804b5a6;
  }
  iVar6 = FUN_0800c5e8();
  if (iVar6 == 0) {
    iVar6 = FUN_0801a720();
    if (iVar6 == 1) {
      FUN_0801a74c(6);
    }
    else if (iVar6 < 2) {
      if (iVar6 == 0) {
        FUN_08058b6c();
      }
    }
    else if (iVar6 == 2) {
      FUN_0801a78c(6);
    }
    while (iVar6 = FUN_0801a6dc(), iVar6 == 0) {
      FUN_080003f0();
    }
  }
  FUN_0802a20c(0x8c,0x82,200,100);
  uVar3 = DAT_0804b684;
  iVar6 = *DAT_0804b688 + DAT_0804b68c;
  for (uVar8 = 0; uVar8 < 0x1e; uVar8 = uVar8 + 1) {
    iVar7 = FUN_08000470(iVar6);
    if (iVar7 == 0) goto LAB_0804b6a8;
    iVar6 = iVar6 + 0x28;
  }
  goto LAB_0804b6d2;
LAB_0804b704:
  while( true ) {
    iVar7 = FUN_08001494(0x400);
    *(int *)(iVar6 + 0x20) = iVar7;
    if (iVar7 != 0) break;
    FUN_080003f0();
  }
  *(undefined4 *)(iVar6 + 8) = 0x3c;
  *(undefined4 *)(iVar6 + 0xc) = uVar3;
  *(int *)(iVar6 + 0x10) = iVar7 + 0x3fc;
  *(undefined4 *)(iVar6 + 0x24) = 0;
  FUN_08000274(iVar6,6);
  goto LAB_0804b72e;
LAB_0804b57c:
  while( true ) {
    iVar7 = FUN_08001494(0x400);
    *(int *)(iVar6 + 0x20) = iVar7;
    if (iVar7 != 0) break;
    FUN_080003f0();
  }
  *(undefined4 *)(iVar6 + 8) = 0x3c;
  *(undefined4 *)(iVar6 + 0xc) = uVar3;
  *(int *)(iVar6 + 0x10) = iVar7 + 0x3fc;
  *(undefined4 *)(iVar6 + 0x24) = 0;
  FUN_08000274(iVar6,0);
LAB_0804b5a6:
  sVar5 = 2;
  do {
    FUN_080003f0();
    iVar6 = FUN_080021a8();
    if (iVar6 != 0) break;
    sVar5 = sVar5 + -1;
  } while (sVar5 != 0);
  iVar6 = FUN_0800c5e8();
  if (iVar6 == 0) {
    iVar6 = FUN_0801a720();
    if (iVar6 == 1) {
      FUN_0801a74c(6);
    }
    else if (iVar6 < 2) {
      if (iVar6 == 0) {
        FUN_08058b6c();
      }
    }
    else if (iVar6 == 2) {
      FUN_0801a78c(6);
    }
    while (iVar6 = FUN_0801a6dc(), iVar6 == 0) {
      FUN_080003f0();
    }
  }
  *DAT_0804b620 = 0xc4;
  if ((*DAT_0804b624 & 0x20) == 0) {
    FUN_08006794(0xc4);
  }
  return unaff_lr;
LAB_0804b6a8:
  while( true ) {
    iVar7 = FUN_08001494(0x400);
    *(int *)(iVar6 + 0x20) = iVar7;
    if (iVar7 != 0) break;
    FUN_080003f0();
  }
  *(undefined4 *)(iVar6 + 8) = 0x3c;
  *(undefined4 *)(iVar6 + 0xc) = uVar3;
  *(int *)(iVar6 + 0x10) = iVar7 + 0x3fc;
  *(undefined4 *)(iVar6 + 0x24) = 0;
  FUN_08000274(iVar6,5);
LAB_0804b6d2:
  uVar3 = DAT_0804b6e0;
  iVar6 = *DAT_0804b6e4 + DAT_0804b6e8;
  for (uVar8 = 0; uVar8 < 0x1e; uVar8 = uVar8 + 1) {
    iVar7 = FUN_08000470(iVar6);
    if (iVar7 == 0) goto LAB_0804b704;
    iVar6 = iVar6 + 0x28;
  }
LAB_0804b72e:
  sVar5 = 0x1e;
  do {
    FUN_080003f0();
    iVar6 = FUN_080021a8();
    puVar4 = DAT_0804b78c;
    if (iVar6 != 0) break;
    sVar5 = sVar5 + -1;
  } while (sVar5 != 0);
  iVar6 = *DAT_0804b788;
  uVar8 = 0;
  do {
    if (((*puVar4 & 1 << (uVar8 & 0xff)) != 0) && (*(short *)(iVar6 + 0xc) == 0xc)) {
      *(undefined2 *)(iVar6 + 0xc) = 0;
    }
    uVar8 = uVar8 + 1;
    iVar6 = iVar6 + DAT_0804b790;
  } while (uVar8 < 5);
  FUN_08019a4c();
  return unaff_lr;
}

