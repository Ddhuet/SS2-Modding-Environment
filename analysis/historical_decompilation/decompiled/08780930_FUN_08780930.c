
/* WARNING: Control flow encountered bad instruction data */

void FUN_08780930(void)

{
  char in_NG;
  char in_OV;
  
  if (in_NG == in_OV) {
    software_interrupt(0x95b501);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

