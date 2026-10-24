
/* WARNING: Control flow encountered bad instruction data */

undefined4 FUN_081c2dd8(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  undefined4 extraout_r2;
  undefined4 extraout_r2_00;
  undefined4 extraout_r3;
  undefined4 extraout_r3_00;
  int unaff_r4;
  undefined4 *puVar2;
  undefined4 unaff_r5;
  undefined4 unaff_r6;
  undefined4 unaff_r7;
  undefined4 unaff_r8;
  int unaff_r9;
  undefined4 unaff_r10;
  int unaff_r11;
  undefined4 in_r12;
  undefined4 extraout_r12;
  undefined4 extraout_r12_00;
  undefined1 *puVar3;
  undefined4 *unaff_lr;
  undefined4 *puVar4;
  char in_NG;
  undefined1 in_ZR;
  char in_OV;
  undefined4 in_cr2;
  undefined4 in_cr15;
  undefined8 unaff_d15;
  undefined8 in_d24;
  undefined8 uVar5;
  undefined1 auStack_3c [60];
  
  uVar5 = CONCAT44(param_2,param_1);
  if ((bool)in_ZR || in_NG != in_OV) {
    *(undefined4 *)(unaff_r11 + 4) = param_1;
    *(undefined4 *)(unaff_r11 + 8) = param_4;
    *(int *)(unaff_r11 + 0xc) = unaff_r4;
    *(undefined4 *)(unaff_r11 + 0x10) = unaff_r5;
    *(undefined4 *)(unaff_r11 + 0x14) = unaff_r7;
    *(undefined4 *)(unaff_r11 + 0x18) = unaff_r8;
    *(undefined4 *)(unaff_r11 + 0x1c) = unaff_r10;
    *(undefined4 *)(unaff_r11 + 0x20) = in_r12;
    *(BADSPACEBASE **)(unaff_r11 + 0x24) = register0x00000054;
    *(undefined4 *)(unaff_r11 + 0x28) = 0x81c2de0;
  }
  if (!(bool)in_ZR) {
    unaff_lr = (undefined4 *)0x81c2de0;
    uVar5 = func_0x07a02128();
    param_3 = extraout_r2;
    param_4 = extraout_r3;
    in_r12 = extraout_r12;
  }
  puVar2 = (undefined4 *)(unaff_r4 + 4);
  coprocessor_loadlong2(3,in_cr15,unaff_r4);
  if (!(bool)in_ZR) {
    puVar2 = (undefined4 *)(unaff_r4 + -0x7f9);
    param_3 = *puVar2;
    puVar3 = auStack_3c;
    register0x00000054 = (BADSPACEBASE *)auStack_3c;
    coprocessor_store(8,in_cr2,puVar3);
  }
  if (!(bool)in_OV) {
    unaff_lr = (undefined4 *)0x81c2df0;
    uVar5 = func_0x0a1572b8();
    param_3 = extraout_r2_00;
    param_4 = extraout_r3_00;
    in_r12 = extraout_r12_00;
  }
  puVar1 = (undefined4 *)((ulonglong)uVar5 >> 0x20);
  puVar4 = unaff_lr;
  if (!(bool)in_NG) {
    puVar4 = unaff_lr + -0x1d9;
    *unaff_lr = param_4;
  }
  if (!(bool)in_ZR) {
    puVar1[-1] = puVar4;
    puVar1[-2] = register0x00000054;
    puVar1[-3] = unaff_r9;
    puVar1[-4] = unaff_r8;
    puVar1[-5] = unaff_r6;
    puVar1[-6] = puVar2;
    puVar1[-7] = param_4;
    puVar1 = puVar1 + -8;
    *puVar1 = param_3;
  }
  if (in_NG == in_OV) {
    VectorMultiply(unaff_d15,in_d24,1);
    return *puVar4;
  }
  *(int *)(unaff_r9 + 4) = (int)uVar5;
  *(undefined4 **)(unaff_r9 + 8) = puVar1;
  *(undefined4 *)(unaff_r9 + 0xc) = param_3;
  *(undefined4 *)(unaff_r9 + 0x10) = param_4;
  *(undefined4 **)(unaff_r9 + 0x14) = puVar2;
  *(undefined4 *)(unaff_r9 + 0x18) = unaff_r8;
  *(undefined4 *)(unaff_r9 + 0x1c) = unaff_r10;
  *(undefined4 *)(unaff_r9 + 0x20) = in_r12;
  *(BADSPACEBASE **)(unaff_r9 + 0x24) = register0x00000054;
  *(undefined4 **)(unaff_r9 + 0x28) = puVar4;
  *(undefined4 *)(unaff_r9 + 0x2c) = 0x81c2e00;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

