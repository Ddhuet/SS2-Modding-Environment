
/* WARNING: Control flow encountered bad instruction data */

void FUN_082f659a(void)

{
  bool in_ZR;
  undefined1 in_CY;
  
  if (in_ZR) {
    func_0x08123c6e();
  }
  if (!(bool)in_CY) {
    software_interrupt(0x45fdea);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

