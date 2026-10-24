
/* WARNING: Control flow encountered bad instruction data */

void FUN_082f2232(void)

{
  bool in_CY;
  undefined4 in_cr6;
  undefined4 in_cr8;
  undefined4 in_cr11;
  
  if (in_CY) {
    coprocessor_function(5,0,5,in_cr11,in_cr6,in_cr8);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

