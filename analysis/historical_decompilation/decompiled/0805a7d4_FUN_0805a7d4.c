
undefined4 FUN_0805a7d4(int param_1)

{
  undefined4 unaff_lr;
  
  if (param_1 == 0) {
    FUN_08068ebc(DAT_0805a7ec,1,1);
  }
  else if (param_1 == 1) {
    if ((*DAT_0805a820 & 0x20) == 0) {
      FUN_080067e8(DAT_0805a824);
    }
    FUN_08028b3c(7,DAT_0805a828,DAT_0805a828,0);
    *(uint *)(*DAT_0805a82c + 0x38) = *(uint *)(*DAT_0805a82c + 0x38) | 8;
  }
  return unaff_lr;
}

