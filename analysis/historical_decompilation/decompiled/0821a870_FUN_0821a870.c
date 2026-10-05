
/* WARNING: Control flow encountered bad instruction data */

void FUN_0821a870(void)

{
  int in_r3;
  int extraout_r3;
  undefined1 *unaff_r6;
  int in_r12;
  int extraout_r12;
  int extraout_r12_00;
  char in_NG;
  undefined1 in_ZR;
  char in_OV;
  undefined4 in_cr14;
  
  if (in_NG != in_OV) {
    func_0x07047f40();
    in_r3 = extraout_r3;
    in_r12 = extraout_r12;
  }
  if (!(bool)in_ZR && in_NG == in_OV) {
    *(char *)(in_r3 + 0x1be) = (char)in_r12;
    *unaff_r6 = (char)in_r12;
    func_0x0748c79c();
    in_r12 = extraout_r12_00;
  }
  if (!(bool)in_ZR && in_NG == in_OV) {
    UnsignedSaturate((int)&stack0x00000000 >> 1,3);
    UnsignedDoesSaturate((int)&stack0x00000000 >> 1,3);
    coprocessor_storelong(10,in_cr14,in_r12 + 0x3a0);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  return;
}

