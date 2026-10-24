
undefined4 FUN_08058ae8(short param_1)

{
  int iVar1;
  undefined4 unaff_lr;
  
  while( true ) {
    if (param_1 == 0) {
      return unaff_lr;
    }
    FUN_080003f0();
    iVar1 = FUN_080021a8();
    if (iVar1 != 0) break;
    param_1 = param_1 + -1;
  }
  return unaff_lr;
}

