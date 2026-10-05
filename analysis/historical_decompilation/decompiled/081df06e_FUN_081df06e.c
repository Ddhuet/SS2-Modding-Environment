
/* WARNING: Control flow encountered bad instruction data */

void FUN_081df06e(void)

{
  int unaff_lr;
  bool in_ZR;
  undefined4 in_cr11;
  
  if (in_ZR) {
    coprocessor_loadlong(5,in_cr11,unaff_lr + 0x254);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

