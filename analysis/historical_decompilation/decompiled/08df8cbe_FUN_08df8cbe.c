
/* WARNING: Control flow encountered bad instruction data */

void FUN_08df8cbe(int param_1,uint param_2,undefined1 param_3,uint param_4)

{
  undefined1 *puVar1;
  byte bVar2;
  int unaff_r6;
  int unaff_r8;
  int iVar3;
  undefined4 uVar4;
  int unaff_r10;
  int *piVar5;
  undefined1 *puVar6;
  undefined4 *puVar7;
  undefined1 *puVar8;
  uint *puVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  uint *puVar12;
  undefined1 *puVar13;
  undefined4 *puVar14;
  uint *puVar15;
  undefined1 *puVar16;
  undefined1 *puVar17;
  uint *puVar18;
  char in_NG;
  bool in_ZR;
  bool in_CY;
  char in_OV;
  bool bVar19;
  bool bVar20;
  bool bVar21;
  bool bVar22;
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
  undefined4 in_cr14;
  
  if (in_NG != in_OV) {
    register0x00000054 = (BADSPACEBASE *)&stack0x0000057d;
  }
  if (in_ZR || in_NG != in_OV) {
    param_4 = param_4 + 0x374;
    coprocessor_load(0,in_cr0,param_4);
  }
  if (in_NG == in_OV) {
    param_2 = param_2 + 0x2c8;
    coprocessor_load(0xd,in_cr10,param_2);
    software_interrupt(0xadb0);
    coprocessor_storelong(0xe,in_cr10,(int *)((int)register0x00000054 + 0x2b4));
  }
  bVar19 = false;
  bVar21 = in_CY;
  if (in_ZR) {
    puVar1 = (undefined1 *)((int)register0x00000054 >> 0x19);
    bVar21 = puVar1 < register0x00000054 ||
             (uint)((int)register0x00000054 - (int)puVar1) < (uint)in_CY;
    in_OV = SBORROW4((int)register0x00000054,(int)puVar1) !=
            SBORROW4((int)register0x00000054 - (int)puVar1,(uint)!in_CY);
    unaff_r10 = (int)register0x00000054 - (int)(puVar1 + !in_CY);
    in_NG = unaff_r10 < 0;
    bVar19 = unaff_r10 == 0;
  }
  if ((bool)in_OV) {
    unaff_r10 = unaff_r10 + 0x2ac;
    coprocessor_store(0xd,in_cr6,unaff_r10);
  }
  if (!bVar21 || bVar19) {
    unaff_r8 = unaff_r8 + 0x2a4;
    coprocessor_store(0xd,in_cr9,unaff_r8);
  }
  if (in_NG == in_OV) {
    piVar5 = (int *)((int)register0x00000054 + param_1 * 0x1000 * 4);
    unaff_r10 = *(int *)register0x00000054;
    register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + param_1 * 0x4000 + -0x55d);
    *(char *)piVar5 = (char)unaff_r10;
  }
  if (bVar21) {
    param_2 = param_2 + 0x288;
    coprocessor_store(0xd,in_cr7,param_2);
  }
  else {
    param_4 = param_4 + 0x174;
    coprocessor_store(0,in_cr0,param_4);
  }
  if (!bVar21 || bVar19) {
    software_interrupt(0x1da0);
    puVar6 = (undefined1 *)((int)register0x00000054 + -0xf4);
    register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0xf4);
    coprocessor_load(0xe,in_cr9,puVar6);
  }
  coprocessor_load(0xd,in_cr14,unaff_r10 + 0x26c);
  if (!(bool)in_NG) {
    coprocessor_load(0xd,in_cr14,unaff_r8 + 0x264);
  }
  if (!bVar21 || bVar19) {
    puVar7 = (undefined4 *)((int)register0x00000054 + param_1 * -0x1000 * 4);
    uVar4 = *(undefined4 *)register0x00000054;
    register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + param_1 * -0x4000 + 0x53d);
    *puVar7 = uVar4;
  }
  if (in_NG == in_OV) {
    coprocessor_load(0,in_cr0,param_4 + 0x2b4);
    coprocessor_load(0xd,in_cr10,param_2 + 0x248);
  }
  if (bVar21 && !bVar19) {
    software_interrupt(0xad90);
    coprocessor_storelong(0xe,in_cr8,(undefined1 *)((int)register0x00000054 + 0x2b4));
  }
  bVar20 = false;
  bVar22 = bVar21;
  if (bVar19) {
    puVar1 = (undefined1 *)((int)register0x00000054 >> 0x19);
    bVar22 = puVar1 < register0x00000054 ||
             (uint)((int)register0x00000054 - (int)puVar1) < (uint)bVar21;
    in_OV = SBORROW4((int)register0x00000054,(int)puVar1) !=
            SBORROW4((int)register0x00000054 - (int)puVar1,(uint)!bVar21);
    unaff_r8 = (int)register0x00000054 - (int)(puVar1 + !bVar21);
    in_NG = unaff_r8 < 0;
    bVar20 = unaff_r8 == 0;
  }
  if ((bool)in_OV) {
    coprocessor_store(0xd,in_cr6,unaff_r10 + 0x22c);
  }
  if (!bVar22 || bVar20) {
    coprocessor_store(0xd,in_cr9,unaff_r8 + 0x224);
  }
  else {
    puVar8 = (undefined1 *)((int)register0x00000054 + param_1 * 0x4000);
    *(char *)register0x00000054 = (char)unaff_r8;
    register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + param_1 * 0x4000 + -0x5bd);
    *puVar8 = (char)unaff_r8;
  }
  if (!(bool)in_NG) {
    coprocessor_store(0,in_cr0,param_4 + 0x174);
  }
  if (!bVar20) {
    coprocessor_store(0xd,in_cr2,param_2 + 0x208);
  }
  if (!(bool)in_OV) {
    software_interrupt(0x1d80);
    coprocessor_load(0xe,in_cr7,(byte *)((int)register0x00000054 + -0x74));
  }
  if (!(bool)in_NG) {
    unaff_r10 = unaff_r10 + -0x1ec;
    coprocessor_loadlong(0xd,in_cr4,unaff_r10);
    unaff_r8 = unaff_r8 + -0x1e4;
    coprocessor_loadlong(0xd,in_cr5,unaff_r8);
  }
  if (!(bool)in_OV) {
    puVar9 = (uint *)((int)register0x00000054 + param_1 * -0x4000);
    bVar2 = *(byte *)register0x00000054;
    register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + param_1 * -0x4000 + 0x55d);
    *puVar9 = (uint)bVar2;
  }
  if (in_NG == in_OV) {
    param_4 = param_4 - 0x2b4;
    coprocessor_loadlong(0,in_cr0,param_4);
    param_2 = param_2 - 0x1c8;
    coprocessor_loadlong(0xd,in_cr10,param_2);
  }
  if ((bool)in_OV) {
    software_interrupt(0xad70);
    puVar10 = (undefined1 *)((int)register0x00000054 + 0x334);
    register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + 0x334);
    coprocessor_store(0xe,in_cr6,puVar10);
  }
  bVar19 = false;
  bVar21 = bVar22;
  if (bVar20) {
    puVar1 = (undefined1 *)((uint)register0x00000054 >> 0x19);
    bVar21 = puVar1 < register0x00000054 ||
             (uint)((int)register0x00000054 - (int)puVar1) < (uint)bVar22;
    in_OV = SBORROW4((int)register0x00000054,(int)puVar1) !=
            SBORROW4((int)register0x00000054 - (int)puVar1,(uint)!bVar22);
    unaff_r6 = (int)register0x00000054 - (int)(puVar1 + !bVar22);
    in_NG = unaff_r6 < 0;
    bVar19 = unaff_r6 == 0;
  }
  if (!bVar21 || bVar19) {
    unaff_r10 = unaff_r10 + -0x1ac;
    coprocessor_storelong(0xd,in_cr6,unaff_r10);
    unaff_r8 = unaff_r8 + -0x1a4;
    coprocessor_storelong(0xd,in_cr14,unaff_r8);
  }
  if ((bool)in_OV) {
    puVar11 = (undefined1 *)((int)register0x00000054 + param_1 * 0x4000);
    *(char *)register0x00000054 = (char)unaff_r6;
    register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + param_1 * 0x4000 + 0x5ed);
    *puVar11 = (char)unaff_r6;
  }
  if (!bVar21) {
    param_4 = param_4 - 0x174;
    coprocessor_storelong(0,in_cr0,param_4);
  }
  if (!bVar19) {
    param_2 = param_2 - 0x188;
    coprocessor_storelong(0xd,in_cr1,param_2);
  }
  if ((bool)in_NG) {
    coprocessor_loadlong(0xd,in_cr0,unaff_r10 + -0x16c);
  }
  else {
    software_interrupt(0x1d60);
    coprocessor_store(0xe,in_cr5,(byte *)((int)register0x00000054 + -0x34));
    coprocessor_loadlong(0xd,in_cr5,unaff_r8 + -0x164);
    puVar12 = (uint *)((int)register0x00000054 + param_1 * -0x4000);
    bVar2 = *(byte *)register0x00000054;
    register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + param_1 * -0x4000 + 0x57d);
    *puVar12 = (uint)bVar2;
  }
  if (in_NG == in_OV) {
    coprocessor_loadlong(0,in_cr0,param_4 - 0x2b4);
    coprocessor_loadlong(0xd,in_cr10,param_2 - 0x148);
  }
  if ((bool)in_NG) {
    software_interrupt(0xbd50);
    puVar13 = (undefined1 *)((int)register0x00000054 + 0x334);
    register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + 0x334);
    coprocessor_store(0xe,in_cr4,puVar13);
  }
  if (!bVar21 || bVar19) {
    coprocessor_storelong(0xd,in_cr9,unaff_r10 + -300);
  }
  if (!bVar19 && in_NG == in_OV) {
    coprocessor_storelong(0xd,in_cr14,unaff_r8 + -0x124);
  }
  if ((bool)in_NG) {
    puVar14 = (undefined4 *)((int)register0x00000054 + param_1 * 0x1000 * 4);
    uVar4 = *(undefined4 *)register0x00000054;
    register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + param_1 * 0x4000 + -0x5ed);
    *(char *)puVar14 = (char)uVar4;
  }
  if (bVar19) {
    coprocessor_storelong(0xd,in_cr0,param_2 - 0x108);
  }
  else {
    coprocessor_storelong(0,in_cr0,param_4 - 0x174);
  }
  if (!bVar21) {
    software_interrupt(0xd40);
    coprocessor_store(0xe,in_cr3,(undefined1 *)((int)register0x00000054 + -0x34));
  }
  if (bVar19) {
    param_4 = (uint)register0x00000054 & (int)register0x00000054 << 0x18;
  }
  if (!(bool)in_NG) {
    unaff_r10 = unaff_r10 + -0xec;
    coprocessor_load(0xd,in_cr0,unaff_r10);
  }
  iVar3 = unaff_r8 + -0xe4;
  coprocessor_load(0xd,in_cr5,iVar3);
  if (!bVar21) {
    puVar15 = (uint *)((int)register0x00000054 + param_1 * 0x4000);
    *(char *)register0x00000054 = (char)param_4;
    register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + param_1 * 0x4000 + 0x57d);
    *puVar15 = param_4;
  }
  if (in_NG == in_OV) {
    param_4 = param_4 - 0x334;
    coprocessor_load(0,in_cr0,param_4);
    param_2 = param_2 - 200;
    coprocessor_load(0xd,in_cr10,param_2);
  }
  if (bVar21) {
    software_interrupt(0xbd30);
    puVar16 = (undefined1 *)((int)register0x00000054 + 0x2f4);
    register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + 0x2f4);
    coprocessor_store(0xe,in_cr2,puVar16);
  }
  if (bVar19) {
    param_3 = (undefined1)
              ((int)register0x00000054 - (((uint)register0x00000054 >> 0x19) + (uint)!bVar21));
  }
  if (!bVar19 && in_NG == in_OV) {
    unaff_r10 = unaff_r10 + -0xac;
    coprocessor_store(0xd,in_cr9,unaff_r10);
  }
  if (in_NG != in_OV) {
    iVar3 = unaff_r8 + -0x188;
    coprocessor_store(0xd,in_cr11,iVar3);
  }
  if (bVar21) {
    puVar17 = (undefined1 *)((int)register0x00000054 + param_1 * 0x4000);
    *(undefined1 *)register0x00000054 = param_3;
    register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + param_1 * 0x4000 + -0x5ed);
    *puVar17 = param_3;
  }
  if ((bool)in_NG) {
    param_4 = param_4 - 0x134;
    coprocessor_store(0,in_cr0,param_4);
  }
  if (bVar19) {
    coprocessor_store(0xd,in_cr0,param_2 - 0x88);
    bVar21 = (bool)((byte)((uint)register0x00000054 >> 0x17) & 1);
    param_2 = (uint)register0x00000054 & (int)register0x00000054 >> 0x18;
    in_NG = (int)param_2 < 0;
    bVar19 = param_2 == 0;
  }
  else {
    software_interrupt(0xd20);
    coprocessor_store(0xe,in_cr1,(uint *)((int)register0x00000054 + -0x34));
    bVar19 = false;
  }
  if (!(bool)in_NG) {
    coprocessor_load(0xd,in_cr3,unaff_r10 + -0x6c);
  }
  if (bVar21 && !bVar19) {
    coprocessor_load(0xd,in_cr7,iVar3 + -100);
  }
  if (!bVar19) {
    puVar18 = (uint *)((int)register0x00000054 + param_1 * 0x1000 * 4);
    *(uint *)register0x00000054 = param_2;
    register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + param_1 * 0x4000 + 0x57d);
    *puVar18 = param_2;
  }
  if (in_NG == in_OV) {
    coprocessor_load(0,in_cr0,param_4 - 0x334);
    coprocessor_load(0xd,in_cr10,param_2 - 0x48);
  }
  if (bVar19) {
    software_interrupt(0xbd10);
    coprocessor_storelong(0xe,in_cr0,(undefined1 *)((int)register0x00000054 + 0x3b4));
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

