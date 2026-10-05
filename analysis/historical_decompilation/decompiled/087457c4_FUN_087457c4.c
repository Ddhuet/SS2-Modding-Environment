
/* WARNING: Control flow encountered bad instruction data */

void FUN_087457c4(void)

{
  int unaff_r10;
  char in_NG;
  char in_OV;
  undefined4 in_cr11;
  
  if (in_NG == in_OV) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (in_NG != in_OV) {
    if (in_NG != in_OV) {
      func_0x071f3fdc();
    }
    if (in_NG != in_OV) {
      coprocessor_store(0xc,in_cr11,unaff_r10 + 0x2a8);
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

