
/* WARNING: Control flow encountered bad instruction data */

void FUN_0825e7c8(void)

{
  undefined4 unaff_r7;
  char in_NG;
  undefined1 in_ZR;
  char in_OV;
  undefined4 in_cr12;
  
  if (in_NG != in_OV) {
    func_0x0708be9c();
  }
  if (!(bool)in_ZR && in_NG == in_OV) {
    coprocessor_storelong(3,in_cr12,unaff_r7);
  }
  func_0x07f99f7a();
  if (!(bool)in_ZR) {
    software_interrupt(0x150c03);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

