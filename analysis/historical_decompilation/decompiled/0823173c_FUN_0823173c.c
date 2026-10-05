
/* WARNING: Control flow encountered bad instruction data */

void FUN_0823173c(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  undefined4 extraout_r1;
  int extraout_r3;
  undefined4 *unaff_r4;
  undefined4 unaff_r6;
  undefined4 unaff_r7;
  undefined4 unaff_r8;
  undefined4 unaff_r9;
  undefined4 unaff_r10;
  undefined4 unaff_lr;
  char in_NG;
  undefined1 in_ZR;
  char in_OV;
  
  if (!(bool)in_ZR && in_NG == in_OV) {
    unaff_lr = 0x8231740;
    func_0x072dee48();
    param_2 = extraout_r1;
    param_4 = extraout_r3;
  }
  if ((bool)in_ZR || in_NG != in_OV) {
    if (!(bool)in_ZR && in_NG == in_OV) {
      *unaff_r4 = param_2;
      unaff_r4[1] = param_4;
      unaff_r4[2] = unaff_r6;
      unaff_r4[3] = unaff_r7;
      unaff_r4[4] = unaff_r8;
      unaff_r4[5] = unaff_r10;
      unaff_r4[6] = unaff_lr;
      unaff_r4[7] = 0x823174c;
    }
    if (!(bool)in_ZR) {
      *(undefined4 *)(param_4 + -4) = unaff_lr;
      *(undefined4 *)(param_4 + -8) = unaff_r9;
      *(undefined4 *)(param_4 + -0xc) = unaff_r8;
      *(undefined4 *)(param_4 + -0x10) = unaff_r6;
      *(undefined4 **)(param_4 + -0x14) = unaff_r4;
      *(int *)(param_4 + -0x18) = param_4;
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

