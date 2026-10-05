
/* WARNING: Control flow encountered bad instruction data */

void FUN_081c2efa(void)

{
  int unaff_r10;
  char in_NG;
  bool in_ZR;
  bool in_CY;
  char in_OV;
  undefined4 in_cr1;
  undefined4 in_cr14;
  undefined4 in_s8;
  undefined4 in_s9;
  undefined4 in_s10;
  undefined4 in_s11;
  undefined4 in_s12;
  undefined4 in_s13;
  undefined4 in_s14;
  undefined4 in_s15;
  undefined4 unaff_s16;
  undefined4 unaff_s17;
  undefined4 unaff_s18;
  undefined4 unaff_s19;
  undefined4 unaff_s20;
  undefined4 unaff_s21;
  undefined4 unaff_s22;
  undefined4 unaff_s23;
  undefined4 unaff_s24;
  undefined4 unaff_s25;
  undefined4 unaff_s26;
  undefined4 unaff_s27;
  undefined4 unaff_s28;
  undefined4 unaff_s29;
  
  if (in_NG != in_OV) {
    software_interrupt(0xc4b5a9);
  }
  if (in_ZR) {
    *(BADSPACEBASE **)(unaff_r10 + -0xc1) = register0x00000054;
  }
  else {
    coprocessor_movefromRt(0xc,0,7,in_cr1,in_cr14);
  }
  if (!in_CY) {
    *(undefined4 *)(unaff_r10 + -0xd8) = in_s8;
    *(undefined4 *)(unaff_r10 + -0xd4) = in_s9;
    *(undefined4 *)(unaff_r10 + -0xd0) = in_s10;
    *(undefined4 *)(unaff_r10 + -0xcc) = in_s11;
    *(undefined4 *)(unaff_r10 + -200) = in_s12;
    *(undefined4 *)(unaff_r10 + -0xc4) = in_s13;
    *(undefined4 *)(unaff_r10 + -0xc0) = in_s14;
    *(undefined4 *)(unaff_r10 + -0xbc) = in_s15;
    *(undefined4 *)(unaff_r10 + -0xb8) = unaff_s16;
    *(undefined4 *)(unaff_r10 + -0xb4) = unaff_s17;
    *(undefined4 *)(unaff_r10 + -0xb0) = unaff_s18;
    *(undefined4 *)(unaff_r10 + -0xac) = unaff_s19;
    *(undefined4 *)(unaff_r10 + -0xa8) = unaff_s20;
    *(undefined4 *)(unaff_r10 + -0xa4) = unaff_s21;
    *(undefined4 *)(unaff_r10 + -0xa0) = unaff_s22;
    *(undefined4 *)(unaff_r10 + -0x9c) = unaff_s23;
    *(undefined4 *)(unaff_r10 + -0x98) = unaff_s24;
    *(undefined4 *)(unaff_r10 + -0x94) = unaff_s25;
    *(undefined4 *)(unaff_r10 + -0x90) = unaff_s26;
    *(undefined4 *)(unaff_r10 + -0x8c) = unaff_s27;
    *(undefined4 *)(unaff_r10 + -0x88) = unaff_s28;
    *(undefined4 *)(unaff_r10 + -0x84) = unaff_s29;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

