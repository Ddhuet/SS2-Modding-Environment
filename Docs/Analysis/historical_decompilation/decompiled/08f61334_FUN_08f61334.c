
/* WARNING: Control flow encountered bad instruction data */

void FUN_08f61334(void)

{
  bool in_ZR;
  bool in_CY;
  undefined4 in_cr11;
  
  if (!in_CY || in_ZR) {
    coprocessor_loadlong(5,in_cr11,&stack0x00000160);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

