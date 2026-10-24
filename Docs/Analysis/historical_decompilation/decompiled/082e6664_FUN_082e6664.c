
/* WARNING: Control flow encountered bad instruction data */

void FUN_082e6664(void)

{
  undefined4 in_r3;
  bool in_ZR;
  undefined4 in_cr11;
  
  if (in_ZR) {
    coprocessor_storelong(5,in_cr11,in_r3);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

