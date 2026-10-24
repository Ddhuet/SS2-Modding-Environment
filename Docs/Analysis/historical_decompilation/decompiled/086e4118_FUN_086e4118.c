
/* WARNING: Control flow encountered bad instruction data */

void FUN_086e4118(void)

{
  software_interrupt(0xf0b5e9);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

