
/* WARNING: Control flow encountered bad instruction data */

void FUN_08104e22(void)

{
  bool in_ZR;
  undefined4 in_cr3;
  undefined4 in_cr11;
  undefined4 in_cr14;
  
  if (in_ZR) {
    coprocessor_function(5,0xc,7,in_cr11,in_cr14,in_cr3);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

