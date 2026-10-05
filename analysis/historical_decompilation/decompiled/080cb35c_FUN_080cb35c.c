
/* WARNING: Control flow encountered bad instruction data */

void FUN_080cb35c(undefined4 param_1,int param_2,undefined4 param_3,int param_4)

{
  undefined4 extraout_r3;
  int unaff_r4;
  undefined4 unaff_r5;
  int unaff_r6;
  uint unaff_r7;
  undefined4 unaff_r8;
  int unaff_r9;
  undefined4 unaff_r10;
  int iVar1;
  undefined4 in_r12;
  int iVar2;
  undefined4 unaff_lr;
  undefined1 unaff_pc;
  bool in_ZR;
  bool in_CY;
  bool bVar3;
  bool bVar4;
  undefined4 in_cr0;
  undefined8 uVar5;
  
  iVar1 = 0x80cb364 - ((unaff_r6 >> 0xb) + (uint)!in_CY);
  if (in_ZR) {
    *(undefined4 *)(param_4 + -4) = 0x80cb368;
    *(undefined4 *)(param_4 + -8) = unaff_lr;
    *(BADSPACEBASE **)(param_4 + -0xc) = register0x00000054;
    *(undefined4 *)(param_4 + -0x10) = in_r12;
    *(int *)(param_4 + -0x14) = iVar1;
    *(uint *)(param_4 + -0x18) = unaff_r7;
    *(int *)(param_4 + -0x1c) = unaff_r6;
    *(undefined4 *)(param_4 + -0x20) = unaff_r5;
    *(int *)(param_4 + -0x24) = unaff_r4;
    *(undefined4 *)(param_4 + -0x28) = param_1;
  }
  iVar2 = param_2 - (!in_CY + 0x3b400);
  bVar4 = in_CY;
  if (in_ZR) {
    bVar4 = unaff_r7 < 0x3000000e || 0x3000000e - unaff_r7 < (uint)in_CY;
  }
  bVar3 = unaff_r7 + !in_CY == 0x3000000e;
  if (!in_ZR || !bVar3) {
    *(int *)(iVar2 + -4) = iVar2;
    *(int *)(iVar2 + -8) = iVar1;
    *(undefined4 *)(iVar2 + -0xc) = unaff_r10;
    *(int *)(iVar2 + -0x10) = unaff_r9;
    *(int *)(iVar2 + -0x14) = unaff_r4;
    *(int *)(iVar2 + -0x18) = param_2;
    *(undefined4 *)(iVar2 + -0x1c) = param_1;
  }
  if (!bVar4) {
    software_interrupt(0x302911);
    unaff_r4 = coprocessor_movefromRt(1,4,in_cr0);
    param_2 = coprocessor_movefromRt2(1,4,in_cr0);
  }
  if (in_ZR && bVar3) {
    param_2 = *(int *)(unaff_r9 + -0x624);
  }
  *(undefined1 *)(unaff_r9 + 0x3e9) = unaff_pc;
  iVar1 = unaff_r4 - (((int)&stack0x00000000 >> 9) + (uint)!bVar4);
  bVar4 = iVar1 == 0;
  uVar5 = func_0x076fdab4(param_1,param_2);
  if (!bVar4) {
    iRam080cb378 = unaff_r4;
    uRam080cb37c = unaff_r5;
    iRam080cb380 = unaff_r6;
    uRam080cb384 = unaff_r7;
    uRam080cb388 = unaff_r8;
    uRam080cb38c = unaff_r10;
    uRam080cb370 = uVar5;
    *(undefined4 *)(iVar1 + -0x80cb39c) = extraout_r3;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

