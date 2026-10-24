
/* WARNING: Control flow encountered bad instruction data */

void FUN_086922e2(void)

{
  undefined4 unaff_r11;
  int unaff_lr;
  char in_NG;
  char in_OV;
  
  if (in_NG != in_OV) {
    *(undefined4 *)(unaff_lr + -0x52f) = unaff_r11;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

