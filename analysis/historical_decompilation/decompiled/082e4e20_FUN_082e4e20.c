
/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x0845b4fc) */
/* WARNING: Removing unreachable block (ram,0x0845b5c4) */
/* WARNING: Removing unreachable block (ram,0x0845b5d0) */
/* WARNING: Removing unreachable block (ram,0x0845b5d8) */

void FUN_082e4e20(void)

{
  char in_NG;
  bool in_ZR;
  char in_OV;
  
  if (in_NG != in_OV) {
    software_interrupt(0xbab5f0);
  }
  if (in_ZR) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

