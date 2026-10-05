
/* WARNING: Control flow encountered bad instruction data */

void FUN_08ef1d9c(void)

{
  bool in_ZR;
  bool in_CY;
  bool in_OV;
  
  if (in_CY && !in_ZR) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (in_OV) {
    if (!in_CY || in_ZR) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

