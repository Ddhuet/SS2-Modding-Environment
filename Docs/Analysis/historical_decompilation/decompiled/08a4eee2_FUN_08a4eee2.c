
/* WARNING: Control flow encountered bad instruction data */

void FUN_08a4eee2(void)

{
  bool in_ZR;
  
  if (in_ZR) {
    software_interrupt(0xff0000);
    software_interrupt(0xbb0000);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

