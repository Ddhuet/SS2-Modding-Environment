
/* WARNING: Control flow encountered bad instruction data */

void FUN_08097e38(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *unaff_r4;
  undefined4 unaff_r5;
  undefined4 unaff_r8;
  int *unaff_r9;
  undefined4 unaff_r10;
  int *in_r12;
  bool in_ZR;
  bool in_OV;
  
  if (in_OV) {
    unaff_r4[-1] = 0x8097e40;
    unaff_r4[-2] = register0x00000054;
    unaff_r4[-3] = in_r12;
    unaff_r4[-4] = unaff_r10;
    unaff_r4[-5] = unaff_r8;
    unaff_r4[-6] = unaff_r4;
    param_1[1] = param_3;
    param_1[2] = unaff_r5;
    param_1[3] = unaff_r9;
  }
  if (in_ZR) {
    *unaff_r9 = (int)param_1;
    unaff_r9[-0x80] = *in_r12;
  }
  else {
    *unaff_r4 = param_2;
    *param_1 = param_2;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

