
/* WARNING: Control flow encountered bad instruction data */

void FUN_089f9b02(void)

{
  bool in_ZR;
  
  if (in_ZR) {
    software_interrupt(0xbbb555);
    software_interrupt(0x420000);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

