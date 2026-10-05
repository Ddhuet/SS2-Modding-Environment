
/* WARNING: Control flow encountered bad instruction data */

void FUN_0818b5f4(void)

{
  char in_NG;
  char in_OV;
  
  if (in_NG != in_OV) {
    software_interrupt(0xb6b5a0);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

