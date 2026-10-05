
/* WARNING: Control flow encountered bad instruction data */

void FUN_087d56e8(void)

{
  undefined1 *unaff_r5;
  undefined1 unaff_r11;
  bool in_NG;
  
  if (in_NG) {
    *unaff_r5 = unaff_r11;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

