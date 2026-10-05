
/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x081a11c6) */

void FUN_081a11b2(void)

{
  undefined4 unaff_r6;
  uint unaff_r10;
  uint unaff_r11;
  undefined1 in_r12;
  char in_NG;
  bool in_ZR;
  bool in_CY;
  char in_OV;
  undefined4 in_cr11;
  
  if (in_NG != in_OV) {
    coprocessor_load(5,in_cr11,unaff_r6);
  }
  if (in_ZR || in_NG != in_OV) {
    uRam081a11c2 = in_r12;
  }
                    /* WARNING: Could not recover jumptable at 0x081a11c2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  if (!in_CY) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  (*(code *)(unaff_r10 & (unaff_r11 >> 0xf | unaff_r11 << 0x11)))();
  return;
}

