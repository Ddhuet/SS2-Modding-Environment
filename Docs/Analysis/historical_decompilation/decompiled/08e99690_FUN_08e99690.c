
/* WARNING: Control flow encountered bad instruction data */

void FUN_08e99690(int param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4)

{
  undefined4 *extraout_r3;
  undefined4 *puVar1;
  undefined4 *extraout_r3_00;
  undefined1 *unaff_r5;
  undefined1 unaff_r9;
  int unaff_r10;
  undefined1 unaff_r11;
  char in_NG;
  undefined1 in_ZR;
  char in_OV;
  
  if ((bool)in_ZR) {
    param_1 = func_0x09fc6ba8();
    param_4 = extraout_r3;
  }
  puVar1 = param_4;
  if (in_NG != in_OV) {
    puVar1 = (undefined4 *)((int)param_4 + -0x545);
    unaff_r11 = (undefined1)*param_4;
    *(undefined1 *)(unaff_r10 + -0x55b) = unaff_r11;
    *(undefined1 *)(unaff_r10 + -0x99b) = unaff_r9;
    *(char *)(param_4 + -0x3f8) = (char)puVar1;
  }
  if ((bool)in_ZR) {
    param_1 = func_0x09b2253c();
    puVar1 = extraout_r3_00;
  }
  if (!(bool)in_OV) {
    *(undefined4 **)(unaff_r10 + param_1) = puVar1;
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

