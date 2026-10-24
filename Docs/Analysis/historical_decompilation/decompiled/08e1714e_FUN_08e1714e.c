
/* WARNING: Control flow encountered bad instruction data */

void FUN_08e1714e(void)

{
  undefined4 in_r3;
  undefined4 unaff_r4;
  undefined4 unaff_r5;
  undefined4 *unaff_r7;
  undefined4 unaff_r8;
  undefined4 unaff_r10;
  undefined4 in_r12;
  char in_NG;
  bool in_OV;
  undefined4 in_cr4;
  undefined4 in_cr7;
  
  if (!in_OV) {
    *unaff_r7 = in_r3;
    unaff_r7[1] = unaff_r4;
    unaff_r7[2] = unaff_r5;
    unaff_r7[3] = unaff_r7;
    unaff_r7[4] = unaff_r8;
    unaff_r7[5] = unaff_r10;
    unaff_r7[6] = in_r12;
    unaff_r7[7] = register0x00000054;
    unaff_r7[8] = 0x8e17156;
    unaff_r7 = unaff_r7 + 9;
  }
  if ((bool)in_NG != in_OV) {
    coprocessor_moveto(6,5,3,unaff_r7,in_cr4,in_cr7);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

