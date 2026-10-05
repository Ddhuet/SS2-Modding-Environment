
undefined4 FUN_0804c374(int param_1)

{
  short sVar1;
  int iVar2;
  undefined4 unaff_lr;
  
  if (param_1 == 0) {
    FUN_08068ebc(DAT_0804c38c,1,0);
  }
  else if (param_1 == 1) {
    *(uint *)(*DAT_0804c3b0 + 0x38) = *(uint *)(*DAT_0804c3b0 + 0x38) | 8;
    FUN_080745a8(0x19800,DAT_0804c3b4,0x29,1);
    sVar1 = 4;
    do {
      FUN_080003f0();
      iVar2 = FUN_080021a8();
      if (iVar2 != 0) break;
      sVar1 = sVar1 + -1;
    } while (sVar1 != 0);
    FUN_080745a8(0x19000,DAT_0804c414,0x29,1);
    FUN_080745a8(0x1a000,DAT_0804c414,0x29,1);
    if ((*DAT_0804c418 & 0x20) == 0) {
      FUN_080067e8(DAT_0804c41c);
    }
    FUN_08028b3c(8,0x198,0x158,0);
  }
  return unaff_lr;
}

