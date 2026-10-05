
/* WARNING: Control flow encountered bad instruction data */

void FUN_08211c12(void)

{
  undefined4 unaff_r4;
  undefined4 unaff_r5;
  int unaff_r9;
  undefined4 unaff_r11;
  int unaff_lr;
  bool in_NG;
  bool in_ZR;
  bool in_CY;
  bool in_OV;
  undefined4 in_cr4;
  undefined4 in_cr11;
  undefined4 in_cr13;
  undefined4 in_cr14;
  undefined4 in_cr15;
  
  if (!in_ZR && in_NG == in_OV) {
    software_interrupt(0xc2b5aa);
  }
  if (in_ZR) {
    unaff_lr = 0;
  }
  if (in_CY) {
    coprocessor_moveto(0xe,7,6,unaff_r11,in_cr14,in_cr13);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (in_OV) {
    coprocessor_moveto(4,3,1,unaff_r5,in_cr4,in_cr15);
  }
  if (in_NG) {
    unaff_r9 = *(int *)(unaff_lr + -0xc);
    unaff_r4 = *(undefined4 *)(unaff_lr + -0x1c);
  }
  coprocessor_store(0,in_cr11,unaff_r4);
  if (in_NG != in_OV) {
    SignedSaturate(unaff_r9 << 0x19,7);
    SignedDoesSaturate(unaff_r9 << 0x19,7);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

