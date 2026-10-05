
/* WARNING: Control flow encountered bad instruction data */

void FUN_08196480(void)

{
  char in_NG;
  char in_OV;
  
  if (in_NG != in_OV) {
    software_interrupt(0xb2b5c8);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

