
/* WARNING: Control flow encountered bad instruction data */

void FUN_0832ad94(void)

{
  char in_NG;
  bool in_ZR;
  bool in_CY;
  char in_OV;
  
  if (!in_ZR && in_NG == in_OV) {
    software_interrupt(0xc1b59f);
  }
  if (in_CY) {
    func_0x08425170();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

