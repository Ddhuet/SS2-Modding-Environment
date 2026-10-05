
ulonglong FUN_0801b18c(undefined4 param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  undefined4 unaff_lr;
  ulonglong uVar1;
  
  if (8 < (param_4 & 0xffff)) {
    return CONCAT44(unaff_lr,param_3) & 0xffffffff0000ffff;
  }
                    /* WARNING: Could not recover jumptable at 0x0801b1a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)((param_4 & 0xffff) * 4 + DAT_0801b1ac))();
  return uVar1;
}

