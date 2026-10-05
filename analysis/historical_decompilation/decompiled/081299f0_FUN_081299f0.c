
/* WARNING: Control flow encountered bad instruction data */

void FUN_081299f0(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  undefined4 unaff_r4;
  int unaff_r5;
  int unaff_r6;
  int unaff_r7;
  int unaff_r8;
  int unaff_r9;
  int unaff_r10;
  int iVar2;
  int unaff_r11;
  undefined4 in_r12;
  bool in_NG;
  bool in_ZR;
  bool in_CY;
  bool in_OV;
  undefined4 in_cr7;
  
  iVar2 = unaff_r10;
  if (!in_OV) {
    software_interrupt(0x36b57a);
    iVar2 = unaff_r10 + -0x1d4;
    coprocessor_loadlong(0xf,in_cr7,unaff_r10);
  }
  if (in_CY && !in_ZR) {
    unaff_r8 = unaff_r9 + unaff_r6 * 2;
  }
  if (!in_OV) {
    software_interrupt(0x7b7fd6);
    software_interrupt(0x7a7f5c);
    software_interrupt(0x7d7f7d);
    software_interrupt(0x7d7f7e);
    software_interrupt(0x797f7c);
                    /* WARNING: Could not recover jumptable at 0x08129a18. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    if (in_CY && !in_ZR) {
      (*(code *)((unaff_r11 >> 4) - (unaff_r5 + (uint)!in_CY)))();
      return;
    }
    software_interrupt(0x7a7ffc);
    software_interrupt(0x787f7a);
    if (in_NG == false) {
      coprocessor_load(0xf,in_cr7,unaff_r8);
    }
    software_interrupt(0x7f7b7f);
    uVar1 = (uint)bRam08129a34;
    if (in_CY && !in_ZR) {
      *(uint *)(uVar1 + 4) = uVar1;
      *(int *)(uVar1 + 8) = param_2;
      *(undefined4 *)(uVar1 + 0xc) = param_4;
      *(undefined4 *)(uVar1 + 0x10) = unaff_r4;
      *(int *)(uVar1 + 0x14) = unaff_r5;
      *(int *)(uVar1 + 0x18) = unaff_r6;
      *(int *)(uVar1 + 0x1c) = iVar2;
      *(undefined4 *)(uVar1 + 0x20) = in_r12;
      *(undefined4 *)(uVar1 + 0x24) = 0x8129a38;
    }
    software_interrupt(0xcd808e);
    if (in_CY && !in_ZR) {
      in_r12 = *(undefined4 *)(param_2 + -8);
      uVar1 = *(uint *)(param_2 + -0x2c);
    }
    if (!in_NG) {
      *(char *)(unaff_r7 + uVar1 * -0x80000) = (char)in_r12;
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

