
/* WARNING: Control flow encountered bad instruction data */

void FUN_082966b8(void)

{
  undefined4 unaff_r9;
  char in_NG;
  bool in_ZR;
  bool in_CY;
  char in_OV;
  undefined4 in_cr4;
  undefined4 in_cr6;
  undefined4 in_cr9;
  undefined4 in_cr11;
  
  if (!in_CY || in_ZR) {
    coprocessor_function(5,10,6,in_cr11,in_cr6,in_cr9);
  }
  if (in_NG != in_OV) {
    coprocessor_moveto(0xc,5,4,unaff_r9,in_cr4,in_cr11);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

