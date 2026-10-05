
undefined4 FUN_08054594(int param_1)

{
  short sVar1;
  int iVar2;
  undefined4 unaff_lr;
  
  if (param_1 == 0) {
    FUN_08068ebc(DAT_080545ac,1,1);
  }
  else if (param_1 == 1) {
    FUN_080745a8(0x10800,0x5800,0x29,1);
    sVar1 = 4;
    do {
      FUN_080003f0();
      iVar2 = FUN_080021a8();
      if (iVar2 != 0) break;
      sVar1 = sVar1 + -1;
    } while (sVar1 != 0);
    FUN_080745a8(0x10000,0x5800,0x29,1);
    FUN_080745a8(0x11000,0x5800,0x29,1);
    if ((*DAT_0805462c & 0x20) == 0) {
      FUN_080067e8(DAT_08054630);
    }
    FUN_08028b3c(7,0x108,0x58,0);
    *(uint *)(*DAT_08054634 + 0x38) = *(uint *)(*DAT_08054634 + 0x38) | 4;
  }
  return unaff_lr;
}

