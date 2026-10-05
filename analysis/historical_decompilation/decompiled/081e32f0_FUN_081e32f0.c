
/* WARNING: Control flow encountered bad instruction data */

void FUN_081e32f0(void)

{
  bool in_ZR;
  
  software_interrupt(0xd2d8bc);
  if (!in_ZR) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

