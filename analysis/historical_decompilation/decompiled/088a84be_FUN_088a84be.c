
/* WARNING: Control flow encountered bad instruction data */

void FUN_088a84be(void)

{
  int unaff_r7;
  undefined1 unaff_r11;
  char in_NG;
  bool in_OV;
  
  if ((bool)in_NG == in_OV) {
    *(undefined1 *)(unaff_r7 + -0x5aa) = unaff_r11;
  }
  if (!in_OV) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

