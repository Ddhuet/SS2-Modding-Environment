
/* WARNING: Control flow encountered bad instruction data */

void FUN_0866ed40(int *param_1)

{
  undefined4 unaff_r4;
  undefined4 unaff_r5;
  undefined4 unaff_r7;
  undefined4 unaff_r9;
  undefined4 unaff_r10;
  undefined4 in_r12;
  bool in_ZR;
  
  if (in_ZR) {
    *param_1 = (int)param_1 + -0x96;
  }
  else {
    uRam0866ed6c = 0x866ed54;
    uRam0866ed54 = unaff_r4;
    uRam0866ed58 = unaff_r5;
    uRam0866ed5c = unaff_r7;
    uRam0866ed60 = unaff_r9;
    uRam0866ed64 = unaff_r10;
    uRam0866ed68 = in_r12;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

