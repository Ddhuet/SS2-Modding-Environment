
/* WARNING: Control flow encountered bad instruction data */

void FUN_08275116(void)

{
  int unaff_r10;
  char in_NG;
  char in_OV;
  undefined4 in_cr11;
  undefined4 in_cr12;
  
  if (in_NG != in_OV) {
    coprocessor_load(5,in_cr11,&stack0x00000000);
  }
  coprocessor_storelong(5,in_cr12,unaff_r10 + 0x398);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

