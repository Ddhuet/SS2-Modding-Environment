
/* WARNING: Control flow encountered bad instruction data */

void FUN_08016780(uint param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4)

{
  uint unaff_r5;
  undefined4 unaff_r6;
  int *unaff_r9;
  undefined4 unaff_r10;
  int unaff_r11;
  undefined4 in_r12;
  bool in_NG;
  bool in_ZR;
  bool in_OV;
  
  if (in_NG != in_OV) {
    unaff_r11 = (int)param_2 + (param_1 >> (unaff_r5 & 0xff));
  }
  if (in_ZR) {
    *unaff_r9 = (int)param_2;
  }
  if (in_NG) {
    *(int *)(unaff_r11 + -4) = unaff_r11;
    *(undefined4 *)(unaff_r11 + -8) = unaff_r10;
    *(undefined4 *)(unaff_r11 + -0xc) = param_4;
    *(undefined4 *)(unaff_r11 + -0x10) = param_3;
  }
  if (!in_OV) {
    *param_2 = in_r12;
    param_2[-1] = unaff_r11;
    param_2[-2] = unaff_r6;
    param_2[-3] = unaff_r5;
    param_2[-4] = param_4;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

