
/* WARNING: Control flow encountered bad instruction data */

void FUN_08734bca(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int unaff_r5;
  undefined1 unaff_r9;
  int unaff_r10;
  undefined1 unaff_r11;
  int in_r12;
  char in_NG;
  bool in_CY;
  bool in_OV;
  
  if ((bool)in_NG != in_OV) {
    *(undefined1 *)(in_r12 + -0x500) = unaff_r11;
  }
  if (!in_CY) {
    *(undefined1 *)(unaff_r10 + -0x56b) = unaff_r9;
  }
  if (in_OV) {
    func_0x0938f4a2(*(undefined4 *)(unaff_r5 + -0x10),param_2,param_3,
                    *(undefined4 *)(unaff_r5 + -0xc));
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

