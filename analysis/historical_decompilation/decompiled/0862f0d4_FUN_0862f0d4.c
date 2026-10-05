
/* WARNING: Control flow encountered bad instruction data */

void FUN_0862f0d4(undefined4 param_1,uint param_2,uint param_3)

{
  int unaff_r7;
  char in_NG;
  bool in_ZR;
  char in_OV;
  
  if (in_ZR || in_NG != in_OV) {
    software_interrupt(0x11dff1);
  }
  if (in_ZR) {
                    /* WARNING: Could not recover jumptable at 0x0862f0e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    if (in_NG != in_OV) {
      (*(code *)((param_3 >> (param_2 & 0x1f) | param_3 << 0x20 - (param_2 & 0x1f)) - unaff_r7))();
      return;
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

