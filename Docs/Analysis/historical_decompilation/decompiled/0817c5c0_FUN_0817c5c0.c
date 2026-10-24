
/* WARNING: Control flow encountered bad instruction data */

void FUN_0817c5c0(void)

{
  undefined4 unaff_r11;
  bool in_CY;
  undefined4 in_cr1;
  undefined4 in_cr9;
  
  if (!in_CY) {
    coprocessor_moveto(5,0,5,unaff_r11,in_cr9,in_cr1);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

