
undefined4 FUN_08048c4c(void)

{
  undefined4 uVar1;
  uint *puVar2;
  short sVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int unaff_r6;
  undefined4 unaff_lr;
  
  uVar1 = DAT_08048c5c;
  iVar5 = *DAT_08048c60 + DAT_08048c64;
  for (uVar6 = 0; uVar6 < 0x1e; uVar6 = uVar6 + 1) {
    iVar4 = FUN_08000470(iVar5);
    if (iVar4 == 0) goto LAB_08048c80;
    iVar5 = iVar5 + 0x28;
  }
LAB_08048cac:
  FUN_0802a20c(0x3c,0xbe,0xa0,100);
  if ((unaff_r6 != 0) && (iVar5 = FUN_08000470(unaff_r6), iVar5 != 0)) {
    FUN_080003a8(unaff_r6);
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
    uVar1 = DAT_08048d04;
  } while (iVar5 != 0);
  iVar5 = *DAT_08048d08 + DAT_08048d0c;
  for (uVar6 = 0; uVar6 < 0x1e; uVar6 = uVar6 + 1) {
    iVar4 = FUN_08000470(iVar5);
    if (iVar4 == 0) goto LAB_08048d28;
    iVar5 = iVar5 + 0x28;
  }
LAB_08048d52:
  uVar1 = DAT_08048d60;
  iVar5 = *DAT_08048d64 + DAT_08048d68;
  for (uVar6 = 0; uVar6 < 0x1e; uVar6 = uVar6 + 1) {
    iVar4 = FUN_08000470(iVar5);
    if (iVar4 == 0) goto LAB_08048d84;
    iVar5 = iVar5 + 0x28;
  }
LAB_08048dae:
  sVar3 = 0x3c;
  do {
    FUN_080003f0();
    iVar5 = FUN_080021a8();
    puVar2 = DAT_08048e00;
    if (iVar5 != 0) break;
    sVar3 = sVar3 + -1;
  } while (sVar3 != 0);
  iVar5 = *DAT_08048dfc;
  uVar6 = 0;
  do {
    if (((*puVar2 & 1 << (uVar6 & 0xff)) != 0) && (*(short *)(iVar5 + 0xc) == 0xc)) {
      *(undefined2 *)(iVar5 + 0xc) = 0;
    }
    uVar6 = uVar6 + 1;
    iVar5 = iVar5 + DAT_08048e04;
  } while (uVar6 < 5);
  FUN_08019a4c();
  return unaff_lr;
LAB_08048c80:
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
  goto LAB_08048cac;
LAB_08048d28:
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
  goto LAB_08048d52;
LAB_08048d84:
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
  goto LAB_08048dae;
}

