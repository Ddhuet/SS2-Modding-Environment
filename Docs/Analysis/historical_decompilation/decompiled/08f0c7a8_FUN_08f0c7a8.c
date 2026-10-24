
/* WARNING: Control flow encountered bad instruction data */

void FUN_08f0c7a8(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 unaff_r4;
  undefined4 unaff_r5;
  undefined4 unaff_r6;
  undefined4 unaff_r7;
  undefined4 *unaff_r8;
  undefined4 unaff_r9;
  undefined4 unaff_r10;
  undefined4 *unaff_r11;
  undefined4 in_r12;
  bool in_ZR;
  bool in_CY;
  
  if (in_CY && !in_ZR) {
    *unaff_r8 = param_1;
    unaff_r8[1] = param_2;
    unaff_r8[2] = param_4;
    unaff_r8[3] = unaff_r4;
    unaff_r8[4] = unaff_r6;
    unaff_r8[5] = unaff_r8;
    unaff_r8[6] = unaff_r10;
    unaff_r8[7] = in_r12;
    unaff_r8[8] = register0x00000054;
    unaff_r8[9] = 0x8f0c7b0;
    *unaff_r11 = param_1;
    unaff_r11[1] = param_2;
    unaff_r11[2] = param_4;
    unaff_r11[3] = unaff_r5;
    unaff_r11[4] = unaff_r11;
    unaff_r11[5] = in_r12;
    unaff_r11[6] = register0x00000054;
    unaff_r11[7] = 0x8f0c7b4;
    *unaff_r8 = param_1;
    unaff_r8[1] = param_3;
    unaff_r8[2] = unaff_r4;
    unaff_r8[3] = unaff_r6;
    unaff_r8[4] = unaff_r11;
    unaff_r8[5] = 0x8f0c7b8;
    *unaff_r8 = param_2;
    unaff_r8[1] = unaff_r7;
    unaff_r8[2] = unaff_r8;
    unaff_r8[3] = unaff_r9;
    unaff_r8[4] = unaff_r11;
    unaff_r8[5] = in_r12;
    unaff_r8[6] = register0x00000054;
    unaff_r8[7] = 0x8f0c7bc;
    *unaff_r8 = param_1;
    unaff_r8[1] = param_3;
    unaff_r8[2] = unaff_r4;
    unaff_r8[3] = unaff_r5;
    unaff_r8[4] = unaff_r7;
    unaff_r8[5] = unaff_r8;
    unaff_r8[6] = unaff_r9;
    unaff_r8[7] = unaff_r11;
    unaff_r8[8] = 0x8f0c7c0;
    *unaff_r8 = param_1;
    unaff_r8[1] = param_2;
    unaff_r8[2] = param_4;
    unaff_r8[3] = unaff_r4;
    unaff_r8[4] = unaff_r5;
    unaff_r8[5] = unaff_r7;
    unaff_r8[6] = unaff_r8;
    unaff_r8[7] = unaff_r9;
    unaff_r8[8] = unaff_r11;
    unaff_r8[9] = 0x8f0c7c4;
    *unaff_r8 = param_1;
    unaff_r8[1] = param_2;
    unaff_r8[2] = param_4;
    unaff_r8[3] = unaff_r4;
    unaff_r8[4] = unaff_r5;
    unaff_r8[5] = unaff_r7;
    unaff_r8[6] = unaff_r11;
    unaff_r8[7] = 0x8f0c7c8;
    *unaff_r8 = param_1;
    unaff_r8[1] = param_2;
    unaff_r8[2] = param_4;
    unaff_r8[3] = unaff_r4;
    unaff_r8[4] = unaff_r5;
    unaff_r8[5] = unaff_r7;
    unaff_r8[6] = unaff_r8;
    unaff_r8[7] = unaff_r9;
    unaff_r8[8] = unaff_r11;
    unaff_r8[9] = in_r12;
    unaff_r8[10] = register0x00000054;
    unaff_r8[0xb] = 0x8f0c7cc;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

