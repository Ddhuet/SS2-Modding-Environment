
/* WARNING: Control flow encountered bad instruction data */

void FUN_08192afc(void)

{
  int unaff_r6;
  undefined4 unaff_r7;
  undefined4 unaff_r9;
  undefined4 unaff_lr;
  char in_NG;
  bool in_ZR;
  char in_OV;
  undefined4 in_cr3;
  undefined4 in_cr7;
  
  if (in_NG != in_OV) {
    coprocessor_movefromRt(5,5,5,in_cr7,in_cr3);
  }
  if (!in_ZR && in_NG == in_OV) {
    *(int *)unaff_r6 = unaff_r6;
    *(undefined4 *)(unaff_r6 + 4) = unaff_r7;
    *(undefined4 *)(unaff_r6 + 8) = unaff_r9;
    *(undefined4 *)(unaff_r6 + 0xc) = unaff_lr;
    *(undefined4 *)(unaff_r6 + 0x10) = 0x8192b08;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

