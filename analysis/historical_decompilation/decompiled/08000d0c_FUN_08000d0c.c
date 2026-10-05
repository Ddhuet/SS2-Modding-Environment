
/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x08000d14) */
/* WARNING: Removing unreachable block (ram,0x08000d24) */

void FUN_08000d0c(void)

{
  bool in_NG;
  bool in_ZR;
  
  if (!in_NG) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (in_ZR) {
    software_interrupt(0x300ff0);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

