
/* WARNING: Control flow encountered bad instruction data */

void FUN_082471d4(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int unaff_r5;
  undefined4 *unaff_r6;
  undefined4 unaff_r7;
  undefined4 in_r12;
  undefined4 unaff_lr;
  char in_NG;
  bool in_ZR;
  char in_OV;
  undefined4 in_cr13;
  
  if (in_ZR || in_NG != in_OV) {
    coprocessor_loadlong(7,in_cr13,unaff_r5 + 0x364);
  }
  else {
    *unaff_r6 = param_3;
    unaff_r6[1] = param_4;
    unaff_r6[2] = unaff_r6;
    unaff_r6[3] = unaff_r7;
    unaff_r6[4] = in_r12;
    unaff_r6[5] = unaff_lr;
    unaff_r6[6] = 0x82471e4;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

