
/* WARNING: Control flow encountered bad instruction data */

void FUN_0814e76e(void)

{
  char in_NG;
  bool in_ZR;
  char in_OV;
  undefined4 in_cr6;
  undefined4 in_cr11;
  undefined4 in_cr15;
  
  if (!in_ZR && in_NG == in_OV) {
    coprocessor_function(0,0xd,6,in_cr15,in_cr6,in_cr11);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

