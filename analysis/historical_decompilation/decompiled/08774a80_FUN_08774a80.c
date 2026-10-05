
/* WARNING: Control flow encountered bad instruction data */

void FUN_08774a80(void)

{
  int unaff_r8;
  undefined4 unaff_r11;
  bool in_ZR;
  
  if (!in_ZR) {
    *(undefined4 *)(unaff_r8 + -0x501) = unaff_r11;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

