
/* WARNING: Control flow encountered bad instruction data */

void FUN_08fe1d40(uint param_1,int param_2,undefined4 *param_3)

{
  uint unaff_r5;
  int unaff_r11;
  undefined4 in_r12;
  undefined4 unaff_lr;
  char in_NG;
  bool in_OV;
  
  if ((bool)in_NG != in_OV) {
    unaff_r11 = param_2 + (param_1 >> (unaff_r5 & 0xff));
  }
  if (in_OV) {
    *param_3 = unaff_lr;
    param_3[-1] = unaff_r11;
    param_3[-2] = param_3;
    param_3[-3] = param_2;
    *(BADSPACEBASE **)param_1 = register0x00000054;
    *(undefined4 *)(param_1 - 4) = in_r12;
    *(undefined4 **)(param_1 - 8) = param_3;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

