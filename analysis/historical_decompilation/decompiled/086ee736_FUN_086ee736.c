
/* WARNING: Control flow encountered bad instruction data */

void FUN_086ee736(void)

{
  bool in_CY;
  undefined4 in_cr5;
  undefined4 in_cr15;
  
  if (in_CY) {
    coprocessor_function(0xf,7,1,in_cr5,in_cr15,in_cr15);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

