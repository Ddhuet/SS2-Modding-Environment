
undefined4 FUN_08050e80(int param_1)

{
  short sVar1;
  int iVar2;
  undefined4 unaff_lr;
  
  if (param_1 == 0) {
    FUN_08068ebc(DAT_08050e98,1,0);
  }
  else if (param_1 == 1) {
    FUN_080745a8(0x8800,0xc800,0x29,1);
    sVar1 = 4;
    do {
      FUN_080003f0();
      iVar2 = FUN_080021a8();
      if (iVar2 != 0) break;
      sVar1 = sVar1 + -1;
    } while (sVar1 != 0);
    FUN_080745a8(0x8000,0xc800,0x29,1);
    FUN_080745a8(0x9000,0xc800,0x29,1);
    if ((*DAT_08050f18 & 0x20) == 0) {
      FUN_080067e8(DAT_08050f1c);
    }
    FUN_08028b3c(7,0x88,200,0);
    *(uint *)(*DAT_08050f20 + 0x38) = *(uint *)(*DAT_08050f20 + 0x38) | 1;
  }
  return unaff_lr;
}

