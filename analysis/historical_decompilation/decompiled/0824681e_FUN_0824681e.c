
/* WARNING: Control flow encountered bad instruction data */

void FUN_0824681e(void)

{
  int in_r3;
  char in_NG;
  char in_OV;
  undefined4 in_cr11;
  
  if (in_NG != in_OV) {
    coprocessor_load(5,in_cr11,in_r3 + 0x37c);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

