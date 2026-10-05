
/* WARNING: Control flow encountered bad instruction data */

void FUN_0825ee1a(undefined4 param_1,int *param_2,int param_3)

{
  uint unaff_r4;
  undefined4 unaff_r5;
  int unaff_r6;
  int unaff_r9;
  int unaff_r10;
  int unaff_lr;
  int unaff_pc;
  bool in_NG;
  bool in_ZR;
  char in_OV;
  undefined4 in_cr10;
  undefined4 in_cr12;
  
  if (in_NG == (bool)in_OV) {
    SignedSaturate(unaff_r6 >> 0xb,0xc);
    SignedDoesSaturate(unaff_r6 >> 0xb,0xc);
  }
  else {
    unaff_r10 = *param_2;
  }
  if (in_ZR) {
    coprocessor_loadlong(2,in_cr12,unaff_lr + 0x2f8);
  }
  if (in_NG) {
    *(char *)(unaff_r9 + -0x54) = (char)unaff_r5;
  }
  else {
    unaff_r5 = (undefined4)
               (((ulonglong)unaff_r4 << 0x20) + (longlong)param_3 * (longlong)unaff_pc + 0x80000000
               >> 0x20);
  }
  if (in_NG == (bool)in_OV) {
    **(undefined4 **)(unaff_r10 + -0x18) = *(undefined4 *)(unaff_r10 + -0x10);
  }
  else {
    coprocessor_load(0xe,in_cr10,unaff_r5);
  }
  if (!in_ZR) {
    software_interrupt(0xf4ccc3);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

