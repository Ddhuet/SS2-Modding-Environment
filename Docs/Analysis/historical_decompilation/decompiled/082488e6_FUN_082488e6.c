
/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x08248902) */
/* WARNING: Removing unreachable block (ram,0x08c135ca) */
/* WARNING: Removing unreachable block (ram,0x08c135ce) */

void FUN_082488e6(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 unaff_r4;
  undefined4 *unaff_r6;
  undefined4 unaff_r7;
  undefined4 unaff_r10;
  undefined4 in_r12;
  undefined4 unaff_lr;
  char in_NG;
  bool in_ZR;
  bool in_CY;
  char in_OV;
  undefined4 in_cr2;
  undefined4 in_cr11;
  
  if (in_NG != in_OV) {
    param_2 = param_2 + 0x31c;
    coprocessor_load(5,in_cr11,param_2);
  }
  if (!in_ZR && in_NG == in_OV) {
    *unaff_r6 = param_1;
    unaff_r6[1] = param_2;
    unaff_r6[2] = param_4;
    unaff_r6[3] = unaff_r4;
    unaff_r6[4] = unaff_r6;
    unaff_r6[5] = unaff_r7;
    unaff_r6[6] = unaff_r10;
    unaff_r6[7] = in_r12;
    unaff_r6[8] = unaff_lr;
    unaff_r6[9] = 0x82488f6;
  }
  if (in_ZR) {
    if (in_CY) {
      coprocessor_store(0,in_cr2,unaff_r4);
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Could not recover jumptable at 0x082488f6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((uint)unaff_r6 & 0xf600))();
  return;
}

