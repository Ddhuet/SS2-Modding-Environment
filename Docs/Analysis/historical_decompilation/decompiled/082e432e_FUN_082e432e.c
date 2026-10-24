
/* WARNING: Control flow encountered bad instruction data */

undefined8 FUN_082e432e(void)

{
  int unaff_r11;
  char in_NG;
  bool in_ZR;
  char in_OV;
  
  if (in_NG != in_OV) {
    return uRam082e433a;
  }
  if (in_ZR) {
    *(undefined1 *)(unaff_r11 + 0x5c0) = (char)(undefined1 *)(unaff_r11 + 0x5c0);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

