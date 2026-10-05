
/* WARNING: Control flow encountered bad instruction data */

void FUN_086098e0(void)

{
  undefined1 unaff_r11;
  char in_NG;
  bool in_CY;
  char in_OV;
  
  if (in_NG != in_OV) {
    uRam08609eb8 = unaff_r11;
  }
  if (!in_CY) {
    software_interrupt(0x305378);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

