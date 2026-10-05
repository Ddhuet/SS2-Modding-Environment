
/* WARNING: Control flow encountered bad instruction data */

void FUN_0823d086(void)

{
  bool in_CY;
  undefined4 in_cr2;
  undefined4 in_cr11;
  undefined4 in_cr13;
  
  if (!in_CY) {
    coprocessor_function(5,0xf,7,in_cr11,in_cr2,in_cr13);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

