
/* WARNING: Control flow encountered bad instruction data */

void FUN_0811a2be(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *unaff_r4;
  undefined4 unaff_r5;
  undefined4 unaff_r7;
  undefined4 unaff_r8;
  undefined4 unaff_r10;
  undefined4 unaff_r11;
  undefined4 in_r12;
  undefined4 unaff_lr;
  char in_NG;
  bool in_ZR;
  bool in_CY;
  char in_OV;
  
  if (!in_ZR && in_NG == in_OV) {
    *unaff_r4 = param_1;
    unaff_r4[1] = param_2;
    unaff_r4[2] = param_4;
    unaff_r4[3] = unaff_r4;
    unaff_r4[4] = unaff_r5;
    unaff_r4[5] = unaff_r7;
    unaff_r4[6] = unaff_r8;
    unaff_r4[7] = unaff_r10;
    unaff_r4[8] = in_r12;
    unaff_r4[9] = register0x00000054;
    unaff_r4[10] = 0x811a2c6;
  }
  if (!in_ZR) {
    software_interrupt(0x13f9d4);
  }
  if (!in_CY) {
    *(undefined4 *)(param_2 + -4) = unaff_lr;
    *(undefined4 *)(param_2 + -8) = unaff_r11;
    *(undefined4 *)(param_2 + -0xc) = unaff_r8;
    *(undefined4 *)(param_2 + -0x10) = unaff_r5;
    *(undefined4 **)(param_2 + -0x14) = unaff_r4;
    *(undefined4 *)(param_2 + -0x18) = param_3;
    *(int *)(param_2 + -0x1c) = param_2;
    *(undefined4 *)(param_2 + -0x20) = param_1;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

