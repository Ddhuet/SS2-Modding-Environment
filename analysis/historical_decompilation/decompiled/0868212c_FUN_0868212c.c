
/* WARNING: Control flow encountered bad instruction data */

void FUN_0868212c(void)

{
  bool in_ZR;
  
  if (in_ZR) {
    software_interrupt(0xf0b5f5);
    software_interrupt(0xf00ff0);
    software_interrupt(0x100ff0);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

