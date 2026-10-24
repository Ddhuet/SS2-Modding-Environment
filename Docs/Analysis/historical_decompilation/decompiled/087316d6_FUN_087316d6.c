
/* WARNING: Control flow encountered bad instruction data */

void FUN_087316d6(int param_1)

{
  undefined4 unaff_r10;
  bool in_NG;
  
  if (!in_NG) {
    *(undefined4 *)(param_1 + -0x556) = unaff_r10;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

