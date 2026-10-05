
/* WARNING: Control flow encountered bad instruction data */

void FUN_0800208c(undefined4 *param_1,undefined4 *param_2,uint *param_3,uint param_4)

{
  undefined4 unaff_r5;
  uint unaff_r6;
  undefined4 unaff_r7;
  uint unaff_r8;
  undefined4 unaff_r9;
  uint unaff_r10;
  uint unaff_r11;
  uint *in_r12;
  uint unaff_lr;
  bool in_NG;
  bool in_ZR;
  bool in_CY;
  
  if (in_CY) {
    *param_1 = 0x8002094;
    param_1[-1] = register0x00000054;
    param_1[-2] = in_r12;
    param_1[-3] = unaff_r10;
    param_1[-4] = unaff_r8;
    *param_2 = 0x8002098;
    param_2[-1] = unaff_lr;
    param_2[-2] = in_r12;
    param_2[-3] = param_2;
  }
  if (in_NG) {
    *param_3 = unaff_lr;
    param_3[-1] = unaff_r11;
    param_3[-2] = unaff_r8;
    param_3[-3] = (uint)param_1;
  }
  if (in_ZR) {
    unaff_lr = (uint)param_1 & unaff_r6;
    *param_1 = unaff_r10 & unaff_r8;
    param_1[-1] = unaff_r9;
    param_1[-2] = unaff_r7;
    param_1[-3] = unaff_r5;
    param_1[-4] = 0x7e0;
    param_1[-5] = param_1;
  }
  if (in_NG) {
    *in_r12 = unaff_lr;
    in_r12[-1] = unaff_r11;
    in_r12[-2] = unaff_r8;
    in_r12[-3] = param_4;
    in_r12[-4] = (uint)param_2;
    in_r12[-5] = (uint)param_1;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

