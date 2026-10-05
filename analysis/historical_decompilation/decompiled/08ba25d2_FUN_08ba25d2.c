
/* WARNING: Control flow encountered bad instruction data */

void FUN_08ba25d2(void)

{
  uint unaff_r5;
  bool in_ZR;
  
  if (!in_ZR) {
    in_ZR = 0x8ba25da << (unaff_r5 & 0xff) == -1;
  }
  if (!in_ZR) {
    software_interrupt(0xf111);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

