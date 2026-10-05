
/* WARNING: Control flow encountered bad instruction data */

void FUN_08013164(undefined4 param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4)

{
  int unaff_r4;
  undefined4 *unaff_r5;
  undefined4 unaff_r8;
  undefined4 unaff_r9;
  undefined4 unaff_r10;
  undefined4 unaff_r11;
  undefined4 in_r12;
  undefined4 unaff_lr;
  bool in_ZR;
  bool in_CY;
  bool in_OV;
  
  if (in_CY) {
    *param_2 = 0x801316c;
    param_2[-1] = register0x00000054;
    param_2[-2] = in_r12;
    param_2[-3] = unaff_r10;
    param_2[-4] = unaff_r8;
    param_2[-5] = unaff_r4;
    *param_2 = 0x8013170;
    param_2[-1] = unaff_lr;
    param_2[-2] = in_r12;
    param_2[-3] = unaff_r4;
    param_2[-4] = param_4;
    param_2[-5] = param_3;
    param_2[-6] = param_2;
    *param_3 = 0x8013174;
    param_3[-1] = unaff_lr;
    param_3[-2] = in_r12;
    param_3[-3] = unaff_r9;
    param_3[-4] = unaff_r8;
    param_3[-5] = param_2;
  }
  if (in_OV) {
    *param_4 = unaff_lr;
    param_4[-1] = unaff_r11;
    param_4[-2] = param_4;
    param_4[-3] = param_2;
    param_4[-4] = param_1;
  }
  if (in_ZR) {
    in_CY = (undefined4 *)(unaff_r4 * 0x20) <= param_3;
  }
  if (in_CY) {
    *unaff_r5 = unaff_r8;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

