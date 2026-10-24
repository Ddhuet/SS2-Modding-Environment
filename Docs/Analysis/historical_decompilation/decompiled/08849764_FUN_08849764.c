
/* WARNING: Control flow encountered bad instruction data */

void FUN_08849764(void)

{
  int unaff_r6;
  char in_NG;
  undefined1 in_ZR;
  char in_OV;
  undefined4 in_cr6;
  undefined4 in_cr7;
  undefined4 in_cr12;
  undefined4 in_cr15;
  
  if ((bool)in_ZR || in_NG != in_OV) {
    coprocessor_movefromRt(5,7,2,in_cr15,in_cr12);
    coprocessor_storelong(5,in_cr6,unaff_r6 + -0x198);
    coprocessor_storelong(6,in_cr6,unaff_r6 + -0x4b0);
    coprocessor_storelong(8,in_cr7,unaff_r6 + -0x868);
  }
  else {
    func_0x0a2097b4();
  }
  if ((bool)in_ZR || in_NG != in_OV) {
    func_0x0a2897a8();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

