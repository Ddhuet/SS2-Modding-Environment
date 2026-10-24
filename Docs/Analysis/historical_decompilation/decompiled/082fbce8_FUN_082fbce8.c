
/* WARNING: Control flow encountered bad instruction data */

void FUN_082fbce8(void)

{
  int unaff_r10;
  undefined1 unaff_r11;
  char in_NG;
  bool in_ZR;
  bool in_CY;
  char in_OV;
  
  if (!in_CY || in_ZR) {
    *(undefined1 *)(unaff_r10 + 0x589) = unaff_r11;
  }
  if (in_NG != in_OV) {
    software_interrupt(0x8b9eb3);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

