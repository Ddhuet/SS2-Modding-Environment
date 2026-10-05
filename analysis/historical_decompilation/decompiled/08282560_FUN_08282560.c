
/* WARNING: Control flow encountered bad instruction data */

void FUN_08282560(void)

{
  software_interrupt(0xc5b5ec);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

