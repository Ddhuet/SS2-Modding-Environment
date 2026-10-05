
/* WARNING: Control flow encountered bad instruction data */

void FUN_082fc58a(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 unaff_r5;
  undefined4 *unaff_r7;
  undefined4 unaff_r8;
  undefined4 unaff_r10;
  undefined4 in_r12;
  bool in_ZR;
  
  if (!in_ZR) {
    *unaff_r7 = param_1;
    unaff_r7[1] = param_3;
    unaff_r7[2] = param_4;
    unaff_r7[3] = unaff_r5;
    unaff_r7[4] = unaff_r8;
    unaff_r7[5] = unaff_r10;
    unaff_r7[6] = in_r12;
    unaff_r7[7] = register0x00000054;
    unaff_r7[8] = 0x82fc592;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

