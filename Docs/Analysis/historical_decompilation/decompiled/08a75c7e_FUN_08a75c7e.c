
/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x08a75cbe) */
/* WARNING: Removing unreachable block (ram,0x08a75cba) */
/* WARNING: Removing unreachable block (ram,0x08a75cce) */
/* WARNING: Removing unreachable block (ram,0x08a75cd2) */
/* WARNING: Removing unreachable block (ram,0x08a75cd6) */

undefined4 FUN_08a75c7e(uint param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined4 unaff_r5;
  undefined4 unaff_r7;
  undefined4 unaff_r8;
  undefined4 unaff_r9;
  undefined4 *unaff_r10;
  undefined4 unaff_r11;
  undefined4 in_r12;
  undefined4 unaff_lr;
  char in_NG;
  bool in_ZR;
  bool in_CY;
  char in_OV;
  
  if (in_NG == in_OV) {
    unaff_r10[1] = param_4;
    unaff_r10[2] = unaff_r5;
    unaff_r10[3] = unaff_r7;
    unaff_r10[4] = unaff_r8;
    unaff_r10[5] = unaff_r10;
    unaff_r10[6] = in_r12;
    unaff_r10[7] = register0x00000054;
    unaff_r10[8] = 0x8a75c86;
    unaff_r10 = unaff_r10 + 8;
  }
  if (!in_ZR) {
                    /* WARNING: Could not recover jumptable at 0x08a75cba. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    if (!in_CY) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    *unaff_r10 = unaff_r8;
    unaff_r10[1] = unaff_r9;
    unaff_r10[2] = unaff_r10;
    unaff_r10[3] = unaff_r11;
    unaff_r10[4] = in_r12;
    unaff_r10[5] = unaff_lr;
    unaff_r10[6] = 0x8a75cca;
    return *unaff_r10;
  }
                    /* WARNING: Could not recover jumptable at 0x08a75cb6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (*(code *)(param_1 & 0x8a75c82))();
  return uVar1;
}

