
undefined4 FUN_080b995c(undefined4 param_1,int param_2)

{
  byte bVar1;
  undefined4 unaff_lr;
  
  bVar1 = **(byte **)(param_2 + 0x40);
  *(byte **)(param_2 + 0x40) = *(byte **)(param_2 + 0x40) + 1;
  FUN_080ba43c(param_1,param_2,*(undefined4 *)((uint)bVar1 * 4 + DAT_080b9978));
  return unaff_lr;
}

