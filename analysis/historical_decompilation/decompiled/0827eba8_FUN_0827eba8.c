
/* WARNING: Control flow encountered bad instruction data */

void FUN_0827eba8(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 extraout_r2;
  undefined4 extraout_r3;
  undefined4 *unaff_r4;
  int unaff_r5;
  undefined4 *unaff_r6;
  undefined4 unaff_r7;
  undefined4 unaff_r10;
  undefined4 unaff_lr;
  char in_NG;
  undefined1 in_ZR;
  char in_OV;
  undefined4 in_cr3;
  undefined4 in_cr9;
  undefined4 in_cr12;
  undefined4 in_cr13;
  undefined4 in_cr14;
  
  if (in_NG == in_OV) {
    coprocessor_movefromRt(5,5,5,in_cr3,in_cr12);
    *unaff_r6 = unaff_r10;
    unaff_r4 = unaff_r4 + 0x129;
    *unaff_r4 = unaff_r10;
    unaff_lr = 0x827ebb8;
    func_0x06ca8e4c();
    param_3 = extraout_r2;
    param_4 = extraout_r3;
  }
  if (in_NG != in_OV) {
    unaff_r4 = (undefined4 *)((int)unaff_r4 + ((uint)&stack0x00000000 >> 3));
  }
  if ((bool)in_ZR || in_NG != in_OV) {
    coprocessor_function(3,0xd,6,in_cr13,in_cr9,in_cr14);
  }
  else {
    *(undefined4 *)(unaff_r5 + 4) = param_3;
    *(undefined4 *)(unaff_r5 + 8) = param_4;
    *(undefined4 **)(unaff_r5 + 0xc) = unaff_r4;
    *(int *)(unaff_r5 + 0x10) = unaff_r5;
    *(undefined4 *)(unaff_r5 + 0x14) = unaff_r7;
    *(undefined4 *)(unaff_r5 + 0x18) = unaff_lr;
    *(undefined4 *)(unaff_r5 + 0x1c) = 0x827ebc4;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

