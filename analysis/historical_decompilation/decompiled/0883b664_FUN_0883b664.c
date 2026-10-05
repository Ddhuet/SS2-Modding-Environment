
/* WARNING: Control flow encountered bad instruction data */

void FUN_0883b664(void)

{
  undefined1 *unaff_r8;
  undefined1 unaff_r11;
  bool in_NG;
  
  if (in_NG) {
    *unaff_r8 = unaff_r11;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

