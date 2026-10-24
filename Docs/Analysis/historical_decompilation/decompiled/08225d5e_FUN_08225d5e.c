
/* WARNING: Control flow encountered bad instruction data */

void FUN_08225d5e(void)

{
  int unaff_r9;
  undefined2 unaff_r11;
  bool in_ZR;
  
  if (!in_ZR) {
    *(undefined2 *)(unaff_r9 + 0x59) = unaff_r11;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

