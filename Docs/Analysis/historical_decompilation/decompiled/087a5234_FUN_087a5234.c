
/* WARNING: Control flow encountered bad instruction data */

void FUN_087a5234(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 unaff_r4;
  undefined4 unaff_r5;
  undefined4 unaff_r6;
  undefined4 unaff_r7;
  undefined4 *unaff_r8;
  undefined4 unaff_r9;
  undefined4 unaff_r10;
  undefined4 unaff_r11;
  int in_r12;
  char in_NG;
  bool in_ZR;
  bool in_CY;
  char in_OV;
  undefined4 in_cr14;
  
  if (in_CY && !in_ZR) {
    *unaff_r8 = param_1;
    unaff_r8[1] = param_3;
    unaff_r8[2] = unaff_r4;
    unaff_r8[3] = unaff_r6;
    unaff_r8[4] = unaff_r8;
    unaff_r8[5] = unaff_r10;
    unaff_r8[6] = in_r12;
    unaff_r8[7] = register0x00000054;
    unaff_r8[8] = 0x87a523c;
    *unaff_r8 = param_1;
    unaff_r8[1] = param_2;
    unaff_r8[2] = unaff_r4;
    unaff_r8[3] = unaff_r5;
    unaff_r8[4] = unaff_r8;
    unaff_r8[5] = unaff_r9;
    unaff_r8[6] = in_r12;
    unaff_r8[7] = register0x00000054;
    unaff_r8[8] = 0x87a5240;
    *unaff_r8 = param_3;
    unaff_r8[1] = param_4;
    unaff_r8[2] = unaff_r4;
    unaff_r8[3] = unaff_r5;
    unaff_r8[4] = unaff_r7;
    unaff_r8[5] = unaff_r8;
    unaff_r8[6] = unaff_r9;
    unaff_r8[7] = unaff_r11;
    unaff_r8[8] = in_r12;
    unaff_r8[9] = register0x00000054;
    unaff_r8[10] = 0x87a5244;
  }
  if (in_ZR || in_NG != in_OV) {
    coprocessor_storelong(0xd,in_cr14,in_r12 + 0x330);
    coprocessor_loadlong(0xd,in_cr14,&stack0x00000370);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

