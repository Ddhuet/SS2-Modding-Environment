
/* WARNING: Control flow encountered bad instruction data */

void FUN_0832a67a(void)

{
  char in_NG;
  bool in_ZR;
  char in_OV;
  undefined4 in_cr15;
  
  if (!in_ZR && in_NG == in_OV) {
    if (in_ZR) {
      coprocessor_loadlong(3,in_cr15,&stack0x00000000);
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

