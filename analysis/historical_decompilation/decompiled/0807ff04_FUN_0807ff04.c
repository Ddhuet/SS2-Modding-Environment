
/* WARNING: Control flow encountered bad instruction data */

void FUN_0807ff04(undefined4 param_1,undefined4 param_2,undefined4 *param_3)

{
  undefined4 unaff_r4;
  undefined4 unaff_r10;
  undefined4 unaff_r11;
  undefined4 unaff_lr;
  bool in_OV;
  
  if (in_OV) {
    *param_3 = unaff_lr;
    param_3[-1] = unaff_r11;
    param_3[-2] = unaff_r10;
    param_3[-3] = unaff_r4;
    param_3[-4] = param_2;
    param_3[-5] = param_1;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

