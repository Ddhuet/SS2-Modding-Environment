
/* WARNING: Control flow encountered bad instruction data */

void FUN_08a04bf4(void)

{
  char in_NG;
  char in_OV;
  
  if (in_NG != in_OV) {
    software_interrupt(0x65b555);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

