
/* WARNING: Control flow encountered bad instruction data */

void FUN_086e9d76(undefined4 param_1,int param_2)

{
  int unaff_r4;
  int *in_r12;
  char in_NG;
  bool in_ZR;
  char in_OV;
  undefined4 in_cr10;
  
  if (in_ZR) {
    param_2 = param_2 + 0x4b2;
  }
  if (in_NG == in_OV) {
    software_interrupt(0x4b000);
    coprocessor_store(0xe,in_cr10,unaff_r4 + -0x10);
  }
  if (in_ZR) {
    *in_r12 = param_2;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

