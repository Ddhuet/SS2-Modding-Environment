
/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x0a1694a0) */
/* WARNING: Removing unreachable block (ram,0x08e97f48) */

void FUN_08e97f3c(void)

{
  int in_r3;
  undefined4 unaff_r9;
  bool in_NG;
  bool in_CY;
  
  if (!in_CY) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (!in_CY) {
    if (!in_NG) {
      *(undefined4 *)(in_r3 + 0x296) = unaff_r9;
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

