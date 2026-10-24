
/* WARNING: Control flow encountered bad instruction data */

void FUN_0873e60c(void)

{
  bool in_ZR;
  bool in_CY;
  undefined4 in_cr1;
  undefined4 in_cr11;
  
  if (in_CY && !in_ZR) {
    coprocessor_function(5,1,3,in_cr11,in_cr1,in_cr1);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

