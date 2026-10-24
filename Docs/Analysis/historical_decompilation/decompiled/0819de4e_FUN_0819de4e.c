
/* WARNING: Control flow encountered bad instruction data */

void FUN_0819de4e(void)

{
  bool in_ZR;
  undefined4 in_cr2;
  undefined4 in_cr6;
  
  if (in_ZR) {
    coprocessor_function(6,2,0,in_cr2,in_cr6,in_cr6);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

