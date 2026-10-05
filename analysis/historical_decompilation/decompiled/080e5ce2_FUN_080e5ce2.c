
/* WARNING: Control flow encountered bad instruction data */

void FUN_080e5ce2(void)

{
  undefined4 unaff_lr;
  bool in_ZR;
  undefined4 in_cr5;
  
  coprocessor_store2(2,in_cr5,unaff_lr);
  if (!in_ZR) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

