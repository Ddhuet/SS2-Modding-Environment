
/* WARNING: Control flow encountered bad instruction data */

void FUN_08838da8(undefined4 param_1,int param_2)

{
  int extraout_r1;
  char in_NG;
  undefined1 in_ZR;
  char in_OV;
  undefined4 in_cr1;
  undefined4 in_cr2;
  undefined4 in_cr3;
  undefined4 in_cr8;
  undefined4 in_cr9;
  undefined4 in_cr11;
  undefined4 in_cr15;
  
  if ((bool)in_ZR || in_NG != in_OV) {
    coprocessor_function(4,0xe,2,in_cr11,in_cr15,in_cr2);
    software_interrupt(0xfc5451);
    coprocessor_function(3,0xf,2,in_cr9,in_cr15,in_cr3);
  }
  else {
    coprocessor_movefromRt(5,6,2,in_cr15,in_cr1);
    software_interrupt(0xff9452);
    software_interrupt(0xffa342);
    coprocessor_storelong(2,in_cr8,&stack0x00000000);
    func_0x06fd5650();
    param_2 = extraout_r1;
  }
  if (!(bool)in_ZR) {
    SignedSaturate(param_2 << 2,0xd);
    SignedDoesSaturate(param_2 << 2,0xd);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

