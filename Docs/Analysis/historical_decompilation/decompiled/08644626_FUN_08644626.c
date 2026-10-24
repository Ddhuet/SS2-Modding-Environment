
/* WARNING: Control flow encountered bad instruction data */

void FUN_08644626(uint param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  uint uVar1;
  int unaff_r5;
  uint unaff_r7;
  uint unaff_r8;
  char in_NG;
  bool in_ZR;
  bool in_CY;
  char in_OV;
  
  if (in_NG != in_OV) {
    param_1 = param_1 * -0x7ff;
  }
  if (in_CY && !in_ZR) {
    uVar1 = unaff_r7 & 0xff;
    in_CY = uVar1 == 0 && in_CY || uVar1 != 0 && (bool)((byte)(param_1 >> 0x20 - uVar1) & 1);
    in_ZR = param_4 == param_1 << uVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x0864462e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  if (in_CY && !in_ZR) {
    (*(code *)(unaff_r5 - ((unaff_r8 >> 0xb) + (uint)!in_CY)))();
    return;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

