
/* WARNING: Control flow encountered bad instruction data */

void FUN_087a51b0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 unaff_r4;
  undefined4 unaff_r5;
  undefined4 unaff_r6;
  undefined4 unaff_r7;
  undefined4 *unaff_r8;
  undefined4 unaff_r9;
  undefined4 unaff_r10;
  undefined4 unaff_r11;
  undefined4 in_r12;
  undefined4 unaff_pc;
  char in_NG;
  bool in_ZR;
  bool in_CY;
  char in_OV;
  undefined4 in_cr12;
  undefined4 in_cr14;
  undefined4 in_cr15;
  
  if (in_CY && !in_ZR) {
    *unaff_r8 = param_1;
    unaff_r8[1] = param_2;
    unaff_r8[2] = unaff_r4;
    unaff_r8[3] = unaff_r5;
    unaff_r8[4] = unaff_r8;
    unaff_r8[5] = unaff_r10;
    unaff_r8[6] = in_r12;
    unaff_r8[7] = register0x00000054;
    unaff_r8[8] = 0x87a51b8;
    *unaff_r8 = param_3;
    unaff_r8[1] = unaff_r6;
    unaff_r8[2] = unaff_r10;
    unaff_r8[3] = in_r12;
    unaff_r8[4] = register0x00000054;
    unaff_r8[5] = 0x87a51bc;
    *unaff_r8 = param_1;
    unaff_r8[1] = param_3;
    unaff_r8[2] = unaff_r6;
    unaff_r8[3] = unaff_r8;
    unaff_r8[4] = unaff_r9;
    unaff_r8[5] = in_r12;
    unaff_r8[6] = register0x00000054;
    unaff_r8[7] = 0x87a51c0;
    *unaff_r8 = param_1;
    unaff_r8[1] = param_3;
    unaff_r8[2] = param_4;
    unaff_r8[3] = unaff_r4;
    unaff_r8[4] = unaff_r6;
    unaff_r8[5] = unaff_r7;
    unaff_r8[6] = unaff_r8;
    unaff_r8[7] = unaff_r10;
    unaff_r8[8] = unaff_r11;
    unaff_r8[9] = in_r12;
    unaff_r8[10] = register0x00000054;
    unaff_r8[0xb] = 0x87a51c4;
  }
  coprocessor_moveto(0xc,7,5,unaff_pc,in_cr14,in_cr12);
  if (in_ZR || in_NG != in_OV) {
    coprocessor_loadlong(0xc,in_cr15,&stack0x00000330);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

