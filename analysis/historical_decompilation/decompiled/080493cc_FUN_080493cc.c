
undefined4 FUN_080493cc(void)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 unaff_lr;
  undefined1 auStack_2c [12];
  undefined4 local_20;
  undefined4 local_1c;
  
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
  uVar1 = DAT_08049420;
  iVar2 = *DAT_08049424 + DAT_08049428;
  uVar4 = 0;
  while( true ) {
    if (0x1d < uVar4) {
      return unaff_lr;
    }
    iVar3 = FUN_08000470(iVar2);
    if (iVar3 == 0) break;
    uVar4 = uVar4 + 1;
    iVar2 = iVar2 + 0x28;
  }
  local_20 = uVar1;
  local_1c = 7;
  *(undefined4 *)(iVar2 + 8) = 0x3c;
  iVar3 = FUN_08001494(0x400);
  *(int *)(iVar2 + 0x20) = iVar3;
  *(undefined4 *)(iVar2 + 0xc) = DAT_0804947c;
  *(int *)(iVar2 + 0x10) = iVar3 + 0x3fc;
  *(undefined4 *)(iVar2 + 0x24) = 0;
  FUN_08000274(iVar2,auStack_2c,6);
  FUN_080003f0();
  FUN_080003f0();
  return unaff_lr;
}

