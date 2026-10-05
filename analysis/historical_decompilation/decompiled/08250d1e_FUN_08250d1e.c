
/* WARNING: Control flow encountered bad instruction data */

void FUN_08250d1e(void)

{
  bool in_NG;
  
  if (in_NG) {
    software_interrupt(0x14f212);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

