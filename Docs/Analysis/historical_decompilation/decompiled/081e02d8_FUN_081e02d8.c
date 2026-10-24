
/* WARNING: Control flow encountered bad instruction data */

undefined4 FUN_081e02d8(undefined4 param_1,int *param_2,uint param_3,undefined4 *param_4)

{
  int unaff_r4;
  int *unaff_r5;
  int unaff_r6;
  int unaff_r7;
  int unaff_r8;
  int unaff_r9;
  int unaff_r10;
  undefined4 unaff_r11;
  int in_r12;
  char in_NG;
  bool in_ZR;
  bool in_CY;
  bool in_OV;
  undefined4 in_cr0;
  undefined4 in_cr1;
  undefined4 in_cr2;
  undefined4 in_cr6;
  undefined4 in_cr8;
  undefined4 in_cr11;
  undefined4 in_cr13;
  
  if (!in_CY || in_ZR) {
    param_4 = param_4 + 0x40f0;
    *param_4 = unaff_r11;
  }
  if (in_ZR || (bool)in_NG != in_OV) {
    unaff_r9 = coprocessor_movefromRt(0xf,5,4,in_cr8,in_cr2);
  }
  if (in_OV) {
    param_4 = (undefined4 *)(uint)*(byte *)(unaff_r5 + -unaff_r7);
  }
  if (!in_CY) {
    coprocessor_function(5,5,3,in_cr6,in_cr0,in_cr13);
  }
  *param_2 = in_r12;
  param_2[-1] = unaff_r9;
  param_2[-2] = unaff_r8;
  param_2[-3] = (int)unaff_r5;
  param_2[-4] = (int)param_4;
  if (!in_CY || in_ZR) {
    SignedSaturate((int)param_2 >> 0xb,4);
    SignedDoesSaturate((int)param_2 >> 0xb,4);
  }
  if (in_ZR || (bool)in_NG != in_OV) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (in_OV) {
    param_3 = (uint)*(byte *)(param_3 + (int)unaff_r5 * -0x40000000);
  }
  if (!in_CY) {
    coprocessor_function(6,5,3,in_cr6,in_cr1,in_cr11);
  }
  *(int *)(param_3 - 4) = in_r12;
  *(int *)(param_3 - 8) = unaff_r10;
  *(int *)(param_3 - 0xc) = unaff_r8;
  *(int **)(param_3 - 0x10) = unaff_r5;
  *(undefined4 **)(param_3 - 0x14) = param_4;
  *(int **)(param_3 - 0x18) = param_2;
  if (!in_CY || in_ZR) {
    *unaff_r5 = (int)param_2;
    unaff_r5[1] = unaff_r4;
    unaff_r5[2] = unaff_r6;
    unaff_r5[3] = unaff_r7;
    unaff_r5[4] = unaff_r8;
    unaff_r5[5] = unaff_r9;
    unaff_r5[6] = unaff_r10;
    unaff_r5[7] = in_r12;
    unaff_r5[8] = (int)register0x00000054;
    unaff_r5[9] = 0x81e0308;
  }
  if (in_ZR || (bool)in_NG != in_OV) {
    return param_4[1];
  }
  if (!in_CY) {
    software_interrupt(0x53676b);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

