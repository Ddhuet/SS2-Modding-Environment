
/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x0835b63c) */
/* WARNING: Removing unreachable block (ram,0x0835b660) */
/* WARNING: Removing unreachable block (ram,0x0835b684) */
/* WARNING: Removing unreachable block (ram,0x0835b6a8) */
/* WARNING: Removing unreachable block (ram,0x0835b6cc) */
/* WARNING: Removing unreachable block (ram,0x0835b608) */
/* WARNING: Removing unreachable block (ram,0x0835b62c) */
/* WARNING: Removing unreachable block (ram,0x0835b650) */
/* WARNING: Removing unreachable block (ram,0x0835b674) */
/* WARNING: Removing unreachable block (ram,0x0835b698) */
/* WARNING: Removing unreachable block (ram,0x0835b6bc) */
/* WARNING: Removing unreachable block (ram,0x0835b618) */
/* WARNING: Removing unreachable block (ram,0x0835b6a0) */
/* WARNING: Removing unreachable block (ram,0x0835b67c) */
/* WARNING: Removing unreachable block (ram,0x0835b658) */
/* WARNING: Removing unreachable block (ram,0x0835b6c4) */

undefined2 *
FUN_0835b600(undefined2 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  undefined2 uVar2;
  undefined2 *puVar3;
  undefined2 *puVar4;
  undefined4 uVar5;
  undefined4 extraout_r2;
  undefined4 extraout_r3;
  undefined2 *unaff_r4;
  undefined4 unaff_r5;
  undefined4 *unaff_r6;
  undefined4 *puVar6;
  undefined4 *unaff_r7;
  undefined4 *unaff_r8;
  undefined4 unaff_r9;
  undefined2 *unaff_r11;
  undefined2 *puVar7;
  undefined4 *puVar8;
  int *in_r12;
  int *extraout_r12;
  int *piVar9;
  int unaff_lr;
  undefined1 in_NG;
  undefined1 in_ZR;
  byte in_CY;
  char in_OV;
  byte bVar10;
  undefined4 in_cr0;
  undefined4 in_cr2;
  undefined4 in_cr13;
  undefined8 uVar11;
  
  if ((bool)in_ZR) {
    return param_1;
  }
  puVar7 = unaff_r11;
  if (!(bool)in_CY) {
    puVar7 = unaff_r11 + 0x178;
    coprocessor_load(0,in_cr0,unaff_r11);
  }
  puVar3 = param_1;
  if ((bool)in_NG) {
    puVar3 = param_1 + 0x77;
    *param_1 = (short)unaff_r6;
  }
  if ((bool)in_CY) {
    puVar7 = puVar3 + -0x102;
  }
  if (in_NG == in_OV) {
    register0x00000054 = (BADSPACEBASE *)*unaff_r8;
    in_r12 = (int *)unaff_r8[-1];
    puVar7 = (undefined2 *)unaff_r8[-2];
    unaff_r7 = (undefined4 *)unaff_r8[-4];
    unaff_r6 = (undefined4 *)unaff_r8[-5];
    unaff_r5 = unaff_r8[-6];
    unaff_r4 = (undefined2 *)unaff_r8[-7];
    param_3 = unaff_r8[-8];
    param_2 = unaff_r8[-9];
    puVar3 = (undefined2 *)unaff_r8[-10];
    unaff_r8 = unaff_r8 + -0xb;
  }
  puVar4 = puVar7;
  if (!(bool)in_CY) {
    puVar4 = puVar7 + 0x178;
    coprocessor_load(0,in_cr0,puVar7);
  }
  uVar2 = (undefined2)unaff_r5;
  puVar7 = puVar3;
  if ((bool)in_NG) {
    puVar7 = puVar3 + 7;
    *puVar3 = uVar2;
  }
  if ((bool)in_CY) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  coprocessor_load(0,in_cr0,puVar4);
  puVar3 = puVar7;
  if ((bool)in_NG) {
    puVar3 = puVar7 + 7;
    *puVar7 = uVar2;
  }
  coprocessor_load(0,in_cr0,puVar4 + 0x178);
  puVar7 = puVar3;
  if ((bool)in_NG) {
    puVar7 = puVar3 + 0x57;
    *puVar3 = uVar2;
  }
  coprocessor_load(0,in_cr0,puVar4 + 0x2f0);
  puVar3 = puVar7;
  if ((bool)in_NG) {
    puVar3 = puVar7 + 0x57;
    *puVar7 = uVar2;
  }
  uVar11 = CONCAT44(param_2,puVar3);
  puVar8 = (undefined4 *)(puVar4 + 0x5e0);
  coprocessor_load(0,in_cr0,puVar4 + 0x468);
  if ((bool)in_NG) {
    *puVar3 = uVar2;
    unaff_lr = 0x835b6e0;
    uVar11 = func_0x0721b9d4();
    param_3 = extraout_r2;
    param_4 = extraout_r3;
    in_r12 = extraout_r12;
  }
  uVar5 = (undefined4)((ulonglong)uVar11 >> 0x20);
  puVar3 = (undefined2 *)uVar11;
  puVar7 = unaff_r4;
  if ((bool)in_ZR) {
    puVar7 = (undefined2 *)((int)unaff_r4 + 0x5d);
    *unaff_r4 = (short)uVar11;
  }
  puVar4 = puVar3;
  if ((bool)in_NG) {
    puVar4 = puVar3 + 0x27;
    *puVar3 = (short)unaff_r6;
  }
  if ((bool)in_CY && !(bool)in_ZR) {
    puVar8 = (undefined4 *)(puVar4 + -0x102);
  }
  if ((bool)in_CY) {
    unaff_r7 = unaff_r7 + 0xbb;
    coprocessor_loadlong(8,in_cr2,unaff_r7);
  }
  if (in_NG == in_OV) {
    *puVar8 = 0x835b6f8;
    puVar8[-1] = register0x00000054;
    puVar8[-2] = puVar8;
    puVar8[-3] = unaff_r6;
    puVar8[-4] = unaff_r5;
    puVar8[-5] = puVar7;
    return puVar4 + -0xc;
  }
  if (in_NG == in_OV) {
    *puVar8 = 0x835b700;
    puVar8[-1] = register0x00000054;
    puVar8[-2] = puVar8;
    puVar8[-3] = unaff_r5;
    puVar8[-4] = param_4;
    puVar8[-5] = param_3;
    puVar8[-6] = puVar4;
    return (undefined2 *)*unaff_r7;
  }
  if (in_NG == in_OV) {
    *puVar8 = 0x835b708;
    puVar8[-1] = register0x00000054;
    puVar8[-2] = puVar8;
    puVar8[-3] = unaff_r5;
    puVar8[-4] = param_4;
    puVar8[-5] = param_3;
    puVar8[-6] = puVar4;
    return puVar4 + -0xc;
  }
  if (in_NG == in_OV) {
    uRam0835b710 = 0x835b710;
    puRam0835b6f8 = puVar4;
    uRam0835b6fc = param_3;
    uRam0835b700 = param_4;
    uRam0835b704 = unaff_r5;
    puRam0835b708 = puVar8;
    puRam0835b70c = (undefined1 *)register0x00000054;
    *unaff_r8 = puVar4;
    unaff_r8[1] = uVar5;
    unaff_r8[2] = param_3;
    unaff_r8[3] = param_4;
    unaff_r8[4] = unaff_r6;
    unaff_r8[5] = unaff_r7;
    unaff_r8[6] = unaff_r8;
    unaff_r8[7] = in_r12;
    unaff_r8[8] = register0x00000054;
    unaff_r8 = unaff_r8 + 9;
    piVar9 = in_r12;
  }
  else {
    piVar9 = (int *)((int)in_r12 + (unaff_lr >> 5));
    *(char *)in_r12 = (char)puVar8;
    coprocessor_load(8,in_cr0,uVar5);
  }
  if (!(bool)in_ZR && in_NG == in_OV) {
    puVar6 = unaff_r6 + -0x340;
    *unaff_r6 = puVar8;
    in_CY = (undefined4 *)((int)puVar4 * 0x10000000) <= puVar6;
    in_OV = SBORROW4((int)puVar6,(int)puVar4 * 0x10000000);
    puVar8 = puVar6 + (int)puVar4 * -0x4000000;
    in_NG = (int)puVar8 < 0;
    in_ZR = puVar8 == (undefined4 *)0x0;
  }
  bVar10 = in_CY;
  if ((bool)in_NG) {
    uVar1 = (int)puVar4 >> 2;
    bVar10 = 0xf7ca48d7 < uVar1 || CARRY4(uVar1 + 0x835b728,(uint)in_CY);
    in_OV = SCARRY4(uVar1,0x835b728) != SCARRY4(uVar1 + 0x835b728,(uint)in_CY);
    unaff_r8 = (undefined4 *)(uVar1 + 0x835b728 + (uint)in_CY);
    in_ZR = unaff_r8 == (undefined4 *)0x0;
  }
  if ((bool)in_OV) {
    register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x782);
  }
  if (!(bool)bVar10) {
    unaff_r8[1] = param_4;
    unaff_r8[2] = unaff_r5;
    unaff_r8[3] = unaff_r7;
    unaff_r8[4] = unaff_r8;
    unaff_r8[5] = unaff_r9;
    unaff_r8[6] = puVar8;
    unaff_r8[7] = piVar9;
    unaff_r8[8] = register0x00000054;
  }
  if ((bool)in_OV) {
    unaff_lr = *piVar9;
  }
  if ((bool)bVar10 && !(bool)in_ZR) {
    coprocessor_load(0xb,in_cr13,unaff_lr);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

