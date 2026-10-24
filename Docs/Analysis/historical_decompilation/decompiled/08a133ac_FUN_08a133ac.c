
/* WARNING: Control flow encountered bad instruction data */

void FUN_08a133ac(void)

{
  uint unaff_r4;
  int unaff_r11;
  bool in_ZR;
  bool in_CY;
  bool bVar1;
  
  bVar1 = false;
  if (in_ZR) {
    bVar1 = (unaff_r4 >> 10 | unaff_r4 << 0x16) == unaff_r11 + (uint)!in_CY;
  }
  if (bVar1) {
    software_interrupt(0x776664);
    software_interrupt(0x7761b5);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

