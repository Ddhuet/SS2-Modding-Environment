
void FUN_08049d70(uint param_1)

{
  if (6 < param_1) {
    param_1 = FUN_0804b0ba();
  }
                    /* WARNING: Could not recover jumptable at 0x08049d8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(PTR_PTR_08049d90 + param_1 * 4))();
  return;
}

