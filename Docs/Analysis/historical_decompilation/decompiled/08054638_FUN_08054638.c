
undefined4 FUN_08054638(void)

{
  short sVar1;
  short sVar2;
  int iVar3;
  uint uVar4;
  short *psVar5;
  int iVar6;
  undefined4 uVar7;
  uint uVar8;
  short unaff_r4;
  undefined4 unaff_lr;
  bool bVar9;
  undefined1 local_3c [4];
  undefined1 local_38 [4];
  undefined1 local_34 [4];
  undefined1 local_30 [4];
  int local_2c;
  undefined1 *local_28;
  undefined1 *local_24;
  
  iVar3 = FUN_080020f4();
  iVar3 = iVar3 * 0x154 + DAT_08054670;
  *(uint *)(iVar3 + 0x38) = *(uint *)(iVar3 + 0x38) | 1;
  FUN_0800ca44();
  iVar3 = FUN_08002164();
  if (iVar3 == 1) {
    unaff_r4 = 0;
  }
  else {
    iVar3 = FUN_080020f4();
    if (iVar3 == 1) {
      unaff_r4 = 0xc;
    }
    else if (iVar3 < 2) {
      if (iVar3 == 0) {
        unaff_r4 = -0xc;
      }
    }
    else if (iVar3 == 2) {
      unaff_r4 = -0x24;
    }
    else if (iVar3 == 3) {
      unaff_r4 = 0x24;
    }
  }
  FUN_08028e2c(0,(int)unaff_r4,0,0);
  uVar4 = FUN_08002164();
  uVar8 = 0;
  local_28 = local_34;
  local_24 = local_30;
  if (uVar4 != 0) {
    psVar5 = (short *)(DAT_080546e4 + 0x6c);
    do {
      if ((*psVar5 == 6) || (*psVar5 == 8)) {
        local_2c = 1;
        goto LAB_080546f2;
      }
      psVar5 = psVar5 + 0xaa;
      uVar8 = uVar8 + 1;
    } while (uVar8 < uVar4);
  }
  local_2c = 0;
LAB_080546f2:
  sVar2 = 1;
  do {
    FUN_080003f0();
    iVar3 = FUN_080021a8();
    if (iVar3 != 0) break;
    sVar2 = sVar2 + -1;
  } while (sVar2 != 0);
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
  *DAT_0805476c = 0xd9;
  if ((*DAT_08054770 & 0x20) == 0) {
    FUN_08006794(0xd9);
  }
  sVar2 = 0x14;
  do {
    FUN_080003f0();
    iVar6 = FUN_080021a8();
    iVar3 = DAT_08054800;
    if (iVar6 != 0) break;
    sVar2 = sVar2 + -1;
  } while (sVar2 != 0);
  sVar2 = *(short *)(DAT_080547fc + 0x80);
  sVar1 = *(short *)(DAT_080547fc + 0x82);
  iVar6 = 0;
  do {
    FUN_08066020(local_3c,(int)sVar2,(int)-unaff_r4,iVar6);
    FUN_08066020(local_38,(int)sVar1,iVar3 >> 0x10,iVar6);
    FUN_0800b4e8((int)local_3c._0_2_,(int)local_38._0_2_);
    FUN_080003f0();
    iVar6 = iVar6 + 0x11;
  } while (iVar6 < 0x401);
  bVar9 = (*(uint *)(*DAT_08054804 + 0x38) & 1) == 0;
  if (local_2c == 0) {
    if (bVar9) {
      while (iVar3 = FUN_0805fa94(), iVar3 != 0) {
        FUN_080003f0();
      }
      while (iVar3 = FUN_0805f8b4(), uVar7 = DAT_08054858, iVar3 != 0) {
        FUN_080003f0();
      }
    }
    else {
      while (iVar3 = FUN_0805fa94(), iVar3 != 0) {
        FUN_080003f0();
      }
      while (iVar3 = FUN_0805f8b4(), uVar7 = DAT_080548b8, iVar3 != 0) {
        FUN_080003f0();
      }
    }
  }
  else if (bVar9) {
    while (iVar3 = FUN_0805fa94(), iVar3 != 0) {
      FUN_080003f0();
    }
    while (iVar3 = FUN_0805f8b4(), uVar7 = DAT_0805482c, iVar3 != 0) {
      FUN_080003f0();
    }
  }
  else {
    while (iVar3 = FUN_0805fa94(), iVar3 != 0) {
      FUN_080003f0();
    }
    while (iVar3 = FUN_0805f8b4(), uVar7 = DAT_080548b8, iVar3 != 0) {
      FUN_080003f0();
    }
  }
  uVar7 = FUN_0805e608(1,0xf,2,0,0x2d,uVar7);
  *(uint *)(*DAT_080548bc + 0x38) = *(uint *)(*DAT_080548bc + 0x38) | 1;
  while (iVar3 = FUN_0805f820(uVar7), iVar3 == 0) {
    FUN_080003f0();
  }
  sVar2 = *(short *)(DAT_08054974 + 0x80);
  sVar1 = *(short *)(DAT_08054974 + 0x82);
  iVar3 = 0;
  do {
    FUN_08066020(local_28,(int)sVar2,0,iVar3);
    FUN_08066020(local_24,(int)sVar1,0,iVar3);
    FUN_0800b4e8((int)local_34._0_2_,(int)local_30._0_2_);
    FUN_080003f0();
    iVar3 = iVar3 + 0x22;
  } while (iVar3 < 0x401);
  *DAT_08054978 = 0xb;
  if ((*DAT_0805497c & 0x20) == 0) {
    FUN_08006794(0xb);
  }
  *(ushort *)(*DAT_08054980 + 4) = *(ushort *)(*DAT_08054980 + 4) | 0x20;
  iVar3 = FUN_080020f4();
  iVar3 = iVar3 * 0x154 + DAT_08054984;
  *(uint *)(iVar3 + 0x38) = *(uint *)(iVar3 + 0x38) & 0xfffffffe;
  FUN_0800ca58();
  return unaff_lr;
}

