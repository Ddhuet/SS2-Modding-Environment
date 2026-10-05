
/* WARNING: Control flow encountered bad instruction data */

void FUN_08f3ce12(void)

{
  char in_NG;
  bool in_ZR;
  bool in_CY;
  char in_OV;
  
  if (!in_CY) {
    return;
  }
  if (!in_ZR && in_NG == in_OV) {
    software_interrupt(0xffb522);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

