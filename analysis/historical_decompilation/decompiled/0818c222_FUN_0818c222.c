
/* WARNING: Control flow encountered bad instruction data */

void FUN_0818c222(int param_1,undefined4 param_2,undefined4 param_3)

{
  int unaff_r6;
  undefined4 unaff_r7;
  undefined4 unaff_r8;
  int unaff_r9;
  undefined4 in_r12;
  undefined4 unaff_lr;
  char in_NG;
  bool in_ZR;
  bool in_CY;
  char in_OV;
  undefined4 in_cr11;
  
  if (!in_CY || in_ZR) {
    coprocessor_loadlong(5,in_cr11,in_r12);
  }
  if (in_ZR) {
    *(undefined4 *)(unaff_r6 + -0x7f9) = param_3;
  }
  if (in_ZR || in_NG != in_OV) {
    in_NG = unaff_r9 < 0;
    in_ZR = unaff_r9 == 0;
  }
  if (in_ZR || in_NG != in_OV) {
    *(int *)param_1 = param_1;
    *(undefined4 *)(param_1 + 4) = param_2;
    *(int *)(param_1 + 8) = unaff_r6;
    *(undefined4 *)(param_1 + 0xc) = unaff_r7;
    *(undefined4 *)(param_1 + 0x10) = unaff_r8;
    *(undefined4 *)(param_1 + 0x14) = unaff_lr;
    *(undefined4 *)(param_1 + 0x18) = 0x818c236;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

