
/* WARNING: Control flow encountered bad instruction data */

void FUN_088d7f58(void)

{
  undefined4 unaff_r5;
  undefined4 unaff_lr;
  char in_NG;
  bool in_ZR;
  char in_OV;
  undefined4 in_cr1;
  undefined4 in_cr11;
  
  if (!in_ZR && in_NG == in_OV) {
    coprocessor_storelong(5,in_cr11,unaff_lr);
    coprocessor_store(1,in_cr1,unaff_r5);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

