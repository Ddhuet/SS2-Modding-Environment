
/* WARNING: Control flow encountered bad instruction data */

void FUN_08e16788(void)

{
  char in_NG;
  char in_OV;
  
  if (in_NG != in_OV) {
    software_interrupt(0xc1b5b6);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

