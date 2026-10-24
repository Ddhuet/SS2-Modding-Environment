
/* WARNING: Control flow encountered bad instruction data */

void FUN_08a9db48(void)

{
  char in_NG;
  bool in_ZR;
  char in_OV;
  
  if (in_NG == in_OV) {
    if (!in_ZR) {
      func_0x07963170();
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

