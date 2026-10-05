
undefined4 FUN_0805170c(void)

{
  short sVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  uint uVar6;
  undefined4 unaff_lr;
  
  do {
    sVar1 = 1;
    do {
      FUN_080003f0();
      iVar2 = FUN_080021a8();
      if (iVar2 != 0) break;
      sVar1 = sVar1 + -1;
    } while (sVar1 != 0);
    if ((*(ushort *)(*DAT_08051740 + 4) >> 4 & 1) == 0) {
      iVar2 = FUN_08019774();
    }
    else {
      iVar2 = 1;
    }
  } while (iVar2 != 0);
  iVar2 = FUN_080020f4();
  iVar2 = iVar2 * 0x154 + DAT_08051774;
  *(uint *)(iVar2 + 0x38) = *(uint *)(iVar2 + 0x38) | 1;
  FUN_0800ca44();
  FUN_0806870c(DAT_08051778,0xf);
  while (iVar2 = FUN_0805fa94(), iVar2 != 0) {
    FUN_080003f0();
  }
  while (iVar2 = FUN_0805f8b4(), iVar2 != 0) {
    FUN_080003f0();
  }
  uVar3 = FUN_0805e608(1,0xf,2,0,0x2d,DAT_080517b0);
  sVar1 = 0x1e;
  do {
    FUN_080003f0();
    iVar2 = FUN_080021a8();
    if (iVar2 != 0) break;
    sVar1 = sVar1 + -1;
  } while (sVar1 != 0);
  iVar2 = FUN_08028a50(0x13,0x170,0x88);
  sVar1 = 1;
  do {
    FUN_080003f0();
    iVar4 = FUN_080021a8();
    if (iVar4 != 0) break;
    sVar1 = sVar1 + -1;
  } while (sVar1 != 0);
  FUN_08028b3c(1,DAT_08051808,DAT_08051808,0);
  FUN_0802a1a8();
  while (iVar4 = FUN_0805f820(uVar3), iVar4 == 0) {
    FUN_080003f0();
  }
  FUN_08029444(iVar2,10);
  FUN_08028b3c(iVar2,0x99,0x5d,100);
  piVar5 = (int *)(*DAT_0805187c + DAT_08051880);
  uVar6 = 0;
  do {
    if (*piVar5 == iVar2) goto LAB_0805184c;
    uVar6 = uVar6 + 1;
    piVar5 = piVar5 + 0x1c;
  } while (uVar6 < 0xf);
  FUN_080003f0();
  piVar5 = (int *)0x0;
LAB_0805184c:
  if (piVar5 != (int *)0x0) {
    *(undefined2 *)((int)piVar5 + 0x36) = 4;
  }
  iVar2 = FUN_080020f4();
  iVar2 = iVar2 * 0x154 + DAT_08051884;
  *(uint *)(iVar2 + 0x38) = *(uint *)(iVar2 + 0x38) & 0xfffffffe;
  FUN_0800ca58();
  return unaff_lr;
}

