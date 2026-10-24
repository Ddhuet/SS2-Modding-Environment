
/* WARNING: Control flow encountered bad instruction data */

void FUN_0855bbd0(void)

{
  int unaff_r5;
  undefined1 unaff_r11;
  char in_NG;
  char in_OV;
  
  if (in_NG != in_OV) {
    *(undefined1 *)(unaff_r5 + -0x545) = unaff_r11;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

