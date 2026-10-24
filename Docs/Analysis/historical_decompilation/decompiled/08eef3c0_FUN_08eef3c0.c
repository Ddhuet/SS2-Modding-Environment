
/* WARNING: Control flow encountered bad instruction data */

void FUN_08eef3c0(void)

{
  int unaff_r10;
  char in_NG;
  bool in_ZR;
  char in_OV;
  undefined4 in_cr11;
  undefined4 in_cr13;
  
  if (in_ZR || in_NG != in_OV) {
    coprocessor_store(5,in_cr11,unaff_r10 + 0x2a4);
    coprocessor_function(5,0xd,5,in_cr13,in_cr13,in_cr13);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

