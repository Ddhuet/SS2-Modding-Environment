
undefined4 FUN_0804c420(void)

{
  uint *puVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  uint uVar7;
  undefined4 unaff_lr;
  
  iVar3 = FUN_0800c780();
  uVar2 = DAT_0804c540;
  puVar1 = DAT_0804c4c4;
  uVar6 = DAT_0804c4c0;
  if (iVar3 == 0) {
    iVar4 = *DAT_0804c4b8;
    iVar3 = DAT_0804c4bc;
  }
  else {
    iVar4 = *DAT_0804c438;
    iVar3 = DAT_0804c43c;
  }
  uVar7 = (int)(uint)*(byte *)(iVar4 + iVar3) >> 2 & 1;
  if (uVar7 == 0) {
    uVar5 = *DAT_0804c4c4;
    while ((uVar5 & 2) == 0) {
      FUN_080003f0();
      uVar5 = *puVar1;
    }
    iVar4 = *DAT_0804c4c8;
    iVar3 = iVar4 + DAT_0804c4cc;
    *(undefined4 *)(iVar3 + 0x38) = uVar6;
    *(undefined4 *)(iVar3 + 0x3c) = 2;
    *(undefined4 *)(iVar3 + 0x30) = 0;
    *(undefined4 *)(iVar3 + 0x34) = 0;
    puVar1 = DAT_0804c4c4;
    uVar5 = 0;
    do {
      if (((*puVar1 & 1 << (uVar5 & 0xff)) != 0) && (*(short *)(iVar4 + 0xc) == 0xc)) {
        *(undefined2 *)(iVar4 + 0xc) = 0;
      }
      uVar5 = uVar5 + 1;
      iVar4 = iVar4 + DAT_0804c4cc;
    } while (uVar5 < 5);
    FUN_08019a4c();
  }
  else {
    FUN_08028b3c(1,DAT_0804c540,DAT_0804c540,0);
    FUN_08028b3c(2,uVar2,uVar2,0);
  }
  iVar3 = FUN_0800c61c();
  if ((((*(uint *)(*DAT_0804c544 + 0x38) & 0x10) == 0) && (uVar7 == 0)) && (iVar3 == 0)) {
    iVar3 = FUN_080020f4();
    iVar3 = iVar3 * 0x154 + DAT_0804c548;
    *(uint *)(iVar3 + 0x38) = *(uint *)(iVar3 + 0x38) | 1;
    FUN_0800ca44();
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
    while (iVar3 = FUN_0805fa94(), iVar3 != 0) {
      FUN_080003f0();
    }
    while (iVar3 = FUN_0805f8b4(), iVar3 != 0) {
      FUN_080003f0();
    }
    uVar6 = FUN_0805e608(1,0xf,2,0,0x2d,DAT_0804c5a8);
    while (iVar3 = FUN_0805f820(uVar6), iVar3 == 0) {
      FUN_080003f0();
    }
    *(uint *)(*DAT_0804c5e8 + 0x38) = *(uint *)(*DAT_0804c5e8 + 0x38) | 0x10;
    iVar3 = FUN_080020f4();
    iVar3 = iVar3 * 0x154 + DAT_0804c5ec;
    *(uint *)(iVar3 + 0x38) = *(uint *)(iVar3 + 0x38) & 0xfffffffe;
    FUN_0800ca58();
  }
  else {
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
  }
  return unaff_lr;
}

