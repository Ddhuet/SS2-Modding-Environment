
/* WARNING: Control flow encountered bad instruction data */

void FUN_080d2d8a(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4)

{
  undefined4 unaff_r4;
  undefined4 unaff_r5;
  undefined4 unaff_r7;
  undefined4 unaff_r8;
  undefined4 unaff_r9;
  undefined4 unaff_r10;
  undefined4 unaff_r11;
  undefined4 in_r12;
  char in_NG;
  bool in_ZR;
  char in_OV;
  
  if (in_NG != in_OV) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (in_ZR || in_NG != in_OV) {
    return;
  }
  *param_4 = param_1;
  param_4[1] = param_3;
  param_4[2] = param_4;
  param_4[3] = unaff_r4;
  param_4[4] = unaff_r5;
  param_4[5] = unaff_r7;
  param_4[6] = unaff_r8;
  param_4[7] = unaff_r9;
  param_4[8] = unaff_r10;
  param_4[9] = unaff_r11;
  param_4[10] = in_r12;
  param_4[0xb] = register0x00000054;
  param_4[0xc] = 0x80d2d96;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

