
/* WARNING: Control flow encountered bad instruction data */

void FUN_08da5552(void)

{
  int unaff_r5;
  undefined1 unaff_r11;
  bool in_NG;
  
  if (in_NG) {
    *(undefined1 *)(unaff_r5 + -0x544) = unaff_r11;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

