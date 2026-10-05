
/* WARNING: Control flow encountered bad instruction data */

void FUN_086ee768(void)

{
  bool in_NG;
  
  if (!in_NG) {
    software_interrupt(0xfb521);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

