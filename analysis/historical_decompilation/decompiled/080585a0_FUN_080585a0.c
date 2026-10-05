
undefined4 FUN_080585a0(int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined4 unaff_lr;
  
  iVar2 = *DAT_08058620 + DAT_08058624;
  uVar3 = 0;
  do {
    iVar1 = FUN_08000470(iVar2);
    if (iVar1 != 0) {
      FUN_080003a8(iVar2);
    }
    uVar3 = uVar3 + 1;
    iVar2 = iVar2 + 0x28;
  } while (uVar3 < 0x1e);
  if (param_1 != 0) {
    iVar2 = *DAT_08058620 + DAT_08058628;
    uVar3 = 0;
    do {
      iVar1 = FUN_08000470(iVar2);
      if (iVar1 != 0) {
        FUN_080003a8(iVar2);
      }
      uVar3 = uVar3 + 1;
      iVar2 = iVar2 + 0x28;
    } while (uVar3 < 0x1e);
  }
  iVar2 = *DAT_08058620 + DAT_0805862c;
  uVar3 = 0;
  do {
    iVar1 = FUN_08000470(iVar2 + 0x48);
    if (iVar1 != 0) {
      FUN_080003a8(iVar2 + 0x48);
    }
    uVar3 = uVar3 + 1;
    iVar2 = iVar2 + 0x70;
  } while (uVar3 < 0xf);
  *DAT_08058630 = 0;
  return unaff_lr;
}

