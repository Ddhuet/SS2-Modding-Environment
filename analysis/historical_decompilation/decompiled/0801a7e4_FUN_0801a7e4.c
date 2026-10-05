
undefined4 FUN_0801a7e4(undefined2 param_1)

{
  undefined4 unaff_lr;
  
  *DAT_0801a810 = 1;
  *DAT_0801a814 = param_1;
  *DAT_0801a818 = 0;
  FUN_08000420(100);
  *DAT_0801a81c = *DAT_0801a81c & 0xffdf | 0xc;
  return unaff_lr;
}

