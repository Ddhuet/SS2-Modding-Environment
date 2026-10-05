
/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x08e45e60) */
/* WARNING: Removing unreachable block (ram,0x08e45e68) */
/* WARNING: Removing unreachable block (ram,0x08e45d04) */
/* WARNING: Removing unreachable block (ram,0x08e45de8) */
/* WARNING: Removing unreachable block (ram,0x08e45e64) */
/* WARNING: Removing unreachable block (ram,0x08e45d00) */
/* WARNING: Removing unreachable block (ram,0x08e45e00) */
/* WARNING: Removing unreachable block (ram,0x08e45df8) */
/* WARNING: Removing unreachable block (ram,0x08e45df0) */
/* WARNING: Removing unreachable block (ram,0x08e45dec) */
/* WARNING: Removing unreachable block (ram,0x08e45df4) */
/* WARNING: Removing unreachable block (ram,0x08e45dfc) */
/* WARNING: Removing unreachable block (ram,0x08e45e04) */
/* WARNING: Removing unreachable block (ram,0x08e45e08) */
/* WARNING: Removing unreachable block (ram,0x08e45e0c) */
/* WARNING: Removing unreachable block (ram,0x08e45e10) */
/* WARNING: Removing unreachable block (ram,0x08e45e14) */
/* WARNING: Removing unreachable block (ram,0x08e45e18) */
/* WARNING: Removing unreachable block (ram,0x08e45e1c) */
/* WARNING: Removing unreachable block (ram,0x08e45e20) */
/* WARNING: Removing unreachable block (ram,0x08e45e24) */
/* WARNING: Removing unreachable block (ram,0x08e45e28) */
/* WARNING: Removing unreachable block (ram,0x08e45e2c) */
/* WARNING: Removing unreachable block (ram,0x08e45e30) */
/* WARNING: Removing unreachable block (ram,0x08e45e34) */
/* WARNING: Removing unreachable block (ram,0x08e45e38) */
/* WARNING: Removing unreachable block (ram,0x08e45e3c) */
/* WARNING: Removing unreachable block (ram,0x08e45e40) */
/* WARNING: Removing unreachable block (ram,0x08e45e44) */
/* WARNING: Removing unreachable block (ram,0x08e45e48) */
/* WARNING: Removing unreachable block (ram,0x08e45e4c) */
/* WARNING: Removing unreachable block (ram,0x08e45e50) */
/* WARNING: Removing unreachable block (ram,0x08e45e54) */
/* WARNING: Removing unreachable block (ram,0x08e45e58) */
/* WARNING: Removing unreachable block (ram,0x08e45e5c) */

void FUN_08e45c98(void)

{
  int unaff_r4;
  uint unaff_r5;
  uint unaff_r8;
  bool in_ZR;
  
  if (!in_ZR) {
                    /* WARNING: Could not recover jumptable at 0x08e45d00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                    /* WARNING: Could not recover jumptable at 0x08e45e5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                    /* WARNING: Could not recover jumptable at 0x08e45e60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Could not recover jumptable at 0x08e45cfc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(unaff_r8 & (unaff_r5 & (unaff_r5 & unaff_r4 << 10) << 0xe) << 6))();
  return;
}

