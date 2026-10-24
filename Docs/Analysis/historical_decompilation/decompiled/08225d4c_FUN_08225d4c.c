
/* WARNING: Control flow encountered bad instruction data */

void FUN_08225d4c(void)

{
  char in_NG;
  char in_OV;
  undefined4 in_cr1;
  undefined4 in_cr12;
  
  if (in_NG == in_OV) {
    coprocessor_function(6,0xc,5,in_cr12,in_cr12,in_cr1);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

