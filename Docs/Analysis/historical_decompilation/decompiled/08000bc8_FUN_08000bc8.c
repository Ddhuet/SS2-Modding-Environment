
undefined8 FUN_08000bc8(uint *param_1,int *param_2)

{
  int iVar1;
  uint uVar2;
  undefined4 unaff_lr;
  
  uVar2 = *param_1 >> 8;
  if ((uVar2 & 3) != 0) {
    uVar2 = (uVar2 + 4) - (uVar2 & 3);
  }
  if (*param_2 == 0) {
    while( true ) {
      iVar1 = FUN_08001494(uVar2);
      *param_2 = iVar1;
      if (iVar1 != 0) break;
      FUN_080003f0();
    }
  }
  FUN_080b9a90(param_1,*param_2);
  return CONCAT44(unaff_lr,*param_2);
}

