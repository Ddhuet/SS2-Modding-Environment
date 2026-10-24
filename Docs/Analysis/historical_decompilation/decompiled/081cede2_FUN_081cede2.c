
/* WARNING: Control flow encountered bad instruction data */

void FUN_081cede2(undefined4 param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 unaff_r4;
  undefined4 unaff_r6;
  undefined4 unaff_r7;
  undefined4 unaff_r8;
  undefined4 unaff_r9;
  int unaff_r10;
  undefined4 unaff_lr;
  char in_NG;
  bool in_ZR;
  char in_OV;
  undefined4 in_cr14;
  
  if (!in_ZR && in_NG == in_OV) {
    unaff_r10 = unaff_r10 + 0x5c2;
  }
  *param_2 = param_1;
  param_2[1] = param_4;
  param_2[2] = unaff_r4;
  param_2[3] = unaff_r6;
  param_2[4] = unaff_r7;
  param_2[5] = unaff_r8;
  param_2[6] = unaff_r10;
  param_2[7] = register0x00000054;
  param_2[8] = unaff_lr;
  param_2[9] = 0x81cedee;
  if (!in_ZR && in_NG == in_OV) {
    coprocessor_storelong(0xc,in_cr14,unaff_r9);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

