
/* WARNING: Control flow encountered bad instruction data */

void FUN_08e99698(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int extraout_r3;
  undefined1 *unaff_r5;
  undefined1 unaff_r9;
  int unaff_r10;
  undefined1 unaff_r11;
  char in_NG;
  bool in_ZR;
  char in_OV;
  
  if (in_NG != in_OV) {
    *(undefined1 *)(unaff_r10 + -0x55b) = unaff_r11;
    *(undefined1 *)(unaff_r10 + -0x99b) = unaff_r9;
    *(char *)(param_4 + -0xa9b) = (char)param_4;
  }
  if (in_ZR) {
    param_1 = func_0x09b2253c();
    param_4 = extraout_r3;
  }
  if (!(bool)in_OV) {
    *(int *)(unaff_r10 + param_1) = param_4;
  }
  if (in_NG != in_OV) {
    func_0x07c416d4();
  }
  if ((bool)in_NG) {
    *unaff_r5 = unaff_r11;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

