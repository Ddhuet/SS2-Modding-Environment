
/* WARNING: Control flow encountered bad instruction data */

void FUN_082f969c(undefined4 param_1,undefined4 param_2,int param_3,int param_4)

{
  undefined4 unaff_r5;
  undefined4 *unaff_r6;
  undefined4 unaff_r7;
  int unaff_r8;
  int unaff_r9;
  undefined4 unaff_r10;
  int iVar1;
  uint in_r12;
  char in_NG;
  bool in_ZR;
  bool in_CY;
  char in_OV;
  undefined4 in_cr2;
  undefined4 in_cr6;
  undefined4 in_cr11;
  undefined4 in_cr14;
  
  if (in_ZR || in_NG != in_OV) {
    *unaff_r6 = param_1;
    unaff_r6[1] = param_4;
    unaff_r6[2] = unaff_r5;
    unaff_r6[3] = unaff_r7;
    unaff_r6[4] = unaff_r8;
    unaff_r6[5] = unaff_r10;
    unaff_r6[6] = in_r12;
    unaff_r6[7] = register0x00000054;
    unaff_r6[8] = 0x82f96a4;
  }
  if (in_NG != in_OV) {
    coprocessor_loadlong(4,in_cr14,param_4 + 0x394);
  }
  if (!in_CY || in_ZR) {
    in_OV = SCARRY4(in_r12,in_r12 >> 9);
    iVar1 = in_r12 + (in_r12 >> 9);
    in_NG = iVar1 < 0;
    in_ZR = iVar1 == 0;
  }
  if (!in_ZR && in_NG == in_OV) {
    unaff_r9 = *(int *)(param_3 + 0xe8e);
  }
  coprocessor_movefromRt(5,7,6,in_cr2,in_cr6);
  if (!in_ZR) {
    unaff_r8 = *(int *)(unaff_r9 + -8);
  }
  coprocessor_storelong(5,in_cr14,unaff_r8 + 0x38c);
  coprocessor_movefromRt(6,7,7,in_cr11,in_cr2);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

