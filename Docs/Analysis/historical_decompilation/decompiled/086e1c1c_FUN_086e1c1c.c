
/* WARNING: Control flow encountered bad instruction data */

void FUN_086e1c1c(void)

{
  char in_NG;
  char in_OV;
  
  if (in_NG != in_OV) {
    software_interrupt(0xb7b5e7);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

