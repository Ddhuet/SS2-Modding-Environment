
/* WARNING: Control flow encountered bad instruction data */

void FUN_0822b1ae(void)

{
  char in_NG;
  bool in_ZR;
  char in_OV;
  
  if (!in_ZR && in_NG == in_OV) {
    software_interrupt(0xc8b59e);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

