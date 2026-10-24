
/* WARNING: Control flow encountered bad instruction data */

void FUN_08c9ba9e(undefined4 param_1)

{
  bool in_ZR;
  
  if (in_ZR) {
    software_interrupt(0xff0000);
  }
  func_0x07b5bac4(param_1);
  if (in_ZR) {
    software_interrupt(0xdcf000);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

