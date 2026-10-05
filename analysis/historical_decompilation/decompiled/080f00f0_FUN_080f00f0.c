
/* WARNING: Control flow encountered bad instruction data */

void FUN_080f00f0(void)

{
  char in_NG;
  char in_OV;
  undefined4 in_cr1;
  undefined4 in_cr7;
  undefined4 in_cr11;
  
  if (in_NG == in_OV) {
    coprocessor_function(5,0xb,7,in_cr11,in_cr7,in_cr1);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

