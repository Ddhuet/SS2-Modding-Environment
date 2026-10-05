
/* WARNING: Control flow encountered bad instruction data */

void FUN_080ec80e(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  int unaff_r8;
  char in_NG;
  undefined1 in_ZR;
  char in_OV;
  undefined4 extraout_s0;
  undefined4 extraout_s1;
  undefined4 extraout_s2;
  undefined4 extraout_s3;
  undefined4 extraout_s4;
  undefined4 extraout_s5;
  undefined4 extraout_s6;
  undefined4 extraout_s7;
  
  if (in_NG == in_OV) {
    func_0x06d99eee();
    param_1 = extraout_s0;
    param_2 = extraout_s1;
    param_3 = extraout_s2;
    param_4 = extraout_s3;
    param_5 = extraout_s4;
    param_6 = extraout_s5;
    param_7 = extraout_s6;
    param_8 = extraout_s7;
  }
  if ((bool)in_ZR || in_NG != in_OV) {
    param_1 = *(undefined4 *)(unaff_r8 + 0x1c);
    param_2 = *(undefined4 *)(unaff_r8 + 0x20);
    param_3 = *(undefined4 *)(unaff_r8 + 0x24);
    param_4 = *(undefined4 *)(unaff_r8 + 0x28);
    param_5 = *(undefined4 *)(unaff_r8 + 0x2c);
    param_6 = *(undefined4 *)(unaff_r8 + 0x30);
    param_7 = *(undefined4 *)(unaff_r8 + 0x34);
    param_8 = *(undefined4 *)(unaff_r8 + 0x38);
  }
  if (in_NG != in_OV) {
    func_0x072a1f9e(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

