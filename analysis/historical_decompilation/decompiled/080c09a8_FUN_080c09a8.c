
/* WARNING: Control flow encountered bad instruction data */

void FUN_080c09a8(void)

{
  undefined4 unaff_r11;
  int unaff_lr;
  bool in_ZR;
  
  if (!in_ZR) {
    *(undefined4 *)(unaff_lr + -0x529) = unaff_r11;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

