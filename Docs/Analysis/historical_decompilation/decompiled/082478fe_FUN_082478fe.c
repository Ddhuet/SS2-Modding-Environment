
/* WARNING: Control flow encountered bad instruction data */

void FUN_082478fe(void)

{
  char in_NG;
  bool in_ZR;
  char in_OV;
  undefined4 in_cr5;
  undefined4 in_cr9;
  undefined4 in_cr11;
  
  if (!in_ZR && in_NG == in_OV) {
    coprocessor_function(5,0xc,5,in_cr11,in_cr5,in_cr9);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

