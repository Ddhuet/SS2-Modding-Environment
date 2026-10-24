
/* WARNING: Control flow encountered bad instruction data */

void FUN_087d8c44(void)

{
  undefined4 unaff_r9;
  int unaff_r11;
  bool in_NG;
  bool in_ZR;
  bool in_CY;
  char in_OV;
  undefined4 in_cr8;
  undefined4 in_cr11;
  
  if (in_NG != (bool)in_OV) {
    unaff_r11 = unaff_r11 + 0x2ec;
    coprocessor_load(5,in_cr11,unaff_r11);
  }
  if (!in_NG) {
    unaff_r9 = *(undefined4 *)(unaff_r11 + 0x10);
  }
  if (in_NG == (bool)in_OV) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (!in_NG) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (in_CY && !in_ZR) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  coprocessor_storelong(7,in_cr8,unaff_r9);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

