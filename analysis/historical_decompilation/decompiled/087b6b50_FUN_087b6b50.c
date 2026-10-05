
/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x087b6b54) */

void FUN_087b6b50(void)

{
  undefined4 unaff_r4;
  undefined4 unaff_r5;
  bool in_ZR;
  bool in_CY;
  undefined4 in_cr3;
  
  if (!in_ZR) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (!in_CY) {
    coprocessor_loadlong(7,in_cr3,unaff_r4);
    coprocessor_loadlong(7,in_cr3,unaff_r4);
    coprocessor_loadlong(7,in_cr3,unaff_r4);
    coprocessor_loadlong(7,in_cr3,unaff_r5);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

