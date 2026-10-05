
/* WARNING: Control flow encountered bad instruction data */

void FUN_082db1ee(void)

{
  undefined4 unaff_lr;
  char in_NG;
  bool in_ZR;
  char in_OV;
  undefined4 in_cr11;
  
  if (in_ZR || in_NG != in_OV) {
    coprocessor_store(5,in_cr11,unaff_lr);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

