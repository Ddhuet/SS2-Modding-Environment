
/* WARNING: Control flow encountered bad instruction data */

void FUN_088d2f88(void)

{
  bool in_NG;
  undefined4 in_cr13;
  
  if (!in_NG) {
    coprocessor_loadlong(0xd,in_cr13,&stack0x00000154);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

