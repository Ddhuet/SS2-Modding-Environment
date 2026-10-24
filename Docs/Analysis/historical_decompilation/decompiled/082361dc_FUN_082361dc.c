
/* WARNING: Control flow encountered bad instruction data */

void FUN_082361dc(void)

{
  int unaff_r7;
  uint unaff_lr;
  bool in_ZR;
  bool in_CY;
  undefined4 in_cr10;
  
  if (in_CY && !in_ZR) {
    unaff_lr = *(uint *)(unaff_r7 + (unaff_lr >> 3 | unaff_lr << 0x1d));
  }
  if (!in_CY) {
    coprocessor_storelong(0xc,in_cr10,unaff_lr);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

