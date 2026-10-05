
/* WARNING: Control flow encountered bad instruction data */

void FUN_0830a3ac(void)

{
  char in_NG;
  undefined1 in_ZR;
  char in_OV;
  undefined4 in_cr4;
  undefined4 in_cr9;
  undefined4 in_cr14;
  
  if (in_NG != in_OV) {
    func_0x07177a74();
  }
  if (!(bool)in_ZR && in_NG == in_OV) {
    coprocessor_function2(0xf,0xf,7,in_cr14,in_cr9,in_cr4);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

