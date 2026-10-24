
/* WARNING: Control flow encountered bad instruction data */

void FUN_087bfd86(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 unaff_r4;
  undefined4 unaff_r5;
  int unaff_r7;
  int unaff_r8;
  undefined4 *unaff_r9;
  undefined4 unaff_r10;
  undefined4 unaff_lr;
  bool in_ZR;
  bool in_CY;
  bool in_OV;
  undefined4 in_cr0;
  
  if (in_OV) {
    coprocessor_storelong(0,in_cr0,unaff_lr);
  }
  if (!in_CY) {
    *(undefined1 *)(unaff_r7 + -0xdd5) = (char)(undefined1 *)(unaff_r7 + -0xdd5);
  }
  if (!in_OV) {
    unaff_lr = *(undefined4 *)(unaff_r8 + 0x18);
  }
  if (in_CY && !in_ZR) {
    *unaff_r9 = param_3;
    unaff_r9[1] = unaff_r4;
    unaff_r9[2] = unaff_r5;
    unaff_r9[3] = unaff_r8;
    unaff_r9[4] = unaff_r10;
    unaff_r9[5] = unaff_lr;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

