
undefined4 FUN_080534c8(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  undefined4 unaff_lr;
  undefined1 auStack_2c [12];
  undefined4 local_20;
  undefined4 local_1c;
  
  uVar1 = DAT_080534dc;
  iVar6 = *DAT_080534e0 + DAT_080534e4;
  for (uVar7 = 0; uVar7 < 0x1e; uVar7 = uVar7 + 1) {
    iVar5 = FUN_08000470(iVar6);
    if (iVar5 == 0) goto LAB_08053500;
    iVar6 = iVar6 + 0x28;
  }
LAB_0805352a:
  uVar1 = DAT_08053538;
  iVar6 = *DAT_0805353c + DAT_08053540;
  for (uVar7 = 0; uVar7 < 0x1e; uVar7 = uVar7 + 1) {
    iVar5 = FUN_08000470(iVar6);
    if (iVar5 == 0) goto LAB_0805355c;
    iVar6 = iVar6 + 0x28;
  }
LAB_08053586:
  uVar1 = DAT_08053594;
  iVar6 = *DAT_08053598 + DAT_0805359c;
  for (uVar7 = 0; uVar7 < 0x1e; uVar7 = uVar7 + 1) {
    iVar5 = FUN_08000470(iVar6);
    if (iVar5 == 0) goto LAB_080535b8;
    iVar6 = iVar6 + 0x28;
  }
LAB_080535e2:
  iVar6 = FUN_080020f4();
  uVar4 = DAT_08053730;
  uVar3 = DAT_080536d0;
  uVar2 = DAT_08053670;
  uVar1 = DAT_08053610;
  if (iVar6 == 1) {
    iVar6 = *DAT_08053674 + DAT_08053678;
    for (uVar7 = 0; uVar7 < 0x1e; uVar7 = uVar7 + 1) {
      iVar5 = FUN_08000470(iVar6);
      if (iVar5 == 0) goto LAB_08053694;
      iVar6 = iVar6 + 0x28;
    }
  }
  else if (iVar6 < 2) {
    if (iVar6 == 0) {
      iVar6 = *DAT_08053614 + DAT_08053618;
      for (uVar7 = 0; uVar7 < 0x1e; uVar7 = uVar7 + 1) {
        iVar5 = FUN_08000470(iVar6);
        if (iVar5 == 0) goto LAB_08053636;
        iVar6 = iVar6 + 0x28;
      }
    }
  }
  else if (iVar6 == 2) {
    iVar6 = *DAT_080536d4 + DAT_080536d8;
    for (uVar7 = 0; uVar7 < 0x1e; uVar7 = uVar7 + 1) {
      iVar5 = FUN_08000470(iVar6);
      if (iVar5 == 0) goto LAB_080536f4;
      iVar6 = iVar6 + 0x28;
    }
  }
  else if (iVar6 == 3) {
    iVar6 = *DAT_08053734 + DAT_08053738;
    for (uVar7 = 0; uVar7 < 0x1e; uVar7 = uVar7 + 1) {
      iVar5 = FUN_08000470(iVar6);
      if (iVar5 == 0) goto LAB_08053754;
      iVar6 = iVar6 + 0x28;
    }
  }
LAB_0805377e:
  uVar1 = DAT_080537a0;
  if ((*(uint *)(*DAT_0805379c + 0x38) & 0x10) == 0) {
    iVar6 = *DAT_0805379c + DAT_080537a4;
    for (uVar7 = 0; uVar7 < 0x1e; uVar7 = uVar7 + 1) {
      iVar5 = FUN_08000470(iVar6);
      if (iVar5 == 0) {
        local_20 = uVar1;
        local_1c = 0;
        *(undefined4 *)(iVar6 + 8) = 0x3c;
        iVar5 = FUN_08001494(0x400);
        *(int *)(iVar6 + 0x20) = iVar5;
        *(undefined4 *)(iVar6 + 0xc) = DAT_0805380c;
        *(int *)(iVar6 + 0x10) = iVar5 + 0x3fc;
        *(undefined4 *)(iVar6 + 0x24) = 0;
        FUN_08000274(iVar6,auStack_2c,6);
        FUN_080003f0();
        FUN_080003f0();
        break;
      }
      iVar6 = iVar6 + 0x28;
    }
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
  return unaff_lr;
LAB_08053500:
  while( true ) {
    iVar5 = FUN_08001494(0x400);
    *(int *)(iVar6 + 0x20) = iVar5;
    if (iVar5 != 0) break;
    FUN_080003f0();
  }
  *(undefined4 *)(iVar6 + 8) = 0x3c;
  *(undefined4 *)(iVar6 + 0xc) = uVar1;
  *(int *)(iVar6 + 0x10) = iVar5 + 0x3fc;
  *(undefined4 *)(iVar6 + 0x24) = 0;
  FUN_08000274(iVar6,0x3b);
  goto LAB_0805352a;
LAB_0805355c:
  while( true ) {
    iVar5 = FUN_08001494(0x400);
    *(int *)(iVar6 + 0x20) = iVar5;
    if (iVar5 != 0) break;
    FUN_080003f0();
  }
  *(undefined4 *)(iVar6 + 8) = 0x3c;
  *(undefined4 *)(iVar6 + 0xc) = uVar1;
  *(int *)(iVar6 + 0x10) = iVar5 + 0x3fc;
  *(undefined4 *)(iVar6 + 0x24) = 0;
  FUN_08000274(iVar6,0x3c);
  goto LAB_08053586;
LAB_080535b8:
  while( true ) {
    iVar5 = FUN_08001494(0x400);
    *(int *)(iVar6 + 0x20) = iVar5;
    if (iVar5 != 0) break;
    FUN_080003f0();
  }
  *(undefined4 *)(iVar6 + 8) = 0x3c;
  *(undefined4 *)(iVar6 + 0xc) = uVar1;
  *(int *)(iVar6 + 0x10) = iVar5 + 0x3fc;
  *(undefined4 *)(iVar6 + 0x24) = 0;
  FUN_08000274(iVar6,0x3d);
  goto LAB_080535e2;
LAB_08053694:
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
  FUN_08000274(iVar6,0x3f);
  goto LAB_0805377e;
LAB_080536f4:
  while( true ) {
    iVar5 = FUN_08001494(0x400);
    *(int *)(iVar6 + 0x20) = iVar5;
    if (iVar5 != 0) break;
    FUN_080003f0();
  }
  *(undefined4 *)(iVar6 + 8) = 0x3c;
  *(undefined4 *)(iVar6 + 0xc) = uVar3;
  *(int *)(iVar6 + 0x10) = iVar5 + 0x3fc;
  *(undefined4 *)(iVar6 + 0x24) = 0;
  FUN_08000274(iVar6,0x40);
  goto LAB_0805377e;
LAB_08053754:
  while( true ) {
    iVar5 = FUN_08001494(0x400);
    *(int *)(iVar6 + 0x20) = iVar5;
    if (iVar5 != 0) break;
    FUN_080003f0();
  }
  *(undefined4 *)(iVar6 + 8) = 0x3c;
  *(undefined4 *)(iVar6 + 0xc) = uVar4;
  *(int *)(iVar6 + 0x10) = iVar5 + 0x3fc;
  *(undefined4 *)(iVar6 + 0x24) = 0;
  FUN_08000274(iVar6,0x41);
  goto LAB_0805377e;
LAB_08053636:
  while( true ) {
    iVar5 = FUN_08001494(0x400);
    *(int *)(iVar6 + 0x20) = iVar5;
    if (iVar5 != 0) break;
    FUN_080003f0();
  }
  *(undefined4 *)(iVar6 + 8) = 0x3c;
  *(undefined4 *)(iVar6 + 0xc) = uVar1;
  *(int *)(iVar6 + 0x10) = iVar5 + 0x3fc;
  *(undefined4 *)(iVar6 + 0x24) = 0;
  FUN_08000274(iVar6,0x3e);
  goto LAB_0805377e;
}

