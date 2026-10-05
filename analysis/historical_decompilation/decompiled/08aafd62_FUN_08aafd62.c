
/* WARNING: Control flow encountered bad instruction data */

void FUN_08aafd62(void)

{
  char in_NG;
  bool in_ZR;
  bool in_CY;
  char in_OV;
  
  if (in_CY && !in_ZR) {
    if (in_NG == in_OV) {
      func_0x07958b8e();
    }
    if (in_NG != in_OV) {
      func_0x07998fd6();
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

