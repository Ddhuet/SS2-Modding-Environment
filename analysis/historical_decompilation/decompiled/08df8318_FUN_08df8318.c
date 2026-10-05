
/* WARNING: Control flow encountered bad instruction data */

void FUN_08df8318(int param_1,int param_2,undefined4 param_3,int param_4)

{
  uint uVar1;
  longlong lVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  undefined1 *puVar6;
  undefined4 extraout_r2;
  undefined4 extraout_r2_00;
  undefined4 extraout_r2_01;
  undefined4 extraout_r2_02;
  undefined4 extraout_r2_03;
  undefined4 extraout_r2_04;
  undefined4 extraout_r2_05;
  undefined4 extraout_r2_06;
  undefined4 extraout_r2_07;
  int extraout_r3;
  int extraout_r3_00;
  int extraout_r3_01;
  int extraout_r3_02;
  int extraout_r3_03;
  int extraout_r3_04;
  int extraout_r3_05;
  int extraout_r3_06;
  undefined1 unaff_r4;
  int unaff_r5;
  undefined1 *unaff_r6;
  undefined1 *puVar7;
  int unaff_r7;
  undefined1 *unaff_r8;
  undefined1 *puVar8;
  int unaff_r9;
  uint unaff_r10;
  uint extraout_r12;
  int *piVar9;
  int *piVar10;
  undefined1 *puVar11;
  undefined4 *puVar12;
  char in_NG;
  undefined1 in_ZR;
  bool in_CY;
  char in_OV;
  char cVar13;
  undefined1 uVar14;
  undefined1 uVar15;
  undefined1 uVar16;
  undefined4 in_cr0;
  undefined4 in_cr1;
  undefined4 in_cr3;
  undefined4 in_cr4;
  undefined4 in_cr5;
  undefined4 in_cr7;
  undefined4 in_cr8;
  undefined4 in_cr9;
  undefined4 in_cr10;
  undefined4 in_cr11;
  undefined4 in_cr12;
  undefined4 in_cr14;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined1 auStack_a00 [1280];
  undefined1 auStack_500 [1280];
  
  uVar17 = CONCAT44(param_2,param_1);
  uVar16 = in_CY;
  piVar10 = (int *)register0x00000054;
  if (in_NG != in_OV) {
    piVar10 = (int *)&stack0x00000500;
    uVar16 = (undefined1 *)0x74000003 < &stack0x00000500 ||
             &stack0x8c0004fd < (undefined1 *)(uint)in_CY;
    in_OV = SBORROW4((int)&stack0x00000500,0x74000003) !=
            SBORROW4((int)&stack0x8c0004fd,(uint)!in_CY);
    in_NG = (int)(&stack0x00000500 + -(int)(!in_CY + 0x74000003)) < 0;
    in_ZR = &stack0x00000500 == (undefined1 *)(!in_CY + 0x74000003);
  }
  if (in_NG == in_OV) {
    coprocessor_load(0,in_cr0,param_2 + 0x2b4);
    coprocessor_store(0xd,in_cr10,0x8df85ec);
    coprocessor_store(0xd,in_cr12,param_1 + -0x2b8);
    uVar17 = func_0x08563668();
    param_3 = extraout_r2;
    param_4 = extraout_r3;
  }
  iVar4 = (int)((ulonglong)uVar17 >> 0x20);
  if ((bool)in_ZR) {
    unaff_r10 = ((uint)piVar10 >> 0x14 | (int)piVar10 << 0xc) - (int)piVar10;
  }
  if (!(bool)uVar16 || (bool)in_ZR) {
    unaff_r8 = unaff_r8 + 0x2a4;
    coprocessor_store(0xd,in_cr9,unaff_r8);
  }
  if (!(bool)in_NG) {
    unaff_r6 = unaff_r6 + 0x29c;
    coprocessor_store(0xd,in_cr9,unaff_r6);
  }
  piVar9 = piVar10;
  if (in_NG == in_OV) {
    piVar9 = piVar10 + -0x140;
    *(char *)piVar10 = (char)unaff_r10;
    uVar16 = false;
    unaff_r10 = (uint)(piVar10 + -0x140) ^ 0x74000001;
    in_NG = (int)unaff_r10 < 0;
    in_ZR = unaff_r10 == 0;
  }
  if ((bool)uVar16) {
    iVar4 = iVar4 + 500;
    coprocessor_store(0,in_cr0,iVar4);
  }
  else {
    coprocessor_load(0xd,in_cr1,0x8df85d0);
  }
  uVar18 = CONCAT44(iVar4,(int)uVar17);
  if (!(bool)uVar16 || (bool)in_ZR) {
    coprocessor_store(0xd,in_cr3,(int)uVar17 + -0x278);
    uVar18 = func_0x0895f44c();
    param_3 = extraout_r2_00;
    param_4 = extraout_r3_00;
  }
  if ((bool)in_ZR) {
    unaff_r9 = ((uint)piVar9 >> 0x15 | (int)piVar9 << 0xb) -
               (int)((int)piVar9 + (uint)!(bool)uVar16);
  }
  if (!(bool)in_NG) {
    coprocessor_load(0xd,in_cr14,unaff_r8 + 0x264);
  }
  if (!(bool)uVar16) {
    coprocessor_load(0xd,in_cr3,unaff_r6 + 0x25c);
  }
  piVar10 = piVar9;
  if (!(bool)uVar16 || (bool)in_ZR) {
    piVar10 = piVar9 + 0x140;
    *piVar9 = unaff_r9;
  }
  if (in_NG == in_OV) {
    coprocessor_load(0,in_cr0,(int)((ulonglong)uVar18 >> 0x20) + 0x2b4);
    coprocessor_store(0xd,in_cr10,0x8df85b4);
  }
  if ((bool)uVar16 && !(bool)in_ZR) {
    coprocessor_store(0xd,in_cr12,(int)uVar18 + -0x238);
    uVar18 = func_0x0855b6b0();
    param_3 = extraout_r2_01;
    param_4 = extraout_r3_01;
  }
  if ((bool)in_ZR) {
    unaff_r8 = (undefined1 *)(((uint)piVar10 >> 0x14 | (int)piVar10 << 0xc) - (int)piVar10);
  }
  if (!(bool)uVar16 || (bool)in_ZR) {
    coprocessor_store(0xd,in_cr9,unaff_r8 + 0x224);
  }
  if (in_NG != in_OV) {
    coprocessor_store(0xd,in_cr12,unaff_r6 + 0x21c);
  }
  piVar9 = piVar10;
  if ((bool)uVar16 && !(bool)in_ZR) {
    piVar9 = piVar10 + -0x140;
    *(char *)piVar10 = (char)unaff_r8;
    uVar16 = (undefined1 *)0x74000000 < piVar10 + -0x140;
    in_OV = SBORROW4((int)(piVar10 + -0x140),0x74000001);
    unaff_r8 = (undefined1 *)((int)piVar10 + -0x74000501);
    in_NG = (int)unaff_r8 < 0;
    in_ZR = unaff_r8 == (undefined1 *)0x0;
  }
  if (!(bool)in_ZR) {
    coprocessor_store(0,in_cr0,(int)((ulonglong)uVar18 >> 0x20) + 0xb4);
    coprocessor_loadlong(0xd,in_cr1,0x8df8198);
  }
  if (!(bool)in_OV) {
    coprocessor_store(0xd,in_cr1,(int)uVar18 + -0x1f8);
    uVar18 = func_0x0a1574d4();
    param_3 = extraout_r2_02;
    param_4 = extraout_r3_02;
  }
  iVar4 = (int)((ulonglong)uVar18 >> 0x20);
  uVar14 = false;
  if ((bool)in_ZR) {
    piVar10 = (int *)((int)piVar9 >> 0x14);
    uVar16 = piVar10 <= piVar9;
    in_OV = SBORROW4((int)piVar9,(int)piVar10);
    unaff_r7 = (int)piVar9 - (int)piVar10;
    in_NG = unaff_r7 < 0;
    uVar14 = unaff_r7 == 0;
  }
  if (!(bool)in_NG) {
    unaff_r8 = unaff_r8 + -0x1e4;
    coprocessor_loadlong(0xd,in_cr5,unaff_r8);
    unaff_r6 = unaff_r6 + -0x1dc;
    coprocessor_loadlong(0xd,in_cr5,unaff_r6);
  }
  piVar10 = piVar9;
  if (!(bool)in_OV) {
    piVar10 = piVar9 + 0x140;
    *piVar9 = unaff_r7;
  }
  if (in_NG == in_OV) {
    iVar4 = iVar4 + -0x2b4;
    coprocessor_loadlong(0,in_cr0,iVar4);
  }
  uVar17 = CONCAT44(iVar4,(int)uVar18);
  if (!(bool)uVar14 && in_NG == in_OV) {
    coprocessor_storelong(0xd,in_cr10,0x8df81fc);
  }
  if ((bool)in_OV) {
    coprocessor_store(0xd,in_cr10,(int)uVar18 + -0x1b8);
    uVar17 = func_0x08553678();
    param_3 = extraout_r2_03;
    param_4 = extraout_r3_03;
  }
  iVar4 = (int)((ulonglong)uVar17 >> 0x20);
  uVar15 = false;
  if ((bool)uVar14) {
    uVar1 = (uint)piVar10 >> 0x14 | (int)piVar10 << 0xc;
    uVar16 = CARRY4((uint)piVar10,uVar1);
    in_OV = SCARRY4((int)piVar10,uVar1);
    unaff_r6 = (undefined1 *)((int)piVar10 + uVar1);
    in_NG = (int)unaff_r6 < 0;
    uVar15 = unaff_r6 == (undefined1 *)0x0;
  }
  if (!(bool)uVar16 || (bool)uVar15) {
    unaff_r8 = unaff_r8 + -0x1a4;
    coprocessor_storelong(0xd,in_cr14,unaff_r8);
  }
  puVar7 = unaff_r6 + -0x19c;
  coprocessor_storelong(0xd,in_cr12,puVar7);
  piVar9 = piVar10;
  if ((bool)in_OV) {
    piVar9 = piVar10 + 0x140;
    *(char *)piVar10 = (char)puVar7;
    uVar16 = 0;
    puVar7 = (undefined1 *)((uint)(piVar10 + 0x140) ^ 0x74000001);
    in_NG = (int)puVar7 < 0;
    uVar15 = puVar7 == (undefined1 *)0x0;
  }
  if ((bool)uVar15) {
    coprocessor_loadlong(0xd,in_cr1,0x8df8260);
  }
  else {
    iVar4 = iVar4 + -0x74;
    coprocessor_storelong(0,in_cr0,iVar4);
  }
  uVar18 = CONCAT44(iVar4,(int)uVar17);
  if (!(bool)in_NG) {
    coprocessor_store(0xd,in_cr0,(int)uVar17 + -0x178);
    uVar18 = func_0x0a14f41c();
    param_3 = extraout_r2_04;
    param_4 = extraout_r3_04;
  }
  if ((bool)uVar15) {
    unaff_r5 = (int)piVar9 * -0xfffff;
  }
  if (!(bool)in_NG) {
    coprocessor_loadlong(0xd,in_cr5,unaff_r8 + -0x164);
  }
  if (!(bool)in_OV) {
    coprocessor_loadlong(0xd,in_cr5,puVar7 + -0x15c);
  }
  piVar10 = piVar9;
  if (!(bool)in_NG) {
    piVar10 = piVar9 + 0x140;
    *piVar9 = unaff_r5;
  }
  if (in_NG == in_OV) {
    coprocessor_loadlong(0,in_cr0,(int)((ulonglong)uVar18 >> 0x20) + -0x2b4);
  }
  if (!(bool)uVar15 && in_NG == in_OV) {
    coprocessor_storelong(0xd,in_cr11,0x8df82c4);
  }
  if ((bool)in_NG) {
    coprocessor_store(0xd,in_cr10,(int)uVar18 + -0x138);
    uVar18 = func_0x0814b6c0();
    param_3 = extraout_r2_05;
    param_4 = extraout_r3_05;
  }
  uVar14 = false;
  if ((bool)uVar15) {
    lVar2 = (ulonglong)unaff_r10 * ZEXT48(piVar10);
    in_NG = lVar2 < 0;
    uVar14 = lVar2 == 0;
    unaff_r4 = 0;
    piVar10 = (int *)((ulonglong)lVar2 >> 0x20);
  }
  if (!(bool)uVar14 && in_NG == in_OV) {
    coprocessor_storelong(0xd,in_cr14,unaff_r8 + -0x124);
  }
  coprocessor_storelong(0xd,in_cr11,puVar7 + -0x11c);
  piVar9 = piVar10;
  if ((bool)in_NG) {
    piVar9 = piVar10 + -0x140;
    *(undefined1 *)piVar10 = unaff_r4;
    uVar16 = false;
    uVar14 = ((uint)(piVar10 + -0x140) & 0x74000001) == 0;
  }
  cVar13 = '\0';
  if ((bool)uVar14) {
    coprocessor_storelong(0,in_cr0,(int)((ulonglong)uVar18 >> 0x20) + -0x34);
    coprocessor_load(0xd,in_cr0,0x8df8328);
  }
  if (!(bool)uVar16) {
    coprocessor_store(0xd,in_cr0,(int)uVar18 + -0xf8);
    uVar18 = func_0x09147464();
    param_3 = extraout_r2_06;
    param_4 = extraout_r3_06;
  }
  iVar4 = (int)((ulonglong)uVar18 >> 0x20);
  uVar15 = false;
  if ((bool)uVar14) {
    uVar16 = (int *)((int)piVar9 * 0x100000) <= piVar9;
    in_OV = SBORROW4((int)piVar9,(int)piVar9 * 0x100000);
    param_4 = (int)piVar9 * -0xfffff;
    cVar13 = param_4 < 0;
    uVar15 = param_4 == 0;
  }
  puVar8 = unaff_r8 + -0xe4;
  coprocessor_load(0xd,in_cr5,puVar8);
  if (!(bool)in_OV) {
    puVar7 = puVar7 + -0xdc;
    coprocessor_load(0xd,in_cr14,puVar7);
  }
  piVar10 = piVar9;
  if (!(bool)uVar16) {
    piVar10 = piVar9 + 0x140;
    *piVar9 = param_4;
  }
  if (cVar13 == in_OV) {
    iVar4 = iVar4 + -0x2b4;
    coprocessor_load(0,in_cr0,iVar4);
  }
  else {
    coprocessor_store(0xd,in_cr11,0x8df838c);
  }
  uVar17 = CONCAT44(iVar4,(int)uVar18);
  if ((bool)uVar16) {
    coprocessor_store(0xd,in_cr10,(int)uVar18 + -0xb8);
    uVar17 = func_0x08143708();
    param_3 = extraout_r2_07;
  }
  iVar5 = (int)((ulonglong)uVar17 >> 0x20);
  iVar4 = (int)uVar17;
  lVar2 = CONCAT44(piVar10,param_3);
  if ((bool)uVar15) {
    lVar2 = (longlong)(int)piVar10 * (longlong)(int)unaff_r10;
  }
  puVar11 = (undefined1 *)((ulonglong)lVar2 >> 0x20);
  if (cVar13 != in_OV) {
    puVar8 = unaff_r8 + -0x188;
    coprocessor_store(0xd,in_cr11,puVar8);
  }
  coprocessor_store(0xd,in_cr14,puVar7 + -0x9c);
  if ((bool)uVar16) {
    *puVar11 = (char)lVar2;
    lVar2 = CONCAT44(puVar11 + -0x500,puVar11 + -0x34000501);
  }
  puVar3 = (undefined4 *)((ulonglong)lVar2 >> 0x20);
  if ((bool)uVar15) {
    iVar5 = iVar5 + -0x34;
    uVar17 = CONCAT44(iVar5,iVar4);
    coprocessor_store(0,in_cr0,iVar5);
    coprocessor_load(0xd,in_cr0,0x8df83f0);
  }
  else {
    coprocessor_store(0xd,in_cr0,iVar4 + -0x78);
    uVar17 = func_0x0953f5ac(iVar4,iVar5,(int)lVar2);
  }
  puVar6 = (undefined1 *)((ulonglong)uVar17 >> 0x20);
  iVar4 = (int)uVar17;
  uVar14 = false;
  if ((bool)uVar15) {
    puVar6 = (undefined1 *)((uint)puVar3 >> (unaff_r10 & 0xff));
    uVar16 = puVar6 <= puVar3;
    in_OV = SBORROW4((int)puVar3,(int)puVar6);
    puVar6 = (undefined1 *)((int)puVar3 - (int)puVar6);
    cVar13 = (int)puVar6 < 0;
    uVar14 = puVar6 == (undefined1 *)0x0;
  }
  if ((bool)uVar16 && !(bool)uVar14) {
    coprocessor_load(0xd,in_cr7,puVar8 + -100);
  }
  if (!(bool)in_OV) {
    coprocessor_load(0xd,in_cr8,puVar7 + -0xf8);
  }
  puVar12 = puVar3;
  if (!(bool)uVar14) {
    puVar12 = puVar3 + 0x140;
    *puVar3 = puVar6;
    puVar6 = (undefined1 *)((int)puVar3 + (byte)uVar16 + 0x34000503);
  }
  uVar17 = CONCAT44(puVar6,iVar4);
  if (cVar13 == in_OV) {
    coprocessor_load(0,in_cr0,puVar6 + -0x2b4);
  }
  coprocessor_store(0xd,in_cr11,0x8df8454);
  if ((bool)uVar14) {
    coprocessor_store(0xd,in_cr12,iVar4 + -0x38);
    uVar17 = func_0x07d3b790(iVar4,puVar6);
  }
  lVar2 = CONCAT44(puVar12,(int)uVar17);
  if ((bool)uVar14) {
    lVar2 = (longlong)(int)puVar12 * (longlong)(int)unaff_r10;
  }
  coprocessor_store(0xd,in_cr12,puVar8 + -0x24);
  coprocessor_store(0xd,in_cr14,puVar7 + -0xb8);
  iVar4 = (int)lVar2;
  if ((bool)uVar14) {
    iVar4 = (int)((ulonglong)lVar2 >> 0x20) + 0x4bfffafd;
    coprocessor_loadlong(0xd,in_cr3,0x8df84b8);
  }
  else {
    coprocessor_store(0,in_cr0,(int)((ulonglong)uVar17 >> 0x20) + -0x34);
  }
  coprocessor_store2(0xc,in_cr4,iVar4 + -0x3f8);
  func_0x099375b2(iVar4);
                    /* WARNING: Could not recover jumptable at 0x08df84bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  if (!(bool)uVar14) {
    if (!(bool)in_OV) {
      coprocessor_loadlong(0xc,in_cr7,puVar8);
      coprocessor_loadlong(0xc,in_cr7,puVar7 + -0x9c);
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  (*(code *)(extraout_r12 - (extraout_r12 >> (unaff_r10 & 0xff))))();
  return;
}

