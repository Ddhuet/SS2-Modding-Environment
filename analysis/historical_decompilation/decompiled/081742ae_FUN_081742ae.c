
/* WARNING: Control flow encountered bad instruction data */

void FUN_081742ae(int *param_1,int param_2,undefined4 param_3)

{
  undefined4 unaff_r5;
  undefined4 unaff_r6;
  undefined4 unaff_r8;
  undefined4 *unaff_r10;
  int unaff_r11;
  undefined4 *unaff_lr;
  bool in_NG;
  bool in_ZR;
  bool in_CY;
  bool in_OV;
  undefined4 in_cr11;
  
  coprocessor_storelong2(5,in_cr11,unaff_r10 + -9);
  if (in_NG != in_OV) {
    param_3 = *unaff_r10;
    unaff_r5 = unaff_r10[3];
    unaff_r8 = unaff_r10[5];
    unaff_r11 = unaff_r10[8];
    unaff_lr = (undefined4 *)unaff_r10[9];
  }
  if (in_NG) {
    *(int *)(unaff_r11 + 4) = param_2;
    *(undefined4 *)(unaff_r11 + 8) = param_3;
    *(undefined4 *)(unaff_r11 + 0xc) = unaff_r6;
    *(undefined4 *)(unaff_r11 + 0x10) = unaff_r8;
  }
  if (in_CY) {
    software_interrupt(0x3da817);
  }
  if (!in_ZR) {
    *unaff_lr = unaff_r5;
  }
  if (in_OV) {
    if (in_ZR) {
      *param_1 = (int)param_1 + -0x82d745a;
      param_1[1] = param_2;
      *(int **)((int)param_1 + -0x82d745a) = param_1 + -0x416ba2e;
      *(int *)((int)param_1 + -0x82d7456) = param_2;
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

