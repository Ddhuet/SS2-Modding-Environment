
/* WARNING: Control flow encountered bad instruction data */

void FUN_080d6e08(void)

{
  char in_NG;
  bool in_ZR;
  char in_OV;
  
  if (in_NG != in_OV) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (in_ZR || in_NG != in_OV) {
    func_0x0770c564();
  }
  else {
    software_interrupt(0xccc9c6);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

