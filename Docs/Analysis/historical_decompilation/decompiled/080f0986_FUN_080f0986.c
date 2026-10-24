
/* WARNING: Control flow encountered bad instruction data */

void FUN_080f0986(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  undefined4 unaff_r4;
  undefined4 unaff_r5;
  undefined4 *unaff_r6;
  undefined4 unaff_r7;
  int unaff_r9;
  undefined4 unaff_r10;
  undefined4 unaff_lr;
  char in_NG;
  bool in_ZR;
  char in_OV;
  undefined4 in_cr11;
  undefined4 in_cr13;
  
  if (in_NG != in_OV) {
    coprocessor_load(5,in_cr11,unaff_r9 + 0x2cc);
  }
  if (in_ZR || in_NG != in_OV) {
    coprocessor_loadlong(4,in_cr13,unaff_r10);
  }
  else {
    *unaff_r6 = param_1;
    unaff_r6[1] = param_2;
    unaff_r6[2] = param_3;
    unaff_r6[3] = param_4;
    unaff_r6[4] = unaff_r4;
    unaff_r6[5] = unaff_r5;
    unaff_r6[6] = unaff_r7;
    unaff_r6[7] = unaff_r10;
    unaff_r6[8] = unaff_lr;
    unaff_r6[9] = 0x80f0992;
  }
  *(char *)(param_4 + 0x3de) = (char)unaff_lr;
  software_interrupt(0xe9e7e5);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

