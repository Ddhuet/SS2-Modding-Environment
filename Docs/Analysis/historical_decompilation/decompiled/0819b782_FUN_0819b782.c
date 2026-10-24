
/* WARNING: Control flow encountered bad instruction data */

void FUN_0819b782(void)

{
  char in_NG;
  bool in_ZR;
  char in_OV;
  
  if (in_ZR || in_NG != in_OV) {
    software_interrupt(0xff121a);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

