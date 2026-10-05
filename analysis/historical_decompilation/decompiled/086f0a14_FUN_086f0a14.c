
/* WARNING: Control flow encountered bad instruction data */

void FUN_086f0a14(void)

{
  bool in_ZR;
  undefined4 in_cr6;
  undefined4 in_cr11;
  
  if (in_ZR) {
    coprocessor_movefromRt(5,5,0,in_cr11,in_cr6);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

