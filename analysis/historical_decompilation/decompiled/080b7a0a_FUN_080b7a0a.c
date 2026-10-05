
void FUN_080b7a0a(int param_1)

{
  if (*(int *)(param_1 + 0x20) != 0) {
    FUN_080b7e1a(*(undefined4 *)(param_1 + 0x24));
  }
  FUN_080b7e1a();
                    /* WARNING: Could not recover jumptable at 0x080b7a60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_080b7a6c)();
  return;
}

