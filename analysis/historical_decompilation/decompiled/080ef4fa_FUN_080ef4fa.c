
/* WARNING: Control flow encountered bad instruction data */

void FUN_080ef4fa(void)

{
  bool in_ZR;
  bool in_CY;
  
  if (in_CY && !in_ZR) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

