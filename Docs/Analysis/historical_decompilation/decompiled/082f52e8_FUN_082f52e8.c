
/* WARNING: Control flow encountered bad instruction data */

void FUN_082f52e8(void)

{
  int unaff_r6;
  undefined4 unaff_r11;
  int unaff_lr;
  bool in_CY;
  
  if (!in_CY) {
    *(undefined4 *)(unaff_r6 + unaff_lr * -0x400) = unaff_r11;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

