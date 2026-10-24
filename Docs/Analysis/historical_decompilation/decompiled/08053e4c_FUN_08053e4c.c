
undefined4 FUN_08053e4c(void)

{
  short sVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  short unaff_r8;
  undefined4 unaff_lr;
  bool bVar6;
  undefined1 local_3c [4];
  undefined1 local_38 [4];
  undefined1 local_34 [4];
  undefined1 local_30 [4];
  int local_2c;
  undefined1 *local_28;
  undefined1 *local_24;
  
  iVar3 = FUN_080020f4();
  iVar3 = iVar3 * 0x154 + DAT_08053e84;
  *(uint *)(iVar3 + 0x38) = *(uint *)(iVar3 + 0x38) | 1;
  FUN_0800ca44();
  iVar3 = FUN_08002164();
  if (iVar3 == 1) {
    unaff_r8 = 0;
  }
  else {
    iVar3 = FUN_080020f4();
    if (iVar3 == 1) {
      unaff_r8 = 0xc;
    }
    else if (iVar3 < 2) {
      if (iVar3 == 0) {
        unaff_r8 = -0xc;
      }
    }
    else if (iVar3 == 2) {
      unaff_r8 = -0x24;
    }
    else if (iVar3 == 3) {
      unaff_r8 = 0x24;
    }
  }
  FUN_08028e2c(0,(int)unaff_r8,0,0);
  local_2c = FUN_0805a910();
  sVar2 = 1;
  local_28 = local_34;
  local_24 = local_30;
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
  *DAT_08053f54 = 0xd9;
  if ((*DAT_08053f58 & 0x20) == 0) {
    FUN_08006794(0xd9);
  }
  sVar2 = 0x14;
  do {
    FUN_080003f0();
    iVar4 = FUN_080021a8();
    iVar3 = DAT_08053fe8;
    if (iVar4 != 0) break;
    sVar2 = sVar2 + -1;
  } while (sVar2 != 0);
  sVar2 = *(short *)(DAT_08053fe4 + 0x80);
  sVar1 = *(short *)(DAT_08053fe4 + 0x82);
  iVar4 = 0;
  do {
    FUN_08066020(local_3c,(int)sVar2,(int)-unaff_r8,iVar4);
    FUN_08066020(local_38,(int)sVar1,iVar3 >> 0x10,iVar4);
    FUN_0800b4e8((int)local_3c._0_2_,(int)local_38._0_2_);
    FUN_080003f0();
    iVar4 = iVar4 + 0x11;
  } while (iVar4 < 0x401);
  bVar6 = (*(uint *)(*DAT_08053fec + 0x38) & 4) != 0;
  if (local_2c == 0) {
    if (bVar6) {
      while (iVar3 = FUN_0805fa94(), iVar3 != 0) {
        FUN_080003f0();
      }
      while (iVar3 = FUN_0805f8b4(), uVar5 = DAT_080540ac, iVar3 != 0) {
        FUN_080003f0();
      }
    }
    else {
      while (iVar3 = FUN_0805fa94(), iVar3 != 0) {
        FUN_080003f0();
      }
      while (iVar3 = FUN_0805f8b4(), uVar5 = DAT_08054040, iVar3 != 0) {
        FUN_080003f0();
      }
    }
  }
  else if (bVar6) {
    while (iVar3 = FUN_0805fa94(), iVar3 != 0) {
      FUN_080003f0();
    }
    while (iVar3 = FUN_0805f8b4(), uVar5 = DAT_08054068, iVar3 != 0) {
      FUN_080003f0();
    }
  }
  else {
    while (iVar3 = FUN_0805fa94(), iVar3 != 0) {
      FUN_080003f0();
    }
    while (iVar3 = FUN_0805f8b4(), uVar5 = DAT_08054014, iVar3 != 0) {
      FUN_080003f0();
    }
  }
  uVar5 = FUN_0805e608(1,0xf,2,0,0x2d,uVar5);
  *(uint *)(*DAT_080540b0 + 0x38) = *(uint *)(*DAT_080540b0 + 0x38) | 4;
  while (iVar3 = FUN_0805f820(uVar5), iVar3 == 0) {
    FUN_080003f0();
  }
  sVar2 = *(short *)(DAT_08054168 + 0x80);
  sVar1 = *(short *)(DAT_08054168 + 0x82);
  iVar3 = 0;
  do {
    FUN_08066020(local_28,(int)sVar2,0,iVar3);
    FUN_08066020(local_24,(int)sVar1,0,iVar3);
    FUN_0800b4e8((int)local_34._0_2_,(int)local_30._0_2_);
    FUN_080003f0();
    iVar3 = iVar3 + 0x22;
  } while (iVar3 < 0x401);
  *DAT_0805416c = 0xa5;
  if ((*DAT_08054170 & 0x20) == 0) {
    FUN_08006794(0xa5);
  }
  *(ushort *)(*DAT_08054174 + 4) = *(ushort *)(*DAT_08054174 + 4) | 0x20;
  iVar3 = FUN_080020f4();
  iVar3 = iVar3 * 0x154 + DAT_08054178;
  *(uint *)(iVar3 + 0x38) = *(uint *)(iVar3 + 0x38) & 0xfffffffe;
  FUN_0800ca58();
  return unaff_lr;
}

