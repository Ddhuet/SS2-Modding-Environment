
/* WARNING: Control flow encountered bad instruction data */

undefined8 FUN_08172464(undefined4 param_1,int param_2,undefined4 param_3,int param_4)

{
  int unaff_r8;
  char in_NG;
  bool in_ZR;
  bool in_CY;
  char in_OV;
  
  if (in_NG == in_OV) {
    return CONCAT44(param_2 + 0x28,*(undefined4 *)(param_2 + 4));
  }
  if (in_CY && !in_ZR) {
    software_interrupt(0x90959f);
  }
  if (in_NG == in_OV) {
    SignedSaturate(param_4 << 0x13,1);
    SignedDoesSaturate(param_4 << 0x13,1);
  }
  if (!in_CY || in_ZR) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (in_CY && !in_ZR) {
    *(int *)(unaff_r8 + 0xc92) = unaff_r8;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

