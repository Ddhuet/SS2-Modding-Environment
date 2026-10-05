
/* WARNING: Control flow encountered bad instruction data */

int FUN_08106f3c(int param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  uint extraout_r3;
  undefined4 unaff_r4;
  undefined4 unaff_r6;
  undefined4 unaff_r8;
  undefined4 unaff_r10;
  int unaff_r11;
  undefined4 in_r12;
  undefined4 extraout_r12;
  int unaff_lr;
  char in_NG;
  undefined1 in_ZR;
  undefined1 in_CY;
  char in_OV;
  
  if (in_NG != in_OV) {
    unaff_lr = 0x8106f40;
    param_1 = func_0x06e74630();
    param_4 = extraout_r3;
    in_r12 = extraout_r12;
  }
  if ((bool)in_ZR) {
    return param_1 + 0x20;
  }
  if (!(bool)in_NG) {
    param_4 = param_4 & 0xffff | 0x651f0000;
  }
  if (!(bool)in_CY) {
    *(int *)(unaff_r11 + -4) = unaff_lr;
    *(undefined4 *)(unaff_r11 + -8) = in_r12;
    *(undefined4 *)(unaff_r11 + -0xc) = unaff_r10;
    *(undefined4 *)(unaff_r11 + -0x10) = unaff_r8;
    *(undefined4 *)(unaff_r11 + -0x14) = unaff_r6;
    *(undefined4 *)(unaff_r11 + -0x18) = unaff_r4;
    *(uint *)(unaff_r11 + -0x1c) = param_4;
  }
  if (in_NG == in_OV) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(char *)(unaff_lr + 0x923) = (char)param_1;
  if (in_NG != in_OV) {
    software_interrupt(0xcbbbb0);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

