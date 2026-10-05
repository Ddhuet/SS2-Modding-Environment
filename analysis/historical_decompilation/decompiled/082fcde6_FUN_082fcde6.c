
/* WARNING: Control flow encountered bad instruction data */

void FUN_082fcde6(void)

{
  uint uVar1;
  undefined1 in_NG;
  undefined1 in_ZR;
  
  uVar1 = func_0x07b2a45a();
  if ((bool)in_NG) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (!(bool)in_ZR) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Could not recover jumptable at 0x08c82a4e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(uVar1 & uVar1 << 0x1e))();
  return;
}

