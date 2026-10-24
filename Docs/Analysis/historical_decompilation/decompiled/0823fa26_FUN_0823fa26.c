
/* WARNING: Control flow encountered bad instruction data */

void FUN_0823fa26(void)

{
  undefined4 unaff_r7;
  bool in_CY;
  undefined4 in_cr11;
  
  if (!in_CY) {
    coprocessor_load(5,in_cr11,unaff_r7);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

