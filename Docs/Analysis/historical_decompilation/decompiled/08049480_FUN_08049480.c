
undefined4 FUN_08049480(void)

{
  byte bVar1;
  short sVar2;
  short sVar3;
  int *piVar4;
  undefined4 uVar5;
  uint *puVar6;
  byte *pbVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  short *psVar11;
  int iVar12;
  undefined4 unaff_lr;
  undefined1 local_28 [4];
  undefined1 local_24 [4];
  
  piVar4 = DAT_080494bc;
  uVar10 = *(uint *)(*DAT_080494bc + 0x38);
  if ((uVar10 & 2) != 0) {
    iVar8 = FUN_0800c5e8();
    if (iVar8 == 0) {
      iVar8 = FUN_0801a720();
      if (iVar8 == 1) {
        FUN_0801a74c(6);
      }
      else if (iVar8 < 2) {
        if (iVar8 == 0) {
          FUN_08058b6c();
        }
      }
      else if (iVar8 == 2) {
        FUN_0801a78c(6);
      }
      while (iVar8 = FUN_0801a6dc(), iVar8 == 0) {
        FUN_080003f0();
      }
    }
    puVar6 = DAT_0804978c;
    iVar8 = *DAT_08049788;
    uVar10 = 0;
    do {
      if (((*puVar6 & 1 << (uVar10 & 0xff)) != 0) && (*(short *)(iVar8 + 0xc) == 0xc)) {
        *(undefined2 *)(iVar8 + 0xc) = 0;
      }
      uVar10 = uVar10 + 1;
      iVar8 = iVar8 + DAT_08049790;
    } while (uVar10 < 5);
    FUN_08019a4c();
    uVar5 = DAT_08049798;
    if ((*(uint *)(*DAT_08049794 + 0x38) & 8) != 0) {
      iVar8 = FUN_0800c4ec();
      if (iVar8 != 0) {
        FUN_08059ae4(0);
        return unaff_lr;
      }
      if ((*DAT_08049838 & 0x20) != 0) {
        return unaff_lr;
      }
      *DAT_0804983c = 1;
      FUN_08006794();
      return unaff_lr;
    }
    iVar8 = *DAT_08049794 + DAT_0804979c;
    for (uVar10 = 0; uVar10 < 0x1e; uVar10 = uVar10 + 1) {
      iVar9 = FUN_08000470(iVar8);
      if (iVar9 == 0) goto LAB_080497b8;
      iVar8 = iVar8 + 0x28;
    }
    goto LAB_080497e2;
  }
  *(uint *)(*DAT_080494bc + 0x38) = uVar10 | 2;
  iVar8 = FUN_0800c780();
  if (iVar8 == 0) {
    pbVar7 = (byte *)(*piVar4 + 0x1b8);
  }
  else {
    pbVar7 = (byte *)(*piVar4 + 0x1c4);
  }
  bVar1 = *pbVar7;
  iVar8 = FUN_080020f4();
  iVar9 = 0;
  uVar10 = 0;
  psVar11 = (short *)(*DAT_0804953c + 0x158);
  do {
    if ((*psVar11 == 1) && (psVar11[1] == 0x22)) {
      iVar9 = iVar9 + 1;
    }
    psVar11 = psVar11 + 8;
    uVar10 = uVar10 + 1;
  } while (uVar10 < 0x19);
  iVar12 = 0;
  uVar10 = 0;
  psVar11 = (short *)(*DAT_0804953c + 0x2e8);
  do {
    if ((*psVar11 == 1) && (psVar11[1] == 0x22)) {
      iVar12 = iVar12 + 1;
    }
    psVar11 = psVar11 + 8;
    uVar10 = uVar10 + 1;
  } while (uVar10 < 0x4b);
  if (iVar8 == 0) {
    if ((((int)(uint)bVar1 >> 6 & 1U) == 0 && iVar9 == 0) && iVar12 == 0) {
      FUN_08068ebc(DAT_08049540,0,0);
    }
    else {
      FUN_08068ebc(DAT_080495fc,1,0);
    }
  }
  iVar8 = FUN_08002164();
  if ((iVar8 == 1) && (*DAT_08049600 = 0xc4, (*DAT_08049604 & 0x20) == 0)) {
    FUN_08006794(0xc4);
  }
  iVar8 = FUN_080020f4();
  iVar8 = iVar8 * 0x154 + DAT_08049608;
  *(uint *)(iVar8 + 0x38) = *(uint *)(iVar8 + 0x38) | 1;
  FUN_0800ca44();
  iVar8 = DAT_08049610;
  sVar2 = *(short *)(DAT_0804960c + 0x80);
  sVar3 = *(short *)(DAT_0804960c + 0x82);
  iVar9 = 0;
  do {
    FUN_08066020(local_28,(int)sVar2,0,iVar9);
    FUN_08066020(local_24,(int)sVar3,iVar8 >> 0x10,iVar9);
    FUN_0800b4e8((int)local_28._0_2_,(int)local_24._0_2_);
    FUN_080003f0();
    iVar9 = iVar9 + 0x400;
  } while (iVar9 < 0x401);
  iVar8 = FUN_0800c5e8();
  if (iVar8 == 0) {
    iVar8 = FUN_0801a720();
    if (iVar8 == 1) {
      FUN_0801a74c(6);
    }
    else if (iVar8 < 2) {
      if (iVar8 == 0) {
        FUN_08058b6c();
      }
    }
    else if (iVar8 == 2) {
      FUN_0801a78c(6);
    }
    while (iVar8 = FUN_0801a6dc(), iVar8 == 0) {
      FUN_080003f0();
    }
  }
  uVar5 = DAT_0804964c;
  iVar8 = *DAT_08049650 + DAT_08049654;
  for (uVar10 = 0; uVar10 < 0x1e; uVar10 = uVar10 + 1) {
    iVar9 = FUN_08000470(iVar8);
    if (iVar9 == 0) goto LAB_08049670;
    iVar8 = iVar8 + 0x28;
  }
  goto LAB_0804969a;
LAB_080497b8:
  while( true ) {
    iVar9 = FUN_08001494(0x400);
    *(int *)(iVar8 + 0x20) = iVar9;
    if (iVar9 != 0) break;
    FUN_080003f0();
  }
  *(undefined4 *)(iVar8 + 8) = 0x3c;
  *(undefined4 *)(iVar8 + 0xc) = uVar5;
  *(int *)(iVar8 + 0x10) = iVar9 + 0x3fc;
  *(undefined4 *)(iVar8 + 0x24) = 0;
  FUN_08000274(iVar8,1);
LAB_080497e2:
  iVar8 = FUN_08002164();
  if (iVar8 != 1) {
    return unaff_lr;
  }
  FUN_0806870c(DAT_0804980c,7);
  *DAT_08049810 = 0xa5;
  if ((*DAT_08049814 & 0x20) != 0) {
    return unaff_lr;
  }
  FUN_08006794(0xa5);
  return unaff_lr;
LAB_08049670:
  while( true ) {
    iVar9 = FUN_08001494(0x400);
    *(int *)(iVar8 + 0x20) = iVar9;
    if (iVar9 != 0) break;
    FUN_080003f0();
  }
  *(undefined4 *)(iVar8 + 8) = 0x3c;
  *(undefined4 *)(iVar8 + 0xc) = uVar5;
  *(int *)(iVar8 + 0x10) = iVar9 + 0x3fc;
  *(undefined4 *)(iVar8 + 0x24) = 0;
  FUN_08000274(iVar8,0);
LAB_0804969a:
  uVar5 = DAT_080496a8;
  iVar8 = *DAT_080496ac + DAT_080496b0;
  uVar10 = 0;
  while( true ) {
    if (0x1d < uVar10) {
      return unaff_lr;
    }
    iVar9 = FUN_08000470(iVar8);
    if (iVar9 == 0) break;
    uVar10 = uVar10 + 1;
    iVar8 = iVar8 + 0x28;
  }
  while( true ) {
    iVar9 = FUN_08001494(0x400);
    *(int *)(iVar8 + 0x20) = iVar9;
    if (iVar9 != 0) break;
    FUN_080003f0();
  }
  *(undefined4 *)(iVar8 + 8) = 0x3c;
  *(undefined4 *)(iVar8 + 0xc) = uVar5;
  *(int *)(iVar8 + 0x10) = iVar9 + 0x3fc;
  *(undefined4 *)(iVar8 + 0x24) = 0;
  FUN_08000274(iVar8,1);
  return unaff_lr;
}

