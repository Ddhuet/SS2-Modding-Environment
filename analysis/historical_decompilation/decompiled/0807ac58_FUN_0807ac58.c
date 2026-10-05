
/* WARNING: Control flow encountered bad instruction data */

void FUN_0807ac58(undefined4 param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 unaff_r11;
  undefined4 unaff_lr;
  bool in_ZR;
  bool in_OV;
  
  if (in_OV) {
    *param_2 = unaff_lr;
    param_2[-1] = unaff_r11;
    param_2[-2] = param_4;
    param_2[-3] = param_3;
    param_2[-4] = param_2;
    param_2[-5] = param_1;
  }
  if (in_ZR) {
    func_0x08094d8c();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

