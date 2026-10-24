
undefined4 FUN_08051958(int param_1)

{
  short sVar1;
  int iVar2;
  undefined4 unaff_lr;
  
  if (param_1 == 0) {
    FUN_08068ebc(DAT_08051970,1,0);
  }
  else if (param_1 == 1) {
    FUN_080745a8(0x37800,0xa000,0x29,1);
    sVar1 = 4;
    do {
      FUN_080003f0();
      iVar2 = FUN_080021a8();
      if (iVar2 != 0) break;
      sVar1 = sVar1 + -1;
    } while (sVar1 != 0);
    FUN_080745a8(0x37000,0xa000,0x29,1);
    FUN_080745a8(0x38000,0xa000,0x29,1);
    if ((*DAT_080519f0 & 0x20) == 0) {
      FUN_080067e8(DAT_080519f4);
    }
    FUN_08028b3c(7,0x378,0xa0,0);
    *(uint *)(*DAT_080519f8 + 0x38) = *(uint *)(*DAT_080519f8 + 0x38) | 2;
  }
  return unaff_lr;
}

