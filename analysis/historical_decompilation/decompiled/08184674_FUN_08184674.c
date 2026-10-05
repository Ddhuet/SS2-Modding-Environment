
/* WARNING: Control flow encountered bad instruction data */

void FUN_08184674(void)

{
  bool in_NG;
  undefined4 in_cr11;
  
  if (!in_NG) {
    coprocessor_storelong(5,in_cr11,0x818467c);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

