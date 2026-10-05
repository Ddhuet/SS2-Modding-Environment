
/* WARNING: Control flow encountered bad instruction data */

void FUN_08d73d9a(int param_1)

{
  char in_NG;
  bool in_ZR;
  bool in_OV;
  undefined4 in_cr11;
  
  if (!in_ZR && (bool)in_NG == in_OV) {
    coprocessor_loadlong(5,in_cr11,param_1 + 0x154);
  }
  if (in_OV) {
    software_interrupt(0xbbbb);
    software_interrupt(0xbcf666);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

