
/* WARNING: Control flow encountered bad instruction data */

void FUN_08309952(undefined4 param_1,undefined4 param_2)

{
  undefined4 *unaff_r4;
  undefined1 *unaff_r5;
  undefined4 unaff_r6;
  undefined4 unaff_r7;
  undefined4 unaff_r8;
  undefined4 unaff_r9;
  undefined1 in_r12;
  undefined4 unaff_lr;
  char in_NG;
  bool in_ZR;
  char in_OV;
  
  if (in_NG != in_OV) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (!in_ZR && in_NG == in_OV) {
    *unaff_r5 = in_r12;
    *unaff_r4 = param_1;
    unaff_r4[1] = param_2;
    unaff_r4[2] = unaff_r6;
    unaff_r4[3] = unaff_r7;
    unaff_r4[4] = unaff_r8;
    unaff_r4[5] = unaff_r9;
    unaff_r4[6] = unaff_lr;
    unaff_r4[7] = 0x8309962;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

