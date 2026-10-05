
/* WARNING: Control flow encountered bad instruction data */

void FUN_086d80de(undefined4 *param_1,undefined4 param_2,int param_3)

{
  undefined4 unaff_r8;
  int unaff_r9;
  undefined4 unaff_r10;
  undefined4 unaff_r11;
  undefined4 in_r12;
  char in_NG;
  bool in_ZR;
  byte in_CY;
  char in_OV;
  undefined4 in_cr11;
  
  if (in_NG != in_OV) {
    *param_1 = unaff_r11;
    param_1[-0xe6086d8] = 0x86d80ea;
    param_1[-0xe6086d9] = register0x00000054;
    param_1[-0xe6086da] = in_r12;
    param_1[-0xe6086db] = unaff_r10;
    param_1[-0xe6086dc] = unaff_r9;
    param_1[-0xe6086dd] = unaff_r8;
  }
  if (in_ZR && unaff_r9 + param_3 + (uint)in_CY == 0) {
    coprocessor_loadlong(0xe,in_cr11,unaff_r8);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

