
/* WARNING: Control flow encountered bad instruction data */

void FUN_08b27f50(void)

{
  int unaff_r4;
  char *unaff_r6;
  char *unaff_r11;
  char in_NG;
  bool in_OV;
  
  if ((bool)in_NG != in_OV) {
    *unaff_r11 = (char)unaff_r11 - (char)(unaff_r4 >> 10);
  }
  if (!in_OV) {
    *unaff_r6 = (char)unaff_r6 + 'a';
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

