
/* WARNING: Control flow encountered bad instruction data */

void FUN_08219a0a(void)

{
  undefined4 unaff_r11;
  char in_NG;
  bool in_ZR;
  char in_OV;
  undefined4 in_cr6;
  undefined4 in_cr11;
  
  if (in_NG == in_OV) {
    if (!in_ZR && in_NG == in_OV) {
      coprocessor_moveto(0xf,6,5,unaff_r11,in_cr6,in_cr11);
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  return;
}

