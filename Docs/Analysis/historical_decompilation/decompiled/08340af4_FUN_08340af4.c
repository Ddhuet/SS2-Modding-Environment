
/* WARNING: Control flow encountered bad instruction data */

void FUN_08340af4(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *unaff_r4;
  undefined4 unaff_r6;
  undefined4 unaff_r7;
  undefined4 unaff_r8;
  undefined4 unaff_r10;
  undefined1 *in_r12;
  char in_NG;
  bool in_ZR;
  char in_OV;
  
  if (in_ZR || in_NG != in_OV) {
    *unaff_r4 = param_2;
    unaff_r4[1] = param_3;
    unaff_r4[2] = param_4;
    unaff_r4[3] = unaff_r6;
    unaff_r4[4] = unaff_r7;
    unaff_r4[5] = unaff_r8;
    unaff_r4[6] = unaff_r10;
    unaff_r4[7] = in_r12;
    unaff_r4[8] = register0x00000054;
    unaff_r4[9] = 0x8340afc;
  }
  else {
    *in_r12 = (char)unaff_r10;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

