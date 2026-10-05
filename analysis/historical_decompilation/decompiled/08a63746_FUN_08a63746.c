
/* WARNING: Control flow encountered bad instruction data */

void FUN_08a63746(void)

{
  int unaff_lr;
  char in_NG;
  bool in_ZR;
  char in_OV;
  undefined4 in_cr0;
  undefined4 in_cr6;
  undefined4 in_cr7;
  undefined4 in_cr11;
  
  if (in_ZR || in_NG != in_OV) {
    coprocessor_function(5,0xf,3,in_cr11,in_cr0,in_cr6);
  }
  if (in_NG != in_OV) {
    coprocessor_storelong(7,in_cr6,0x8a63752);
  }
  if (in_ZR || in_NG != in_OV) {
    coprocessor_load(7,in_cr7,unaff_lr + -0x6c);
  }
  else {
    func_0x0961264a();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

