
/* WARNING: Control flow encountered bad instruction data */

void FUN_0830fcc6(void)

{
  int *unaff_r11;
  bool in_ZR;
  bool in_CY;
  
  if (!in_CY || in_ZR) {
    *unaff_r11 = (int)unaff_r11 + 0x5be;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

