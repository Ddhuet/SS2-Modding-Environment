
/* WARNING: Control flow encountered bad instruction data */

void FUN_0824fab8(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 unaff_r10;
  int unaff_r11;
  undefined4 in_r12;
  char in_NG;
  bool in_ZR;
  bool in_CY;
  char in_OV;
  undefined4 in_cr8;
  undefined4 in_cr9;
  undefined4 in_cr11;
  
  if (!in_CY || in_ZR) {
    coprocessor_function(5,10,4,in_cr11,in_cr9,in_cr8);
  }
  if (in_CY) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (in_ZR) {
    *(undefined4 *)(unaff_r11 + -4) = in_r12;
    *(undefined4 *)(unaff_r11 + -8) = unaff_r10;
    *(undefined4 *)(unaff_r11 + -0xc) = param_4;
    *(undefined4 *)(unaff_r11 + -0x10) = param_3;
  }
  if (in_NG != in_OV) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

