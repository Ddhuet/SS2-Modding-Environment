
/* WARNING: Control flow encountered bad instruction data */

void FUN_082e770a(void)

{
  char in_NG;
  char in_OV;
  undefined4 in_cr5;
  undefined4 in_cr11;
  undefined4 in_cr14;
  
  if (in_NG != in_OV) {
    coprocessor_function(5,10,5,in_cr11,in_cr14,in_cr5);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

