
/* WARNING: Control flow encountered bad instruction data */

void FUN_08682be6(void)

{
  bool in_NG;
  bool in_ZR;
  
  if (in_NG) {
    software_interrupt(0xf6b5ff);
  }
  if (in_ZR) {
    software_interrupt(0xf13b70);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

