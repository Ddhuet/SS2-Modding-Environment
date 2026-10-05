
/* WARNING: Control flow encountered bad instruction data */

void FUN_081050a4(void)

{
  int unaff_r7;
  undefined1 unaff_r11;
  bool in_ZR;
  
  if (in_ZR) {
    *(undefined1 *)(unaff_r7 + 0x5da) = unaff_r11;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

