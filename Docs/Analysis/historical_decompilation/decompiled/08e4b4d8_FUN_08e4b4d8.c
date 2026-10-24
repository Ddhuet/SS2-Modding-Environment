
/* WARNING: Control flow encountered bad instruction data */

void FUN_08e4b4d8(void)

{
  char in_NG;
  bool in_ZR;
  bool in_CY;
  char in_OV;
  
  if (!in_CY || in_ZR) {
    return;
  }
  if (in_NG != in_OV) {
    if (in_NG != in_OV) {
      func_0x0928fa38();
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

