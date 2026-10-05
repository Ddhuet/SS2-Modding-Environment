
/* WARNING: Control flow encountered bad instruction data */

void FUN_08720678(undefined4 *param_1)

{
  undefined4 unaff_r4;
  undefined4 unaff_r8;
  undefined4 unaff_r9;
  undefined4 unaff_r10;
  undefined4 in_r12;
  char in_NG;
  char in_OV;
  
  if (in_NG == in_OV) {
    *param_1 = unaff_r4;
    param_1[1] = unaff_r8;
    param_1[2] = unaff_r9;
    param_1[3] = unaff_r10;
    param_1[4] = in_r12;
    param_1[5] = register0x00000054;
    param_1[6] = 0x8720684;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

