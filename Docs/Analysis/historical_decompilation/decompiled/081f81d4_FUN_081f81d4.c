
/* WARNING: Control flow encountered bad instruction data */

void FUN_081f81d4(void)

{
  undefined4 extraout_r1;
  int extraout_r2;
  int unaff_r4;
  undefined1 unaff_r5;
  undefined4 unaff_r8;
  undefined4 unaff_r10;
  undefined4 unaff_r11;
  undefined4 extraout_r12;
  undefined4 unaff_pc;
  char in_NG;
  bool in_ZR;
  undefined1 in_CY;
  char in_OV;
  undefined4 in_cr4;
  undefined4 in_cr5;
  undefined4 in_stack_00000000;
  
  if (!in_ZR && in_NG == in_OV) {
    unaff_r11 = in_stack_00000000;
  }
  func_0x07aae920();
  if (in_ZR) {
    coprocessor_moveto(0xc,0,7,unaff_pc,in_cr5,in_cr4);
  }
  if ((bool)in_CY) {
    *(undefined4 *)(unaff_r4 + -4) = extraout_r12;
    *(undefined4 *)(unaff_r4 + -8) = unaff_r11;
    *(undefined4 *)(unaff_r4 + -0xc) = unaff_r10;
    *(undefined4 *)(unaff_r4 + -0x10) = unaff_r8;
    *(int *)(unaff_r4 + -0x14) = unaff_r4;
    *(int *)(unaff_r4 + -0x18) = extraout_r2;
    *(undefined4 *)(unaff_r4 + -0x1c) = extraout_r1;
  }
  else {
    software_interrupt(0x39342f);
  }
  if ((bool)in_OV) {
    *(undefined1 *)(extraout_r2 + -0xf5b) = unaff_r5;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

