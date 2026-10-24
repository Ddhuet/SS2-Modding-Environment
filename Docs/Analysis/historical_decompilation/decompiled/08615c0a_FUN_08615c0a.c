
/* WARNING: Control flow encountered bad instruction data */

void FUN_08615c0a(void)

{
  char in_NG;
  bool in_ZR;
  bool in_CY;
  char in_OV;
  
  if (!in_ZR && in_NG == in_OV) {
    return;
  }
  if (!in_CY) {
    software_interrupt(0xf0afb0);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

