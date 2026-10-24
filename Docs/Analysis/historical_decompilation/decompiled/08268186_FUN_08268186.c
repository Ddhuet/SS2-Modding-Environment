
/* WARNING: Control flow encountered bad instruction data */

void FUN_08268186(void)

{
  undefined4 unaff_r4;
  int in_r12;
  char in_NG;
  bool in_ZR;
  char in_OV;
  undefined4 in_cr4;
  undefined4 in_cr7;
  undefined4 in_cr11;
  undefined4 in_cr12;
  undefined4 in_cr14;
  
  coprocessor_function(5,0xc,1,in_cr11,in_cr12,in_cr7);
  if (in_NG != in_OV) {
    coprocessor_store(0,in_cr4,unaff_r4);
  }
  if (in_ZR || in_NG != in_OV) {
    coprocessor_store(0xf,in_cr14,in_r12 + -0x328);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

