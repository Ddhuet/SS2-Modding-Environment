
/* WARNING: Control flow encountered bad instruction data */

void FUN_0802e8c8(undefined4 *param_1)

{
  undefined4 unaff_r4;
  undefined4 unaff_r5;
  undefined4 unaff_r8;
  undefined4 unaff_r10;
  undefined4 in_r12;
  bool in_NG;
  
  if (in_NG) {
    *param_1 = 0x802e8d0;
    param_1[-1] = register0x00000054;
    param_1[-2] = in_r12;
    param_1[-3] = unaff_r10;
    param_1[-4] = unaff_r8;
    param_1[-5] = unaff_r5;
    param_1[-6] = unaff_r4;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

