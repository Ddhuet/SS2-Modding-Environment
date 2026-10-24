
/* WARNING: Control flow encountered bad instruction data */

void FUN_0816f2ac(void)

{
  undefined4 unaff_lr;
  bool in_NG;
  bool in_CY;
  undefined4 in_cr2;
  undefined4 in_cr4;
  undefined4 in_cr14;
  
  if (!in_CY) {
    coprocessor_store(3,in_cr2,unaff_lr);
  }
  if (in_NG) {
    coprocessor_function(4,4,2,in_cr4,in_cr2,in_cr14);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

