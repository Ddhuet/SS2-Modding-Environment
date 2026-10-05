
/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x0835b63c) */
/* WARNING: Removing unreachable block (ram,0x0835b660) */
/* WARNING: Removing unreachable block (ram,0x0835b684) */
/* WARNING: Removing unreachable block (ram,0x0835b6a8) */
/* WARNING: Removing unreachable block (ram,0x0835b6cc) */
/* WARNING: Removing unreachable block (ram,0x0835b608) */
/* WARNING: Removing unreachable block (ram,0x0835b5e4) */
/* WARNING: Removing unreachable block (ram,0x0835b5c0) */
/* WARNING: Removing unreachable block (ram,0x0835b59c) */
/* WARNING: Removing unreachable block (ram,0x0835b578) */
/* WARNING: Removing unreachable block (ram,0x0835b554) */
/* WARNING: Removing unreachable block (ram,0x0835b530) */
/* WARNING: Removing unreachable block (ram,0x0835b540) */
/* WARNING: Removing unreachable block (ram,0x0835b564) */
/* WARNING: Removing unreachable block (ram,0x0835b588) */
/* WARNING: Removing unreachable block (ram,0x0835b5ac) */
/* WARNING: Removing unreachable block (ram,0x0835b5d0) */
/* WARNING: Removing unreachable block (ram,0x0835b5f4) */
/* WARNING: Removing unreachable block (ram,0x0835b62c) */
/* WARNING: Removing unreachable block (ram,0x0835b650) */
/* WARNING: Removing unreachable block (ram,0x0835b674) */
/* WARNING: Removing unreachable block (ram,0x0835b698) */
/* WARNING: Removing unreachable block (ram,0x0835b6bc) */
/* WARNING: Removing unreachable block (ram,0x0835b618) */
/* WARNING: Removing unreachable block (ram,0x0835b67c) */
/* WARNING: Removing unreachable block (ram,0x0835b658) */
/* WARNING: Removing unreachable block (ram,0x0835b6a0) */
/* WARNING: Removing unreachable block (ram,0x0835b5fc) */
/* WARNING: Removing unreachable block (ram,0x0835b5b4) */
/* WARNING: Removing unreachable block (ram,0x0835b56c) */
/* WARNING: Removing unreachable block (ram,0x0835b590) */
/* WARNING: Removing unreachable block (ram,0x0835b5d8) */
/* WARNING: Removing unreachable block (ram,0x0835b548) */
/* WARNING: Removing unreachable block (ram,0x0835b6c4) */

