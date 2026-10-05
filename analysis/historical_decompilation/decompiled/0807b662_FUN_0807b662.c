
/* WARNING: Control flow encountered bad instruction data */

void FUN_0807b662(undefined4 *param_1)

{
  undefined4 unaff_r4;
  undefined4 unaff_r5;
  undefined4 unaff_r6;
  undefined4 unaff_r7;
  undefined4 *unaff_r8;
  undefined4 unaff_r11;
  undefined4 unaff_lr;
  bool in_NG;
  bool in_ZR;
  bool in_CY;
  bool in_OV;
  undefined4 in_cr1;
  undefined4 in_cr10;
  undefined4 in_cr14;
  
  if (in_NG) {
    coprocessor_function(0xd,2,1,in_cr10,in_cr1,in_cr14);
  }
  if (in_OV) {
    *param_1 = unaff_r4;
    param_1[1] = unaff_r5;
    param_1[2] = unaff_r11;
    param_1[3] = register0x00000054;
    param_1[4] = unaff_lr;
  }
  if (!in_ZR) {
    *unaff_r8 = unaff_r7;
  }
  if (in_CY) {
    *param_1 = 0x807b676;
    param_1[-1] = unaff_r11;
    param_1[-2] = unaff_r7;
    param_1[-3] = unaff_r6;
  }
  func_0x082f95f6();
  if (!in_OV) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  return;
}

