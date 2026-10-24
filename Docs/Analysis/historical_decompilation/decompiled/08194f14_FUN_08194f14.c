
/* WARNING: Control flow encountered bad instruction data */

void FUN_08194f14(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  longlong lVar1;
  undefined4 unaff_r4;
  undefined4 unaff_r5;
  undefined4 *unaff_r6;
  uint unaff_r7;
  uint unaff_r8;
  undefined4 unaff_r9;
  undefined4 unaff_r10;
  undefined4 unaff_r11;
  undefined4 in_r12;
  char in_NG;
  bool in_ZR;
  bool in_CY;
  char in_OV;
  
  if (in_NG == in_OV) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (!in_CY || in_ZR) {
    software_interrupt(0x9fa6a8);
    unaff_r9 = *(undefined4 *)(unaff_r8 + 0xb9d);
  }
  if (in_NG == in_OV) {
    lVar1 = (ulonglong)unaff_r7 * (ulonglong)unaff_r8;
    in_NG = lVar1 < 0;
    in_ZR = lVar1 == 0;
    unaff_r9 = (undefined4)((ulonglong)lVar1 >> 0x20);
  }
  if (in_NG != in_OV) {
    if (in_NG != in_OV) {
      return;
    }
    if (!in_ZR && in_NG == in_OV) {
      *unaff_r6 = param_3;
      unaff_r6[1] = param_4;
      unaff_r6[2] = unaff_r4;
      unaff_r6[3] = unaff_r5;
      unaff_r6[4] = unaff_r7;
      unaff_r6[5] = unaff_r8;
      unaff_r6[6] = unaff_r9;
      unaff_r6[7] = unaff_r10;
      unaff_r6[8] = unaff_r11;
      unaff_r6[9] = in_r12;
      unaff_r6[10] = register0x00000054;
      unaff_r6[0xb] = 0x8194f34;
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

