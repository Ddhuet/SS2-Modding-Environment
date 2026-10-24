
/* WARNING: Control flow encountered bad instruction data */

void FUN_081d6872(void)

{
  bool in_ZR;
  
  if (!in_ZR) {
    software_interrupt(0xeebbb);
    func_0x08adf51a();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

