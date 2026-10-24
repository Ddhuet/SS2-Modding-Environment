
/* WARNING: Control flow encountered bad instruction data */

void FUN_0823b306(void)

{
  int unaff_r8;
  bool in_CY;
  undefined4 in_cr11;
  
  if (in_CY) {
    coprocessor_storelong(5,in_cr11,unaff_r8 + 0x27c);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

