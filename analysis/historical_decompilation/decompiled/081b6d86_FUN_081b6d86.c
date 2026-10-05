
/* WARNING: Control flow encountered bad instruction data */

void FUN_081b6d86(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *unaff_r5;
  undefined4 unaff_r8;
  undefined4 unaff_r9;
  undefined4 unaff_r10;
  undefined4 in_r12;
  char in_NG;
  char in_OV;
  
  if (in_NG == in_OV) {
    *unaff_r5 = param_1;
    unaff_r5[1] = param_3;
    unaff_r5[2] = param_4;
    unaff_r5[3] = unaff_r8;
    unaff_r5[4] = unaff_r9;
    unaff_r5[5] = unaff_r10;
    unaff_r5[6] = in_r12;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

