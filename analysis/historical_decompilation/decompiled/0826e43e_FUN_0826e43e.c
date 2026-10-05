
/* WARNING: Control flow encountered bad instruction data */

void FUN_0826e43e(void)

{
  char in_NG;
  bool in_ZR;
  char in_OV;
  undefined4 in_cr0;
  undefined4 in_cr4;
  undefined4 in_cr10;
  
  if (!in_ZR && in_NG == in_OV) {
    coprocessor_function(6,0xe,0,in_cr0,in_cr4,in_cr10);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

