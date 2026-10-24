
/* WARNING: Control flow encountered bad instruction data */

void FUN_0886a13a(void)

{
  undefined1 unaff_r5;
  undefined1 *unaff_r8;
  bool in_ZR;
  bool in_CY;
  bool in_OV;
  
  if (!in_OV) {
    *unaff_r8 = unaff_r5;
  }
  if (!in_CY || in_ZR) {
    if (in_CY && !in_ZR) {
      func_0x06e3f21e();
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

