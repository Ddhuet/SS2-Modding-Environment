
/* WARNING: Control flow encountered bad instruction data */

void FUN_081d9564(void)

{
  char in_NG;
  bool in_ZR;
  char in_OV;
  
  if (!in_ZR && in_NG == in_OV) {
    software_interrupt(0xc2b5ac);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

