
/* WARNING: Control flow encountered bad instruction data */

void FUN_082e721e(void)

{
  int unaff_r5;
  bool in_CY;
  undefined4 in_cr3;
  undefined4 in_cr9;
  undefined4 in_cr11;
  
  if (in_CY) {
    coprocessor_function(0xe,4,2,in_cr3,in_cr9,in_cr9);
  }
  else {
    coprocessor_loadlong(5,in_cr11,unaff_r5 + 0x2ec);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

