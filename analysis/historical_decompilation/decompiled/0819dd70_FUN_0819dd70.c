
/* WARNING: Control flow encountered bad instruction data */

void FUN_0819dd70(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int unaff_r4;
  undefined4 unaff_r11;
  int unaff_lr;
  char in_NG;
  bool in_ZR;
  bool in_CY;
  char in_OV;
  undefined4 in_cr2;
  undefined4 in_cr4;
  undefined4 in_cr5;
  undefined4 in_cr7;
  undefined4 in_cr10;
  
  if (!in_ZR) {
    coprocessor_moveto(5,7,6,unaff_r11,in_cr2,in_cr7);
  }
  if (!in_ZR && in_NG == in_OV) {
    unaff_r4 = *(int *)(unaff_lr + 0xc);
  }
  if (in_NG != in_OV) {
    UnsignedSaturate(unaff_lr >> 9,3);
    UnsignedDoesSaturate(unaff_lr >> 9,3);
  }
  uRam0819dd84 = (undefined1)unaff_r11;
  if (in_CY && !in_ZR) {
    coprocessor_moveto(9,7,0,param_3,in_cr4,in_cr5);
  }
  if (in_ZR || in_NG != in_OV) {
    coprocessor_function(0xd,0xc,4,in_cr10,in_cr2,in_cr7);
  }
  if (in_CY) {
    *(undefined4 *)(unaff_r4 + -0x20a) = param_3;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

