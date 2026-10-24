
/* WARNING: Control flow encountered bad instruction data */

void FUN_08e996fc(void)

{
  char *unaff_r11;
  bool in_NG;
  bool in_ZR;
  bool in_CY;
  char in_OV;
  
  if (in_NG) {
    *unaff_r11 = (char)unaff_r11 + -0x44;
  }
  if (!in_CY || in_ZR) {
    if (in_NG == (bool)in_OV) {
      func_0x0a3aac5c();
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

