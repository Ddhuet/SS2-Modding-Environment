
undefined4 FUN_0805052c(void)

{
  uint *puVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  short unaff_r4;
  uint uVar6;
  undefined4 unaff_lr;
  
  iVar3 = FUN_080020f4();
  iVar3 = iVar3 * 0x154 + DAT_0805055c;
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
  FUN_08028b3c(1,0x78,0xf0,0);
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
  sVar2 = 0x3c;
  do {
    FUN_080003f0();
    iVar3 = FUN_080021a8();
    uVar5 = DAT_0805062c;
    if (iVar3 != 0) break;
    sVar2 = sVar2 + -1;
  } while (sVar2 != 0);
  iVar3 = *DAT_08050630 + DAT_08050634;
  for (uVar6 = 0; uVar6 < 0x1e; uVar6 = uVar6 + 1) {
    iVar4 = FUN_08000470(iVar3);
    if (iVar4 == 0) goto LAB_08050650;
    iVar3 = iVar3 + 0x28;
  }
LAB_0805067a:
  sVar2 = 0x50;
  do {
    FUN_080003f0();
    iVar3 = FUN_080021a8();
    if (iVar3 != 0) break;
    sVar2 = sVar2 + -1;
  } while (sVar2 != 0);
  iVar3 = FUN_080020f4();
  *(undefined2 *)(iVar3 * 0x154 + DAT_080506e8 + 0x126) = 4;
  puVar1 = DAT_080506ec;
  if ((*DAT_080506ec & 0x20) == 0) {
    FUN_080067e8(0xb7);
  }
  FUN_08028b3c(1,0x78,0x50,400);
  FUN_08029210(0,0x10);
  if ((*puVar1 & 0x20) == 0) {
    FUN_080067e8(0xbd);
  }
  while (iVar3 = FUN_0805fa94(), iVar3 != 0) {
    FUN_080003f0();
  }
  while (iVar3 = FUN_0805f8b4(), iVar3 != 0) {
    FUN_080003f0();
  }
  uVar5 = FUN_0805e608(1,0xf,2,0,0x2d,DAT_08050724);
  while (iVar3 = FUN_0805f820(uVar5), iVar3 == 0) {
    FUN_080003f0();
  }
  *DAT_08050798 = 0xb;
  if ((*DAT_0805079c & 0x20) == 0) {
    FUN_08006794(0xb);
  }
  *(ushort *)(*DAT_080507a0 + 4) = *(ushort *)(*DAT_080507a0 + 4) | 0x20;
  iVar4 = FUN_080020f4();
  iVar3 = DAT_080507a4;
  iVar4 = iVar4 * 0x154 + DAT_080507a4;
  *(uint *)(iVar4 + 0x38) = *(uint *)(iVar4 + 0x38) & 0xfffffffe;
  FUN_0800ca58();
  iVar4 = FUN_080020f4();
  *(undefined2 *)(iVar4 * 0x154 + iVar3 + 0x26) = 0;
  return unaff_lr;
LAB_08050650:
  while( true ) {
    iVar4 = FUN_08001494(0x400);
    *(int *)(iVar3 + 0x20) = iVar4;
    if (iVar4 != 0) break;
    FUN_080003f0();
  }
  *(undefined4 *)(iVar3 + 8) = 0x3c;
  *(undefined4 *)(iVar3 + 0xc) = uVar5;
  *(int *)(iVar3 + 0x10) = iVar4 + 0x3fc;
  *(undefined4 *)(iVar3 + 0x24) = 0;
  FUN_08000274(iVar3,0);
  goto LAB_0805067a;
}

