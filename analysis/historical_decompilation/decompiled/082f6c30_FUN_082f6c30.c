
/* WARNING: Control flow encountered bad instruction data */

void FUN_082f6c30(void)

{
  char in_NG;
  char in_OV;
  
  if (in_NG != in_OV) {
    software_interrupt(0xbcb5ac);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

