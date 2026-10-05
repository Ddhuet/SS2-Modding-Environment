
/* WARNING: Control flow encountered bad instruction data */

void FUN_0825b722(int param_1)

{
  undefined4 unaff_r7;
  undefined4 unaff_r8;
  int unaff_r10;
  bool in_NG;
  bool in_ZR;
  bool in_CY;
  bool in_OV;
  undefined4 in_cr0;
  undefined4 in_cr14;
  
  if (in_OV) {
    if (!in_NG) {
      coprocessor_storelong(1,in_cr14,unaff_r8);
    }
    SignedSaturate(unaff_r10 >> 9,0x1f);
    SignedDoesSaturate(unaff_r10 >> 9,0x1f);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  coprocessor_loadlong2(0,in_cr0,unaff_r7);
                    /* WARNING: Could not recover jumptable at 0x08fc8dea. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  if (in_ZR) {
    (*(code *)(param_1 - (uint)!in_CY))();
    return;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

