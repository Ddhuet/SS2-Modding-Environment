
/* WARNING: Control flow encountered bad instruction data */

void FUN_081a0652(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int unaff_r5;
  undefined4 unaff_r8;
  undefined4 unaff_r10;
  undefined4 *unaff_r11;
  undefined4 in_r12;
  char in_NG;
  bool in_ZR;
  bool in_CY;
  char in_OV;
  
  if (in_NG == in_OV) {
    *unaff_r11 = param_1;
    unaff_r11[1] = param_2;
    unaff_r11[2] = param_4;
    unaff_r11[3] = unaff_r8;
    unaff_r11[4] = unaff_r10;
    unaff_r11[5] = in_r12;
    unaff_r11[6] = register0x00000054;
    unaff_r11[7] = 0x81a065a;
  }
  if (in_CY && !in_ZR) {
    *(undefined4 *)(unaff_r5 + 0xed2) = in_r12;
  }
  if (!in_ZR && in_NG == in_OV) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

