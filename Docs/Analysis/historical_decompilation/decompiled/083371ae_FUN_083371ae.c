
/* WARNING: Control flow encountered bad instruction data */

void FUN_083371ae(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined1 *param_4)

{
  int unaff_r5;
  undefined4 unaff_r6;
  undefined4 unaff_r7;
  undefined4 unaff_r8;
  undefined4 unaff_r10;
  undefined4 in_r12;
  char in_NG;
  bool in_ZR;
  char in_OV;
  
  if (in_ZR || in_NG != in_OV) {
    unaff_r5 = unaff_r5 + 100;
  }
  else {
    *param_1 = param_2;
    param_1[1] = param_3;
    param_1[2] = unaff_r6;
    param_1[3] = unaff_r7;
    param_1[4] = unaff_r8;
    param_1[5] = unaff_r10;
    param_1[6] = in_r12;
    param_1[7] = register0x00000054;
    param_1[8] = 0x83371b6;
  }
  if (!in_ZR) {
    *param_4 = 0;
  }
  UnsignedSaturate(unaff_r5 << 0x1e,0xe);
  UnsignedDoesSaturate(unaff_r5 << 0x1e,0xe);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

