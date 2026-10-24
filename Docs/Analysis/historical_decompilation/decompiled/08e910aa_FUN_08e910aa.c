
/* WARNING: Control flow encountered bad instruction data */

void FUN_08e910aa(void)

{
  int in_r3;
  int unaff_r4;
  undefined1 unaff_r11;
  bool in_NG;
  
  if (in_NG) {
    *(undefined1 *)(unaff_r4 - (in_r3 >> 10)) = unaff_r11;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

