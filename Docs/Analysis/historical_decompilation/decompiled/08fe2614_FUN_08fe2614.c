
/* WARNING: Control flow encountered bad instruction data */

void FUN_08fe2614(undefined4 *param_1,undefined4 *param_2,undefined4 param_3,undefined4 *param_4)

{
  undefined4 unaff_r8;
  undefined4 unaff_r10;
  undefined4 unaff_r11;
  undefined4 in_r12;
  undefined4 unaff_lr;
  bool in_NG;
  bool in_CY;
  undefined4 in_cr2;
  undefined4 in_cr15;
  
  if (in_NG) {
    *param_4 = 0x8fe261c;
    param_4[-1] = register0x00000054;
    param_4[-2] = in_r12;
    param_4[-3] = unaff_r10;
    param_4[-4] = unaff_r8;
  }
  if (in_CY) {
    *param_1 = 0x8fe2620;
    param_1[-1] = unaff_r11;
    *param_2 = 0x8fe2624;
    param_2[-1] = unaff_lr;
    param_2[-2] = in_r12;
    param_2[-3] = param_3;
  }
  coprocessor_movefromRt(7,0,7,in_cr2,in_cr15);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

