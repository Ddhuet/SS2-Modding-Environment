
/* WARNING: Control flow encountered bad instruction data */

void FUN_0870624e(void)

{
  int unaff_r9;
  bool in_CY;
  undefined4 in_cr11;
  
  if (!in_CY) {
    coprocessor_load(5,in_cr11,unaff_r9 + 0x27c);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

