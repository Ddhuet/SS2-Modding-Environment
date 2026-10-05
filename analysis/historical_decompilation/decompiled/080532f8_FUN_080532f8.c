
undefined4 FUN_080532f8(void)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  uint uVar5;
  undefined4 unaff_lr;
  
  iVar1 = FUN_08028a50(9,0x58,0x46);
  FUN_08029444(iVar1,0x11);
  iVar2 = FUN_080020f4();
  iVar2 = iVar2 * 0x154 + DAT_08053348;
  *(uint *)(iVar2 + 0x38) = *(uint *)(iVar2 + 0x38) | 1;
  FUN_0800ca44();
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
  *DAT_08053390 = 0xd9;
  if ((*DAT_08053394 & 0x20) == 0) {
    FUN_08006794(0xd9);
  }
  while (iVar2 = FUN_0805fa94(), iVar2 != 0) {
    FUN_080003f0();
  }
  while (iVar2 = FUN_0805f8b4(), iVar2 != 0) {
    FUN_080003f0();
  }
  uVar3 = FUN_0805e608(1,0xf,2,0,0x2d,DAT_080533cc);
  while (iVar2 = FUN_0805f820(uVar3), iVar2 == 0) {
    FUN_080003f0();
  }
  while (iVar2 = FUN_0805fa94(), iVar2 != 0) {
    FUN_080003f0();
  }
  while (iVar2 = FUN_0805f8b4(), iVar2 != 0) {
    FUN_080003f0();
  }
  uVar3 = FUN_0805e608(1,0xf,2,0,0x2d,DAT_08053450);
  FUN_08029444(iVar1,0x10);
  FUN_08028e2c(iVar1,0,0xffffffb0,0x3c);
  piVar4 = (int *)(*DAT_08053454 + DAT_08053458);
  uVar5 = 0;
  do {
    if (*piVar4 == iVar1) goto LAB_08053444;
    uVar5 = uVar5 + 1;
    piVar4 = piVar4 + 0x1c;
  } while (uVar5 < 0xf);
  FUN_080003f0();
  piVar4 = (int *)0x0;
LAB_08053444:
  if (piVar4 != (int *)0x0) {
    *(undefined2 *)((int)piVar4 + 0x36) = 4;
  }
  while (iVar1 = FUN_0805f820(uVar3), iVar1 == 0) {
    FUN_080003f0();
  }
  iVar1 = FUN_080020f4();
  iVar1 = iVar1 * 0x154 + DAT_080534b8;
  *(uint *)(iVar1 + 0x38) = *(uint *)(iVar1 + 0x38) & 0xfffffffe;
  FUN_0800ca58();
  *DAT_080534bc = 0xa5;
  if ((*DAT_080534c0 & 0x20) == 0) {
    FUN_08006794(0xa5);
  }
  *(ushort *)(*DAT_080534c4 + 4) = *(ushort *)(*DAT_080534c4 + 4) | 0x20;
  return unaff_lr;
}

