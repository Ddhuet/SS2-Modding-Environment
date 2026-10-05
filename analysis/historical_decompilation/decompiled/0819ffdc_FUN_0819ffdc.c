
/* WARNING: Control flow encountered bad instruction data */

void FUN_0819ffdc(void)

{
  undefined4 unaff_r11;
  bool in_ZR;
  undefined4 in_cr0;
  undefined4 in_cr13;
  
  if (in_ZR) {
    coprocessor_moveto(5,6,5,unaff_r11,in_cr13,in_cr0);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

