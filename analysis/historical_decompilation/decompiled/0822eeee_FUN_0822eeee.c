
/* WARNING: Control flow encountered bad instruction data */

void FUN_0822eeee(void)

{
  int unaff_r9;
  undefined4 unaff_r11;
  char in_NG;
  bool in_ZR;
  char in_OV;
  
  if (in_NG == in_OV) {
    *(undefined4 *)(unaff_r9 + 0x5cc) = unaff_r11;
  }
  if (in_ZR || in_NG != in_OV) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

