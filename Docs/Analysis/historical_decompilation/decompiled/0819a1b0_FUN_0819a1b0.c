
/* WARNING: Control flow encountered bad instruction data */

void FUN_0819a1b0(void)

{
  undefined4 in_r12;
  undefined4 in_cr11;
  
  coprocessor_load2(5,in_cr11,in_r12);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

