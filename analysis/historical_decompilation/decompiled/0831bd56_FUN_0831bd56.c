
/* WARNING: Control flow encountered bad instruction data */

void FUN_0831bd56(void)

{
  bool in_ZR;
  bool in_CY;
  
  if (!in_CY || in_ZR) {
    software_interrupt(0xaeb5b1);
  }
  else {
    func_0x064fcfce();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

