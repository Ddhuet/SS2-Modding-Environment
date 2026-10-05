
undefined4 FUN_0804482c(void)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 unaff_lr;
  
  iVar1 = FUN_0800c780();
  if (iVar1 == 0) {
    iVar1 = *DAT_08044880;
    iVar3 = 0x1ba;
  }
  else {
    iVar1 = *DAT_08044844;
    iVar3 = 0x1c6;
  }
  if (((int)(uint)*(byte *)(iVar1 + iVar3) >> 4 & 1U) == 0) {
    iVar1 = FUN_080020f4();
    iVar1 = iVar1 * 0x154 + DAT_08044884;
    *(uint *)(iVar1 + 0x38) = *(uint *)(iVar1 + 0x38) | 1;
    FUN_0800ca44();
    while (iVar1 = FUN_0805fa94(), iVar1 != 0) {
      FUN_080003f0();
    }
    while (iVar1 = FUN_0805f8b4(), iVar1 != 0) {
      FUN_080003f0();
    }
    uVar2 = FUN_0805e608(1,0xf,2,0,0xffffffff,DAT_080448bc);
    while (iVar1 = FUN_0805f820(uVar2), iVar1 == 0) {
      iVar1 = FUN_0800c748();
      if (iVar1 != 0) {
        FUN_0805f8e0();
        break;
      }
      FUN_080003f0();
    }
    iVar1 = FUN_080020f4();
    iVar1 = iVar1 * 0x154 + DAT_08044904;
    *(uint *)(iVar1 + 0x38) = *(uint *)(iVar1 + 0x38) & 0xfffffffe;
    FUN_0800ca58();
  }
  return unaff_lr;
}

