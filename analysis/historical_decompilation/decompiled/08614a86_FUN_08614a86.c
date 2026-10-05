
/* WARNING: Control flow encountered bad instruction data */

void FUN_08614a86(uint param_1,undefined4 param_2,int param_3)

{
  int unaff_r11;
  uint in_r12;
  bool in_NG;
  bool in_ZR;
  bool in_CY;
  
  if (in_CY) {
    software_interrupt(0x42b566);
  }
  if (in_NG) {
    param_1 = in_r12 | param_3 >> 2;
  }
                    /* WARNING: Could not recover jumptable at 0x08614a92. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  if (!in_CY || in_ZR) {
    if (in_NG) {
      uRam08614b9e = param_1;
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  (*(code *)(unaff_r11 + -0x10c29534))();
  return;
}

