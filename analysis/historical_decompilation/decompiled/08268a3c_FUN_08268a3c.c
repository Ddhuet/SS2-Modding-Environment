
/* WARNING: Control flow encountered bad instruction data */

void FUN_08268a3c(void)

{
  char in_NG;
  bool in_ZR;
  char in_OV;
  
  if (in_ZR) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (in_NG != in_OV) {
    software_interrupt(0xe34a31);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

