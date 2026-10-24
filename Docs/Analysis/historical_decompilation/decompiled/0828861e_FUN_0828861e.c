
/* WARNING: Control flow encountered bad instruction data */

void FUN_0828861e(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  undefined4 *unaff_r4;
  undefined1 unaff_r5;
  undefined4 unaff_r7;
  undefined4 unaff_r8;
  undefined4 unaff_r10;
  undefined4 in_r12;
  bool in_ZR;
  bool in_OV;
  
  if (!in_ZR) {
    *unaff_r4 = param_2;
    unaff_r4[1] = param_3;
    unaff_r4[2] = param_4;
    unaff_r4[3] = unaff_r4;
    unaff_r4[4] = unaff_r7;
    unaff_r4[5] = unaff_r8;
    unaff_r4[6] = unaff_r10;
    unaff_r4[7] = in_r12;
    unaff_r4[8] = register0x00000054;
    unaff_r4[9] = 0x8288626;
  }
  if (in_OV) {
    *(undefined1 *)(param_4 + -0x43d) = unaff_r5;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

