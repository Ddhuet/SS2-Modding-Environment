
/* WARNING: Control flow encountered bad instruction data */

void FUN_086db1ea(void)

{
  char in_NG;
  char in_OV;
  
  if (in_NG == in_OV) {
    software_interrupt(0xf0b571);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

