
/* WARNING: Control flow encountered bad instruction data */

void FUN_08e16380(undefined4 param_1,int param_2)

{
  int unaff_r5;
  undefined1 unaff_r11;
  char in_NG;
  bool in_ZR;
  char in_OV;
  undefined4 in_cr4;
  undefined4 in_cr11;
  
  if (in_NG != in_OV) {
    software_interrupt(0xa3b5b3);
  }
  if (!in_ZR && in_NG == in_OV) {
    *(undefined1 *)(param_2 + 0xbbb) = unaff_r11;
  }
  if (in_NG != in_OV) {
    coprocessor_movefromRt(1,5,5,in_cr11,in_cr4);
  }
  if (!in_ZR && in_NG == in_OV) {
    *(undefined1 *)(unaff_r5 + 0xba2) = unaff_r11;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

