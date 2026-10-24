
/* WARNING: Control flow encountered bad instruction data */

void FUN_0860c846(void)

{
  bool in_ZR;
  bool in_CY;
  undefined4 in_cr1;
  undefined4 in_cr11;
  undefined4 in_cr15;
  
  if (in_CY && !in_ZR) {
    coprocessor_function(5,1,0,in_cr11,in_cr1,in_cr15);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

