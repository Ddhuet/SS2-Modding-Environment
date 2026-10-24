
/* WARNING: Control flow encountered bad instruction data */

void FUN_0830dd88(void)

{
  int unaff_r8;
  int unaff_r9;
  int unaff_r11;
  undefined1 unaff_lr;
  char in_NG;
  bool in_ZR;
  bool in_CY;
  char in_OV;
  undefined4 in_cr11;
  undefined4 in_cr15;
  
  if (in_NG == in_OV) {
    unaff_r11 = *(int *)(unaff_r8 + 0x5d2);
  }
  if (!in_CY) {
    *(undefined1 *)(unaff_r11 + -0x9a8) = unaff_lr;
  }
  coprocessor_store(0,in_cr15,unaff_r9 + -0x44);
  if (in_ZR) {
    coprocessor_storelong(4,in_cr11,0x830dd9c);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