undefined2 *
FUN_0835b528(undefined2 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  undefined2 uVar2;
  undefined2 *puVar3;
  undefined4 uVar4;
  undefined4 extraout_r2;
  undefined4 extraout_r3;
  undefined2 *unaff_r4;
  int unaff_r5;
  undefined4 *unaff_r6;
  undefined4 *puVar5;
  undefined4 *unaff_r7;
  char *unaff_r8;
  undefined4 unaff_r9;
  int unaff_r11;
  int iVar6;
  undefined2 *puVar7;
  undefined2 *puVar8;
  undefined4 *puVar9;
  int *in_r12;
  int *extraout_r12;
  int *piVar10;
  int unaff_lr;
  undefined1 in_NG;
  bool in_ZR;
  byte in_CY;
  char in_OV;
  undefined1 uVar11;
  byte bVar12;
  undefined4 in_cr0;
  undefined4 in_cr2;
  undefined4 in_cr13;
  undefined8 uVar13;
  
  if (in_ZR) {
    return param_1;
  }
  iVar6 = unaff_r11;
  if (!(bool)in_CY) {
    iVar6 = unaff_r11 + 0x2f0;
    coprocessor_load(0,in_cr0,unaff_r11);
  }
  puVar3 = param_1;
  if ((bool)in_NG) {
    puVar3 = param_1 + 0x57;
    *param_1 = (short)unaff_r5;
  }
  if ((bool)in_CY) {
    puVar7 = puVar3 + -0x102;
    unaff_r8 = unaff_r8 + -0x30;
    unaff_r5 = (int)*unaff_r8;
  }
  else {
    puVar7 = (undefined2 *)(iVar6 + 0x2f0);
    coprocessor_load(0,in_cr0,iVar6);
  }
  puVar8 = puVar3;
  if ((bool)in_NG) {
    puVar8 = puVar3 + 0x57;
    *puVar3 = (short)unaff_r5;
  }
  if ((bool)in_CY) {
    puVar3 = puVar8 + -0x102;
    unaff_r8 = unaff_r8 + -0x50;
    unaff_r5 = (int)*unaff_r8;
  }
  else {
    puVar3 = puVar7 + 0x178;
    coprocessor_load(0,in_cr0,puVar7);
  }
  puVar7 = puVar8;
  if ((bool)in_NG) {
    puVar7 = puVar8 + 0x57;
    *puVar8 = (short)unaff_r5;
  }
  if ((bool)in_CY) {
    puVar8 = puVar7 + -0x102;
    unaff_r8 = unaff_r8 + -0x60;
    unaff_r5 = (int)*unaff_r8;
  }
  else {
    puVar8 = puVar3 + 0x178;
    coprocessor_load(0,in_cr0,puVar3);
  }
  puVar3 = puVar7;
  if ((bool)in_NG) {
    puVar3 = puVar7 + 0x57;
    *puVar7 = (short)unaff_r5;
  }
  if ((bool)in_CY) {
    puVar7 = puVar3 + -0x102;
    unaff_r8 = unaff_r8 + -0x80;
    unaff_r5 = (int)*unaff_r8;
  }
  else {
    puVar7 = puVar8 + 0x178;
    coprocessor_load(0,in_cr0,puVar8);
  }
  puVar8 = puVar3;
  if ((bool)in_NG) {
    puVar8 = puVar3 + 0x57;
    *puVar3 = (short)unaff_r5;
  }
  if ((bool)in_CY) {
    puVar3 = puVar8 + -0x102;
    unaff_r8 = unaff_r8 + -0x90;
    unaff_r5 = (int)*unaff_r8;
  }
  else {
    puVar3 = puVar7 + 0x178;
    coprocessor_load(0,in_cr0,puVar7);
  }
  puVar7 = puVar8;
  if ((bool)in_NG) {
    puVar7 = puVar8 + 0x57;
    *puVar8 = (short)unaff_r5;
  }
  if ((bool)in_CY) {
    puVar3 = puVar7 + -0x102;
    unaff_r8 = unaff_r8 + -0xa0;
    unaff_r5 = (int)*unaff_r8;
  }
  uVar11 = false;
  puVar8 = puVar3;
  if (!(bool)in_CY) {
    puVar8 = puVar3 + 0x178;
    coprocessor_load(0,in_cr0,puVar3);
  }
  puVar3 = puVar7;
  if ((bool)in_NG) {
    puVar3 = puVar7 + 0x77;
    *puVar7 = (short)unaff_r6;
  }
  if ((bool)in_CY) {
    puVar8 = puVar3 + -0x102;
  }
  if (in_NG == in_OV) {
    register0x00000054 = *(BADSPACEBASE **)unaff_r8;
    in_r12 = *(int **)(unaff_r8 + -4);
    puVar8 = *(undefined2 **)(unaff_r8 + -8);
    unaff_r7 = *(undefined4 **)(unaff_r8 + -0x10);
    unaff_r6 = *(undefined4 **)(unaff_r8 + -0x14);
    unaff_r5 = *(int *)(unaff_r8 + -0x18);
    unaff_r4 = *(undefined2 **)(unaff_r8 + -0x1c);
    param_3 = *(undefined4 *)(unaff_r8 + -0x20);
    param_2 = *(undefined4 *)(unaff_r8 + -0x24);
    puVar3 = *(undefined2 **)(unaff_r8 + -0x28);
    unaff_r8 = unaff_r8 + -0x2c;
  }
  puVar7 = puVar8;
  if (!(bool)in_CY) {
    puVar7 = puVar8 + 0x178;
    coprocessor_load(0,in_cr0,puVar8);
  }
  uVar2 = (undefined2)unaff_r5;
  puVar8 = puVar3;
  if ((bool)in_NG) {
    puVar8 = puVar3 + 7;
    *puVar3 = uVar2;
  }
  if ((bool)in_CY) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  coprocessor_load(0,in_cr0,puVar7);
  puVar3 = puVar8;
  if ((bool)in_NG) {
    puVar3 = puVar8 + 7;
    *puVar8 = uVar2;
  }
  coprocessor_load(0,in_cr0,puVar7 + 0x178);
  puVar8 = puVar3;
  if ((bool)in_NG) {
    puVar8 = puVar3 + 0x57;
    *puVar3 = uVar2;
  }
  coprocessor_load(0,in_cr0,puVar7 + 0x2f0);
  puVar3 = puVar8;
  if ((bool)in_NG) {
    puVar3 = puVar8 + 0x57;
    *puVar8 = uVar2;
  }
  uVar13 = CONCAT44(param_2,puVar3);
  puVar9 = (undefined4 *)(puVar7 + 0x5e0);
  coprocessor_load(0,in_cr0,puVar7 + 0x468);
  if ((bool)in_NG) {
    *puVar3 = uVar2;
    unaff_lr = 0x835b6e0;
    uVar13 = func_0x0721b9d4();
    param_3 = extraout_r2;
    param_4 = extraout_r3;
    in_r12 = extraout_r12;
  }
  uVar4 = (undefined4)((ulonglong)uVar13 >> 0x20);
  puVar7 = (undefined2 *)uVar13;
  puVar3 = unaff_r4;
  if ((bool)uVar11) {
    puVar3 = (undefined2 *)((int)unaff_r4 + 0x5d);
    *unaff_r4 = (short)uVar13;
  }
  puVar8 = puVar7;
  if ((bool)in_NG) {
    puVar8 = puVar7 + 0x27;
    *puVar7 = (short)unaff_r6;
  }
  if ((bool)in_CY && !(bool)uVar11) {
    puVar9 = (undefined4 *)(puVar8 + -0x102);
  }
  if ((bool)in_CY) {
    unaff_r7 = unaff_r7 + 0xbb;
    coprocessor_loadlong(8,in_cr2,unaff_r7);
  }
  if (in_NG == in_OV) {
    *puVar9 = 0x835b6f8;
    puVar9[-1] = register0x00000054;
    puVar9[-2] = puVar9;
    puVar9[-3] = unaff_r6;
    puVar9[-4] = unaff_r5;
    puVar9[-5] = puVar3;
    return puVar8 + -0xc;
  }
  if (in_NG == in_OV) {
    *puVar9 = 0x835b700;
    puVar9[-1] = register0x00000054;
    puVar9[-2] = puVar9;
    puVar9[-3] = unaff_r5;
    puVar9[-4] = param_4;
    puVar9[-5] = param_3;
    puVar9[-6] = puVar8;
    return (undefined2 *)*unaff_r7;
  }
  if (in_NG != in_OV) {
    if (in_NG == in_OV) {
      uRam0835b710 = 0x835b710;
      puRam0835b6f8 = puVar8;
      uRam0835b6fc = param_3;
      uRam0835b700 = param_4;
      iRam0835b704 = unaff_r5;
      puRam0835b708 = puVar9;
      puRam0835b70c = (undefined1 *)register0x00000054;
      *(undefined2 **)unaff_r8 = puVar8;
      *(undefined4 *)(unaff_r8 + 4) = uVar4;
      *(undefined4 *)(unaff_r8 + 8) = param_3;
      *(undefined4 *)(unaff_r8 + 0xc) = param_4;
      *(undefined4 **)(unaff_r8 + 0x10) = unaff_r6;
      *(undefined4 **)(unaff_r8 + 0x14) = unaff_r7;
      *(char **)(unaff_r8 + 0x18) = unaff_r8;
      *(int **)(unaff_r8 + 0x1c) = in_r12;
      *(BADSPACEBASE **)(unaff_r8 + 0x20) = register0x00000054;
      unaff_r8 = unaff_r8 + 0x24;
      piVar10 = in_r12;
    }
    else {
      piVar10 = (int *)((int)in_r12 + (unaff_lr >> 5));
      *(char *)in_r12 = (char)puVar9;
      coprocessor_load(8,in_cr0,uVar4);
    }
    if (!(bool)uVar11 && in_NG == in_OV) {
      puVar5 = unaff_r6 + -0x340;
      *unaff_r6 = puVar9;
      in_CY = (undefined4 *)((int)puVar8 * 0x10000000) <= puVar5;
      in_OV = SBORROW4((int)puVar5,(int)puVar8 * 0x10000000);
      puVar9 = puVar5 + (int)puVar8 * -0x4000000;
      in_NG = (int)puVar9 < 0;
      uVar11 = puVar9 == (undefined4 *)0x0;
    }
    bVar12 = in_CY;
    if ((bool)in_NG) {
      uVar1 = (int)puVar8 >> 2;
      bVar12 = 0xf7ca48d7 < uVar1 || CARRY4(uVar1 + 0x835b728,(uint)in_CY);
      in_OV = SCARRY4(uVar1,0x835b728) != SCARRY4(uVar1 + 0x835b728,(uint)in_CY);
      unaff_r8 = (char *)(uVar1 + 0x835b728 + (uint)in_CY);
      uVar11 = unaff_r8 == (char *)0x0;
    }
    if ((bool)in_OV) {
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x782);
    }
    if (!(bool)bVar12) {
      *(undefined4 *)(unaff_r8 + 4) = param_4;
      *(int *)(unaff_r8 + 8) = unaff_r5;
      *(undefined4 **)(unaff_r8 + 0xc) = unaff_r7;
      *(char **)(unaff_r8 + 0x10) = unaff_r8;
      *(undefined4 *)(unaff_r8 + 0x14) = unaff_r9;
      *(undefined4 **)(unaff_r8 + 0x18) = puVar9;
      *(int **)(unaff_r8 + 0x1c) = piVar10;
      *(BADSPACEBASE **)(unaff_r8 + 0x20) = register0x00000054;
    }
    if ((bool)in_OV) {
      unaff_lr = *piVar10;
    }
    if ((bool)bVar12 && !(bool)uVar11) {
      coprocessor_load(0xb,in_cr13,unaff_lr);
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *puVar9 = 0x835b708;
  puVar9[-1] = register0x00000054;
  puVar9[-2] = puVar9;
  puVar9[-3] = unaff_r5;
  puVar9[-4] = param_4;
  puVar9[-5] = param_3;
  puVar9[-6] = puVar8;
  return puVar8 + -0xc;
}

