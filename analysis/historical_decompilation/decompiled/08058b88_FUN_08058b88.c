
/* WARNING: Control flow encountered bad instruction data */

void FUN_08058b88(void)

{
  int in_r12;
  undefined4 in_cr15;
  
  coprocessor_loadlong2(7,in_cr15,in_r12 + -0x304);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

