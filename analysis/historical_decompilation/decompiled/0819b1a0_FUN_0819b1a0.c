
/* WARNING: Control flow encountered bad instruction data */

undefined4 FUN_0819b1a0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int unaff_r9;
  int unaff_r11;
  bool in_ZR;
  bool in_CY;
  
  if (in_ZR) {
    return *(undefined4 *)(unaff_r11 + 4);
  }
  if (!in_CY) {
    param_4 = *(undefined4 *)(unaff_r9 + -0x14);
    param_3 = *(undefined4 *)(unaff_r9 + -0x18);
    param_2 = *(undefined4 *)(unaff_r9 + -0x1c);
  }
  func_0x07e585da(param_1,param_2,param_3,param_4);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

