
/* WARNING: Control flow encountered bad instruction data */

void FUN_0807fc46(undefined4 *param_1,int param_2)

{
  undefined4 unaff_r4;
  undefined4 unaff_r6;
  undefined4 unaff_r7;
  undefined4 unaff_r11;
  undefined4 in_r12;
  bool in_NG;
  bool in_OV;
  undefined4 in_cr7;
  
  if (in_NG) {
    *(undefined4 *)(param_2 + -4) = unaff_r7;
    *(undefined4 *)(param_2 + -8) = unaff_r4;
  }
  if (in_OV) {
    *param_1 = in_r12;
    param_1[-1] = unaff_r11;
    param_1[-2] = unaff_r6;
  }
  coprocessor_movefromRt(6,8,in_cr7);
  coprocessor_movefromRt2(6,8,in_cr7);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

