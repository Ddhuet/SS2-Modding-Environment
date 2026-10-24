
/* WARNING: Control flow encountered bad instruction data */

void FUN_081f9520(void)

{
  int unaff_r9;
  undefined4 unaff_lr;
  char in_NG;
  char in_OV;
  undefined4 in_cr7;
  undefined4 in_cr9;
  undefined4 in_cr11;
  
  if (in_NG != in_OV) {
    coprocessor_load(5,in_cr11,unaff_r9 + 0x2c4);
  }
  coprocessor_moveto(0,7,6,unaff_lr,in_cr7,in_cr9);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

