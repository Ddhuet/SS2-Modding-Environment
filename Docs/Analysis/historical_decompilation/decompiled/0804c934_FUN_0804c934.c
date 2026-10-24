
undefined4 FUN_0804c934(void)

{
  short sVar1;
  short sVar2;
  int iVar3;
  undefined4 uVar4;
  short unaff_r4;
  int iVar5;
  undefined4 unaff_lr;
  undefined1 local_38 [4];
  undefined1 local_34 [4];
  undefined1 local_30 [4];
  undefined1 local_2c [4];
  undefined1 *local_28;
  undefined1 *local_24;
  
  iVar3 = FUN_080020f4();
  iVar3 = iVar3 * 0x154 + DAT_0804c96c;
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
  FUN_08028b3c(0,unaff_r4 + 0x78,400,0);
  iVar3 = DAT_0804ca24;
  sVar2 = *(short *)(DAT_0804ca20 + 0x80);
  sVar1 = *(short *)(DAT_0804ca20 + 0x82);
  iVar5 = 0;
  local_28 = local_30;
  local_24 = local_2c;
  do {
    FUN_08066020(local_38,(int)sVar2,(int)-unaff_r4,iVar5);
    FUN_08066020(local_34,(int)sVar1,iVar3 >> 0x10,iVar5);
    FUN_0800b4e8((int)local_38._0_2_,(int)local_34._0_2_);
    FUN_080003f0();
    iVar5 = iVar5 + 0x200;
  } while (iVar5 < 0x401);
  sVar2 = 0x1e;
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
  *DAT_0804ca9c = 0xd9;
  if ((*DAT_0804caa0 & 0x20) == 0) {
    FUN_08006794(0xd9);
  }
  sVar2 = 0x14;
  do {
    FUN_080003f0();
    iVar3 = FUN_080021a8();
    if (iVar3 != 0) break;
    sVar2 = sVar2 + -1;
  } while (sVar2 != 0);
  if ((*(uint *)(*DAT_0804cacc + 0x38) & 0x40) == 0) {
    while (iVar3 = FUN_0805fa94(), iVar3 != 0) {
      FUN_080003f0();
    }
    while (iVar3 = FUN_0805f8b4(), uVar4 = DAT_0804caf4, iVar3 != 0) {
      FUN_080003f0();
    }
  }
  else {
    while (iVar3 = FUN_0805fa94(), iVar3 != 0) {
      FUN_080003f0();
    }
    while (iVar3 = FUN_0805f8b4(), uVar4 = DAT_0804cb38, iVar3 != 0) {
      FUN_080003f0();
    }
  }
  uVar4 = FUN_0805e608(1,0xf,2,0,0x2d,uVar4);
  *(uint *)(*DAT_0804cb3c + 0x38) = *(uint *)(*DAT_0804cb3c + 0x38) | 0x40;
  while (iVar3 = FUN_0805f820(uVar4), iVar3 == 0) {
    FUN_080003f0();
  }
  sVar2 = *(short *)(DAT_0804cbf4 + 0x80);
  sVar1 = *(short *)(DAT_0804cbf4 + 0x82);
  iVar3 = 0;
  do {
    FUN_08066020(local_28,(int)sVar2,0,iVar3);
    FUN_08066020(local_24,(int)sVar1,0,iVar3);
    FUN_0800b4e8((int)local_30._0_2_,(int)local_2c._0_2_);
    FUN_080003f0();
    iVar3 = iVar3 + 0x11;
  } while (iVar3 < 0x401);
  *DAT_0804cbf8 = 0xb;
  if ((*DAT_0804cbfc & 0x20) == 0) {
    FUN_08006794(0xb);
  }
  *(ushort *)(*DAT_0804cc00 + 4) = *(ushort *)(*DAT_0804cc00 + 4) | 0x20;
  iVar3 = FUN_080020f4();
  iVar3 = iVar3 * 0x154 + DAT_0804cc04;
  *(uint *)(iVar3 + 0x38) = *(uint *)(iVar3 + 0x38) & 0xfffffffe;
  FUN_0800ca58();
  return unaff_lr;
}

