
/* WARNING: Control flow encountered bad instruction data */

void FUN_081674e2(undefined4 param_1,undefined4 param_2,int param_3)

{
  int extraout_r2;
  int unaff_r7;
  int unaff_lr;
  char in_NG;
  undefined1 in_ZR;
  bool in_CY;
  char in_OV;
  undefined4 in_cr4;
  undefined4 in_cr11;
  undefined4 in_cr14;
  
  if ((bool)in_ZR) {
    coprocessor_movefromRt(5,6,5,in_cr11,in_cr14);
  }
  if (in_NG != in_OV) {
    *(undefined1 *)(unaff_r7 + 0x805) = 0;
  }
  if (in_CY) {
    unaff_lr = 0x81674f2;
    func_0x088e500a();
    param_3 = extraout_r2;
  }
  coprocessor_load(8,in_cr4,unaff_lr + -0xf8);
  if ((bool)in_ZR || in_NG != in_OV) {
    coprocessor_load(9,in_cr11,param_3 + 0x34c);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

