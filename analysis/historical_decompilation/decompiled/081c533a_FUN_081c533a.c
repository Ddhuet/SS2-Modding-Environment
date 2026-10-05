
/* WARNING: Control flow encountered bad instruction data */

void FUN_081c533a(void)

{
  char in_NG;
  char in_OV;
  undefined4 in_cr7;
  undefined4 in_cr11;
  undefined4 in_cr15;
  
  if (in_NG == in_OV) {
    coprocessor_function(5,0xb,5,in_cr11,in_cr7,in_cr15);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

