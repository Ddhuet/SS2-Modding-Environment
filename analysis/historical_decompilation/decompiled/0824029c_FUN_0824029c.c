
/* WARNING: Control flow encountered bad instruction data */

void FUN_0824029c(void)

{
  char in_NG;
  bool in_ZR;
  char in_OV;
  
  if (!in_ZR && in_NG == in_OV) {
    software_interrupt(0xd1f529);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

