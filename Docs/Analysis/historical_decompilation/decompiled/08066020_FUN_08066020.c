
undefined4 FUN_08066020(int *param_1,int param_2,int param_3,int param_4)

{
  undefined4 unaff_lr;
  
  if (param_2 == param_3) {
    *param_1 = param_2;
  }
  else {
    *param_1 = (param_4 * param_3 >> 10) + (param_2 * (0x400 - param_4) >> 10);
  }
  return unaff_lr;
}

