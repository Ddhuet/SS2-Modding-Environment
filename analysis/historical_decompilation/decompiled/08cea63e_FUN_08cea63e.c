
/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x08cea67e) */
/* WARNING: Removing unreachable block (ram,0x08cea67a) */
/* WARNING: Removing unreachable block (ram,0x08cea68e) */
/* WARNING: Removing unreachable block (ram,0x08cea692) */
/* WARNING: Removing unreachable block (ram,0x08cea696) */

uint FUN_08cea63e(uint param_1,uint param_2,undefined4 param_3,uint param_4)

{
  uint uVar1;
  uint unaff_r5;
  uint unaff_r7;
  uint unaff_r8;
  uint unaff_r9;
  uint *unaff_r10;
  uint unaff_r11;
  uint in_r12;
  uint unaff_lr;
  char in_NG;
  bool in_ZR;
  bool in_CY;
  char in_OV;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  
  if (in_NG == in_OV) {
    unaff_r10[1] = param_4;
    unaff_r10[2] = unaff_r5;
    unaff_r10[3] = unaff_r7;
    unaff_r10[4] = unaff_r8;
    unaff_r10[5] = (uint)unaff_r10;
    unaff_r10[6] = in_r12;
    unaff_r10[7] = (uint)register0x00000054;
    unaff_r10[8] = 0x8cea646;
    unaff_r10 = unaff_r10 + 8;
  }
  bVar2 = false;
  bVar4 = in_CY;
  if (in_ZR) {
    uVar1 = unaff_r8 >> 0x17;
    bVar4 = param_2 < uVar1 || uVar1 - param_2 < (uint)in_CY;
    unaff_r11 = uVar1 - (param_2 + !in_CY);
    bVar2 = unaff_r11 == 0;
  }
  bVar3 = false;
  bVar5 = bVar4;
  if (bVar2) {
    software_interrupt(0x280000);
    software_interrupt(0x980000);
    software_interrupt(0x980000);
    bVar5 = unaff_r11 < param_1 || param_1 - unaff_r11 < (uint)bVar4;
    param_1 = param_1 - (unaff_r11 + !bVar4);
    bVar3 = param_1 == 0;
  }
  bVar2 = false;
  bVar4 = bVar5;
  if (bVar3) {
    bVar4 = unaff_r11 < param_1 || param_1 - unaff_r11 < (uint)bVar5;
    param_1 = param_1 - (unaff_r11 + !bVar5);
    bVar2 = param_1 == 0;
  }
  if (!bVar2) {
                    /* WARNING: Could not recover jumptable at 0x08cea67a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    if (!bVar4) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    *unaff_r10 = unaff_r8;
    unaff_r10[1] = unaff_r9;
    unaff_r10[2] = (uint)unaff_r10;
    unaff_r10[3] = unaff_r11;
    unaff_r10[4] = in_r12;
    unaff_r10[5] = unaff_lr;
    unaff_r10[6] = 0x8cea68a;
    return *unaff_r10;
  }
                    /* WARNING: Could not recover jumptable at 0x08cea676. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (*(code *)(param_1 & 0x8cea662))();
  return uVar1;
}

