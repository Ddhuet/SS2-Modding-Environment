
/* WARNING: Control flow encountered bad instruction data */

void FUN_08bfe62e(undefined4 param_1,undefined4 param_2)

{
  undefined4 extraout_r1;
  undefined4 extraout_r1_00;
  undefined4 unaff_r6;
  int in_r12;
  char in_NG;
  bool in_ZR;
  char in_OV;
  undefined4 in_cr5;
  undefined4 in_cr8;
  undefined4 in_cr11;
  
  if (!in_ZR && in_NG == in_OV) {
    coprocessor_loadlong(5,in_cr11,in_r12 + 0x214);
    coprocessor_loadlong(5,in_cr5,in_r12 + 0x21c);
    coprocessor_loadlong(8,in_cr8,in_r12 + 0x1c4);
    coprocessor_loadlong(8,in_cr8,in_r12 + 0x1c4);
    coprocessor_loadlong(8,in_cr8,in_r12 + 0x218);
  }
  if (in_NG != in_OV) {
    func_0x0a15502a();
    param_2 = extraout_r1;
  }
  if (!(bool)in_OV) {
    func_0x07acffee();
    param_2 = extraout_r1_00;
  }
  if ((bool)in_OV) {
    Absolute((char)param_2 - (char)unaff_r6);
    Absolute((char)((uint)param_2 >> 8) - (char)((uint)unaff_r6 >> 8));
    Absolute((char)((uint)param_2 >> 0x10) - (char)((uint)unaff_r6 >> 0x10));
    Absolute((char)((uint)param_2 >> 0x18) - (char)((uint)unaff_r6 >> 0x18));
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

