
/* WARNING: Control flow encountered bad instruction data */

void FUN_08068d0c(void)

{
  undefined4 unaff_r11;
  bool in_NG;
  undefined4 in_cr0;
  undefined4 in_cr9;
  
  if (in_NG) {
    coprocessor_moveto(5,0,3,unaff_r11,in_cr9,in_cr0);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

