
/* WARNING: Control flow encountered bad instruction data */

void FUN_08b3b53e(void)

{
  char in_NG;
  char in_OV;
  
  if (in_NG != in_OV) {
    software_interrupt(0xfe5446);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

