
undefined4 FUN_0805755c(uint param_1)

{
  undefined4 uVar1;
  undefined4 unaff_lr;
  
  if (9 < param_1) {
    return unaff_lr;
  }
                    /* WARNING: Could not recover jumptable at 0x0805756e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(PTR_PTR_08057570 + param_1 * 4))();
  return uVar1;
}

