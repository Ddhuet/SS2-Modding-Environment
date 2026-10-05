
/* WARNING: Control flow encountered bad instruction data */

void FUN_086226bc(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 unaff_r6;
  undefined4 unaff_r7;
  undefined4 unaff_r8;
  undefined4 unaff_r9;
  undefined4 unaff_r10;
  int unaff_r11;
  char in_NG;
  bool in_ZR;
  char in_OV;
  undefined4 in_cr11;
  
  if (in_ZR) {
    coprocessor_load(5,in_cr11,unaff_r11 + -0x16c);
  }
  if (!in_ZR && in_NG == in_OV) {
    *(undefined4 *)(param_1 + 4) = param_4;
    *(undefined4 *)(param_1 + 8) = unaff_r6;
    *(undefined4 *)(param_1 + 0xc) = unaff_r7;
    *(undefined4 *)(param_1 + 0x10) = unaff_r8;
    *(undefined4 *)(param_1 + 0x14) = unaff_r9;
    *(undefined4 *)(param_1 + 0x18) = unaff_r10;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

