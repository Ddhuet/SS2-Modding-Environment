
/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x080b8a7c) */

void FUN_080b8a58(undefined4 param_1,int param_2,undefined4 *param_3,undefined4 param_4)

{
  undefined4 unaff_r5;
  int unaff_r10;
  undefined4 unaff_lr;
  bool in_NG;
  bool in_ZR;
  bool in_CY;
  char in_OV;
  undefined4 in_cr12;
  undefined4 in_cr15;
  undefined4 unaff_s21;
  
  if (in_CY) {
    param_2 = 0xc05;
  }
  if (!in_NG) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *param_3 = unaff_lr;
  param_3[-1] = register0x00000054;
  param_3[-2] = unaff_r5;
  param_3[-3] = param_4;
  param_3[-4] = param_2;
  param_3[-5] = param_1;
  *(undefined4 *)(param_2 + -4) = 0x80b8a70;
  *(int *)(param_2 + -8) = param_2;
  *(undefined4 *)(param_2 + -0xc) = param_1;
  if (in_ZR || in_OV != '\x01') {
    *(undefined4 *)(unaff_r10 + 700) = unaff_s21;
    coprocessor_function(0xc,0xd,6,in_cr12,in_cr12,in_cr15);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

