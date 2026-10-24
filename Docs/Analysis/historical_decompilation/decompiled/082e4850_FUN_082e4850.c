
/* WARNING: Control flow encountered bad instruction data */

void FUN_082e4850(void)

{
  undefined4 *unaff_r6;
  undefined4 unaff_r11;
  bool in_NG;
  char in_OV;
  
  if (in_NG != (bool)in_OV) {
    unaff_r11 = 0x2e085848;
  }
  if (!in_NG) {
    *unaff_r6 = unaff_r11;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

