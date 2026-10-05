
/* WARNING: Control flow encountered bad instruction data */

void FUN_0854fce8(void)

{
  undefined1 *unaff_r4;
  undefined1 unaff_r11;
  bool in_OV;
  
  if (in_OV) {
    *unaff_r4 = unaff_r11;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

