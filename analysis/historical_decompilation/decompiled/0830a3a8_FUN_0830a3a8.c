
/* WARNING: Control flow encountered bad instruction data */

void FUN_0830a3a8(void)

{
  int unaff_lr;
  char in_NG;
  undefined1 in_ZR;
  char in_OV;
  undefined4 in_cr4;
  undefined4 in_cr9;
  undefined4 in_cr11;
  undefined4 in_cr14;
  
  if (in_NG == in_OV) {
    coprocessor_store(5,in_cr11,unaff_lr + 0x2f8);
  }
  else {
    func_0x07177a74();
  }
  if ((bool)in_ZR || in_NG != in_OV) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  coprocessor_function2(0xf,0xf,7,in_cr14,in_cr9,in_cr4);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

