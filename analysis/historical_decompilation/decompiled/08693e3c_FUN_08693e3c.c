
/* WARNING: Control flow encountered bad instruction data */

void FUN_08693e3c(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int extraout_r1;
  undefined4 unaff_r5;
  uint unaff_r7;
  undefined4 unaff_r8;
  undefined4 unaff_r11;
  int in_r12;
  int unaff_lr;
  char in_NG;
  undefined1 in_ZR;
  bool in_CY;
  char in_OV;
  
  if (in_NG != in_OV) {
    *(undefined4 *)(unaff_lr + -0x500) = unaff_r11;
  }
  if ((bool)in_NG) {
    *(undefined4 *)(in_r12 + -0x52d) = unaff_r11;
  }
  if (in_CY) {
    *(undefined4 *)(param_2 + -4) = unaff_r8;
    *(undefined4 *)(param_2 + -8) = unaff_r5;
    *(undefined4 *)(param_2 + -0xc) = param_4;
    func_0x096de754();
    param_2 = extraout_r1;
  }
                    /* WARNING: Could not recover jumptable at 0x08693e4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  if ((bool)in_ZR || in_NG != in_OV) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  (*(code *)(unaff_r7 & param_2 >> 0x20))();
  return;
}

