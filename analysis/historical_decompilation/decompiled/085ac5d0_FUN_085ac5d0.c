
/* WARNING: Control flow encountered bad instruction data */

void FUN_085ac5d0(void)

{
  int unaff_r11;
  bool in_ZR;
  bool in_CY;
  undefined4 in_cr11;
  
  if (!in_CY || in_ZR) {
    coprocessor_loadlong(5,in_cr11,unaff_r11 + 0x154);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

