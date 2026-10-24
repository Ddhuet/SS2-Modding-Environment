
/* WARNING: Control flow encountered bad instruction data */

void FUN_081de2fa(void)

{
  bool in_ZR;
  undefined4 in_cr5;
  undefined4 in_cr11;
  undefined4 in_cr15;
  
  if (in_ZR) {
    coprocessor_function(0xf,0xd,5,in_cr11,in_cr15,in_cr5);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

