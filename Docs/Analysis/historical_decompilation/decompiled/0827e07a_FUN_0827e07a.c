
/* WARNING: Control flow encountered bad instruction data */

void FUN_0827e07a(void)

{
  char in_NG;
  char in_OV;
  
  if (in_NG == in_OV) {
    software_interrupt(0xb2b5b9);
    func_0x06d69b26();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

