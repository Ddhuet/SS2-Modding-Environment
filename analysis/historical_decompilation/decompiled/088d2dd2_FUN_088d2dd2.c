
/* WARNING: Control flow encountered bad instruction data */

void FUN_088d2dd2(void)

{
  undefined4 unaff_r11;
  bool in_ZR;
  bool in_CY;
  undefined4 in_cr6;
  undefined4 in_cr9;
  undefined4 in_cr11;
  undefined4 in_cr14;
  
  if (!in_CY || in_ZR) {
    coprocessor_moveto(5,7,7,unaff_r11,in_cr14,in_cr6);
  }
  coprocessor_moveto(5,7,7,unaff_r11,in_cr14,in_cr11);
  coprocessor_moveto(5,7,4,unaff_r11,in_cr9,in_cr14);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

