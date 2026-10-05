
/* WARNING: Control flow encountered bad instruction data */

void FUN_08851b18(void)

{
  char in_NG;
  undefined1 in_ZR;
  char in_OV;
  
  if (in_NG != in_OV) {
    if (in_NG == in_OV) {
      func_0x0773f018();
    }
    if (in_NG != in_OV) {
      func_0x0773f018();
    }
    if (!(bool)in_ZR && in_NG == in_OV) {
      func_0x07743028();
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

