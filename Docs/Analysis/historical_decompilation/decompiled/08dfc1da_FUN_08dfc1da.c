
/* WARNING: Control flow encountered bad instruction data */

void FUN_08dfc1da(int param_1,int param_2,undefined4 param_3,uint param_4)

{
  undefined1 *puVar1;
  uint uVar2;
  uint unaff_r4;
  uint unaff_r5;
  uint unaff_r6;
  uint unaff_r7;
  uint unaff_r8;
  int unaff_r9;
  undefined1 *unaff_r10;
  uint in_r12;
  byte *pbVar3;
  uint *puVar4;
  uint *puVar5;
  undefined1 *puVar6;
  uint *puVar7;
  uint *puVar8;
  byte *pbVar9;
  undefined1 *puVar10;
  int *piVar11;
  char in_NG;
  bool in_ZR;
  bool in_CY;
  char in_OV;
  bool bVar12;
  bool bVar13;
  bool bVar14;
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
  undefined4 in_cr14;
  
  if (in_NG != in_OV) {
    register0x00000054 = (BADSPACEBASE *)&stack0x0000053d;
  }
  if (!in_CY || in_ZR) {
    param_4 = param_4 + 0x234;
    coprocessor_load(0,in_cr0,param_4);
    param_2 = param_2 + 0x2c8;
    coprocessor_load(0xd,in_cr8,param_2);
  }
  if (in_NG == in_OV) {
    software_interrupt(0x9db0);
    coprocessor_loadlong(0xe,in_cr10,(int *)((int)register0x00000054 + -0x234));
  }
  bVar12 = false;
  bVar14 = in_CY;
  if (in_ZR) {
    uVar2 = (uint)register0x00000054 >> (in_r12 & 0x1f) |
            (int)register0x00000054 << 0x20 - (in_r12 & 0x1f);
    bVar14 = CARRY4((uint)register0x00000054,uVar2) ||
             CARRY4((int)register0x00000054 + uVar2,(uint)in_CY);
    in_OV = SCARRY4((int)register0x00000054,uVar2) !=
            SCARRY4((int)((int)register0x00000054 + uVar2),(uint)in_CY);
    unaff_r10 = (undefined1 *)((int)register0x00000054 + in_CY + uVar2);
    in_NG = (int)unaff_r10 < 0;
    bVar12 = unaff_r10 == (undefined1 *)0x0;
  }
  if (in_NG == in_OV) {
    unaff_r10 = unaff_r10 + 0x2ac;
    coprocessor_store(0xd,in_cr3,unaff_r10);
  }
  if ((bool)in_NG) {
    unaff_r8 = unaff_r8 + 0x2a4;
    coprocessor_store(0xd,in_cr2,unaff_r8);
  }
  if (in_NG == in_OV) {
    pbVar3 = (byte *)((int)register0x00000054 + param_1 * 0x1000 * 4);
    register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + param_1 * 0x4000 + -0x5bd);
    unaff_r10 = (undefined1 *)(uint)*pbVar3;
  }
  else {
    param_4 = param_4 + 0x374;
    coprocessor_store(0,in_cr0,param_4);
    param_2 = param_2 + 0x288;
    coprocessor_store(0xd,in_cr11,param_2);
  }
  if (!bVar14 || bVar12) {
    software_interrupt(0xcda0);
    coprocessor_load(0xe,in_cr9,(int *)((int)register0x00000054 + -0x334));
  }
  if (bVar12) {
    unaff_r9 = (int)register0x00000054 -
               ((uint)register0x00000054 >> (in_r12 & 0x1f) |
               (int)register0x00000054 << 0x20 - (in_r12 & 0x1f));
  }
  if (!(bool)in_NG) {
    coprocessor_load(0xd,in_cr14,unaff_r10 + 0x26c);
  }
  if (bVar14 && !bVar12) {
    coprocessor_load(0xd,in_cr13,unaff_r8 + 0x264);
    coprocessor_load(0xd,in_cr9,param_2 + 0x248);
    software_interrupt(0x8d90);
    puVar4 = (uint *)((int)register0x00000054 + 0x174);
    coprocessor_load(0xe,in_cr8,(int *)((int)register0x00000054 + 0x174));
  }
  else {
    *(int *)register0x00000054 = unaff_r9;
    puVar4 = (uint *)((int)register0x00000054 + param_1 * 0x4000 + 0x55d);
    coprocessor_load(0,in_cr0,param_4 + 0x274);
  }
  if (bVar12) {
    unaff_r8 = (uint)puVar4 ^
               ((uint)puVar4 >> (in_r12 & 0x1f) | (int)puVar4 << 0x20 - (in_r12 & 0x1f));
  }
  if ((bool)in_NG) {
    coprocessor_store(0xd,in_cr7,unaff_r10 + 0x22c);
  }
  if (bVar12) {
    coprocessor_store(0xd,in_cr11,unaff_r8 + 0x224);
  }
  if (bVar14 && !bVar12) {
    puVar5 = puVar4 + param_1 * -0x1000;
    *puVar4 = unaff_r8;
    puVar4 = (uint *)((int)puVar4 + param_1 * -0x4000 + 0x57d);
    unaff_r8 = (uint)(byte)*puVar5;
  }
  if (in_NG != in_OV) {
    coprocessor_store(0,in_cr0,param_4 + 0x374);
  }
  if (!bVar12) {
    coprocessor_store(0xd,in_cr7,param_2 + 0x208);
  }
  if (!(bool)in_OV) {
    software_interrupt(0xcd80);
    coprocessor_storelong(0xe,in_cr7,puVar4 + 0xcd);
  }
  if (bVar12) {
    unaff_r7 = (uint)puVar4 & (int)puVar4 << 0x18;
  }
  if (!(bool)in_NG) {
    unaff_r10 = unaff_r10 + -0x1ec;
    coprocessor_loadlong(0xd,in_cr14,unaff_r10);
  }
  if (bVar14 && !bVar12) {
    unaff_r8 = unaff_r8 - 0x1e4;
    coprocessor_loadlong(0xd,in_cr8,unaff_r8);
  }
  if (!(bool)in_OV) {
    *puVar4 = unaff_r7;
    puVar4 = (uint *)((int)puVar4 + param_1 * 0x4000 + 0x58d);
  }
  if (in_NG == in_OV) {
    param_4 = param_4 - 0x274;
    coprocessor_loadlong(0,in_cr0,param_4);
  }
  else {
    param_2 = param_2 + -0x1c8;
    coprocessor_loadlong(0xd,in_cr13,param_2);
  }
  if ((bool)in_OV) {
    software_interrupt(0x4d70);
    puVar6 = (undefined1 *)((int)puVar4 + -0xb4);
    puVar4 = (uint *)((int)puVar4 + -0xb4);
    coprocessor_loadlong(0xe,in_cr6,puVar6);
  }
  bVar13 = false;
  if (bVar12) {
    uVar2 = (uint)puVar4 >> (in_r12 & 0x1f) | (int)puVar4 << 0x20 - (in_r12 & 0x1f);
    bVar14 = (in_r12 & 0xff) == 0 && bVar14 || (in_r12 & 0xff) != 0 && SUB41(uVar2 >> 0x1f,0);
    unaff_r6 = (uint)puVar4 ^ uVar2;
    in_NG = (int)unaff_r6 < 0;
    bVar13 = unaff_r6 == 0;
  }
  if ((bool)in_OV) {
    puVar7 = puVar4 + param_1 * -0x1000;
    *puVar4 = unaff_r6;
    puVar4 = (uint *)((int)puVar4 + param_1 * -0x4000 + -0x57d);
    *puVar7 = unaff_r6;
  }
  else {
    unaff_r10 = unaff_r10 + -0x1ac;
    coprocessor_storelong(0xd,in_cr7,unaff_r10);
    unaff_r8 = unaff_r8 - 0x1a4;
    coprocessor_storelong(0xd,in_cr11,unaff_r8);
  }
  if (bVar13) {
    param_4 = param_4 - 500;
    coprocessor_storelong(0,in_cr0,param_4);
  }
  if (!bVar13 && in_NG == in_OV) {
    param_2 = param_2 + -0x188;
    coprocessor_storelong(0xd,in_cr0,param_2);
  }
  if (!(bool)in_NG) {
    software_interrupt(0xcd60);
    coprocessor_storelong(0xe,in_cr5,puVar4 + 0xd);
  }
  if (bVar13) {
    unaff_r5 = (uint)puVar4 & (int)puVar4 >> 0x19;
  }
  if (in_NG != in_OV) {
    coprocessor_loadlong(0xd,in_cr7,unaff_r10 + -0x16c);
  }
  coprocessor_loadlong(0xd,in_cr4,unaff_r8 - 0x164);
  if ((bool)in_NG) {
    coprocessor_loadlong(0,in_cr0,param_4 - 500);
    coprocessor_loadlong(0xd,in_cr7,param_2 + -0x148);
    software_interrupt(0x6d50);
    puVar8 = puVar4 + -0x4d;
    coprocessor_loadlong(0xe,in_cr4,puVar4 + -0x4d);
  }
  else {
    *puVar4 = unaff_r5;
    puVar8 = (uint *)((int)puVar4 + param_1 * 0x4000 + 0x58d);
  }
  if (bVar13) {
    unaff_r4 = (uint)puVar8 & (int)puVar8 >> 0x18;
  }
  if (!(bool)in_OV) {
    coprocessor_storelong(0xd,in_cr0,unaff_r10 + -300);
    coprocessor_storelong(0xd,in_cr0,unaff_r8 - 0x124);
  }
  if ((bool)in_NG) {
    *puVar8 = unaff_r4;
    puVar8 = (uint *)((int)puVar8 + param_1 * -0x4000 + -0x57d);
  }
  if (bVar13) {
    coprocessor_storelong(0,in_cr0,param_4 - 500);
  }
  if (!bVar13 && in_NG == in_OV) {
    coprocessor_storelong(0xd,in_cr12,param_2 + -0x108);
  }
  if (!bVar14) {
    software_interrupt(0xd40);
    coprocessor_storelong(0xe,in_cr3,(undefined1 *)((int)puVar8 + 0x34));
  }
  if (bVar13) {
    param_4 = (uint)puVar8 & (int)puVar8 << 0x18;
    unaff_r10 = unaff_r10 + -0xec;
    coprocessor_load(0xd,in_cr7,unaff_r10);
  }
  else {
    unaff_r8 = unaff_r8 - 0xe4;
    coprocessor_load(0xd,in_cr1,unaff_r8);
  }
  if (!bVar14) {
    pbVar9 = (byte *)((int)puVar8 + param_1 * -0x4000);
    puVar8 = (uint *)((int)puVar8 + param_1 * -0x4000 + -0x59d);
    param_4 = (uint)*pbVar9;
  }
  if (in_NG == in_OV) {
    param_4 = param_4 - 0xf4;
    coprocessor_load(0,in_cr0,param_4);
  }
  if (!(bool)in_OV) {
    param_2 = param_2 + -200;
    coprocessor_load(0xd,in_cr11,param_2);
  }
  if (bVar14) {
    software_interrupt(0x6d30);
    puVar10 = (undefined1 *)((int)puVar8 + -0x174);
    puVar8 = (uint *)((int)puVar8 + -0x174);
    coprocessor_store(0xe,in_cr2,puVar10);
  }
  if (!(bool)in_OV) {
    unaff_r10 = unaff_r10 + -0xac;
    coprocessor_store(0xd,in_cr7,unaff_r10);
    unaff_r8 = unaff_r8 - 0xa4;
    coprocessor_store(0xd,in_cr11,unaff_r8);
  }
  if (bVar14) {
    puVar8 = (uint *)((int)puVar8 + param_1 * -0x4000 + 0x50d);
  }
  if (bVar13) {
    param_4 = param_4 - 0x374;
    coprocessor_store(0,in_cr0,param_4);
  }
  if (!bVar13 && in_NG == in_OV) {
    param_2 = param_2 + -0x88;
    coprocessor_store(0xd,in_cr12,param_2);
  }
  if (bVar13) {
    param_2 = (int)puVar8 - ((int)puVar8 >> 0x19);
  }
  else {
    software_interrupt(0xd20);
    coprocessor_store(0xe,in_cr1,puVar8 + -0xd);
    coprocessor_load(0xd,in_cr13,unaff_r10 + -0x6c);
  }
  if (in_NG != in_OV) {
    coprocessor_load(0xd,in_cr13,unaff_r8 - 100);
  }
  if (!bVar13) {
    piVar11 = (int *)(puVar8 + param_1 * -0x1000);
    param_2 = *puVar8;
    puVar8 = (uint *)((int)puVar8 + param_1 * -0x4000 + 0x58d);
    *(char *)piVar11 = (char)param_2;
  }
  if (in_NG == in_OV) {
    coprocessor_load(0,in_cr0,param_4 - 0x2f4);
  }
  if (bVar14) {
    coprocessor_load(0xd,in_cr10,param_2 + -0x48);
  }
  bVar12 = false;
  if (bVar13) {
    software_interrupt(0x5d10);
    coprocessor_loadlong(0xe,in_cr0,(undefined1 *)((int)puVar8 + -0xb4));
    puVar1 = (undefined1 *)((uint)puVar8 >> 0x18);
    in_OV = SBORROW4((int)puVar1,(int)puVar8);
    in_NG = (int)puVar1 - (int)puVar8 < 0;
    bVar12 = (uint *)puVar1 == puVar8;
  }
  if (!(bool)in_OV) {
    coprocessor_store(0xd,in_cr7,unaff_r10 + -0x2c);
  }
  if (bVar12) {
    coprocessor_store(0xd,in_cr0,unaff_r8 - 0x24);
  }
  if ((bool)in_NG) {
    coprocessor_store(0,in_cr0,param_4 - 0xf4);
  }
  if (bVar12) {
    coprocessor_store(0xd,in_cr12,param_2 + -8);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

