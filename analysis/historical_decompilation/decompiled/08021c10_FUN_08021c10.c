
ulonglong FUN_08021c10(uint param_1,undefined4 param_2)

{
  uint uVar1;
  undefined4 unaff_lr;
  ulonglong uVar2;
  
  uVar1 = (param_1 & 0xffff) - 1;
  if (uVar1 < 7) {
                    /* WARNING: Could not recover jumptable at 0x08021c28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(uVar1 * 4 + DAT_08021c2c))();
    return uVar2;
  }
  return CONCAT44(unaff_lr,param_2) & 0xffffffff0000ffff;
}

