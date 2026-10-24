
undefined4 FUN_08053840(int param_1)

{
  short sVar1;
  int iVar2;
  undefined4 unaff_lr;
  
  if (param_1 == 0) {
    FUN_08068ebc(DAT_08053858,1,2);
  }
  else if (param_1 == 1) {
    FUN_080745a8(0xc800,0x6800,0x29,1);
    sVar1 = 4;
    do {
      FUN_080003f0();
      iVar2 = FUN_080021a8();
      if (iVar2 != 0) break;
      sVar1 = sVar1 + -1;
    } while (sVar1 != 0);
    FUN_080745a8(0xc000,0x6800,0x29,1);
    FUN_080745a8(0xd000,0x6800,0x29,1);
    if ((*DAT_080538d8 & 0x20) == 0) {
      FUN_080067e8(DAT_080538dc);
    }
    FUN_08028b3c(7,200,0x68,0);
    *(uint *)(*DAT_080538e0 + 0x38) = *(uint *)(*DAT_080538e0 + 0x38) | 0x10;
  }
  return unaff_lr;
}

