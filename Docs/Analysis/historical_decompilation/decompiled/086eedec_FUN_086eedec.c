
/* WARNING: Control flow encountered bad instruction data */

void FUN_086eedec(void)

{
  bool in_OV;
  
  if (!in_OV) {
    software_interrupt(0xceb56a);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

