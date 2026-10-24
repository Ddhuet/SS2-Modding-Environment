
undefined4 FUN_0804e358(void)

{
  undefined4 uVar1;
  uint *puVar2;
  short sVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int unaff_r6;
  undefined4 unaff_lr;
  
  uVar1 = DAT_0804e368;
  iVar5 = *DAT_0804e36c + DAT_0804e370;
  for (uVar6 = 0; uVar6 < 0x1e; uVar6 = uVar6 + 1) {
    iVar4 = FUN_08000470(iVar5);
    if (iVar4 == 0) goto LAB_0804e38c;
    iVar5 = iVar5 + 0x28;
  }
LAB_0804e3b8:
  FUN_0802a20c(0xe8,0x8c,0x96,0x6e);
  *(uint *)(*DAT_0804e404 + 0x38) = *(uint *)(*DAT_0804e404 + 0x38) | 4;
  if ((unaff_r6 != 0) && (iVar5 = FUN_08000470(unaff_r6), iVar5 != 0)) {
    FUN_080003a8(unaff_r6);
  }
  iVar5 = FUN_0800c4ec();
  if (iVar5 == 0) {
    if ((*DAT_0804e408 & 0x20) == 0) {
      *DAT_0804e40c = 4;
      FUN_08006794();
    }
  }
  else {
    FUN_08059ae4(0);
  }
  sVar3 = 1;
  do {
    FUN_080003f0();
    iVar5 = FUN_080021a8();
    if (iVar5 != 0) break;
    sVar3 = sVar3 + -1;
  } while (sVar3 != 0);
  FUN_0805f8e0();
  do {
    FUN_080003f0();
    iVar5 = FUN_0805fa94();
    uVar1 = DAT_0804e450;
  } while (iVar5 != 0);
  iVar5 = *DAT_0804e454 + DAT_0804e458;
  for (uVar6 = 0; uVar6 < 0x1e; uVar6 = uVar6 + 1) {
    iVar4 = FUN_08000470(iVar5);
    if (iVar4 == 0) goto LAB_0804e474;
    iVar5 = iVar5 + 0x28;
  }
LAB_0804e49e:
  uVar1 = DAT_0804e4ac;
  iVar5 = *DAT_0804e4b0 + DAT_0804e4b4;
  for (uVar6 = 0; uVar6 < 0x1e; uVar6 = uVar6 + 1) {
    iVar4 = FUN_08000470(iVar5);
    if (iVar4 == 0) goto LAB_0804e4d0;
    iVar5 = iVar5 + 0x28;
  }
LAB_0804e4fa:
  uVar1 = DAT_0804e508;
  iVar5 = *DAT_0804e50c + DAT_0804e510;
  for (uVar6 = 0; uVar6 < 0x1e; uVar6 = uVar6 + 1) {
    iVar4 = FUN_08000470(iVar5);
    if (iVar4 == 0) goto LAB_0804e52c;
    iVar5 = iVar5 + 0x28;
  }
LAB_0804e556:
  uVar1 = DAT_0804e564;
  iVar5 = *DAT_0804e568 + DAT_0804e56c;
  for (uVar6 = 0; uVar6 < 0x1e; uVar6 = uVar6 + 1) {
    iVar4 = FUN_08000470(iVar5);
    if (iVar4 == 0) goto LAB_0804e588;
    iVar5 = iVar5 + 0x28;
  }
LAB_0804e5b2:
  uVar1 = DAT_0804e5c0;
  iVar5 = *DAT_0804e5c4 + DAT_0804e5c8;
  for (uVar6 = 0; uVar6 < 0x1e; uVar6 = uVar6 + 1) {
    iVar4 = FUN_08000470(iVar5);
    if (iVar4 == 0) goto LAB_0804e5e4;
    iVar5 = iVar5 + 0x28;
  }
LAB_0804e60e:
  sVar3 = 0x1e;
  do {
    FUN_080003f0();
    iVar5 = FUN_080021a8();
    puVar2 = DAT_0804e660;
    if (iVar5 != 0) break;
    sVar3 = sVar3 + -1;
  } while (sVar3 != 0);
  iVar5 = *DAT_0804e65c;
  uVar6 = 0;
  do {
    if (((*puVar2 & 1 << (uVar6 & 0xff)) != 0) && (*(short *)(iVar5 + 0xc) == 0xc)) {
      *(undefined2 *)(iVar5 + 0xc) = 0;
    }
    uVar6 = uVar6 + 1;
    iVar5 = iVar5 + DAT_0804e664;
  } while (uVar6 < 5);
  FUN_08019a4c();
  return unaff_lr;
LAB_0804e38c:
  while( true ) {
    iVar4 = FUN_08001494(0x400);
    *(int *)(iVar5 + 0x20) = iVar4;
    if (iVar4 != 0) break;
    FUN_080003f0();
  }
  *(undefined4 *)(iVar5 + 8) = 0x3c;
  *(undefined4 *)(iVar5 + 0xc) = uVar1;
  *(int *)(iVar5 + 0x10) = iVar4 + 0x3fc;
  *(undefined4 *)(iVar5 + 0x24) = 0;
  FUN_08000274(iVar5,0);
  unaff_r6 = iVar5;
  goto LAB_0804e3b8;
LAB_0804e474:
  while( true ) {
    iVar4 = FUN_08001494(0x400);
    *(int *)(iVar5 + 0x20) = iVar4;
    if (iVar4 != 0) break;
    FUN_080003f0();
  }
  *(undefined4 *)(iVar5 + 8) = 0x3c;
  *(undefined4 *)(iVar5 + 0xc) = uVar1;
  *(int *)(iVar5 + 0x10) = iVar4 + 0x3fc;
  *(undefined4 *)(iVar5 + 0x24) = 0;
  FUN_08000274(iVar5,1);
  goto LAB_0804e49e;
LAB_0804e4d0:
  while( true ) {
    iVar4 = FUN_08001494(0x400);
    *(int *)(iVar5 + 0x20) = iVar4;
    if (iVar4 != 0) break;
    FUN_080003f0();
  }
  *(undefined4 *)(iVar5 + 8) = 0x3c;
  *(undefined4 *)(iVar5 + 0xc) = uVar1;
  *(int *)(iVar5 + 0x10) = iVar4 + 0x3fc;
  *(undefined4 *)(iVar5 + 0x24) = 0;
  FUN_08000274(iVar5,2);
  goto LAB_0804e4fa;
LAB_0804e52c:
  while( true ) {
    iVar4 = FUN_08001494(0x400);
    *(int *)(iVar5 + 0x20) = iVar4;
    if (iVar4 != 0) break;
    FUN_080003f0();
  }
  *(undefined4 *)(iVar5 + 8) = 0x3c;
  *(undefined4 *)(iVar5 + 0xc) = uVar1;
  *(int *)(iVar5 + 0x10) = iVar4 + 0x3fc;
  *(undefined4 *)(iVar5 + 0x24) = 0;
  FUN_08000274(iVar5,3);
  goto LAB_0804e556;
LAB_0804e588:
  while( true ) {
    iVar4 = FUN_08001494(0x400);
    *(int *)(iVar5 + 0x20) = iVar4;
    if (iVar4 != 0) break;
    FUN_080003f0();
  }
  *(undefined4 *)(iVar5 + 8) = 0x3c;
  *(undefined4 *)(iVar5 + 0xc) = uVar1;
  *(int *)(iVar5 + 0x10) = iVar4 + 0x3fc;
  *(undefined4 *)(iVar5 + 0x24) = 0;
  FUN_08000274(iVar5,4);
  goto LAB_0804e5b2;
LAB_0804e5e4:
  while( true ) {
    iVar4 = FUN_08001494(0x400);
    *(int *)(iVar5 + 0x20) = iVar4;
    if (iVar4 != 0) break;
    FUN_080003f0();
  }
  *(undefined4 *)(iVar5 + 8) = 0x3c;
  *(undefined4 *)(iVar5 + 0xc) = uVar1;
  *(int *)(iVar5 + 0x10) = iVar4 + 0x3fc;
  *(undefined4 *)(iVar5 + 0x24) = 0;
  FUN_08000274(iVar5,5);
  goto LAB_0804e60e;
}

