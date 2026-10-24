
/* WARNING: Control flow encountered bad instruction data */

void FUN_081f8456(undefined4 param_1,undefined4 param_2,int param_3,undefined4 *param_4)

{
  undefined4 unaff_r4;
  undefined4 unaff_r6;
  undefined4 unaff_r7;
  undefined4 unaff_r8;
  int unaff_r9;
  undefined4 unaff_r10;
  uint unaff_r11;
  uint in_r12;
  undefined4 unaff_lr;
  char in_NG;
  bool in_ZR;
  char in_OV;
  undefined4 in_cr11;
  undefined4 in_cr15;
  
  if (in_NG != in_OV) {
    coprocessor_load(5,in_cr11,unaff_r9 + 0x2c0);
  }
  if (in_ZR || in_NG != in_OV) {
    in_r12 = unaff_r11 & ~(param_3 >> 0xd);
  }
  *param_4 = param_1;
  param_4[1] = param_2;
  param_4[2] = param_3;
  param_4[3] = unaff_r4;
  param_4[4] = unaff_r6;
  param_4[5] = unaff_r7;
  param_4[6] = unaff_r8;
  param_4[7] = unaff_r10;
  param_4[8] = unaff_r11;
  param_4[9] = in_r12;
  param_4[10] = unaff_lr;
  param_4[0xb] = 0x81f8466;
  coprocessor_loadlong2(2,in_cr15,unaff_r7);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

