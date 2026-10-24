
/* WARNING: Control flow encountered bad instruction data */

void FUN_080e84fe(void)

{
  undefined4 in_r3;
  undefined4 unaff_r4;
  undefined4 unaff_r5;
  int unaff_r7;
  undefined4 unaff_r8;
  undefined4 unaff_r9;
  undefined4 unaff_r11;
  undefined4 in_r12;
  undefined4 unaff_lr;
  char in_NG;
  bool in_ZR;
  char in_OV;
  
  if (in_ZR || in_NG != in_OV) {
    software_interrupt(0x90b50e);
    *(undefined4 *)(unaff_r7 + -4) = unaff_lr;
    *(undefined4 *)(unaff_r7 + -8) = in_r12;
    *(undefined4 *)(unaff_r7 + -0xc) = unaff_r11;
    *(undefined4 *)(unaff_r7 + -0x10) = unaff_r9;
    *(undefined4 *)(unaff_r7 + -0x14) = unaff_r8;
    *(undefined4 *)(unaff_r7 + -0x18) = unaff_r5;
    *(undefined4 *)(unaff_r7 + -0x1c) = unaff_r4;
    *(undefined4 *)(unaff_r7 + -0x20) = in_r3;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

