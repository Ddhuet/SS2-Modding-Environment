
/* WARNING: Control flow encountered bad instruction data */

void FUN_0831db66(void)

{
  char in_NG;
  undefined1 in_ZR;
  undefined1 in_CY;
  char in_OV;
  
  if (!(bool)in_CY || (bool)in_ZR) {
    func_0x06a451fa();
  }
  if (!(bool)in_CY || (bool)in_ZR) {
    software_interrupt(0x9d9c9a);
  }
  if (in_NG == in_OV) {
    func_0x06d87202();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

