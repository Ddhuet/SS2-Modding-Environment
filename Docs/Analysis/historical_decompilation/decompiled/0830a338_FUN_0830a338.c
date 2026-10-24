
/* WARNING: Control flow encountered bad instruction data */

void FUN_0830a338(void)

{
  undefined4 unaff_r9;
  char in_NG;
  char in_OV;
  undefined4 in_cr11;
  
  if (in_NG != in_OV) {
    software_interrupt(0xbbb5b2);
    coprocessor_load(0xe,in_cr11,unaff_r9);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

