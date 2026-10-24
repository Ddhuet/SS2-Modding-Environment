
/* WARNING: Control flow encountered bad instruction data */

void FUN_08d2dc64(void)

{
  undefined1 unaff_r11;
  undefined1 *in_r12;
  bool in_NG;
  bool in_CY;
  undefined4 in_cr11;
  
  if (!in_CY) {
    coprocessor_load(5,in_cr11,in_r12);
  }
  if (in_NG) {
    *in_r12 = unaff_r11;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

