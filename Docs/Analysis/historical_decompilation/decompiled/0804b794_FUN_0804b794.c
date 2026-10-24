
undefined4 FUN_0804b794(void)

{
  short sVar1;
  undefined4 uVar2;
  uint *puVar3;
  short sVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int unaff_r10;
  undefined4 unaff_lr;
  undefined1 local_44 [4];
  undefined1 local_40 [4];
  undefined1 local_3c [4];
  undefined1 local_38 [4];
  int local_34;
  int local_30;
  int local_2c;
  undefined1 *local_28;
  undefined1 *local_24;
  
  FUN_0804bbb8(0);
  iVar6 = DAT_0804b818;
  sVar4 = *(short *)(DAT_0804b814 + 0x80);
  sVar1 = *(short *)(DAT_0804b814 + 0x82);
  iVar5 = 0;
  local_28 = local_3c;
  local_24 = local_38;
  do {
    FUN_08066020(local_44,(int)sVar4,0,iVar5);
    FUN_08066020(local_40,(int)sVar1,iVar6 >> 0x10,iVar5);
    FUN_0800b4e8((int)local_44._0_2_,(int)local_40._0_2_);
    FUN_080003f0();
    uVar2 = DAT_0804b81c;
    iVar5 = iVar5 + 0x22;
  } while (iVar5 < 0x401);
  iVar6 = *DAT_0804b820 + DAT_0804b824;
  for (uVar7 = 0; uVar7 < 0x1e; uVar7 = uVar7 + 1) {
    iVar5 = FUN_08000470(iVar6);
    if (iVar5 == 0) goto LAB_0804b840;
    iVar6 = iVar6 + 0x28;
  }
LAB_0804b86c:
  uVar2 = DAT_0804b87c;
  iVar6 = *DAT_0804b880 + DAT_0804b884;
  for (uVar7 = 0; uVar7 < 0x1e; uVar7 = uVar7 + 1) {
    iVar5 = FUN_08000470(iVar6);
    if (iVar5 == 0) goto LAB_0804b8a0;
    iVar6 = iVar6 + 0x28;
  }
LAB_0804b8cc:
  uVar2 = DAT_0804b8dc;
  iVar6 = *DAT_0804b8e0 + DAT_0804b8e4;
  for (uVar7 = 0; uVar7 < 0x1e; uVar7 = uVar7 + 1) {
    iVar5 = FUN_08000470(iVar6);
    if (iVar5 == 0) goto LAB_0804b900;
    iVar6 = iVar6 + 0x28;
  }
LAB_0804b92c:
  uVar2 = DAT_0804b93c;
  iVar6 = *DAT_0804b940 + DAT_0804b944;
  for (uVar7 = 0; uVar7 < 0x1e; uVar7 = uVar7 + 1) {
    iVar5 = FUN_08000470(iVar6);
    if (iVar5 == 0) goto LAB_0804b960;
    iVar6 = iVar6 + 0x28;
  }
LAB_0804b98c:
  FUN_0802a20c(0x8c,0x82,200,100);
  if ((unaff_r10 != 0) && (iVar6 = FUN_08000470(unaff_r10), iVar6 != 0)) {
    FUN_080003a8(unaff_r10);
  }
  if ((local_34 != 0) && (iVar6 = FUN_08000470(), iVar6 != 0)) {
    FUN_080003a8(local_34);
  }
  if ((local_30 != 0) && (iVar6 = FUN_08000470(local_30), iVar6 != 0)) {
    FUN_080003a8(local_30);
  }
  if ((local_2c != 0) && (iVar6 = FUN_08000470(local_2c), iVar6 != 0)) {
    FUN_080003a8(local_2c);
  }
  sVar4 = 1;
  do {
    FUN_080003f0();
    iVar6 = FUN_080021a8();
    if (iVar6 != 0) break;
    sVar4 = sVar4 + -1;
  } while (sVar4 != 0);
  FUN_0805f8e0();
  do {
    FUN_080003f0();
    iVar6 = FUN_0805fa94();
  } while (iVar6 != 0);
  sVar4 = *(short *)(DAT_0804ba78 + 0x80);
  sVar1 = *(short *)(DAT_0804ba78 + 0x82);
  iVar6 = 0;
  do {
    FUN_08066020(local_28,(int)sVar4,0,iVar6);
    FUN_08066020(local_24,(int)sVar1,0,iVar6);
    FUN_0800b4e8((int)local_3c._0_2_,(int)local_38._0_2_);
    FUN_080003f0();
    uVar2 = DAT_0804ba7c;
    iVar6 = iVar6 + 0x66;
  } while (iVar6 < 0x401);
  iVar6 = *DAT_0804ba80 + DAT_0804ba84;
  for (uVar7 = 0; uVar7 < 0x1e; uVar7 = uVar7 + 1) {
    iVar5 = FUN_08000470(iVar6);
    if (iVar5 == 0) goto LAB_0804baa0;
    iVar6 = iVar6 + 0x28;
  }
LAB_0804baca:
  uVar2 = DAT_0804bad8;
  iVar6 = *DAT_0804badc + DAT_0804bae0;
  for (uVar7 = 0; uVar7 < 0x1e; uVar7 = uVar7 + 1) {
    iVar5 = FUN_08000470(iVar6);
    if (iVar5 == 0) goto LAB_0804bafc;
    iVar6 = iVar6 + 0x28;
  }
LAB_0804bb26:
  sVar4 = 0x1e;
  do {
    FUN_080003f0();
    iVar6 = FUN_080021a8();
    if (iVar6 != 0) break;
    sVar4 = sVar4 + -1;
  } while (sVar4 != 0);
  iVar6 = FUN_0800c4ec();
  if (iVar6 == 0) {
    if ((*DAT_0804bb60 & 0x20) == 0) {
      *DAT_0804bb64 = 2;
      FUN_08006794();
    }
  }
  else {
    FUN_08059ae4(0);
  }
  puVar3 = DAT_0804bbb0;
  iVar6 = *DAT_0804bbac;
  uVar7 = 0;
  do {
    if (((*puVar3 & 1 << (uVar7 & 0xff)) != 0) && (*(short *)(iVar6 + 0xc) == 0xc)) {
      *(undefined2 *)(iVar6 + 0xc) = 0;
    }
    uVar7 = uVar7 + 1;
    iVar6 = iVar6 + DAT_0804bbb4;
  } while (uVar7 < 5);
  FUN_08019a4c();
  return unaff_lr;
LAB_0804b840:
  while( true ) {
    iVar5 = FUN_08001494(0x400);
    *(int *)(iVar6 + 0x20) = iVar5;
    if (iVar5 != 0) break;
    FUN_080003f0();
  }
  *(undefined4 *)(iVar6 + 8) = 0x3c;
  *(undefined4 *)(iVar6 + 0xc) = uVar2;
  *(int *)(iVar6 + 0x10) = iVar5 + 0x3fc;
  *(undefined4 *)(iVar6 + 0x24) = 0;
  FUN_08000274(iVar6,1);
  unaff_r10 = iVar6;
  goto LAB_0804b86c;
LAB_0804b8a0:
  while( true ) {
    iVar5 = FUN_08001494(0x400);
    *(int *)(iVar6 + 0x20) = iVar5;
    if (iVar5 != 0) break;
    FUN_080003f0();
  }
  *(undefined4 *)(iVar6 + 8) = 0x3c;
  *(undefined4 *)(iVar6 + 0xc) = uVar2;
  *(int *)(iVar6 + 0x10) = iVar5 + 0x3fc;
  *(undefined4 *)(iVar6 + 0x24) = 0;
  FUN_08000274(iVar6,2);
  local_34 = iVar6;
  goto LAB_0804b8cc;
LAB_0804b900:
  while( true ) {
    iVar5 = FUN_08001494(0x400);
    *(int *)(iVar6 + 0x20) = iVar5;
    if (iVar5 != 0) break;
    FUN_080003f0();
  }
  *(undefined4 *)(iVar6 + 8) = 0x3c;
  *(undefined4 *)(iVar6 + 0xc) = uVar2;
  *(int *)(iVar6 + 0x10) = iVar5 + 0x3fc;
  *(undefined4 *)(iVar6 + 0x24) = 0;
  FUN_08000274(iVar6,3);
  local_30 = iVar6;
  goto LAB_0804b92c;
LAB_0804b960:
  while( true ) {
    iVar5 = FUN_08001494(0x400);
    *(int *)(iVar6 + 0x20) = iVar5;
    if (iVar5 != 0) break;
    FUN_080003f0();
  }
  *(undefined4 *)(iVar6 + 8) = 0x3c;
  *(undefined4 *)(iVar6 + 0xc) = uVar2;
  *(int *)(iVar6 + 0x10) = iVar5 + 0x3fc;
  *(undefined4 *)(iVar6 + 0x24) = 0;
  FUN_08000274(iVar6,4);
  local_2c = iVar6;
  goto LAB_0804b98c;
LAB_0804baa0:
  while( true ) {
    iVar5 = FUN_08001494(0x400);
    *(int *)(iVar6 + 0x20) = iVar5;
    if (iVar5 != 0) break;
    FUN_080003f0();
  }
  *(undefined4 *)(iVar6 + 8) = 0x3c;
  *(undefined4 *)(iVar6 + 0xc) = uVar2;
  *(int *)(iVar6 + 0x10) = iVar5 + 0x3fc;
  *(undefined4 *)(iVar6 + 0x24) = 0;
  FUN_08000274(iVar6,5);
  goto LAB_0804baca;
LAB_0804bafc:
  while( true ) {
    iVar5 = FUN_08001494(0x400);
    *(int *)(iVar6 + 0x20) = iVar5;
    if (iVar5 != 0) break;
    FUN_080003f0();
  }
  *(undefined4 *)(iVar6 + 8) = 0x3c;
  *(undefined4 *)(iVar6 + 0xc) = uVar2;
  *(int *)(iVar6 + 0x10) = iVar5 + 0x3fc;
  *(undefined4 *)(iVar6 + 0x24) = 0;
  FUN_08000274(iVar6,6);
  goto LAB_0804bb26;
}

