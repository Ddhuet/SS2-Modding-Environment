
/* WARNING: Control flow encountered bad instruction data */

void FUN_081adc4e(void)

{
  char in_NG;
  char in_OV;
  
  if (in_NG == in_OV) {
    software_interrupt(0xa1b5d0);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

