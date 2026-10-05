
/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x081a8d5e) */
/* WARNING: Removing unreachable block (ram,0x081a8d62) */
/* WARNING: Removing unreachable block (ram,0x081a8d66) */
/* WARNING: Removing unreachable block (ram,0x081a8d6a) */
/* WARNING: Removing unreachable block (ram,0x081a8d6e) */
/* WARNING: Removing unreachable block (ram,0x081a8d72) */

void FUN_081a8d52(undefined4 param_1,int param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  int unaff_r10;
  bool in_ZR;
  bool in_CY;
  undefined4 in_cr11;
  
  iVar1 = param_2;
  if (!in_CY) {
    iVar1 = param_2 + 0x98;
    coprocessor_loadlong(5,in_cr11,param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x081a8d56. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  if (in_ZR) {
                    /* WARNING: Could not recover jumptable at 0x081a8d5a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(0x80 - (unaff_r10 + (uint)!in_CY)))(param_1,iVar1);
    return;
  }
  (*(code *)(param_4 - (!in_CY + 0xd8000003)))();
  return;
}

