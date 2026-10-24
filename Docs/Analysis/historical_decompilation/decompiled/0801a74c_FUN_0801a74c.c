
undefined4 FUN_0801a74c(undefined2 param_1)

{
  undefined4 unaff_lr;
  
  *DAT_0801a77c = 0xffff;
  *DAT_0801a780 = param_1;
  *DAT_0801a784 = 0;
  FUN_08000420(100);
  *DAT_0801a788 = *DAT_0801a788 & 0xffdf | 4;
  return unaff_lr;
}

