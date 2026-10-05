
/* WARNING: Control flow encountered bad instruction data */

void FUN_082e062e(void)

{
  char in_NG;
  char in_OV;
  
  if (in_NG == in_OV) {
    software_interrupt(0x6db539);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

