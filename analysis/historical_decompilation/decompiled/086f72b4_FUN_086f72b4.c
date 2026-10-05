
/* WARNING: Control flow encountered bad instruction data */

void FUN_086f72b4(int param_1)

{
  char in_NG;
  bool in_OV;
  undefined4 in_cr11;
  
  if ((bool)in_NG == in_OV) {
    software_interrupt(0xf0b570);
  }
  if (in_OV) {
    coprocessor_loadlong(3,in_cr11,param_1 + 0x3c0);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

