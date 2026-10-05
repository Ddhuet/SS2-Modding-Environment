
/* WARNING: Control flow encountered bad instruction data */

void FUN_08a00598(uint param_1)

{
  uint uVar1;
  int unaff_r5;
  uint unaff_r6;
  uint unaff_r7;
  undefined1 unaff_pc;
  bool in_ZR;
  bool in_OV;
  
  if (!in_ZR) {
    if (in_OV) {
      uRam08a005b4 = unaff_pc;
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Could not recover jumptable at 0x08a005a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = unaff_r5 >> (unaff_r7 & 0xff) & 4;
  (*(code *)(param_1 & (unaff_r6 >> uVar1 | unaff_r6 << 0x20 - uVar1)))();
  return;
}

