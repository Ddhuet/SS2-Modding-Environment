
/* WARNING: Control flow encountered bad instruction data */

void FUN_08289532(void)

{
  char in_NG;
  bool in_ZR;
  char in_OV;
  
  if (in_NG != in_OV) {
    return;
  }
  if (in_ZR) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

