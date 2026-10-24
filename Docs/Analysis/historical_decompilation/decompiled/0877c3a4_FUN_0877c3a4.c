
/* WARNING: Control flow encountered bad instruction data */

void FUN_0877c3a4(void)

{
  int unaff_r5;
  undefined4 unaff_r9;
  undefined4 unaff_r11;
  bool in_ZR;
  bool in_CY;
  
  if (!in_CY || in_ZR) {
    *(undefined4 *)(unaff_r5 + -0x500) = unaff_r11;
    uRam0877c55f = unaff_r9;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

