
/* WARNING: Control flow encountered bad instruction data */

void FUN_082426e6(void)

{
  bool in_ZR;
  
  if (in_ZR) {
    return;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

