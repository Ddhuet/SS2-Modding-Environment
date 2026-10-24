
/* WARNING: Control flow encountered bad instruction data */

void FUN_086e2416(void)

{
  undefined4 *unaff_r6;
  undefined4 unaff_r11;
  char in_NG;
  bool in_ZR;
  bool in_OV;
  
  if ((bool)in_NG != in_OV) {
    *unaff_r6 = unaff_r11;
  }
  if (!in_ZR) {
    software_interrupt(0x5e0639);
  }
  if (!in_OV) {
    software_interrupt(0x330634);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

