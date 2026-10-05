
undefined4 FUN_08054c58(void)

{
  short sVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  short unaff_r8;
  undefined4 unaff_lr;
  undefined1 local_38 [4];
  undefined1 local_34 [4];
  undefined1 local_30 [4];
  undefined1 local_2c [4];
  undefined1 *local_28;
  undefined1 *local_24;
  
  iVar3 = FUN_080020f4();
  iVar3 = iVar3 * 0x154 + DAT_08054c90;
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
  sVar2 = 1;
  local_28 = local_30;
  local_24 = local_2c;
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
  sVar2 = 0x14;
  do {
    FUN_080003f0();
    iVar4 = FUN_080021a8();
    iVar3 = DAT_08054dc0;
    if (iVar4 != 0) break;
    sVar2 = sVar2 + -1;
  } while (sVar2 != 0);
  sVar2 = *(short *)(DAT_08054dbc + 0x80);
  sVar1 = *(short *)(DAT_08054dbc + 0x82);
  iVar4 = 0;
  do {
    FUN_08066020(local_38,(int)sVar2,(int)-unaff_r8,iVar4);
    FUN_08066020(local_34,(int)sVar1,iVar3 >> 0x10,iVar4);
    FUN_0800b4e8((int)local_38._0_2_,(int)local_34._0_2_);
    FUN_080003f0();
    iVar4 = iVar4 + 0x11;
  } while (iVar4 < 0x401);
  if ((*(uint *)(*DAT_08054dc4 + 0x38) & 1) == 0) {
    while (iVar3 = FUN_0805fa94(), iVar3 != 0) {
      FUN_080003f0();
    }
    while (iVar3 = FUN_0805f8b4(), uVar5 = DAT_08054dec, iVar3 != 0) {
      FUN_080003f0();
    }
  }
  else {
    while (iVar3 = FUN_0805fa94(), iVar3 != 0) {
      FUN_080003f0();
    }
    while (iVar3 = FUN_0805f8b4(), uVar5 = DAT_08054e30, iVar3 != 0) {
      FUN_080003f0();
    }
  }
  uVar5 = FUN_0805e608(1,0xf,2,0,0x2d,uVar5);
  *(uint *)(*DAT_08054e34 + 0x38) = *(uint *)(*DAT_08054e34 + 0x38) | 1;
  while (iVar3 = FUN_0805f820(uVar5), iVar3 == 0) {
    FUN_080003f0();
  }
  sVar2 = *(short *)(DAT_08054ef0 + 0x80);
  sVar1 = *(short *)(DAT_08054ef0 + 0x82);
  iVar3 = 0;
  do {
    FUN_08066020(local_28,(int)sVar2,0,iVar3);
    FUN_08066020(local_24,(int)sVar1,0,iVar3);
    FUN_0800b4e8((int)local_30._0_2_,(int)local_2c._0_2_);
    FUN_080003f0();
    iVar3 = iVar3 + 0x22;
  } while (iVar3 < 0x401);
  *DAT_08054ef4 = 0x194;
  if ((*DAT_08054ef8 & 0x20) == 0) {
    FUN_08006794(0x194);
  }
  *(ushort *)(*DAT_08054efc + 4) = *(ushort *)(*DAT_08054efc + 4) | 0x20;
  iVar3 = FUN_080020f4();
  iVar3 = iVar3 * 0x154 + DAT_08054f00;
  *(uint *)(iVar3 + 0x38) = *(uint *)(iVar3 + 0x38) & 0xfffffffe;
  FUN_0800ca58();
  return unaff_lr;
}

