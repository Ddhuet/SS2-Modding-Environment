
/* WARNING: Control flow encountered bad instruction data */

void FUN_08128d36(void)

{
  bool in_ZR;
  bool in_OV;
  undefined4 in_cr11;
  
  if (in_ZR) {
    coprocessor_loadlong(5,in_cr11,0x8128b3e);
  }
  if (!in_OV) {
    software_interrupt(0x7e6e80);
    software_interrupt(0xd180b6);
    software_interrupt(0x7774fb);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

