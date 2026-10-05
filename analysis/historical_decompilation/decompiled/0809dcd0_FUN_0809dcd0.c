
/* WARNING: Control flow encountered bad instruction data */

void FUN_0809dcd0(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int unaff_r6;
  undefined4 unaff_r9;
  undefined4 unaff_r10;
  int unaff_r11;
  int in_r12;
  undefined4 unaff_lr;
  undefined4 unaff_pc;
  bool in_CY;
  bool in_OV;
  undefined4 in_cr10;
  undefined4 in_cr11;
  
  if (in_CY) {
    unaff_r11 = (int)param_1 * 0x400 - unaff_r6;
  }
  coprocessor_moveto(7,7,5,unaff_pc,in_cr10,in_cr11);
  if (in_OV) {
    *param_1 = unaff_lr;
    param_1[-1] = unaff_r11;
    param_1[-2] = param_4;
    param_1[-3] = param_2;
    param_1[-4] = param_1;
  }
  if (in_CY) {
    uVar1 = SignedSaturate(in_r12 + (int)param_1,0x20);
    SignedDoesSaturate(uVar1,0x20);
    *param_1 = unaff_lr;
    param_1[-1] = in_r12;
    param_1[-2] = unaff_r11;
    param_1[-3] = unaff_r10;
    param_1[-4] = unaff_r9;
    param_1[-5] = unaff_r6;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

