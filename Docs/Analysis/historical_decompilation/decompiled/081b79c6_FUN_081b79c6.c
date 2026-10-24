
/* WARNING: Control flow encountered bad instruction data */

void FUN_081b79c6(void)

{
  int in_r12;
  char in_NG;
  bool in_ZR;
  char in_OV;
  
  if (in_NG != in_OV) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x081b79ca. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  if (in_ZR || in_NG != in_OV) {
    (*(code *)(in_r12 + -0x3700000))();
    return;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

