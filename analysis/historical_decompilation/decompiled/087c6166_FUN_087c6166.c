
/* WARNING: Control flow encountered bad instruction data */

void FUN_087c6166(void)

{
  char *unaff_r5;
  char *unaff_r6;
  undefined1 *unaff_r7;
  char unaff_r8;
  int unaff_r9;
  undefined1 unaff_r11;
  bool in_NG;
  bool in_OV;
  
  if (in_NG) {
    *unaff_r7 = unaff_r11;
    *unaff_r6 = (char)unaff_r6 + -0x44;
    unaff_r7 = unaff_r7 + -0x564;
  }
  else {
    unaff_r5 = (char *)(uint)(byte)unaff_r7[-0x543];
  }
  if (in_OV) {
    *(char *)(unaff_r9 + -0xbda) = (char)unaff_r5;
    *unaff_r5 = unaff_r8;
    unaff_r5[(int)unaff_r7 * -0x20000] = (char)(char *)(unaff_r9 + -0xbda);
  }
  else {
    *unaff_r5 = (char)unaff_r5 + -0x56;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

