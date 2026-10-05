
undefined4 FUN_0804bbb8(uint param_1)

{
  undefined4 uVar1;
  undefined4 unaff_lr;
  
  if (6 < param_1) {
    return unaff_lr;
  }
                    /* WARNING: Could not recover jumptable at 0x0804bbca. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(PTR_PTR_0804bbcc + param_1 * 4))();
  return uVar1;
}

