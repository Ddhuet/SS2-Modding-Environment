
/* WARNING: Control flow encountered bad instruction data */

void FUN_08000618(void)

{
  bool in_NG;
  char in_OV;
  undefined4 in_cr15;
  
  if (!in_NG) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (in_OV != '\x01') {
    coprocessor_loadlong(0xf,in_cr15,0x8f92f20);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

