
/* WARNING: Control flow encountered bad instruction data */

void FUN_080836fc(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 unaff_r6;
  undefined4 *unaff_r8;
  undefined4 unaff_r9;
  undefined4 unaff_r10;
  undefined4 unaff_r11;
  undefined4 unaff_lr;
  bool in_CY;
  bool in_OV;
  
  if (in_OV) {
    *unaff_r8 = unaff_lr;
    unaff_r8[-1] = unaff_r11;
    unaff_r8[-2] = unaff_r10;
    unaff_r8[-3] = unaff_r8;
    unaff_r8[-4] = param_4;
    unaff_r8[-5] = param_1;
  }
  if (in_CY) {
    *param_1 = unaff_lr;
    param_1[-1] = register0x00000054;
    param_1[-2] = unaff_r11;
    param_1[-3] = unaff_r9;
    param_1[-4] = unaff_r6;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

