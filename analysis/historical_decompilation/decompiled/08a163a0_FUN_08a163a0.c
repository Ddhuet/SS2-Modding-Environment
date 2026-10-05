
/* WARNING: Control flow encountered bad instruction data */

void FUN_08a163a0(undefined4 param_1,undefined4 param_2,uint param_3)

{
  int unaff_r4;
  uint unaff_r5;
  undefined1 *unaff_r6;
  uint unaff_r10;
  undefined1 *unaff_r11;
  bool in_NG;
  bool in_CY;
  bool in_OV;
  
  if (in_CY) {
    unaff_r11 = (undefined1 *)(param_3 ^ 0x1dc00000);
  }
  if (!in_OV) {
    unaff_r6 = (undefined1 *)((byte)unaff_r6[-(unaff_r5 >> 0xc | unaff_r5 << 0x14)] - 0x6b6);
    *unaff_r6 = (char)unaff_r5;
  }
  if (!in_NG) {
    unaff_r6[-699] = (char)unaff_r4;
    *(char *)(unaff_r4 + -0xa48) = (char)param_3;
    *unaff_r11 = (char)param_3;
    unaff_r6[-699] = (char)unaff_r11 - (char)(unaff_r10 >> 5);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

