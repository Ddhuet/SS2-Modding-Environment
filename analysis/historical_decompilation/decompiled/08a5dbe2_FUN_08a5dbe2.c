
/* WARNING: Control flow encountered bad instruction data */

void FUN_08a5dbe2(void)

{
  undefined4 unaff_r10;
  char in_NG;
  bool in_ZR;
  char in_OV;
  undefined4 in_cr3;
  undefined4 in_cr11;
  
  if (in_ZR || in_NG != in_OV) {
    coprocessor_storelong(5,in_cr11,&stack0x00000000);
  }
  func_0x078a6066();
  coprocessor_load2(2,in_cr3,unaff_r10);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

