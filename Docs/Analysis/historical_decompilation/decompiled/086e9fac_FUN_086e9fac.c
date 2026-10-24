
/* WARNING: Control flow encountered bad instruction data */

void FUN_086e9fac(void)

{
  software_interrupt(0xf0b504);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

