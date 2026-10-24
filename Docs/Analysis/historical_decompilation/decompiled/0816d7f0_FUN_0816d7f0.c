
/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x0816d804) */
/* WARNING: Removing unreachable block (ram,0x0816d7f8) */
/* WARNING: Removing unreachable block (ram,0x0816d7fc) */
/* WARNING: Removing unreachable block (ram,0x0816d808) */
/* WARNING: Removing unreachable block (ram,0x0816d80c) */

void FUN_0816d7f0(void)

{
  software_interrupt(0x1b130f);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

