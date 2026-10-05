
void FUN_082e7a90(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  uint unaff_r4;
  int unaff_r5;
  int unaff_r6;
  undefined4 unaff_pc;
  bool in_ZR;
  undefined4 in_cr0;
  undefined4 in_cr2;
  undefined4 in_cr11;
  
  if (in_ZR) {
    param_1 = param_1 + 0x288;
    coprocessor_loadlong(5,in_cr11,param_1);
  }
  coprocessor_moveto(9,2,7,param_4,in_cr0,in_cr2);
  if (!in_ZR) {
    *(undefined4 *)(unaff_r6 + unaff_r5 * -0x100000) = unaff_pc;
  }
                    /* WARNING: Could not recover jumptable at 0x082e7a9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(unaff_r4 & 0xfb00))(param_1);
  return;
}

