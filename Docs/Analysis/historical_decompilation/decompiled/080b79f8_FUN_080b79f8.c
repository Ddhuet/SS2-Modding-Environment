
void FUN_080b79f8(void)

{
  int *piVar1;
  
  piVar1 = (int *)*DAT_080b7a64;
  if (DAT_080b7a68 != *piVar1) {
    return;
  }
  *piVar1 = *piVar1 + 1;
  if (piVar1[8] != 0) {
    FUN_080b7e1a(piVar1[9]);
  }
  FUN_080b7e1a();
                    /* WARNING: Could not recover jumptable at 0x080b7a60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_080b7a6c)();
  return;
}

