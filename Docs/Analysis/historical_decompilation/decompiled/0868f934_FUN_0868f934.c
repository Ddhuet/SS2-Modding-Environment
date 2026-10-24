
/* WARNING: Control flow encountered bad instruction data */

void FUN_0868f934(void)

{
  bool in_CY;
  
  if (in_CY) {
    software_interrupt(0xf10150);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

