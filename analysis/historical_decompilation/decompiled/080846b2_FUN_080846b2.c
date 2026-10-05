
/* WARNING: Control flow encountered bad instruction data */

void FUN_080846b2(void)

{
  bool in_CY;
  undefined4 in_cr1;
  undefined4 in_cr3;
  undefined4 in_cr6;
  
  if (in_CY) {
    coprocessor_function(8,6,2,in_cr1,in_cr3,in_cr6);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

