
/* WARNING: Control flow encountered bad instruction data */

undefined4 FUN_086740a8(void)

{
  int unaff_r5;
  int unaff_r9;
  undefined1 unaff_r11;
  bool in_NG;
  bool in_ZR;
  char in_OV;
  
  if (!in_NG) {
    *(undefined1 *)(unaff_r9 + 0x5ca) = unaff_r11;
  }
  if (in_ZR || in_NG != (bool)in_OV) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  return *(undefined4 *)(unaff_r5 + -0x1c);
}

