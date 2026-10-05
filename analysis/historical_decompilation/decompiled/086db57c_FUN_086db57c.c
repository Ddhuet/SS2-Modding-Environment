
/* WARNING: Control flow encountered bad instruction data */

void FUN_086db57c(void)

{
  undefined1 *unaff_r5;
  undefined1 unaff_r11;
  char in_NG;
  bool in_ZR;
  char in_OV;
  
  if (in_NG != in_OV) {
    *unaff_r5 = unaff_r11;
  }
  if (in_ZR || in_NG != in_OV) {
    software_interrupt(0xa76f11);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

