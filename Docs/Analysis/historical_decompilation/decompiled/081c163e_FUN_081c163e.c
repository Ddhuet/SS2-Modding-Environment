
/* WARNING: Control flow encountered bad instruction data */

void FUN_081c163e(undefined4 param_1,undefined4 param_2,undefined4 *param_3)

{
  undefined4 unaff_r11;
  undefined4 unaff_lr;
  bool in_NG;
  bool in_ZR;
  
  if (!in_ZR) {
    *param_3 = unaff_r11;
  }
  if (!in_NG) {
    SignedSaturate((char)unaff_r11 - (char)unaff_lr,8);
    SignedSaturate((char)((uint)unaff_r11 >> 8) - (char)((uint)unaff_lr >> 8),8);
    SignedSaturate((char)((uint)unaff_r11 >> 0x10) - (char)((uint)unaff_lr >> 0x10),8);
    SignedSaturate((char)((uint)unaff_r11 >> 0x18) - (char)((uint)unaff_lr >> 0x18),8);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

