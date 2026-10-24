
/* WARNING: Control flow encountered bad instruction data */

void FUN_08235b2e(void)

{
  undefined4 *in_r3;
  undefined4 unaff_r8;
  undefined4 unaff_r11;
  bool in_ZR;
  bool in_CY;
  
  if (!in_CY) {
    *in_r3 = unaff_r11;
  }
  if (!in_ZR) {
    SignedSaturate((char)unaff_r8,8);
    SignedSaturate((char)((uint)unaff_r8 >> 8) - (char)((uint)&stack0x00000000 >> 8),8);
    SignedSaturate((char)((uint)unaff_r8 >> 0x10) - (char)((uint)&stack0x00000000 >> 0x10),8);
    SignedSaturate((char)((uint)unaff_r8 >> 0x18) - (char)((uint)&stack0x00000000 >> 0x18),8);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

