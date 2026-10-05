
/* WARNING: Control flow encountered bad instruction data */

void FUN_0805db94(int *param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  int unaff_r11;
  undefined4 unaff_lr;
  bool in_ZR;
  bool in_CY;
  bool in_OV;
  
  piVar1 = param_1;
  if (in_ZR) {
    piVar1 = param_1 + -0x14c;
    *param_1 = unaff_r11;
  }
  if (in_CY) {
    *piVar1 = (int)piVar1 + -0xc05;
  }
  if (in_OV) {
    *param_2 = unaff_lr;
    param_2[-1] = unaff_r11;
    param_2[-2] = param_4;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

