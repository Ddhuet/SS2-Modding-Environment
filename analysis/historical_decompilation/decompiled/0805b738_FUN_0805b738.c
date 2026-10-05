
/* WARNING: Control flow encountered bad instruction data */

void FUN_0805b738(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 unaff_r5;
  undefined4 unaff_r6;
  undefined4 *unaff_r8;
  undefined4 *unaff_r10;
  undefined4 unaff_r11;
  undefined4 *in_r12;
  undefined4 *puVar1;
  undefined4 unaff_lr;
  bool in_ZR;
  bool in_CY;
  bool in_OV;
  
  puVar1 = in_r12;
  if (in_CY) {
    unaff_r11 = 0x530;
    puVar1 = in_r12 + 0x200;
    *in_r12 = unaff_r6;
  }
  if (!in_ZR) {
    *(undefined4 *)(param_2 + -4) = unaff_r6;
    *(undefined4 *)(param_2 + -8) = unaff_r5;
    *(undefined4 *)(param_2 + -0xc) = param_3;
  }
  if (in_CY) {
    *unaff_r10 = 0x805b750;
    unaff_r10[-1] = unaff_r11;
    unaff_r10[-2] = param_4;
  }
  if (in_OV) {
    *unaff_r8 = 0x805b754;
    unaff_r8[-1] = unaff_lr;
    unaff_r8[-2] = puVar1;
    unaff_r8[-3] = unaff_r8;
    unaff_r8[-4] = param_1;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

