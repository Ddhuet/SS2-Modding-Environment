
/* WARNING: Control flow encountered bad instruction data */

void FUN_081c99fe(void)

{
  char in_NG;
  undefined1 in_ZR;
  undefined1 in_CY;
  char in_OV;
  
  if (in_NG != in_OV) {
    func_0x06f370c6();
  }
  if (!(bool)in_ZR && in_NG == in_OV) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (in_NG != in_OV) {
    software_interrupt(0xc5bbc2);
  }
  if (!(bool)in_ZR && in_NG == in_OV) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if ((bool)in_ZR) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (!(bool)in_CY) {
    func_0x08e53282();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

