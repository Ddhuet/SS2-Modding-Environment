
/* WARNING: Control flow encountered bad instruction data */

void FUN_08d26ac8(void)

{
  int unaff_r7;
  undefined1 unaff_r11;
  bool in_OV;
  
  if (in_OV) {
    *(undefined1 *)(unaff_r7 + -0x525) = unaff_r11;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

