
/* WARNING: Control flow encountered bad instruction data */

void FUN_081a9c2e(void)

{
  int unaff_r9;
  undefined4 unaff_r11;
  char in_NG;
  bool in_ZR;
  char in_OV;
  undefined4 in_cr1;
  
  if (!in_ZR) {
    *(undefined4 *)(unaff_r9 + (int)&stack0x00000000 * -0x400) = unaff_r11;
  }
  if (in_ZR || in_NG != in_OV) {
    return;
  }
  if (!in_ZR) {
    coprocessor_storelong(9,in_cr1,0x81a9c42);
  }
  if (in_NG == in_OV) {
    software_interrupt(0x3514d0);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

