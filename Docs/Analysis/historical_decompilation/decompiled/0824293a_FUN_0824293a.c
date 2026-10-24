
/* WARNING: Control flow encountered bad instruction data */

void FUN_0824293a(undefined4 param_1,undefined4 param_2,undefined1 param_3,int param_4)

{
  int unaff_r6;
  undefined1 *unaff_lr;
  bool in_NG;
  bool in_OV;
  undefined4 in_cr0;
  undefined4 in_cr7;
  undefined4 in_cr8;
  undefined4 in_cr11;
  undefined4 in_cr13;
  
  coprocessor_function(5,0xd,5,in_cr11,in_cr0,in_cr13);
  if (in_OV) {
    *unaff_lr = param_3;
  }
  if (!in_NG) {
    coprocessor_loadlong(0xe,in_cr7,param_4 + -0x1d4);
  }
  if (in_NG != in_OV) {
    coprocessor_loadlong(0xd,in_cr0,unaff_r6 + 0xcc);
  }
  coprocessor_movefromRt(2,6,5,in_cr8,in_cr8);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

