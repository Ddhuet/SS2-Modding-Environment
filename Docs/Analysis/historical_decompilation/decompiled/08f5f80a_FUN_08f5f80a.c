
/* WARNING: Control flow encountered bad instruction data */

void FUN_08f5f80a(void)

{
  int unaff_r4;
  undefined1 unaff_r11;
  bool in_OV;
  
  if (!in_OV) {
    *(undefined1 *)(unaff_r4 + -0x555) = unaff_r11;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

