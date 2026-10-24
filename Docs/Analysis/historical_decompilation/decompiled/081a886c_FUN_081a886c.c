
/* WARNING: Control flow encountered bad instruction data */

void FUN_081a886c(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 extraout_r1;
  undefined4 extraout_r2;
  undefined4 extraout_r3;
  int unaff_r6;
  undefined4 unaff_r7;
  undefined4 unaff_r8;
  undefined4 *unaff_r9;
  undefined4 unaff_r10;
  undefined4 in_r12;
  undefined4 extraout_r12;
  undefined4 unaff_lr;
  char in_NG;
  undefined1 in_ZR;
  char in_OV;
  undefined4 in_cr1;
  undefined4 in_cr3;
  undefined4 in_cr9;
  
  if (!(bool)in_ZR) {
    unaff_lr = 0x81a8870;
    func_0x07d95d3c();
    param_3 = extraout_r2;
    in_r12 = extraout_r12;
  }
  if ((bool)in_ZR || in_NG != in_OV) {
    *unaff_r9 = param_3;
    unaff_r9[1] = unaff_r6;
    unaff_r9[2] = unaff_r7;
    unaff_r9[3] = unaff_r10;
    unaff_r9[4] = in_r12;
    unaff_r9[5] = register0x00000054;
    unaff_r9[6] = unaff_lr;
  }
  func_0x08aa00b2();
  if (in_NG == in_OV) {
    *(undefined4 *)(unaff_r6 + -4) = 0x81a8884;
    *(undefined4 *)(unaff_r6 + -8) = 0x81a8878;
    *(undefined4 *)(unaff_r6 + -0xc) = unaff_r8;
    *(undefined4 *)(unaff_r6 + -0x10) = extraout_r3;
    *(undefined4 *)(unaff_r6 + -0x14) = extraout_r1;
  }
  coprocessor_function(8,0xb,2,in_cr3,in_cr9,in_cr1);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

