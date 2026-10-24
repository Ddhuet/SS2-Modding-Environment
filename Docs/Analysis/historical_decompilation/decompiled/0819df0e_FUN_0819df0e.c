
/* WARNING: Control flow encountered bad instruction data */

void FUN_0819df0e(void)

{
  bool in_ZR;
  bool in_CY;
  
  if (in_CY && !in_ZR) {
    return;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

