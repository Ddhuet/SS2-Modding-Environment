
/* WARNING: Control flow encountered bad instruction data */

void FUN_08734ca6(void)

{
  int unaff_r10;
  undefined4 unaff_r11;
  bool in_ZR;
  bool in_CY;
  
  if (!in_CY || in_ZR) {
    *(undefined4 *)(unaff_r10 + 0x500) = unaff_r11;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

