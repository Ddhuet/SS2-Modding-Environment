
/* WARNING: Control flow encountered bad instruction data */

void FUN_082fdbd4(void)

{
  undefined1 *in_r3;
  char in_NG;
  bool in_ZR;
  char in_OV;
  
  if (in_ZR || in_NG != in_OV) {
    *in_r3 = 0;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

