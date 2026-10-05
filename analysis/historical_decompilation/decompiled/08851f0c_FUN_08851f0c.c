
/* WARNING: Control flow encountered bad instruction data */

void FUN_08851f0c(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 unaff_r4;
  undefined4 unaff_r5;
  undefined4 unaff_r8;
  undefined4 *unaff_r10;
  char in_NG;
  bool in_ZR;
  bool in_CY;
  char in_OV;
  
  if (in_NG == in_OV) {
    if (in_CY && !in_ZR) {
      *unaff_r10 = param_2;
      unaff_r10[1] = param_4;
      unaff_r10[2] = unaff_r4;
      unaff_r10[3] = unaff_r5;
      unaff_r10[4] = unaff_r8;
      unaff_r10[5] = unaff_r10;
      unaff_r10[6] = register0x00000054;
      unaff_r10[7] = 0x8851f18;
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

