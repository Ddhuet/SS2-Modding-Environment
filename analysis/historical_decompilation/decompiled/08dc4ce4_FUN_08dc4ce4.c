
/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x08dc4d0c) */
/* WARNING: Removing unreachable block (ram,0x08dc4d10) */
/* WARNING: Removing unreachable block (ram,0x08dc4d08) */
/* WARNING: Removing unreachable block (ram,0x08dc4d18) */
/* WARNING: Removing unreachable block (ram,0x08dc4d1c) */

void FUN_08dc4ce4(uint param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4)

{
  byte bVar1;
  int *piVar2;
  byte *unaff_r5;
  undefined4 unaff_r8;
  char in_NG;
  bool in_ZR;
  bool in_CY;
  bool in_OV;
  undefined4 in_cr3;
  undefined4 in_cr8;
  undefined4 in_cr14;
  undefined4 in_cr15;
  
  if (in_OV) {
    unaff_r5 = *(byte **)(unaff_r5 + 0x562);
  }
  bVar1 = *unaff_r5;
  if (in_CY && !in_ZR) {
    coprocessor_function(0xe,0xe,2,in_cr14,in_cr14,in_cr8);
    piVar2 = param_4 + 0x111;
    *param_4 = unaff_r8;
    param_4 = param_4 + 0x322;
    *piVar2 = (int)param_4;
  }
  if (!in_ZR && (bool)in_NG == in_OV) {
    coprocessor_load(8,in_cr3,param_4 + 0x44);
    coprocessor_load(0xf,in_cr15,0x8dc4e18);
  }
                    /* WARNING: Could not recover jumptable at 0x08dc4d04. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  if (!in_ZR) {
                    /* WARNING: Could not recover jumptable at 0x08dc4d08. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                    /* WARNING: Could not recover jumptable at 0x08dc4d0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  (*(code *)(param_1 & (uint)bVar1 << 4))();
  return;
}

