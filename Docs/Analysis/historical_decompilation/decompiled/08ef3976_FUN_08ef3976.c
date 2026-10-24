
/* WARNING: Control flow encountered bad instruction data */

void FUN_08ef3976(void)

{
  int in_r12;
  int extraout_r12;
  int extraout_r12_00;
  int extraout_r12_01;
  char in_NG;
  undefined1 in_ZR;
  char in_OV;
  undefined4 in_cr7;
  undefined4 in_cr8;
  
  if (in_NG == in_OV) {
    func_0x07022436();
    in_r12 = extraout_r12;
  }
  if (in_NG != in_OV) {
    func_0x07d91772();
    in_r12 = extraout_r12_00;
  }
  if (!(bool)in_ZR && in_NG == in_OV) {
    func_0x07e1177e();
    in_r12 = extraout_r12_01;
  }
  if (in_NG != in_OV) {
    coprocessor_storelong(7,in_cr7,in_r12);
  }
  if ((bool)in_ZR || in_NG != in_OV) {
    coprocessor_storelong(8,in_cr7,in_r12 + 0x2ec);
  }
  if (in_NG != in_OV) {
    coprocessor_loadlong(8,in_cr8,&stack0x000002ec);
    func_0x081d6496();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

