
/* WARNING: Control flow encountered bad instruction data */

void FUN_08df459a(byte *param_1,int param_2,undefined4 param_3,int param_4)

{
  undefined1 *puVar1;
  uint uVar2;
  int unaff_r4;
  uint unaff_r5;
  int unaff_r6;
  int unaff_r8;
  undefined4 uVar3;
  byte *unaff_r10;
  uint in_r12;
  undefined1 *puVar4;
  byte *pbVar5;
  undefined1 *puVar6;
  undefined4 *puVar7;
  undefined1 *puVar8;
  int *piVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  undefined1 *puVar12;
  uint *puVar13;
  undefined1 *puVar14;
  undefined1 *puVar15;
  int *piVar16;
  undefined1 *puVar17;
  undefined4 *puVar18;
  int *piVar19;
  byte *pbVar20;
  char in_NG;
  bool in_ZR;
  byte in_CY;
  char in_OV;
  bool bVar21;
  bool bVar22;
  byte bVar23;
  bool bVar24;
  undefined1 uVar25;
  undefined4 in_cr0;
  undefined4 in_cr1;
  undefined4 in_cr2;
  undefined4 in_cr3;
  undefined4 in_cr4;
  undefined4 in_cr5;
  undefined4 in_cr6;
  undefined4 in_cr7;
  undefined4 in_cr8;
  undefined4 in_cr9;
  undefined4 in_cr10;
  undefined4 in_cr11;
  undefined4 in_cr12;
  undefined4 in_cr13;
  byte abStack_b4 [180];
  
  if (in_NG != in_OV) {
    register0x00000054 = (BADSPACEBASE *)&stack0x000005cd;
  }
  if (in_ZR || in_NG != in_OV) {
    param_4 = param_4 + 0x374;
    coprocessor_load(0,in_cr0,param_4);
    param_2 = param_2 + 0x2c8;
    coprocessor_load(0xd,in_cr13,param_2);
  }
  if (in_NG == in_OV) {
    software_interrupt(0x8db0);
    puVar4 = (undefined1 *)((int)register0x00000054 + -0xb4);
    register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0xb4);
    coprocessor_loadlong(0xe,in_cr10,puVar4);
  }
  bVar21 = false;
  bVar23 = in_CY;
  if (in_ZR) {
    uVar2 = (uint)register0x00000054 >> (in_r12 & 0x1f) |
            (int)register0x00000054 << 0x20 - (in_r12 & 0x1f);
    bVar23 = CARRY4((uint)register0x00000054,uVar2) ||
             CARRY4((int)register0x00000054 + uVar2,(uint)in_CY);
    in_OV = SCARRY4((int)register0x00000054,uVar2) !=
            SCARRY4((int)((int)register0x00000054 + uVar2),(uint)in_CY);
    unaff_r10 = (byte *)((int)register0x00000054 + in_CY + uVar2);
    in_NG = (int)unaff_r10 < 0;
    bVar21 = unaff_r10 == (byte *)0x0;
  }
  if (!bVar21 && in_NG == in_OV) {
    unaff_r10 = unaff_r10 + 0x2ac;
    coprocessor_store(0xd,in_cr12,unaff_r10);
  }
  if (!(bool)in_OV) {
    unaff_r8 = unaff_r8 + 0x2a4;
    coprocessor_store(0xd,in_cr7,unaff_r8);
  }
  if (in_NG == in_OV) {
    pbVar5 = (byte *)((int)register0x00000054 + (int)param_1 * -0x4000);
    unaff_r10 = (byte *)(uint)*(byte *)register0x00000054;
    register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + (int)param_1 * -0x4000 + -0x54d)
    ;
    *(byte **)pbVar5 = unaff_r10;
  }
  if ((bool)in_NG) {
    param_4 = param_4 + 0x174;
    coprocessor_store(0,in_cr0,param_4);
  }
  if ((bool)bVar23) {
    param_2 = param_2 + 0x288;
    coprocessor_store(0xd,in_cr12,param_2);
  }
  if (!(bool)bVar23 || bVar21) {
    software_interrupt(0x7da0);
    puVar6 = (undefined1 *)((int)register0x00000054 + -0x334);
    register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x334);
    coprocessor_store(0xe,in_cr9,puVar6);
  }
  bVar22 = false;
  bVar24 = (bool)bVar23;
  if (bVar21) {
    uVar2 = (uint)register0x00000054 >> 0x18;
    bVar24 = CARRY4((uint)register0x00000054,uVar2) ||
             CARRY4((int)register0x00000054 + uVar2,(uint)bVar23);
    in_OV = SCARRY4((int)register0x00000054,uVar2) !=
            SCARRY4((int)((int)register0x00000054 + uVar2),(uint)bVar23);
    in_NG = (int)((int)register0x00000054 + bVar23 + uVar2) < 0;
    bVar22 = (undefined1 *)((int)register0x00000054 + bVar23 + uVar2) == (undefined1 *)0x0;
  }
  if (in_NG != in_OV) {
    coprocessor_load(0xd,in_cr11,unaff_r10 + 0x26c);
    coprocessor_load(0xd,in_cr11,unaff_r8 + 0x264);
  }
  if (!bVar24 || bVar22) {
    puVar7 = (undefined4 *)((int)register0x00000054 + (int)param_1 * 0x1000 * 4);
    uVar3 = *(undefined4 *)register0x00000054;
    register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + (int)param_1 * 0x4000 + 0x5bd);
    *puVar7 = uVar3;
  }
  if (bVar22 || in_NG != in_OV) {
    coprocessor_load(0,in_cr0,param_4 + 0x374);
  }
  if (bVar24 && !bVar22) {
    coprocessor_load(0xd,in_cr8,param_2 + 0x248);
    software_interrupt(0xcd90);
    puVar8 = (undefined1 *)((int)register0x00000054 + -0x34);
    register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x34);
    coprocessor_loadlong(0xe,in_cr8,puVar8);
  }
  bVar21 = false;
  if (bVar22) {
    puVar1 = (undefined1 *)((int)register0x00000054 >> (in_r12 & 0xff));
    bVar24 = puVar1 <= register0x00000054;
    in_OV = SBORROW4((int)register0x00000054,(int)puVar1);
    unaff_r8 = (int)register0x00000054 - (int)puVar1;
    in_NG = unaff_r8 < 0;
    bVar21 = unaff_r8 == 0;
  }
  if (!(bool)in_OV) {
    coprocessor_store(0xd,in_cr7,unaff_r10 + 0x22c);
  }
  if (!(bool)in_NG) {
    coprocessor_store(0xd,in_cr7,unaff_r8 + 0x224);
  }
  if (bVar24 && !bVar21) {
    piVar9 = (int *)((int)register0x00000054 + (int)param_1 * -0x4000);
    register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + (int)param_1 * -0x4000 + 0x57d);
    unaff_r8 = *piVar9;
  }
  else {
    coprocessor_store(0,in_cr0,param_4 + 0x2f4);
  }
  if ((bool)in_NG) {
    coprocessor_store(0xd,in_cr8,param_2 + 0x208);
  }
  if (!(bool)in_OV) {
    software_interrupt(0x4d80);
    puVar10 = (undefined1 *)((int)register0x00000054 + -0x334);
    register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x334);
    coprocessor_store(0xe,in_cr7,puVar10);
  }
  bVar22 = false;
  uVar25 = bVar24;
  if (bVar21) {
    uVar2 = (uint)register0x00000054 >> 0x18;
    uVar25 = CARRY4((uint)register0x00000054,uVar2) ||
             CARRY4((int)register0x00000054 + uVar2,(uint)bVar24);
    in_OV = SCARRY4((int)register0x00000054,uVar2) !=
            SCARRY4((int)((int)register0x00000054 + uVar2),(uint)bVar24);
    in_NG = (int)((int)register0x00000054 + bVar24 + uVar2) < 0;
    bVar22 = (undefined1 *)((int)register0x00000054 + bVar24 + uVar2) == (undefined1 *)0x0;
  }
  if (in_NG != in_OV) {
    unaff_r10 = unaff_r10 + -0x1ec;
    coprocessor_loadlong(0xd,in_cr11,unaff_r10);
    unaff_r8 = unaff_r8 + -0x1e4;
    coprocessor_loadlong(0xd,in_cr11,unaff_r8);
  }
  if (!(bool)in_OV) {
    register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + (int)param_1 * 0x4000 + -0x5cd);
  }
  if ((bool)uVar25 && !bVar22) {
    param_4 = param_4 + -0x234;
    coprocessor_loadlong(0,in_cr0,param_4);
    param_2 = param_2 + -0x1c8;
    coprocessor_loadlong(0xd,in_cr9,param_2);
  }
  if ((bool)in_OV) {
    software_interrupt(0xd70);
    puVar11 = (undefined1 *)((int)register0x00000054 + -500);
    register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -500);
    coprocessor_loadlong(0xe,in_cr6,puVar11);
  }
  bVar21 = false;
  if (bVar22) {
    puVar1 = (undefined1 *)
             ((uint)register0x00000054 >> (in_r12 & 0x1f) |
             (int)register0x00000054 << 0x20 - (in_r12 & 0x1f));
    uVar25 = puVar1 <= register0x00000054;
    in_OV = SBORROW4((int)register0x00000054,(int)puVar1);
    unaff_r6 = (int)register0x00000054 - (int)puVar1;
    in_NG = unaff_r6 < 0;
    bVar21 = unaff_r6 == 0;
  }
  if (!(bool)in_OV) {
    unaff_r10 = unaff_r10 + -0x1ac;
    coprocessor_storelong(0xd,in_cr7,unaff_r10);
  }
  if (!(bool)in_NG) {
    unaff_r8 = unaff_r8 + -0x1a4;
    coprocessor_storelong(0xd,in_cr5,unaff_r8);
  }
  if ((bool)in_OV) {
    *(char *)register0x00000054 = (char)unaff_r6;
    register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + (int)param_1 * -0x4000 + 0x54d);
  }
  if (in_NG == in_OV) {
    param_4 = param_4 + -0x334;
    coprocessor_storelong(0,in_cr0,param_4);
  }
  if (!bVar21 && in_NG == in_OV) {
    param_2 = param_2 + -0x188;
    coprocessor_storelong(0xd,in_cr12,param_2);
  }
  if (!(bool)in_NG) {
    software_interrupt(0xcd60);
    puVar12 = (undefined1 *)((int)register0x00000054 + -0x334);
    register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x334);
    coprocessor_store(0xe,in_cr5,puVar12);
  }
  if (bVar21) {
    unaff_r5 = (uint)register0x00000054 ^ (uint)register0x00000054 >> 0x18;
  }
  if (!bVar21 && in_NG == in_OV) {
    coprocessor_loadlong(0xd,in_cr11,unaff_r10 + -0x16c);
  }
  if (in_NG != in_OV) {
    coprocessor_loadlong(0xd,in_cr12,unaff_r8 + -0x164);
  }
  if (!(bool)in_NG) {
    puVar13 = (uint *)((int)register0x00000054 + (int)param_1 * 0x4000);
    *(char *)register0x00000054 = (char)unaff_r5;
    register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + (int)param_1 * 0x4000 + -0x5cd);
    *puVar13 = unaff_r5;
  }
  if (bVar21) {
    coprocessor_loadlong(0,in_cr0,param_4 + -0x234);
    coprocessor_loadlong(0xd,in_cr0,param_2 + -0x148);
  }
  if ((bool)in_NG) {
    software_interrupt(0xd50);
    puVar14 = (undefined1 *)((int)register0x00000054 + -0x34);
    register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x34);
    coprocessor_loadlong(0xe,in_cr4,puVar14);
  }
  bVar22 = false;
  if (bVar21) {
    puVar1 = (undefined1 *)
             ((uint)register0x00000054 >> (in_r12 & 0x1f) |
             (int)register0x00000054 << 0x20 - (in_r12 & 0x1f));
    uVar25 = puVar1 <= register0x00000054;
    in_OV = SBORROW4((int)register0x00000054,(int)puVar1);
    unaff_r4 = (int)register0x00000054 - (int)puVar1;
    in_NG = unaff_r4 < 0;
    bVar22 = unaff_r4 == 0;
  }
  if (!(bool)in_NG) {
    coprocessor_storelong(0xd,in_cr5,unaff_r10 + -300);
  }
  if ((bool)uVar25) {
    coprocessor_storelong(0xd,in_cr7,unaff_r8 + -0x124);
  }
  if ((bool)in_NG) {
    *(char *)register0x00000054 = (char)unaff_r4;
    register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + (int)param_1 * 0x4000 + 0x54d);
  }
  if (!(bool)uVar25) {
    coprocessor_storelong(0,in_cr0,param_4 + -0x274);
  }
  if (!bVar22 && in_NG == in_OV) {
    coprocessor_storelong(0xd,in_cr12,param_2 + -0x108);
  }
  if (!(bool)uVar25) {
    software_interrupt(0xcd40);
    puVar15 = (undefined1 *)((int)register0x00000054 + -0x234);
    register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x234);
    coprocessor_loadlong(0xe,in_cr3,puVar15);
  }
  bVar21 = false;
  if (bVar22) {
    puVar1 = (undefined1 *)((uint)register0x00000054 >> 0x18);
    uVar25 = register0x00000054 <= puVar1;
    in_OV = SBORROW4((int)puVar1,(int)register0x00000054);
    param_4 = (int)puVar1 - (int)register0x00000054;
    in_NG = param_4 < 0;
    bVar21 = param_4 == 0;
  }
  if (!bVar21 && in_NG == in_OV) {
    unaff_r10 = unaff_r10 + -0xec;
    coprocessor_load(0xd,in_cr5,unaff_r10);
    unaff_r8 = unaff_r8 + -0xe4;
    coprocessor_load(0xd,in_cr12,unaff_r8);
  }
  if ((bool)uVar25) {
    param_4 = param_4 + -0x34;
    coprocessor_load(0,in_cr0,param_4);
  }
  else {
    piVar16 = (int *)((int)register0x00000054 + (int)param_1 * 0x4000);
    *(char *)register0x00000054 = (char)param_4;
    register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + (int)param_1 * 0x4000 + -0x58d);
    *piVar16 = param_4;
  }
  if (bVar21) {
    param_2 = param_2 + -200;
    coprocessor_load(0xd,in_cr0,param_2);
  }
  if ((bool)uVar25) {
    software_interrupt(0xd30);
    puVar17 = (undefined1 *)((int)register0x00000054 + -500);
    register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -500);
    coprocessor_loadlong(0xe,in_cr2,puVar17);
  }
  bVar22 = false;
  if (bVar21) {
    puVar1 = (undefined1 *)((int)register0x00000054 >> (in_r12 & 0xff));
    uVar25 = puVar1 <= register0x00000054;
    in_OV = SBORROW4((int)register0x00000054,(int)puVar1);
    in_NG = (int)register0x00000054 - (int)puVar1 < 0;
    bVar22 = (undefined1 *)register0x00000054 == puVar1;
  }
  if (!(bool)in_NG) {
    unaff_r10 = unaff_r10 + -0xac;
    coprocessor_store(0xd,in_cr5,unaff_r10);
    unaff_r8 = unaff_r8 + -0xa4;
    coprocessor_store(0xd,in_cr5,unaff_r8);
  }
  if ((bool)uVar25) {
    puVar18 = (undefined4 *)((int)register0x00000054 + (int)param_1 * 0x1000 * 4);
    uVar3 = *(undefined4 *)register0x00000054;
    register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + (int)param_1 * 0x4000 + -0x57d);
    *(char *)puVar18 = (char)uVar3;
  }
  else {
    param_4 = param_4 + -0x2b4;
    coprocessor_store(0,in_cr0,param_4);
  }
  if ((bool)in_OV) {
    param_2 = param_2 + -0x88;
    coprocessor_store(0xd,in_cr10,param_2);
  }
  if (bVar22) {
    param_2 = ((uint)register0x00000054 >> 0x19) - (int)register0x00000054;
  }
  else {
    software_interrupt(0x9d20);
    coprocessor_load(0xe,in_cr1,(undefined1 *)((int)register0x00000054 + 0xf4));
  }
  if (in_NG == in_OV) {
    coprocessor_load(0xd,in_cr9,unaff_r10 + -0x6c);
  }
  if ((bool)in_OV) {
    coprocessor_load(0xd,in_cr10,unaff_r8 + -100);
  }
  if (!bVar22) {
    piVar19 = (int *)((int)register0x00000054 + (int)param_1 * 0x4000);
    *(char *)register0x00000054 = (char)param_2;
    register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + (int)param_1 * 0x4000 + -0x5ad);
    *piVar19 = param_2;
  }
  if ((bool)uVar25) {
    coprocessor_load(0,in_cr0,param_4 + -0x34);
  }
  bVar21 = false;
  pbVar20 = (byte *)register0x00000054;
  if (bVar22) {
    coprocessor_load(0xd,in_cr0,param_2 + -0x48);
    software_interrupt(0xd10);
    pbVar20 = (byte *)((int)register0x00000054 + -500);
    coprocessor_loadlong(0xe,in_cr0,(byte *)((int)register0x00000054 + -500));
    uVar25 = (undefined1 *)((int)((int)register0x00000054 + -500) >> (in_r12 & 0xff)) <=
             (byte *)((int)register0x00000054 + -500);
    param_1 = (byte *)((int)register0x00000054 +
                      (-500 - ((int)((int)register0x00000054 + -500) >> (in_r12 & 0xff))));
    in_NG = (int)param_1 < 0;
    bVar21 = param_1 == (byte *)0x0;
  }
  if (!(bool)in_NG) {
    coprocessor_store(0xd,in_cr5,unaff_r10 + -0x2c);
    coprocessor_store(0xd,in_cr5,unaff_r8 + -0x24);
  }
  if (bVar21) {
    *(uint *)(pbVar20 + (int)param_1 * -0x4000) = (uint)*pbVar20;
  }
  if (!(bool)uVar25) {
    coprocessor_store(0,in_cr0,param_4 + -0x2b4);
    coprocessor_store(0xd,in_cr3,param_2 + -8);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

