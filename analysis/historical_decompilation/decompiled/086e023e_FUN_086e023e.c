
/* WARNING: Control flow encountered bad instruction data */

void FUN_086e023e(void)

{
  int unaff_r4;
  char in_NG;
  char in_OV;
  undefined4 in_cr10;
  
  if (in_NG == in_OV) {
    software_interrupt(0x4b000);
    coprocessor_store(0xe,in_cr10,unaff_r4 + -0x10);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

