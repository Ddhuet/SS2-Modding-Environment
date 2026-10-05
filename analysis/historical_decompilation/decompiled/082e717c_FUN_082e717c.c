
/* WARNING: Control flow encountered bad instruction data */

void FUN_082e717c(void)

{
  char in_NG;
  bool in_ZR;
  char in_OV;
  
  if (in_ZR || in_NG != in_OV) {
    software_interrupt(0xb7b5e3);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

