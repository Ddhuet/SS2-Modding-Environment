
/* WARNING: Control flow encountered bad instruction data */

void FUN_080b0634(undefined4 *param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 unaff_r7;
  undefined4 unaff_r10;
  undefined4 unaff_r11;
  undefined4 unaff_lr;
  bool in_NG;
  bool in_ZR;
  bool in_OV;
  undefined4 in_cr11;
  
  if (in_NG) {
    coprocessor_store(5,in_cr11,0x80b047c);
  }
  if (!in_OV) {
    *param_2 = unaff_lr;
    param_2[-1] = unaff_r11;
    param_2[-2] = unaff_r10;
    param_2[-3] = param_4;
    param_2[-4] = param_3;
    param_2[-5] = param_2;
  }
  if (!in_ZR) {
    *param_1 = unaff_r7;
    param_1[-1] = param_4;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

