
undefined4 FUN_0804d814(int param_1)

{
  short sVar1;
  int iVar2;
  int iVar3;
  undefined4 unaff_lr;
  
  if (param_1 == 0) {
    FUN_08068ebc(DAT_0804d82c,1,0);
  }
  else if (param_1 == 1) {
    FUN_080745a8(0x18800,0xa000,0x29,1);
    sVar1 = 4;
    do {
      FUN_080003f0();
      iVar2 = FUN_080021a8();
      if (iVar2 != 0) break;
      sVar1 = sVar1 + -1;
    } while (sVar1 != 0);
    FUN_080745a8(0x18000,0xa000,0x29,1);
    FUN_080745a8(0x19000,0xa000,0x29,1);
    if ((*DAT_0804d8ac & 0x20) == 0) {
      FUN_080067e8(DAT_0804d8b0);
    }
    FUN_08028b3c(7,0x188,0xa0,0);
    iVar2 = FUN_0800c780();
    if (iVar2 == 0) {
      iVar3 = *DAT_0804d8d0;
      iVar2 = 0x1b8;
    }
    else {
      iVar3 = *DAT_0804d8b4;
      iVar2 = 0x1c4;
    }
    *(byte *)(iVar3 + iVar2) = *(byte *)(iVar3 + iVar2) | 4;
  }
  return unaff_lr;
}

