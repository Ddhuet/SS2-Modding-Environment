
/* WARNING: Control flow encountered bad instruction data */

void FUN_082f7c9c(void)

{
  char in_NG;
  bool in_ZR;
  char in_OV;
  undefined4 in_cr1;
  undefined4 in_cr13;
  
  if (in_ZR || in_NG != in_OV) {
    coprocessor_movefromRt(6,6,5,in_cr1,in_cr13);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

