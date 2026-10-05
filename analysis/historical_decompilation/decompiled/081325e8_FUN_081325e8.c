
/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x08132604) */
/* WARNING: Removing unreachable block (ram,0x0826a688) */

void FUN_081325e8(void)

{
  int extraout_r3;
  undefined4 unaff_r7;
  undefined4 unaff_r9;
  undefined1 in_NG;
  undefined1 in_ZR;
  bool in_CY;
  undefined4 in_cr0;
  undefined4 in_cr12;
  undefined4 in_cr14;
  
  if (!in_CY) {
    software_interrupt(0xb921f1);
  }
  func_0x078f8dd0();
  if (!(bool)in_ZR) {
    coprocessor_load(6,in_cr0,unaff_r7);
    software_interrupt(0x1f0ac2);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if ((bool)in_NG) {
    coprocessor_load(0xd,in_cr14,unaff_r9);
    coprocessor_store(0xf,in_cr12,extraout_r3 + -0x37c);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

