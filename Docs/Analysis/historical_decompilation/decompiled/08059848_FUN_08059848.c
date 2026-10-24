
/* WARNING: Control flow encountered bad instruction data */

void FUN_08059848(undefined4 *param_1)

{
  undefined4 *unaff_r5;
  undefined4 unaff_r8;
  undefined4 unaff_r10;
  undefined4 unaff_r11;
  undefined4 in_r12;
  undefined4 unaff_lr;
  bool in_NG;
  bool in_ZR;
  bool in_CY;
  
  if (in_NG) {
    *unaff_r5 = 0x8059850;
    unaff_r5[-1] = register0x00000054;
    unaff_r5[-2] = in_r12;
    unaff_r5[-3] = unaff_r10;
    unaff_r5[-4] = unaff_r8;
  }
  if (in_CY && !in_ZR) {
    *param_1 = unaff_r11;
    param_1[1] = register0x00000054;
    param_1[2] = unaff_lr;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

