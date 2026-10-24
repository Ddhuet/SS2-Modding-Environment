
/* WARNING: Control flow encountered bad instruction data */

void FUN_08835db6(void)

{
  undefined1 *unaff_r5;
  undefined4 unaff_r10;
  undefined1 unaff_r11;
  bool in_NG;
  bool in_ZR;
  char in_OV;
  undefined4 in_cr12;
  
  if (!in_NG) {
    *unaff_r5 = unaff_r11;
  }
  if (in_NG == (bool)in_OV) {
    coprocessor_storelong(0xd,in_cr12,unaff_r10);
  }
  if (in_ZR || in_NG != (bool)in_OV) {
    software_interrupt(0xeb4596);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

