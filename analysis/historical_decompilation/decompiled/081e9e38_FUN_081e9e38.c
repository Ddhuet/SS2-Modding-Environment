
/* WARNING: Control flow encountered bad instruction data */

void FUN_081e9e38(void)

{
  char in_NG;
  bool in_ZR;
  char in_OV;
  undefined4 in_cr1;
  undefined4 in_cr2;
  undefined4 in_cr7;
  undefined4 in_cr9;
  undefined4 in_cr11;
  undefined4 in_cr12;
  
  if (!in_ZR && in_NG == in_OV) {
    coprocessor_function(5,0xb,6,in_cr11,in_cr7,in_cr9);
  }
  coprocessor_function2(0xf,1,1,in_cr1,in_cr12,in_cr2);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

