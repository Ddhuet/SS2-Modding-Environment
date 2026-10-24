
void FUN_0805ebca(void)

{
  uint uVar1;
  int unaff_r9;
  
  uVar1 = *(uint *)(unaff_r9 + 0x74);
  if (7 < uVar1) {
    uVar1 = FUN_0805f60a();
  }
                    /* WARNING: Could not recover jumptable at 0x0805ebde. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(uVar1 * 4 + DAT_0805ebe0))();
  return;
}

