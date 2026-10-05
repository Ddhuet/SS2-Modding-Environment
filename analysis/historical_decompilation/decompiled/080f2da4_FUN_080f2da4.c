
/* WARNING: Control flow encountered bad instruction data */

void FUN_080f2da4(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int unaff_r4;
  undefined4 unaff_r5;
  undefined4 unaff_r9;
  undefined4 unaff_r10;
  undefined4 unaff_r11;
  undefined4 *in_r12;
  undefined4 *unaff_lr;
  bool in_NG;
  bool in_ZR;
  bool in_CY;
  char in_OV;
  undefined4 in_cr9;
  undefined4 in_cr11;
  undefined4 in_cr15;
  
  if (in_ZR) {
    coprocessor_loadlong(5,in_cr11,&stack0x000002ac);
  }
  else {
    *(undefined4 **)(unaff_r4 + -4) = unaff_lr;
    *(undefined4 **)(unaff_r4 + -8) = in_r12;
    *(undefined4 *)(unaff_r4 + -0xc) = unaff_r10;
    *(undefined4 *)(unaff_r4 + -0x10) = unaff_r9;
    *(undefined4 *)(unaff_r4 + -0x14) = unaff_r5;
    *(int *)(unaff_r4 + -0x18) = unaff_r4;
    *(undefined4 *)(unaff_r4 + -0x1c) = param_4;
    *(undefined4 *)(unaff_r4 + -0x20) = param_3;
    *(undefined4 *)(unaff_r4 + -0x24) = param_2;
    *(undefined4 *)(unaff_r4 + -0x28) = param_1;
  }
  if (!in_ZR && in_NG == (bool)in_OV) {
    *in_r12 = unaff_r11;
  }
  if (!in_NG) {
    *unaff_lr = param_3;
    unaff_lr[1] = param_4;
  }
  if (in_NG == (bool)in_OV) {
    coprocessor_function(0xc,0xc,1,in_cr15,in_cr9,in_cr15);
  }
  if (!in_CY) {
    func_0x0842aca4();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

