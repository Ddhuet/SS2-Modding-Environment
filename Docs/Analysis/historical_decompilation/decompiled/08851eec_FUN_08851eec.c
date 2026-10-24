
/* WARNING: Control flow encountered bad instruction data */

void FUN_08851eec(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 extraout_r1;
  undefined4 extraout_r1_00;
  undefined4 extraout_r1_01;
  undefined4 extraout_r1_02;
  undefined4 extraout_r3;
  undefined4 extraout_r3_00;
  undefined4 extraout_r3_01;
  undefined4 extraout_r3_02;
  undefined4 unaff_r4;
  undefined4 unaff_r5;
  undefined4 unaff_r8;
  undefined4 *unaff_r10;
  int unaff_lr;
  char in_NG;
  undefined1 in_ZR;
  undefined1 in_CY;
  char in_OV;
  undefined4 in_cr13;
  undefined4 in_cr14;
  undefined4 in_cr15;
  
  if (in_NG == in_OV) {
    unaff_lr = 0x8851ef0;
    func_0x07f7f3ec();
    param_2 = extraout_r1;
    param_4 = extraout_r3;
  }
  if (in_NG != in_OV) {
    unaff_lr = 0x8851ef4;
    func_0x077833f0();
    param_2 = extraout_r1_00;
    param_4 = extraout_r3_00;
  }
  if (in_NG != in_OV) {
    unaff_lr = 0x8851ef8;
    func_0x07b833f4();
    param_2 = extraout_r1_01;
    param_4 = extraout_r3_01;
  }
  if (in_NG != in_OV) {
    coprocessor_storelong(5,in_cr13,&stack0x00000000);
  }
  if (!(bool)in_ZR && in_NG == in_OV) {
    coprocessor_loadlong(5,in_cr13,&stack0x00000000);
    register0x00000054 = (BADSPACEBASE *)coprocessor_movefromRt(5,6,1,in_cr14,in_cr15);
  }
  if ((bool)in_OV) {
    coprocessor_storelong(5,in_cr14,unaff_lr + 0xfc);
  }
  if (in_NG != in_OV) {
    func_0x077433f8();
    param_2 = extraout_r1_02;
    param_4 = extraout_r3_02;
  }
  if (in_NG != in_OV) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if ((bool)in_CY && !(bool)in_ZR) {
    *unaff_r10 = param_2;
    unaff_r10[1] = param_4;
    unaff_r10[2] = unaff_r4;
    unaff_r10[3] = unaff_r5;
    unaff_r10[4] = unaff_r8;
    unaff_r10[5] = unaff_r10;
    unaff_r10[6] = register0x00000054;
    unaff_r10[7] = 0x8851f18;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

