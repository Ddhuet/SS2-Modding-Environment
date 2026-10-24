
/* WARNING: Control flow encountered bad instruction data */

void FUN_0825359c(void)

{
  bool in_ZR;
  undefined4 in_cr14;
  
  if (!in_ZR) {
    coprocessor_storelong(8,in_cr14,&stack0x00000000);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

