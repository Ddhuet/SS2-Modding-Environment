
/* WARNING: Control flow encountered bad instruction data */

void FUN_082e4f40(void)

{
  bool in_ZR;
  undefined1 in_CY;
  
  if (in_ZR) {
    func_0x07a9263c();
  }
  if (!(bool)in_CY) {
    software_interrupt(0x4a40fc);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

