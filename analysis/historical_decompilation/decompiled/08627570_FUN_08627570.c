
/* WARNING: Control flow encountered bad instruction data */

void FUN_08627570(void)

{
  undefined4 unaff_r6;
  char in_NG;
  char in_OV;
  undefined4 in_cr0;
  
  if (in_NG != in_OV) {
    coprocessor_storelong(0,in_cr0,unaff_r6);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  SignedSaturate(0x313abe00,0x1f);
  SignedDoesSaturate(0x313abe00,0x1f);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

