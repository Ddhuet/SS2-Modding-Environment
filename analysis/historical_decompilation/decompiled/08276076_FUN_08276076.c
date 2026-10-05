
/* WARNING: Control flow encountered bad instruction data */

void FUN_08276076(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 unaff_r4;
  int unaff_r6;
  undefined4 unaff_r7;
  int unaff_r8;
  undefined4 unaff_r9;
  undefined4 unaff_r10;
  undefined4 in_r12;
  char in_NG;
  bool in_ZR;
  bool in_CY;
  char in_OV;
  
  if (in_NG != in_OV) {
    unaff_r8 = unaff_r8 + 0x5aa;
  }
  if (!in_CY || in_ZR) {
    software_interrupt(0xa3b9bf);
    software_interrupt(0xbfbca4);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (!in_CY || in_ZR) {
    uRam08276096 = param_1;
    uRam0827609a = param_2;
    uRam0827609e = param_4;
    uRam082760a2 = unaff_r4;
    uRam082760a6 = unaff_r7;
    iRam082760aa = unaff_r8;
    uRam082760ae = unaff_r10;
    uRam082760b2 = in_r12;
    uRam082760b6 = 0x8276092;
    return;
  }
  *(undefined4 *)(unaff_r6 + 4) = param_4;
  *(undefined4 *)(unaff_r6 + 8) = unaff_r4;
  *(undefined4 *)(unaff_r6 + 0xc) = unaff_r7;
  *(undefined4 *)(unaff_r6 + 0x10) = unaff_r9;
  *(undefined4 *)(unaff_r6 + 0x14) = unaff_r10;
  *(undefined4 *)(unaff_r6 + 0x18) = in_r12;
  *(undefined4 *)(unaff_r6 + 0x1c) = 0x827608e;
  if (in_NG == in_OV) {
    software_interrupt(0xa4a79a);
  }
  if (in_ZR || in_NG != in_OV) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  return;
}

