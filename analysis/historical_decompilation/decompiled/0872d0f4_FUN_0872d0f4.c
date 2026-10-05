
/* WARNING: Control flow encountered bad instruction data */

void FUN_0872d0f4(void)

{
  char in_NG;
  char in_OV;
  
  if (in_NG == in_OV) {
    software_interrupt(0xf0aff0);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

