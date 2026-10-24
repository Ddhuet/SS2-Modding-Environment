
/* WARNING: Control flow encountered bad instruction data */

void FUN_082cf040(void)

{
  bool in_ZR;
  undefined4 in_cr1;
  undefined4 in_cr2;
  undefined4 in_cr5;
  undefined4 in_cr11;
  undefined4 in_cr14;
  
  if (in_ZR) {
    coprocessor_function(5,0xd,7,in_cr11,in_cr11,in_cr1);
  }
  coprocessor_function(0xf,1,1,in_cr2,in_cr14,in_cr5);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

