
/* WARNING: Control flow encountered bad instruction data */

void FUN_082f7004(void)

{
  bool in_ZR;
  bool in_CY;
  undefined4 in_cr4;
  undefined4 in_cr6;
  undefined4 in_cr11;
  
  if (!in_CY || in_ZR) {
    coprocessor_function(5,10,6,in_cr11,in_cr6,in_cr4);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

