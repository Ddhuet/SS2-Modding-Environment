
/* WARNING: Control flow encountered bad instruction data */

void FUN_086d154c(void)

{
  bool in_NG;
  
  if (!in_NG) {
    software_interrupt(0x54b531);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

