
undefined4 FUN_08055748(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 unaff_lr;
  
  iVar1 = FUN_080020f4();
  iVar1 = iVar1 * 0x154 + DAT_0805577c;
  *(uint *)(iVar1 + 0x38) = *(uint *)(iVar1 + 0x38) | 1;
  FUN_0800ca44();
  iVar1 = FUN_0800c780();
  if (iVar1 == 0) {
    iVar2 = *DAT_080557ac;
    iVar1 = DAT_080557b0;
  }
  else {
    iVar2 = *DAT_08055780;
    iVar1 = DAT_08055784;
  }
  if (((int)(uint)*(byte *)(iVar2 + iVar1) >> 1 & 1U) == 0) {
    iVar1 = FUN_0800c780();
    if (iVar1 == 0) {
      iVar2 = *DAT_080557cc;
      iVar1 = DAT_080557d0;
    }
    else {
      iVar2 = *DAT_080557ac;
      iVar1 = DAT_080557b4;
    }
    *(byte *)(iVar2 + iVar1) = *(byte *)(iVar2 + iVar1) | 2;
    while (iVar1 = FUN_0805fa94(), iVar1 != 0) {
      FUN_080003f0();
    }
    while (iVar1 = FUN_0805f8b4(), iVar1 != 0) {
      FUN_080003f0();
    }
    uVar3 = FUN_0805e608(1,0xf,2,0,0x2d,DAT_08055808);
    while (iVar1 = FUN_0805f820(uVar3), iVar1 == 0) {
      FUN_080003f0();
    }
    FUN_0802917c(param_1,0);
    while (iVar1 = FUN_0805fa94(), iVar1 != 0) {
      FUN_080003f0();
    }
    while (iVar1 = FUN_0805f8b4(), iVar1 != 0) {
      FUN_080003f0();
    }
    uVar3 = FUN_0805e608(1,0xf,2,0,0x2d,DAT_08055858);
    while (iVar1 = FUN_0805f820(uVar3), iVar1 == 0) {
      FUN_080003f0();
    }
    FUN_08028b3c(2,0x138,200,0);
    FUN_08028b3c(1,DAT_080558ac,DAT_080558ac,0);
    iVar1 = FUN_080020f4();
    iVar1 = iVar1 * 0x154 + DAT_080558b0;
    *(uint *)(iVar1 + 0x38) = *(uint *)(iVar1 + 0x38) & 0xfffffffe;
    FUN_0800ca58();
  }
  return unaff_lr;
}

