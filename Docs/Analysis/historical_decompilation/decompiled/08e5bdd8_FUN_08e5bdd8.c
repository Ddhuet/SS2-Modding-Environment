
/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x08e5bde8) */
/* WARNING: Removing unreachable block (ram,0x074dbde8) */

void FUN_08e5bdd8(void)

{
  bool in_ZR;
  
  if (in_ZR) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  software_interrupt(0xfbb5fb);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

