
/* WARNING: Control flow encountered bad instruction data */

void FUN_08a65348(void)

{
  undefined4 unaff_r5;
  char in_NG;
  undefined1 in_ZR;
  char in_OV;
  undefined4 in_cr5;
  
  if (in_NG != in_OV) {
    func_0x09fd290c();
  }
  if ((bool)in_ZR || in_NG != in_OV) {
    coprocessor_storelong(0xb,in_cr5,unaff_r5);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

