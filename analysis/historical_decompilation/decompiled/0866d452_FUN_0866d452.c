
/* WARNING: Control flow encountered bad instruction data */

void FUN_0866d452(void)

{
  bool in_OV;
  
  if (in_OV) {
    software_interrupt(0x29b5f0);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

