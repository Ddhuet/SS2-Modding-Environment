
/* WARNING: Control flow encountered bad instruction data */

void FUN_081cea9a(void)

{
  undefined1 in_r12;
  char in_NG;
  bool in_ZR;
  char in_OV;
  
  if (!in_ZR && in_NG == in_OV) {
    software_interrupt(0xc5b5b3);
  }
  uRam081ceaa6 = in_r12;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

