
/* WARNING: Control flow encountered bad instruction data */

undefined4 FUN_081b5cc8(void)

{
  undefined4 unaff_r11;
  bool in_ZR;
  bool in_CY;
  
  if (!in_CY) {
    uRam081b5cd0 = unaff_r11;
  }
  if (!in_ZR) {
    return uRam081b5cb4;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

