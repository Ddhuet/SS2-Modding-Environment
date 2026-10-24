
/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x089f9210) */

void FUN_089f9204(uint param_1)

{
  uint unaff_r6;
  bool in_ZR;
  
  if (in_ZR) {
                    /* WARNING: Could not recover jumptable at 0x089f920c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(param_1 & (unaff_r6 >> 0x1e | unaff_r6 << 2)))();
    return;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

