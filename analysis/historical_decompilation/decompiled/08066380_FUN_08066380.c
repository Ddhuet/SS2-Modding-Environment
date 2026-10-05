
/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x08066388) */

void FUN_08066380(void)

{
  int in_r3;
  bool in_NG;
  bool in_CY;
  undefined4 in_cr11;
  
  if (in_NG) {
    coprocessor_store(5,in_cr11,in_r3 + -0xc0);
  }
  if (!in_CY) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

