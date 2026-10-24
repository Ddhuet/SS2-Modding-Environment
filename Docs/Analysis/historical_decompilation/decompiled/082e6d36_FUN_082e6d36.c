
/* WARNING: Control flow encountered bad instruction data */

void FUN_082e6d36(undefined4 param_1,undefined4 param_2,undefined4 *param_3)

{
  undefined4 unaff_r4;
  undefined4 unaff_r5;
  undefined4 unaff_r7;
  undefined4 unaff_r8;
  undefined4 unaff_r10;
  undefined4 unaff_r11;
  undefined4 in_r12;
  undefined4 unaff_lr;
  bool in_NG;
  char in_OV;
  undefined4 in_cr9;
  undefined4 in_cr13;
  
  if (in_NG != (bool)in_OV) {
    unaff_r11 = coprocessor_movefromRt(5,5,6,in_cr9,in_cr13);
  }
  if (in_NG) {
    *param_3 = 0x82e6d42;
    param_3[-1] = unaff_lr;
    param_3[-2] = in_r12;
    param_3[-3] = unaff_r11;
    param_3[-4] = unaff_r10;
    param_3[-5] = unaff_r8;
    param_3[-6] = unaff_r7;
    param_3[-7] = unaff_r5;
    param_3[-8] = unaff_r4;
    param_3[-9] = param_3;
    param_3[-10] = param_2;
    param_3[-0xb] = param_1;
  }
  func_0x08db9644();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

