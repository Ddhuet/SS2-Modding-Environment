
undefined4 FUN_0805a69c(int param_1)

{
  undefined4 unaff_lr;
  
  if (param_1 == 0) {
    FUN_08028b3c(6,0x80,0x58,0);
  }
  else if (param_1 == 1) {
    FUN_08028b3c(7,0x80,0x58,0);
    *(uint *)(*DAT_0805a6d4 + 0x38) = *(uint *)(*DAT_0805a6d4 + 0x38) | 0x10;
  }
  return unaff_lr;
}

