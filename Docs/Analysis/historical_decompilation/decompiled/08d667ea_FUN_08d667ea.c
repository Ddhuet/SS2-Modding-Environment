
/* WARNING: Control flow encountered bad instruction data */

void FUN_08d667ea(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

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
  bool in_ZR;
  bool in_CY;
  
  if (in_CY && !in_ZR) {
    *unaff_r8 = param_1;
    unaff_r8[1] = param_3;
    unaff_r8[2] = unaff_r4;
    unaff_r8[3] = unaff_r6;
    unaff_r8[4] = unaff_r8;
    unaff_r8[5] = unaff_r10;
    unaff_r8[6] = in_r12;
    unaff_r8[7] = register0x00000054;
    unaff_r8[8] = 0x8d667f2;
    *unaff_r8 = param_1;
    unaff_r8[1] = param_4;
    unaff_r8[2] = unaff_r4;
    unaff_r8[3] = unaff_r7;
    unaff_r8[4] = unaff_r8;
    unaff_r8[5] = unaff_r9;
    unaff_r8[6] = unaff_r11;
    unaff_r8[7] = register0x00000054;
    unaff_r8[8] = 0x8d667f6;
    *unaff_r8 = param_4;
    unaff_r8[1] = unaff_r4;
    unaff_r8[2] = unaff_r5;
    unaff_r8[3] = unaff_r7;
    unaff_r8[4] = unaff_r9;
    unaff_r8[5] = unaff_r11;
    unaff_r8[6] = register0x00000054;
    unaff_r8[7] = 0x8d667fa;
    *unaff_r8 = param_4;
    unaff_r8[1] = unaff_r5;
    unaff_r8[2] = unaff_r7;
    unaff_r8[3] = unaff_r9;
    unaff_r8[4] = unaff_r11;
    unaff_r8[5] = in_r12;
    unaff_r8[6] = register0x00000054;
    unaff_r8[7] = 0x8d667fe;
    *unaff_r8 = param_1;
    unaff_r8[1] = param_4;
    unaff_r8[2] = unaff_r7;
    unaff_r8[3] = unaff_r8;
    unaff_r8[4] = unaff_r11;
    unaff_r8[5] = in_r12;
  }
  func_0x07830e6a();
  if (in_ZR) {
    software_interrupt(0xaa0000);
    software_interrupt(0xba0000);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

