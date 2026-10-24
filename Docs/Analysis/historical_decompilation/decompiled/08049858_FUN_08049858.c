
undefined4 FUN_08049858(int param_1)

{
  uint *puVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  int unaff_r6;
  undefined4 unaff_lr;
  
  uVar5 = DAT_08049878;
  if (param_1 != 0) {
    if (param_1 != 1) {
      return unaff_lr;
    }
    do {
      sVar2 = 1;
      do {
        FUN_080003f0();
        iVar4 = FUN_080021a8();
        if (iVar4 != 0) break;
        sVar2 = sVar2 + -1;
      } while (sVar2 != 0);
      if ((*(ushort *)(*DAT_08049c70 + 4) >> 4 & 1) == 0) {
        iVar4 = FUN_08019774();
      }
      else {
        iVar4 = 1;
      }
    } while (iVar4 != 0);
    FUN_0806870c(DAT_08049ca4,3);
    iVar4 = FUN_080020f4();
    iVar4 = iVar4 * 0x154 + DAT_08049ca8;
    *(uint *)(iVar4 + 0x38) = *(uint *)(iVar4 + 0x38) | 1;
    FUN_0800ca44();
    while (iVar4 = FUN_0805fa94(), iVar4 != 0) {
      FUN_080003f0();
    }
    while (iVar4 = FUN_0805f8b4(), iVar4 != 0) {
      FUN_080003f0();
    }
    uVar5 = FUN_0805e608(1,0xf,2,0,0x2d,DAT_08049ce0);
    while (iVar4 = FUN_0805f820(uVar5), iVar4 == 0) {
      FUN_080003f0();
    }
    iVar4 = FUN_080020f4();
    iVar4 = iVar4 * 0x154 + DAT_08049d18;
    *(uint *)(iVar4 + 0x38) = *(uint *)(iVar4 + 0x38) & 0xfffffffe;
    FUN_0800ca58();
    sVar2 = 0x3c;
    do {
      FUN_080003f0();
      iVar4 = FUN_080021a8();
      if (iVar4 != 0) break;
      sVar2 = sVar2 + -1;
    } while (sVar2 != 0);
    FUN_0806870c(DAT_08049d64,7);
    iVar4 = FUN_08002164();
    if (iVar4 != 1) {
      return unaff_lr;
    }
    *DAT_08049d68 = 1;
    if ((*DAT_08049d6c & 0x20) != 0) {
      return unaff_lr;
    }
    FUN_08006794(1);
    return unaff_lr;
  }
  iVar4 = *DAT_0804987c + DAT_08049880;
  for (uVar6 = 0; uVar6 < 0x1e; uVar6 = uVar6 + 1) {
    iVar3 = FUN_08000470(iVar4);
    if (iVar3 == 0) goto LAB_0804989c;
    iVar4 = iVar4 + 0x28;
  }
LAB_080498c8:
  FUN_0802a20c(0x78,0xaf,0x32,0x14);
  if ((*(uint *)(*DAT_0804992c + 0x38) & 8) == 0) {
    iVar4 = FUN_08002164();
    if ((iVar4 == 1) && (*DAT_08049930 = 0xa5, (*DAT_08049934 & 0x20) == 0)) {
      FUN_08006794(0xa5);
    }
    uVar5 = DAT_08049938;
    if ((*(uint *)(*DAT_0804992c + 0x38) & 4) == 0) {
      FUN_0806870c(DAT_08049bb0,7);
      if ((unaff_r6 != 0) && (iVar4 = FUN_08000470(unaff_r6), iVar4 != 0)) {
        FUN_080003a8(unaff_r6);
      }
      iVar4 = FUN_080020f4();
      iVar4 = iVar4 * 0x154 + DAT_08049bb4;
      *(uint *)(iVar4 + 0x38) = *(uint *)(iVar4 + 0x38) | 1;
      FUN_0800ca44();
      sVar2 = 1;
      do {
        FUN_080003f0();
        iVar4 = FUN_080021a8();
        if (iVar4 != 0) break;
        sVar2 = sVar2 + -1;
      } while (sVar2 != 0);
      FUN_0805f8e0();
      do {
        FUN_080003f0();
        iVar4 = FUN_0805fa94();
        uVar5 = DAT_08049bec;
      } while (iVar4 != 0);
      iVar4 = *DAT_08049bf0 + DAT_08049bf4;
      for (uVar6 = 0; uVar6 < 0x1e; uVar6 = uVar6 + 1) {
        iVar3 = FUN_08000470(iVar4);
        if (iVar3 == 0) {
          while( true ) {
            iVar3 = FUN_08001494(0x400);
            *(int *)(iVar4 + 0x20) = iVar3;
            if (iVar3 != 0) break;
            FUN_080003f0();
          }
          *(undefined4 *)(iVar4 + 8) = 0x3c;
          *(undefined4 *)(iVar4 + 0xc) = uVar5;
          *(int *)(iVar4 + 0x10) = iVar3 + 0x3fc;
          *(undefined4 *)(iVar4 + 0x24) = 0;
          FUN_08000274(iVar4,1);
          return unaff_lr;
        }
        iVar4 = iVar4 + 0x28;
      }
    }
    else {
      iVar4 = *DAT_0804992c + DAT_0804993c;
      for (uVar6 = 0; uVar6 < 0x1e; uVar6 = uVar6 + 1) {
        iVar3 = FUN_08000470(iVar4);
        if (iVar3 == 0) goto LAB_08049958;
        iVar4 = iVar4 + 0x28;
      }
LAB_08049982:
      uVar5 = DAT_08049990;
      iVar4 = *DAT_08049994 + DAT_08049998;
      for (uVar6 = 0; uVar6 < 0x1e; uVar6 = uVar6 + 1) {
        iVar3 = FUN_08000470(iVar4);
        if (iVar3 == 0) goto LAB_080499b4;
        iVar4 = iVar4 + 0x28;
      }
LAB_080499de:
      uVar5 = DAT_080499ec;
      iVar4 = *DAT_080499f0 + DAT_080499f4;
      for (uVar6 = 0; uVar6 < 0x1e; uVar6 = uVar6 + 1) {
        iVar3 = FUN_08000470(iVar4);
        if (iVar3 == 0) goto LAB_08049a10;
        iVar4 = iVar4 + 0x28;
      }
LAB_08049a3a:
      uVar5 = DAT_08049a48;
      iVar4 = *DAT_08049a4c + DAT_08049a50;
      for (uVar6 = 0; uVar6 < 0x1e; uVar6 = uVar6 + 1) {
        iVar3 = FUN_08000470(iVar4);
        if (iVar3 == 0) goto LAB_08049a6c;
        iVar4 = iVar4 + 0x28;
      }
LAB_08049a96:
      uVar5 = DAT_08049aa4;
      iVar4 = *DAT_08049aa8 + DAT_08049aac;
      for (uVar6 = 0; uVar6 < 0x1e; uVar6 = uVar6 + 1) {
        iVar3 = FUN_08000470(iVar4);
        if (iVar3 == 0) goto LAB_08049ac8;
        iVar4 = iVar4 + 0x28;
      }
LAB_08049af2:
      iVar4 = FUN_080020f4();
      iVar4 = iVar4 * 0x154 + DAT_08049b18;
      *(uint *)(iVar4 + 0x38) = *(uint *)(iVar4 + 0x38) & 0xfffffffe;
      FUN_0800ca58();
      sVar2 = 0x3c;
      do {
        FUN_080003f0();
        iVar4 = FUN_080021a8();
        puVar1 = DAT_08049b68;
        if (iVar4 != 0) break;
        sVar2 = sVar2 + -1;
      } while (sVar2 != 0);
      iVar4 = *DAT_08049b64;
      uVar6 = 0;
      do {
        if (((*puVar1 & 1 << (uVar6 & 0xff)) != 0) && (*(short *)(iVar4 + 0xc) == 0xc)) {
          *(undefined2 *)(iVar4 + 0xc) = 0;
        }
        uVar6 = uVar6 + 1;
        iVar4 = iVar4 + DAT_08049b6c;
      } while (uVar6 < 5);
      FUN_08019a4c();
    }
  }
  return unaff_lr;
LAB_0804989c:
  while( true ) {
    iVar3 = FUN_08001494(0x400);
    *(int *)(iVar4 + 0x20) = iVar3;
    if (iVar3 != 0) break;
    FUN_080003f0();
  }
  *(undefined4 *)(iVar4 + 8) = 0x3c;
  *(undefined4 *)(iVar4 + 0xc) = uVar5;
  *(int *)(iVar4 + 0x10) = iVar3 + 0x3fc;
  *(undefined4 *)(iVar4 + 0x24) = 0;
  FUN_08000274(iVar4,0);
  unaff_r6 = iVar4;
  goto LAB_080498c8;
LAB_08049958:
  while( true ) {
    iVar3 = FUN_08001494(0x400);
    *(int *)(iVar4 + 0x20) = iVar3;
    if (iVar3 != 0) break;
    FUN_080003f0();
  }
  *(undefined4 *)(iVar4 + 8) = 0x3c;
  *(undefined4 *)(iVar4 + 0xc) = uVar5;
  *(int *)(iVar4 + 0x10) = iVar3 + 0x3fc;
  *(undefined4 *)(iVar4 + 0x24) = 0;
  FUN_08000274(iVar4,2);
  goto LAB_08049982;
LAB_080499b4:
  while( true ) {
    iVar3 = FUN_08001494(0x400);
    *(int *)(iVar4 + 0x20) = iVar3;
    if (iVar3 != 0) break;
    FUN_080003f0();
  }
  *(undefined4 *)(iVar4 + 8) = 0x3c;
  *(undefined4 *)(iVar4 + 0xc) = uVar5;
  *(int *)(iVar4 + 0x10) = iVar3 + 0x3fc;
  *(undefined4 *)(iVar4 + 0x24) = 0;
  FUN_08000274(iVar4,3);
  goto LAB_080499de;
LAB_08049a10:
  while( true ) {
    iVar3 = FUN_08001494(0x400);
    *(int *)(iVar4 + 0x20) = iVar3;
    if (iVar3 != 0) break;
    FUN_080003f0();
  }
  *(undefined4 *)(iVar4 + 8) = 0x3c;
  *(undefined4 *)(iVar4 + 0xc) = uVar5;
  *(int *)(iVar4 + 0x10) = iVar3 + 0x3fc;
  *(undefined4 *)(iVar4 + 0x24) = 0;
  FUN_08000274(iVar4,4);
  goto LAB_08049a3a;
LAB_08049a6c:
  while( true ) {
    iVar3 = FUN_08001494(0x400);
    *(int *)(iVar4 + 0x20) = iVar3;
    if (iVar3 != 0) break;
    FUN_080003f0();
  }
  *(undefined4 *)(iVar4 + 8) = 0x3c;
  *(undefined4 *)(iVar4 + 0xc) = uVar5;
  *(int *)(iVar4 + 0x10) = iVar3 + 0x3fc;
  *(undefined4 *)(iVar4 + 0x24) = 0;
  FUN_08000274(iVar4,5);
  goto LAB_08049a96;
LAB_08049ac8:
  while( true ) {
    iVar3 = FUN_08001494(0x400);
    *(int *)(iVar4 + 0x20) = iVar3;
    if (iVar3 != 0) break;
    FUN_080003f0();
  }
  *(undefined4 *)(iVar4 + 8) = 0x3c;
  *(undefined4 *)(iVar4 + 0xc) = uVar5;
  *(int *)(iVar4 + 0x10) = iVar3 + 0x3fc;
  *(undefined4 *)(iVar4 + 0x24) = 0;
  FUN_08000274(iVar4,6);
  goto LAB_08049af2;
}

