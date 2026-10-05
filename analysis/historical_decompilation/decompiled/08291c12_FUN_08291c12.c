
/* WARNING: Control flow encountered bad instruction data */

void FUN_08291c12(void)

{
  undefined1 *unaff_r6;
  undefined1 unaff_r11;
  char in_NG;
  bool in_ZR;
  char in_OV;
  
  if (in_ZR || in_NG != in_OV) {
    *unaff_r6 = unaff_r11;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

