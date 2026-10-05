
/* WARNING: Control flow encountered bad instruction data */

void FUN_089f97ae(void)

{
  bool in_ZR;
  
  if (!in_ZR) {
    software_interrupt(0xb5b5);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

