
/* WARNING: Control flow encountered bad instruction data */

void FUN_081d5a2e(void)

{
  char in_NG;
  bool in_ZR;
  bool in_CY;
  char in_OV;
  undefined4 in_cr9;
  undefined4 in_cr15;
  
  if (in_ZR || in_NG != in_OV) {
    if (in_CY) {
      coprocessor_movefromRt(3,1,1,in_cr15,in_cr9);
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

