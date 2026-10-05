
/* WARNING: Control flow encountered bad instruction data */

void FUN_08633872(int param_1)

{
  char in_NG;
  char in_OV;
  undefined4 in_cr8;
  
  if (in_NG == in_OV) {
    coprocessor_load(0,in_cr8,param_1 + 0x11c);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

