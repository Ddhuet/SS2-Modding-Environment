
/* WARNING: Control flow encountered bad instruction data */

void FUN_081d0f6e(void)

{
  char in_NG;
  bool in_ZR;
  char in_OV;
  
  if (in_ZR || in_NG != in_OV) {
    software_interrupt(0xe6ddd9);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

