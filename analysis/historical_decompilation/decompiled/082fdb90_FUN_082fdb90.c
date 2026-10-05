
/* WARNING: Control flow encountered bad instruction data */

void FUN_082fdb90(void)

{
  undefined4 in_r12;
  char in_NG;
  bool in_ZR;
  char in_OV;
  undefined4 in_cr11;
  
  if (in_ZR || in_NG != in_OV) {
    coprocessor_storelong(5,in_cr11,in_r12);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

