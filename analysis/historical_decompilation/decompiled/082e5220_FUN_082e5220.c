
/* WARNING: Control flow encountered bad instruction data */

void FUN_082e5220(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  undefined4 *unaff_r4;
  undefined4 unaff_r5;
  undefined4 unaff_r7;
  undefined4 unaff_r9;
  undefined4 unaff_r10;
  undefined4 in_r12;
  undefined4 unaff_lr;
  bool in_NG;
  bool in_ZR;
  char in_OV;
  undefined4 in_cr0;
  undefined4 in_cr7;
  
  if (in_NG != (bool)in_OV) {
    coprocessor_movefromRt(5,5,7,in_cr7,in_cr0);
  }
  if (!in_ZR) {
    *unaff_r4 = 0x82e522c;
    unaff_r4[-1] = unaff_lr;
    unaff_r4[-2] = in_r12;
    unaff_r4[-3] = unaff_r10;
    unaff_r4[-4] = unaff_r9;
    unaff_r4[-5] = unaff_r7;
    unaff_r4[-6] = unaff_r5;
    unaff_r4[-7] = unaff_r4;
    unaff_r4[-8] = param_2;
    unaff_r4[-9] = param_1;
  }
  if (in_NG) {
    *(char *)(param_4 + -0xf4d) = (char)param_4;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

