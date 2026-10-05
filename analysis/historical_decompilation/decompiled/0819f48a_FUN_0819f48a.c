
/* WARNING: Control flow encountered bad instruction data */

void FUN_0819f48a(undefined4 param_1,undefined4 param_2)

{
  int unaff_r8;
  undefined4 *in_r12;
  char in_NG;
  undefined1 in_ZR;
  bool in_CY;
  char in_OV;
  undefined4 in_cr9;
  undefined4 in_cr15;
  
  if (in_NG != in_OV) {
    SignedSaturate(unaff_r8 << 5,0x1a);
    SignedDoesSaturate(unaff_r8 << 5,0x1a);
  }
  if (in_CY) {
    *in_r12 = param_2;
    func_0x090351d6();
  }
  else {
    software_interrupt(0x2bf6c5);
  }
  if ((bool)in_ZR) {
    coprocessor_movefromRt(5,7,6,in_cr15,in_cr9);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

