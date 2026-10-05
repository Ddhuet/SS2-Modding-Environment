
/* WARNING: Control flow encountered bad instruction data */

void FUN_08263e1c(void)

{
  uint unaff_r11;
  bool in_ZR;
  bool in_OV;
  undefined4 in_cr7;
  
  if (in_OV) {
    coprocessor_loadlong(8,in_cr7,unaff_r11 & 0xffff07ff);
  }
  if (in_ZR) {
    software_interrupt(0x294660);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

