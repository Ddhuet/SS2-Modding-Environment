
/* WARNING: Control flow encountered bad instruction data */

void FUN_08e0af5c(undefined4 param_1,byte *param_2,undefined4 param_3,undefined4 param_4,
                 byte param_5)

{
  undefined1 *unaff_r4;
  int unaff_r5;
  undefined4 unaff_r7;
  undefined4 *unaff_r8;
  undefined4 unaff_r9;
  uint unaff_r11;
  uint in_r12;
  bool in_NG;
  bool in_ZR;
  bool in_CY;
  bool in_OV;
  
  if (!in_NG) {
    unaff_r11 = (uint)param_5;
    unaff_r5 = unaff_r5 + -0x138;
  }
  if (in_OV) {
    param_2 = (byte *)(uint)*param_2;
  }
  if (!in_CY || in_ZR) {
    unaff_r4 = unaff_r4 + -(in_r12 >> 0xf);
    *unaff_r4 = (char)unaff_r4;
  }
  if (in_NG != in_OV) {
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
    unaff_r8[10] = 0x8e0af74;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

