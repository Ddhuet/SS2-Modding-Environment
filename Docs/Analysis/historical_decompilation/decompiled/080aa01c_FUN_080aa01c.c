
/* WARNING: Control flow encountered bad instruction data */

void FUN_080aa01c(void)

{
  undefined4 in_r3;
  int unaff_r4;
  undefined4 unaff_r5;
  undefined4 unaff_r6;
  undefined4 unaff_r8;
  int unaff_r10;
  undefined4 unaff_r11;
  undefined4 unaff_lr;
  bool in_NG;
  bool in_ZR;
  bool in_OV;
  undefined4 in_cr0;
  undefined4 in_cr2;
  undefined4 in_cr8;
  
  if (in_NG) {
    software_interrupt(0x5bb5f0);
  }
  if (in_OV) {
    *(undefined4 *)(unaff_r4 + -4) = unaff_lr;
    *(BADSPACEBASE **)(unaff_r4 + -8) = register0x00000054;
    *(undefined4 *)(unaff_r4 + -0xc) = unaff_r11;
    *(undefined4 *)(unaff_r4 + -0x10) = unaff_r5;
    *(int *)(unaff_r4 + -0x14) = unaff_r4;
    *(undefined4 *)(unaff_r4 + -0x18) = in_r3;
  }
  if (in_NG) {
    register0x00000054 = *(BADSPACEBASE **)(unaff_r10 + -8);
    unaff_r8 = *(undefined4 *)(unaff_r10 + -0x10);
  }
  else {
    coprocessor_function(2,8,0,in_cr2,in_cr8,in_cr0);
  }
  if (!in_ZR) {
    *(undefined4 *)register0x00000054 = unaff_r8;
    *(undefined4 *)((int)register0x00000054 + -4) = unaff_r6;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

