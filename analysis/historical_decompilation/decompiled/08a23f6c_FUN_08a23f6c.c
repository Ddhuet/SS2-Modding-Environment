
/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x08a23fa0) */

void FUN_08a23f6c(uint param_1,int param_2,undefined4 param_3,undefined1 *param_4)

{
  int *piVar1;
  int *piVar2;
  uint uVar3;
  byte *unaff_r5;
  uint unaff_r6;
  byte *unaff_r7;
  uint unaff_r11;
  uint unaff_lr;
  bool in_NG;
  bool in_ZR;
  bool in_OV;
  
  if (!in_NG) {
    unaff_r11 = (uint)*(byte *)(unaff_r11 - 0x5b6);
  }
  if (!in_OV) {
    unaff_r7 = (byte *)(uint)*(byte *)(unaff_r11 - 0x576);
  }
  if (!in_NG) {
    unaff_r7 = unaff_r7 + -0x656;
    unaff_r5 = (byte *)((uint)*unaff_r7 - ((uint)param_4 >> 6 | (int)param_4 << 0x1a));
    unaff_r6 = (uint)*unaff_r5;
  }
  if (in_OV) {
    uVar3 = (int)param_4 - (unaff_lr >> 0x1d | unaff_lr << 3);
    *param_4 = (char)uVar3;
  }
  else {
    uVar3 = (uint)*(byte *)(unaff_r6 - ((uint)param_4 >> 7));
  }
  if (in_ZR) {
    piVar1 = (int *)(param_1 & 0x8a23f90);
    piVar2 = (int *)((int)piVar1 - (int)unaff_r5);
    *piVar1 = (int)piVar2;
    piVar1[1] = param_2;
    *piVar2 = (int)piVar2 - (int)unaff_r7;
    piVar2[1] = param_2;
                    /* WARNING: Could not recover jumptable at 0x08a23f9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(unaff_r6 >> (uVar3 & 0xff) & 0x8a23fa4))();
    return;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

