
/* WARNING: Control flow encountered bad instruction data */

void FUN_08014cb4(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 extraout_r2;
  undefined4 extraout_r3;
  undefined4 uVar4;
  undefined4 unaff_r4;
  undefined4 unaff_r5;
  undefined4 unaff_r6;
  undefined4 unaff_r7;
  undefined4 unaff_r8;
  undefined4 *unaff_r9;
  undefined4 unaff_r10;
  undefined4 extraout_r12;
  undefined1 in_NG;
  undefined1 in_ZR;
  undefined1 in_CY;
  undefined4 in_cr0;
  undefined4 in_cr1;
  undefined8 uVar5;
  
  uVar5 = func_0x08752c74();
  puVar1 = (undefined4 *)((ulonglong)uVar5 >> 0x20);
  if (!(bool)in_ZR) {
    *unaff_r9 = unaff_r7;
    unaff_r9[-1] = (int)uVar5;
    *unaff_r9 = unaff_r8;
    unaff_r9[-1] = extraout_r3;
  }
  uVar4 = extraout_r3;
  if ((bool)in_NG) {
    unaff_r7 = *puVar1;
    uVar4 = puVar1[-1];
    uVar5 = CONCAT44(puVar1 + -3,puVar1[-2]);
  }
  iVar3 = (int)((ulonglong)uVar5 >> 0x20);
  puVar1 = (undefined4 *)uVar5;
  if ((bool)in_CY && !(bool)in_ZR) {
    iVar3 = iVar3 + 0x30;
    coprocessor_store(8,in_cr1,iVar3);
  }
  if (!(bool)in_ZR) {
    *puVar1 = unaff_r7;
    puVar1[-1] = uVar4;
  }
  if ((bool)in_CY) {
    puVar1 = (undefined4 *)((uint)puVar1 | (int)puVar1 << 10);
  }
  puVar2 = puVar1;
  if (!(bool)in_ZR) {
    *puVar1 = unaff_r10;
    puVar1[-1] = unaff_r6;
    puVar1[-2] = uVar4;
    puVar1[-3] = puVar1;
    puVar2 = puVar1 + -1;
    coprocessor_store(0xc,in_cr0,puVar1);
  }
  if ((bool)in_CY && !(bool)in_ZR) {
    *puVar2 = register0x00000054;
    puVar2[-1] = extraout_r12;
    puVar2[-2] = unaff_r7;
    puVar2[-3] = unaff_r5;
    puVar2[-4] = unaff_r4;
    puVar2[-5] = uVar4;
    puVar2[-6] = extraout_r2;
    puVar2[-7] = iVar3;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

