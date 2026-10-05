
/* WARNING: Control flow encountered bad instruction data */

void FUN_08c9befe(undefined4 param_1,int param_2)

{
  bool in_ZR;
  
  if (in_ZR) {
    software_interrupt(0xff0000);
  }
  else {
    UnsignedSaturate(param_2 << 10,0x1f);
    UnsignedDoesSaturate(param_2 << 10,0x1f);
  }
  func_0x07b5bf24(param_1);
  if (in_ZR) {
    software_interrupt(0xdbf000);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

