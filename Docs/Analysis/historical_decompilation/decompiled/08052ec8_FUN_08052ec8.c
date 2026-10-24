
undefined4 FUN_08052ec8(void)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 unaff_lr;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  uStack_18 = 0;
  uStack_20 = 0x7800;
  uStack_1c = 0x5800;
  uStack_14 = DAT_08052ef8;
  iVar1 = FUN_080020f4();
  iVar1 = iVar1 * 0x154 + DAT_08052efc;
  while (iVar2 = FUN_08021ef0(iVar1 + 0x94,&uStack_20,&uStack_18,&uStack_14), iVar2 == 0) {
    FUN_080003f0();
  }
  iVar1 = FUN_080020f4();
  iVar1 = iVar1 * 0x154 + DAT_08052f48;
  *(uint *)(iVar1 + 0x38) = *(uint *)(iVar1 + 0x38) | 1;
  FUN_0800ca44();
  iVar1 = FUN_0800c780();
  if (iVar1 == 0) {
    iVar1 = *DAT_08052f68;
    iVar2 = 0x1b8;
  }
  else {
    iVar1 = *DAT_08052f4c;
    iVar2 = 0x1c4;
  }
  if ((int)(uint)*(byte *)(iVar1 + iVar2) >> 7 == 0) {
    while (iVar1 = FUN_0805fa94(), iVar1 != 0) {
      FUN_080003f0();
    }
    while (iVar1 = FUN_0805f8b4(), iVar1 != 0) {
      FUN_080003f0();
    }
    uVar3 = FUN_0805e608(1,0xf,2,0,0xffffffff,DAT_0805300c);
    while (iVar1 = FUN_0805f820(uVar3), iVar1 == 0) {
      iVar1 = FUN_0800c748();
      if (iVar1 != 0) {
        FUN_0805f8e0();
        break;
      }
      FUN_080003f0();
    }
  }
  else {
    while (iVar1 = FUN_0805fa94(), iVar1 != 0) {
      FUN_080003f0();
    }
    while (iVar1 = FUN_0805f8b4(), iVar1 != 0) {
      FUN_080003f0();
    }
    uVar3 = FUN_0805e608(1,0xf,2,0,0xffffffff,DAT_08052fa0);
    while (iVar1 = FUN_0805f820(uVar3), iVar1 == 0) {
      iVar1 = FUN_0800c748();
      if (iVar1 != 0) {
        FUN_0805f8e0();
        break;
      }
      FUN_080003f0();
    }
    FUN_0806870c(DAT_08052fd0,6);
    FUN_0806870c(DAT_08052fd4,0x11);
  }
  iVar1 = FUN_080020f4();
  iVar1 = iVar1 * 0x154 + DAT_08053054;
  *(uint *)(iVar1 + 0x38) = *(uint *)(iVar1 + 0x38) & 0xfffffffe;
  FUN_0800ca58();
  return unaff_lr;
}

