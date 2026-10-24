
/* WARNING: Control flow encountered bad instruction data */

void FUN_082505ac(void)

{
  char in_NG;
  char in_OV;
  
  if (in_NG != in_OV) {
    software_interrupt(0x93b50e);
  }
  func_0x086d35c4();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

