
/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x08a3a1f0) */

void FUN_08a3a1e8(void)

{
  uint unaff_r5;
  bool in_ZR;
  
  if (!in_ZR) {
                    /* WARNING: Could not recover jumptable at 0x08a3a1f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Could not recover jumptable at 0x08a3a1ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(((uint)&stack0x00000000 >> (unaff_r5 & 0x1f) |
             (int)&stack0x00000000 << 0x20 - (unaff_r5 & 0x1f)) & 0x8a3a1f4))();
  return;
}

