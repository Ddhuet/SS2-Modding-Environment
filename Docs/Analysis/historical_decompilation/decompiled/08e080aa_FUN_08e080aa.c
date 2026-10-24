
/* WARNING: Control flow encountered bad instruction data */

void FUN_08e080aa(void)

{
  bool in_ZR;
  bool in_CY;
  undefined4 in_cr11;
  
  if (in_CY && !in_ZR) {
    coprocessor_storelong(5,in_cr11,&stack0x00000154);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

