
/* WARNING: Control flow encountered bad instruction data */

undefined4 FUN_081d2220(void)

{
  int unaff_r11;
  char in_NG;
  bool in_ZR;
  char in_OV;
  
  if (in_NG != in_OV) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (in_ZR || in_NG != in_OV) {
    return *(undefined4 *)(unaff_r11 + 4);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

