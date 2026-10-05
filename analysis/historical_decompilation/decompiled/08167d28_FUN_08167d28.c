
/* WARNING: Control flow encountered bad instruction data */

void FUN_08167d28(void)

{
  undefined4 in_r3;
  undefined4 unaff_r4;
  undefined4 unaff_r9;
  int unaff_r10;
  undefined4 unaff_lr;
  char in_NG;
  bool in_ZR;
  bool in_CY;
  char in_OV;
  
  if (in_ZR || in_NG != in_OV) {
    return;
  }
  if (in_CY) {
    *(undefined4 *)(unaff_r10 + -4) = unaff_lr;
    *(int *)(unaff_r10 + -8) = unaff_r10;
    *(undefined4 *)(unaff_r10 + -0xc) = unaff_r9;
    *(undefined4 *)(unaff_r10 + -0x10) = unaff_r4;
    *(undefined4 *)(unaff_r10 + -0x14) = in_r3;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

