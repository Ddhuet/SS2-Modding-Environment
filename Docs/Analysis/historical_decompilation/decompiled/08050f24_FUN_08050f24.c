
undefined4 FUN_08050f24(void)

{
  short sVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 unaff_lr;
  
  iVar2 = FUN_080020f4();
  iVar2 = iVar2 * 0x154 + DAT_08050f68;
  *(uint *)(iVar2 + 0x38) = *(uint *)(iVar2 + 0x38) | 1;
  FUN_0800ca44();
  iVar2 = FUN_0800c4ec();
  if (iVar2 == 0) {
    if ((*DAT_08050f6c & 0x20) == 0) {
      *DAT_08050f70 = 0xa5;
      FUN_08006794();
    }
  }
  else {
    FUN_08059ae4(0);
  }
  iVar2 = FUN_0800c5e8();
  if (iVar2 == 0) {
    iVar2 = FUN_0801a720();
    if (iVar2 == 1) {
      FUN_0801a74c(6);
    }
    else if (iVar2 < 2) {
      if (iVar2 == 0) {
        FUN_08058b6c();
      }
    }
    else if (iVar2 == 2) {
      FUN_0801a78c(6);
    }
    while (iVar2 = FUN_0801a6dc(), iVar2 == 0) {
      FUN_080003f0();
    }
  }
  sVar1 = 0x14;
  do {
    FUN_080003f0();
    iVar2 = FUN_080021a8();
    if (iVar2 != 0) break;
    sVar1 = sVar1 + -1;
  } while (sVar1 != 0);
  while (iVar2 = FUN_0805fa94(), iVar2 != 0) {
    FUN_080003f0();
  }
  while (iVar2 = FUN_0805f8b4(), iVar2 != 0) {
    FUN_080003f0();
  }
  uVar3 = FUN_0805e608(1,0xf,2,0,0x2d,DAT_0805100c);
  while (iVar2 = FUN_0805f820(uVar3), iVar2 == 0) {
    FUN_080003f0();
  }
  *(ushort *)(*DAT_08051054 + 4) = *(ushort *)(*DAT_08051054 + 4) | 0x20;
  iVar2 = FUN_080020f4();
  iVar2 = iVar2 * 0x154 + DAT_08051058;
  *(uint *)(iVar2 + 0x38) = *(uint *)(iVar2 + 0x38) & 0xfffffffe;
  FUN_0800ca58();
  return unaff_lr;
}

