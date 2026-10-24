
/* WARNING: Control flow encountered bad instruction data */

void FUN_0807c878(int *param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *unaff_r4;
  uint unaff_r5;
  undefined4 unaff_r10;
  int unaff_r11;
  undefined4 in_r12;
  undefined4 unaff_lr;
  undefined4 unaff_pc;
  char in_NG;
  bool in_ZR;
  bool in_CY;
  bool in_OV;
  bool bVar1;
  undefined4 in_cr8;
  undefined4 in_cr10;
  undefined4 in_cr14;
  undefined4 in_cr15;
  
  if ((bool)in_NG != in_OV) {
    unaff_r11 = unaff_r5 + ((uint)param_1 >> (unaff_r5 & 0xff));
  }
  if (!in_OV) {
    coprocessor_moveto(7,1,7,unaff_pc,in_cr10,in_cr15);
    bVar1 = false;
    if (!in_CY) {
      bVar1 = SBORROW4((uint)param_1 >> 0x10,(int)unaff_r4) !=
              SBORROW4(((uint)param_1 >> 0x10) - (int)unaff_r4,1);
    }
    coprocessor_movefromRt(7,0,6,in_cr8,in_cr14);
    if (bVar1) {
      *unaff_r4 = in_r12;
      unaff_r4[-1] = unaff_r11;
      unaff_r4[-2] = unaff_r10;
      unaff_r4[-3] = param_2;
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *param_2 = unaff_lr;
  param_2[-1] = unaff_r11;
  param_2[-2] = unaff_r10;
  param_2[-3] = param_4;
  param_2[-4] = param_3;
  param_2[-5] = param_2;
  param_2[-6] = param_1;
  if (in_ZR) {
    *param_1 = (int)(param_1 + -0x20b5bec);
    param_1[1] = (int)(param_2 + -7);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

