
/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x084bbe92) */
/* WARNING: Removing unreachable block (ram,0x084b8866) */
/* WARNING: Removing unreachable block (ram,0x082f64f2) */
/* WARNING: Removing unreachable block (ram,0x084b8872) */
/* WARNING: Removing unreachable block (ram,0x084bbeba) */
/* WARNING: Removing unreachable block (ram,0x084b88aa) */
/* WARNING: Removing unreachable block (ram,0x084bbec2) */
/* WARNING: Removing unreachable block (ram,0x084b88ae) */
/* WARNING: Removing unreachable block (ram,0x084bbeca) */
/* WARNING: Removing unreachable block (ram,0x084bbed2) */
/* WARNING: Removing unreachable block (ram,0x084b88b6) */
/* WARNING: Removing unreachable block (ram,0x084bbf56) */
/* WARNING: Removing unreachable block (ram,0x084b88be) */
/* WARNING: Removing unreachable block (ram,0x084bbf6e) */
/* WARNING: Removing unreachable block (ram,0x084bbf7a) */
/* WARNING: Removing unreachable block (ram,0x084b88c6) */
/* WARNING: Removing unreachable block (ram,0x084bbf76) */
/* WARNING: Removing unreachable block (ram,0x084bbf8e) */
/* WARNING: Removing unreachable block (ram,0x084b88ce) */
/* WARNING: Removing unreachable block (ram,0x084b88e2) */
/* WARNING: Removing unreachable block (ram,0x084b895e) */
/* WARNING: Removing unreachable block (ram,0x084b8956) */
/* WARNING: Removing unreachable block (ram,0x084b8966) */
/* WARNING: Removing unreachable block (ram,0x084b898a) */
/* WARNING: Removing unreachable block (ram,0x084b89c2) */
/* WARNING: Removing unreachable block (ram,0x084b89c6) */
/* WARNING: Removing unreachable block (ram,0x084b89ce) */
/* WARNING: Removing unreachable block (ram,0x084b89d6) */
/* WARNING: Removing unreachable block (ram,0x084b89fa) */
/* WARNING: Removing unreachable block (ram,0x084b89fe) */
/* WARNING: Removing unreachable block (ram,0x084b8a06) */
/* WARNING: Removing unreachable block (ram,0x084b8a0e) */
/* WARNING: Removing unreachable block (ram,0x084b8a32) */
/* WARNING: Removing unreachable block (ram,0x084b8a36) */
/* WARNING: Removing unreachable block (ram,0x084b8a3e) */
/* WARNING: Removing unreachable block (ram,0x084b8a46) */
/* WARNING: Removing unreachable block (ram,0x084b8a4e) */
/* WARNING: Removing unreachable block (ram,0x084b8a56) */
/* WARNING: Removing unreachable block (ram,0x084b8aae) */
/* WARNING: Removing unreachable block (ram,0x084b8aa6) */
/* WARNING: Removing unreachable block (ram,0x084b8ab6) */
/* WARNING: Removing unreachable block (ram,0x084b8ada) */
/* WARNING: Removing unreachable block (ram,0x084b8ade) */
/* WARNING: Removing unreachable block (ram,0x084b8ae6) */
/* WARNING: Removing unreachable block (ram,0x084b8aee) */
/* WARNING: Removing unreachable block (ram,0x084b8b12) */
/* WARNING: Removing unreachable block (ram,0x084b8b4a) */
/* WARNING: Removing unreachable block (ram,0x084b8b82) */
/* WARNING: Type propagation algorithm not settling */

void FUN_082f64da(undefined4 param_1,undefined4 param_2,uint *param_3,uint *param_4)

{
  uint uVar1;
  uint *puVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  byte bVar10;
  byte bVar11;
  byte bVar12;
  byte bVar13;
  uint *puVar14;
  undefined1 *puVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  uint *puVar22;
  uint *extraout_r2;
  uint *extraout_r3;
  uint *unaff_r4;
  uint *unaff_r5;
  uint *unaff_r6;
  uint *unaff_r7;
  uint *unaff_r8;
  uint *unaff_r9;
  uint *unaff_r10;
  uint *unaff_r11;
  uint *in_r12;
  uint *extraout_r12;
  uint *extraout_r12_00;
  uint *unaff_lr;
  char in_NG;
  undefined1 in_ZR;
  undefined1 in_CY;
  char in_OV;
  bool bVar23;
  bool bVar24;
  char cVar25;
  bool bVar26;
  bool bVar27;
  undefined1 uVar28;
  byte bVar29;
  byte bVar30;
  byte bVar31;
  bool bVar32;
  undefined4 in_cr0;
  undefined4 in_cr12;
  undefined1 in_q11 [16];
  undefined1 in_q13 [16];
  undefined8 uVar33;
  
  uVar33 = CONCAT44(param_2,param_1);
  if (!(bool)in_ZR && in_NG == in_OV) {
    unaff_lr = (uint *)0x82f64de;
    uVar33 = func_0x075e3af6();
    param_3 = extraout_r2;
    param_4 = extraout_r3;
    in_r12 = extraout_r12;
  }
  puVar22 = (uint *)((ulonglong)uVar33 >> 0x20);
  puVar14 = (uint *)uVar33;
  if ((bool)in_ZR) {
    FloatVectorMultiplySubtract(in_q11,in_q13,4,0x10);
    if ((bool)in_CY) {
      puVar22 = (uint *)*unaff_r4;
      unaff_r11 = (uint *)unaff_r4[1];
      register0x00000054 = (BADSPACEBASE *)unaff_r4[2];
    }
    if ((bool)in_NG) {
      unaff_r10[-1] = (uint)register0x00000054;
      unaff_r10[-2] = (uint)in_r12;
      unaff_r10[-3] = (uint)unaff_r11;
      unaff_r10[-4] = (uint)unaff_r9;
      unaff_r10[-5] = (uint)unaff_r5;
      unaff_r10[-6] = (uint)param_4;
      unaff_r10[-7] = (uint)param_3;
      unaff_r10[-8] = (uint)puVar22;
      unaff_r10[-9] = (uint)puVar14;
      *puVar14 = (uint)register0x00000054;
      puVar14[-1] = (uint)in_r12;
      puVar14[-2] = (uint)unaff_r11;
      puVar14[-3] = (uint)unaff_r9;
      puVar14[-4] = (uint)unaff_r8;
      puVar14[-5] = (uint)unaff_r6;
      puVar14[-6] = (uint)param_4;
      puVar14[-7] = (uint)puVar22;
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if ((bool)in_NG) {
    puVar14 = (uint *)(&stack0x00000000 +
                      -((int)unaff_r4 <<
                       ((int)param_4 - ((int)unaff_r4 << ((uint)puVar14 & 0xff)) & 0xffU)));
  }
  bVar26 = false;
  bVar23 = false;
  if ((bool)in_NG) {
    puVar14 = (uint *)((int)unaff_r4 << ((uint)puVar14 & 0xff));
    in_CY = puVar14 <= unaff_r7;
    in_OV = SBORROW4((int)unaff_r7,(int)puVar14);
    puVar14 = (uint *)((int)unaff_r7 - (int)puVar14);
    bVar23 = (int)puVar14 < 0;
    bVar26 = puVar14 == (uint *)0x0;
  }
  if (bVar26) {
    puVar14 = (uint *)((uint)unaff_lr ^ 0x84b8bfe);
  }
  bVar24 = false;
  if (bVar23) {
    in_CY = puVar14 <= unaff_r7;
    in_OV = SBORROW4((int)unaff_r7,(int)puVar14);
    puVar14 = (uint *)((int)unaff_r7 - (int)puVar14);
    bVar24 = (int)puVar14 < 0;
    bVar26 = puVar14 == (uint *)0x0;
  }
  if (bVar26) {
    puVar14 = (uint *)((uint)unaff_lr ^ (uint)unaff_r11);
  }
  bVar23 = false;
  if (bVar24) {
    in_CY = puVar14 <= unaff_r7;
    in_OV = SBORROW4((int)unaff_r7,(int)puVar14);
    puVar14 = (uint *)((int)unaff_r7 - (int)puVar14);
    bVar23 = (int)puVar14 < 0;
    bVar26 = puVar14 == (uint *)0x0;
  }
  bVar24 = false;
  if (bVar26) {
    puVar14 = (uint *)((uint)unaff_r4 & (uint)unaff_r10);
    bVar23 = (int)puVar14 < 0;
    bVar24 = puVar14 == (uint *)0x0;
  }
  bVar26 = false;
  if (bVar24) {
    puVar14 = (uint *)((int)unaff_r4 << ((uint)puVar14 & 0xff));
    in_CY = puVar14 <= unaff_r11;
    in_OV = SBORROW4((int)unaff_r11,(int)puVar14);
    puVar14 = (uint *)((int)unaff_r11 - (int)puVar14);
    bVar23 = (int)puVar14 < 0;
    bVar26 = puVar14 == (uint *)0x0;
  }
  bVar24 = false;
  if (bVar26) {
    puVar14 = (uint *)((uint)unaff_lr ^ 0x84b8c36);
    in_CY = puVar14 <= unaff_r11;
    in_OV = SBORROW4((int)unaff_r11,(int)puVar14);
    puVar14 = (uint *)((int)unaff_r11 - (int)puVar14);
    bVar23 = (int)puVar14 < 0;
    bVar24 = puVar14 == (uint *)0x0;
  }
  bVar26 = false;
  if (bVar24) {
    puVar14 = (uint *)((uint)unaff_lr ^ (uint)unaff_r11);
    in_CY = puVar14 <= unaff_r11;
    in_OV = SBORROW4((int)unaff_r11,(int)puVar14);
    puVar14 = (uint *)((int)unaff_r11 - (int)puVar14);
    bVar23 = (int)puVar14 < 0;
    bVar26 = puVar14 == (uint *)0x0;
  }
  bVar24 = false;
  if (bVar26) {
    puVar14 = (uint *)((uint)unaff_r4 & (uint)unaff_r10);
    bVar23 = (int)puVar14 < 0;
    bVar24 = puVar14 == (uint *)0x0;
  }
  bVar26 = false;
  if (bVar24) {
    puVar14 = (uint *)((uint)unaff_r4 & (uint)unaff_r10);
    bVar23 = (int)puVar14 < 0;
    bVar26 = puVar14 == (uint *)0x0;
  }
  bVar24 = false;
  if (bVar26) {
    puVar15 = (undefined1 *)((int)unaff_r4 << ((uint)puVar14 & 0xff));
    in_CY = &stack0x00000000 <= puVar15;
    in_OV = SBORROW4((int)puVar15,(int)&stack0x00000000);
    puVar14 = (uint *)(puVar15 + -(int)&stack0x00000000);
    bVar23 = (int)puVar14 < 0;
    bVar24 = puVar14 == (uint *)0x0;
  }
  bVar26 = false;
  if (bVar24) {
    puVar15 = (undefined1 *)((uint)unaff_lr ^ 0x84b8ca6);
    in_CY = &stack0x00000000 <= puVar15;
    in_OV = SBORROW4((int)puVar15,(int)&stack0x00000000);
    puVar14 = (uint *)(puVar15 + -(int)&stack0x00000000);
    bVar23 = (int)puVar14 < 0;
    bVar26 = puVar14 == (uint *)0x0;
  }
  bVar24 = false;
  if (bVar26) {
    puVar15 = (undefined1 *)((uint)unaff_lr ^ (uint)unaff_r11);
    in_CY = &stack0x00000000 <= puVar15;
    in_OV = SBORROW4((int)puVar15,(int)&stack0x00000000);
    puVar14 = (uint *)(puVar15 + -(int)&stack0x00000000);
    bVar23 = (int)puVar14 < 0;
    bVar24 = puVar14 == (uint *)0x0;
  }
  bVar26 = false;
  if (bVar24) {
    puVar14 = (uint *)((uint)unaff_r4 & (uint)unaff_r10);
    bVar23 = (int)puVar14 < 0;
    bVar26 = puVar14 == (uint *)0x0;
  }
  bVar24 = false;
  if (bVar26) {
    puVar14 = (uint *)((int)unaff_r4 << ((uint)puVar14 & 0xff));
    in_CY = puVar14 <= unaff_lr;
    in_OV = SBORROW4((int)unaff_lr,(int)puVar14);
    puVar14 = (uint *)((int)unaff_lr - (int)puVar14);
    bVar23 = (int)puVar14 < 0;
    bVar24 = puVar14 == (uint *)0x0;
  }
  bVar26 = false;
  if (bVar24) {
    puVar14 = (uint *)((uint)unaff_lr ^ 0x84b8cde);
    in_CY = puVar14 <= unaff_lr;
    in_OV = SBORROW4((int)unaff_lr,(int)puVar14);
    puVar14 = (uint *)((int)unaff_lr - (int)puVar14);
    bVar23 = (int)puVar14 < 0;
    bVar26 = puVar14 == (uint *)0x0;
  }
  bVar24 = false;
  if (bVar26) {
    puVar14 = (uint *)((uint)unaff_lr ^ (uint)unaff_r11);
    in_CY = puVar14 <= unaff_lr;
    in_OV = SBORROW4((int)unaff_lr,(int)puVar14);
    puVar14 = (uint *)((int)unaff_lr - (int)puVar14);
    bVar23 = (int)puVar14 < 0;
    bVar24 = puVar14 == (uint *)0x0;
  }
  bVar26 = false;
  if (bVar24) {
    puVar14 = (uint *)((uint)unaff_lr ^ (int)param_4 << ((uint)puVar14 & 0xff));
    in_CY = puVar14 <= unaff_lr;
    in_OV = SBORROW4((int)unaff_lr,(int)puVar14);
    puVar14 = (uint *)((int)unaff_lr - (int)puVar14);
    bVar23 = (int)puVar14 < 0;
    bVar26 = puVar14 == (uint *)0x0;
  }
  bVar24 = false;
  if (bVar26) {
    puVar14 = (uint *)((uint)unaff_lr ^ (uint)unaff_r7);
    in_CY = puVar14 <= unaff_lr;
    in_OV = SBORROW4((int)unaff_lr,(int)puVar14);
    puVar14 = (uint *)((int)unaff_lr - (int)puVar14);
    bVar23 = (int)puVar14 < 0;
    bVar24 = puVar14 == (uint *)0x0;
  }
  bVar26 = false;
  if (bVar24) {
    puVar14 = (uint *)((uint)unaff_r4 & (uint)unaff_r10);
    bVar23 = (int)puVar14 < 0;
    bVar26 = puVar14 == (uint *)0x0;
  }
  bVar24 = false;
  if (bVar23) {
    uVar16 = (uint)puVar14 & 0xff;
    in_CY = uVar16 == 0 && (bool)in_CY ||
            uVar16 != 0 && (bool)((byte)((uint)unaff_r4 >> 0x20 - uVar16) & 1);
    puVar14 = (uint *)((uint)unaff_r6 & (int)unaff_r4 << uVar16);
    bVar24 = (int)puVar14 < 0;
    bVar26 = puVar14 == (uint *)0x0;
  }
  if (bVar26) {
    puVar14 = (uint *)((uint)unaff_lr ^ 0x84b8d4e);
  }
  bVar23 = false;
  if (bVar24) {
    puVar14 = (uint *)((uint)unaff_r6 & (uint)puVar14);
    bVar23 = (int)puVar14 < 0;
    bVar26 = puVar14 == (uint *)0x0;
  }
  if (bVar26) {
    puVar14 = (uint *)((uint)unaff_lr ^ (uint)unaff_r11);
  }
  bVar24 = false;
  if (bVar23) {
    puVar14 = (uint *)((uint)unaff_r6 & (uint)puVar14);
    bVar24 = (int)puVar14 < 0;
    bVar26 = puVar14 == (uint *)0x0;
  }
  bVar23 = false;
  if (bVar26) {
    puVar14 = (uint *)((uint)unaff_r4 & (uint)unaff_r10);
    bVar24 = (int)puVar14 < 0;
    bVar23 = puVar14 == (uint *)0x0;
  }
  bVar26 = false;
  if (bVar23) {
    puVar14 = (uint *)((uint)unaff_r4 & (uint)unaff_r10);
    bVar24 = (int)puVar14 < 0;
    bVar26 = puVar14 == (uint *)0x0;
  }
  bVar23 = false;
  if (bVar26) {
    puVar14 = (uint *)((uint)unaff_r4 & (uint)unaff_r10);
    bVar24 = (int)puVar14 < 0;
    bVar23 = puVar14 == (uint *)0x0;
  }
  bVar26 = false;
  if (bVar23) {
    puVar14 = (uint *)((uint)unaff_r4 & (uint)unaff_r10);
    bVar24 = (int)puVar14 < 0;
    bVar26 = puVar14 == (uint *)0x0;
  }
  bVar23 = false;
  if (bVar26) {
    puVar14 = (uint *)((int)unaff_r4 << ((uint)puVar14 & 0xff));
    in_CY = unaff_lr <= puVar14;
    in_OV = SBORROW4((int)puVar14,(int)unaff_lr);
    puVar14 = (uint *)((int)puVar14 - (int)unaff_lr);
    bVar24 = (int)puVar14 < 0;
    bVar23 = puVar14 == (uint *)0x0;
  }
  bVar26 = false;
  if (bVar23) {
    puVar14 = (uint *)((uint)unaff_lr ^ 0x84b8e2e);
    in_CY = unaff_lr <= puVar14;
    in_OV = SBORROW4((int)puVar14,(int)unaff_lr);
    puVar14 = (uint *)((int)puVar14 - (int)unaff_lr);
    bVar24 = (int)puVar14 < 0;
    bVar26 = puVar14 == (uint *)0x0;
  }
  bVar23 = false;
  if (bVar26) {
    puVar14 = (uint *)((uint)unaff_lr ^ (uint)unaff_r11);
    in_CY = unaff_lr <= puVar14;
    in_OV = SBORROW4((int)puVar14,(int)unaff_lr);
    puVar14 = (uint *)((int)puVar14 - (int)unaff_lr);
    bVar24 = (int)puVar14 < 0;
    bVar23 = puVar14 == (uint *)0x0;
  }
  bVar26 = false;
  if (bVar23) {
    puVar14 = (uint *)((uint)unaff_r4 & (uint)unaff_r10);
    bVar24 = (int)puVar14 < 0;
    bVar26 = puVar14 == (uint *)0x0;
  }
  if (bVar24) {
    puVar14 = (uint *)(((int)unaff_r4 << ((uint)puVar14 & 0xff)) - (int)unaff_lr);
  }
  if (bVar26) {
    puVar14 = (uint *)((uint)unaff_lr ^ 0x84b8e9e);
  }
  if (bVar24) {
    puVar14 = (uint *)((int)puVar14 - (int)unaff_lr);
  }
  if (bVar26) {
    puVar14 = (uint *)((uint)unaff_lr ^ (uint)unaff_r11);
  }
  if (bVar24) {
    puVar14 = (uint *)((int)puVar14 - (int)unaff_lr);
  }
  bVar23 = false;
  if (bVar26) {
    puVar14 = (uint *)((uint)unaff_r4 & (uint)unaff_r10);
    bVar24 = (int)puVar14 < 0;
    bVar23 = puVar14 == (uint *)0x0;
  }
  bVar26 = false;
  if (bVar23) {
    puVar14 = (uint *)((uint)unaff_r4 & (uint)unaff_r10);
    bVar24 = (int)puVar14 < 0;
    bVar26 = puVar14 == (uint *)0x0;
  }
  bVar23 = false;
  if (bVar26) {
    puVar14 = (uint *)((int)unaff_r4 << ((uint)puVar14 & 0xff));
    in_CY = unaff_r4 <= puVar14;
    in_OV = SBORROW4((int)puVar14,(int)unaff_r4);
    puVar14 = (uint *)((int)puVar14 - (int)unaff_r4);
    bVar24 = (int)puVar14 < 0;
    bVar23 = puVar14 == (uint *)0x0;
  }
  bVar26 = false;
  if (bVar23) {
    uVar16 = (uint)unaff_lr ^ 0x84b8f0e;
    in_CY = CARRY4((uint)param_3,uVar16);
    in_OV = SCARRY4((int)param_3,uVar16);
    puVar14 = (uint *)((int)param_3 + uVar16);
    bVar24 = (int)puVar14 < 0;
    bVar26 = puVar14 == (uint *)0x0;
  }
  bVar23 = false;
  if (bVar26) {
    uVar16 = (uint)unaff_lr ^ (uint)unaff_r11;
    in_CY = CARRY4((uint)param_3,uVar16);
    in_OV = SCARRY4((int)param_3,uVar16);
    puVar14 = (uint *)((int)param_3 + uVar16);
    bVar24 = (int)puVar14 < 0;
    bVar23 = puVar14 == (uint *)0x0;
  }
  bVar26 = false;
  if (bVar23) {
    puVar14 = (uint *)((uint)unaff_r4 & (uint)unaff_r10);
    bVar24 = (int)puVar14 < 0;
    bVar26 = puVar14 == (uint *)0x0;
  }
  bVar23 = false;
  if (bVar26) {
    uVar16 = (int)unaff_r4 << ((uint)puVar14 & 0xff);
    in_CY = puVar22 <= uVar16;
    in_OV = SBORROW4(uVar16,(int)puVar22);
    puVar14 = (uint *)(uVar16 - (int)puVar22);
    bVar24 = (int)puVar14 < 0;
    bVar23 = puVar14 == (uint *)0x0;
  }
  bVar26 = false;
  if (bVar23) {
    uVar16 = (uint)unaff_lr ^ 0x84b8f46;
    in_CY = puVar22 <= uVar16;
    in_OV = SBORROW4(uVar16,(int)puVar22);
    puVar14 = (uint *)(uVar16 - (int)puVar22);
    bVar24 = (int)puVar14 < 0;
    bVar26 = puVar14 == (uint *)0x0;
  }
  bVar23 = false;
  if (bVar26) {
    uVar16 = (uint)unaff_lr ^ (uint)unaff_r11;
    in_CY = puVar22 <= uVar16;
    in_OV = SBORROW4(uVar16,(int)puVar22);
    puVar14 = (uint *)(uVar16 - (int)puVar22);
    bVar24 = (int)puVar14 < 0;
    bVar23 = puVar14 == (uint *)0x0;
  }
  bVar26 = false;
  if (bVar23) {
    puVar14 = (uint *)((uint)unaff_r4 & (uint)unaff_r10);
    bVar24 = (int)puVar14 < 0;
    bVar26 = puVar14 == (uint *)0x0;
  }
  bVar23 = false;
  if (bVar26) {
    puVar14 = (uint *)((int)unaff_r4 << ((uint)puVar14 & 0xff));
    in_CY = unaff_r8 <= puVar14;
    in_OV = SBORROW4((int)puVar14,(int)unaff_r8);
    puVar14 = (uint *)((int)puVar14 - (int)unaff_r8);
    bVar24 = (int)puVar14 < 0;
    bVar23 = puVar14 == (uint *)0x0;
  }
  bVar26 = false;
  if (bVar23) {
    puVar14 = (uint *)((uint)unaff_lr ^ 0x84b8f7e);
    in_CY = unaff_r7 <= puVar14;
    in_OV = SBORROW4((int)puVar14,(int)unaff_r7);
    puVar14 = (uint *)((int)puVar14 - (int)unaff_r7);
    bVar24 = (int)puVar14 < 0;
    bVar26 = puVar14 == (uint *)0x0;
  }
  bVar23 = false;
  if (bVar26) {
    puVar14 = (uint *)((uint)unaff_lr ^ (uint)unaff_r11);
    in_CY = unaff_r7 <= puVar14;
    in_OV = SBORROW4((int)puVar14,(int)unaff_r7);
    puVar14 = (uint *)((int)puVar14 - (int)unaff_r7);
    bVar24 = (int)puVar14 < 0;
    bVar23 = puVar14 == (uint *)0x0;
  }
  bVar26 = false;
  if (bVar23) {
    puVar14 = (uint *)((uint)unaff_lr ^ (int)param_4 << ((uint)puVar14 & 0xff));
    in_CY = unaff_r7 <= puVar14;
    in_OV = SBORROW4((int)puVar14,(int)unaff_r7);
    puVar14 = (uint *)((int)puVar14 - (int)unaff_r7);
    bVar24 = (int)puVar14 < 0;
    bVar26 = puVar14 == (uint *)0x0;
  }
  bVar23 = false;
  if (bVar26) {
    puVar14 = (uint *)((uint)unaff_lr ^ (uint)unaff_r7);
    in_CY = unaff_r7 <= puVar14;
    in_OV = SBORROW4((int)puVar14,(int)unaff_r7);
    puVar14 = (uint *)((int)puVar14 - (int)unaff_r7);
    bVar24 = (int)puVar14 < 0;
    bVar23 = puVar14 == (uint *)0x0;
  }
  bVar26 = false;
  if (bVar23) {
    puVar14 = (uint *)((uint)unaff_r4 & (uint)unaff_r10);
    bVar24 = (int)puVar14 < 0;
    bVar26 = puVar14 == (uint *)0x0;
  }
  bVar23 = false;
  if (bVar24) {
    uVar16 = (uint)puVar14 & 0xff;
    in_CY = uVar16 == 0 && (bool)in_CY ||
            uVar16 != 0 && (bool)((byte)((uint)unaff_r4 >> 0x20 - uVar16) & 1);
    puVar14 = (uint *)((uint)param_3 ^ (int)unaff_r4 << uVar16);
    bVar23 = (int)puVar14 < 0;
    bVar26 = puVar14 == (uint *)0x0;
  }
  if (bVar26) {
    puVar14 = (uint *)((uint)unaff_lr ^ 0x84b8fee);
  }
  bVar24 = false;
  if (bVar23) {
    puVar14 = (uint *)((uint)param_3 ^ (uint)puVar14);
    bVar24 = (int)puVar14 < 0;
    bVar26 = puVar14 == (uint *)0x0;
  }
  if (bVar26) {
    puVar14 = (uint *)((uint)unaff_lr ^ (uint)unaff_r11);
  }
  bVar23 = false;
  if (bVar24) {
    puVar14 = (uint *)((uint)param_3 ^ (uint)puVar14);
    bVar23 = (int)puVar14 < 0;
    bVar26 = puVar14 == (uint *)0x0;
  }
  bVar24 = false;
  if (bVar26) {
    puVar14 = (uint *)((uint)unaff_r4 & (uint)unaff_r10);
    bVar23 = (int)puVar14 < 0;
    bVar24 = puVar14 == (uint *)0x0;
  }
  bVar26 = false;
  if (bVar24) {
    puVar14 = (uint *)((int)unaff_r4 << ((uint)puVar14 & 0xff));
    in_CY = unaff_r11 <= puVar14;
    in_OV = SBORROW4((int)puVar14,(int)unaff_r11);
    puVar14 = (uint *)((int)puVar14 - (int)unaff_r11);
    bVar23 = (int)puVar14 < 0;
    bVar26 = puVar14 == (uint *)0x0;
  }
  bVar24 = false;
  if (bVar26) {
    puVar14 = (uint *)((uint)unaff_lr ^ 0x84b9026);
    in_CY = unaff_r10 <= puVar14;
    in_OV = SBORROW4((int)puVar14,(int)unaff_r10);
    puVar14 = (uint *)((int)puVar14 - (int)unaff_r10);
    bVar23 = (int)puVar14 < 0;
    bVar24 = puVar14 == (uint *)0x0;
  }
  bVar26 = false;
  if (bVar24) {
    puVar14 = (uint *)((uint)unaff_lr ^ (uint)unaff_r11);
    in_CY = unaff_r10 <= puVar14;
    in_OV = SBORROW4((int)puVar14,(int)unaff_r10);
    puVar14 = (uint *)((int)puVar14 - (int)unaff_r10);
    bVar23 = (int)puVar14 < 0;
    bVar26 = puVar14 == (uint *)0x0;
  }
  bVar24 = false;
  if (bVar26) {
    puVar14 = (uint *)((uint)unaff_r4 & (uint)unaff_r10);
    bVar23 = (int)puVar14 < 0;
    bVar24 = puVar14 == (uint *)0x0;
  }
  bVar26 = false;
  if (bVar24) {
    puVar14 = (uint *)((uint)unaff_r4 & (uint)unaff_r10);
    bVar23 = (int)puVar14 < 0;
    bVar26 = puVar14 == (uint *)0x0;
  }
  bVar24 = false;
  if (bVar26) {
    uVar16 = (int)unaff_r4 << ((uint)puVar14 & 0xff);
    in_CY = 0x84b9091 < uVar16;
    in_OV = SBORROW4(uVar16,0x84b9092);
    puVar14 = (uint *)(uVar16 + 0xf7b46f6e);
    bVar23 = (int)puVar14 < 0;
    bVar24 = puVar14 == (uint *)0x0;
  }
  bVar26 = false;
  if (bVar24) {
    uVar16 = (uint)unaff_lr ^ 0x84b9096;
    in_CY = 0x84b9099 < uVar16;
    in_OV = SBORROW4(uVar16,0x84b909a);
    puVar14 = (uint *)(uVar16 + 0xf7b46f66);
    bVar23 = (int)puVar14 < 0;
    bVar26 = puVar14 == (uint *)0x0;
  }
  bVar24 = false;
  if (bVar26) {
    uVar16 = (uint)unaff_lr ^ (uint)unaff_r11;
    in_CY = 0x84b90a1 < uVar16;
    in_OV = SBORROW4(uVar16,0x84b90a2);
    puVar14 = (uint *)(uVar16 + 0xf7b46f5e);
    bVar23 = (int)puVar14 < 0;
    bVar24 = puVar14 == (uint *)0x0;
  }
  bVar26 = false;
  if (bVar24) {
    puVar14 = (uint *)((uint)unaff_r4 & (uint)unaff_r10);
    bVar23 = (int)puVar14 < 0;
    bVar26 = puVar14 == (uint *)0x0;
  }
  bVar24 = false;
  if (bVar26) {
    puVar14 = (uint *)((uint)unaff_r4 & (uint)unaff_r10);
    bVar23 = (int)puVar14 < 0;
    bVar24 = puVar14 == (uint *)0x0;
  }
  bVar26 = false;
  if (bVar23) {
    uVar16 = (uint)puVar14 & 0xff;
    in_CY = uVar16 == 0 && (bool)in_CY ||
            uVar16 != 0 && (bool)((byte)((uint)unaff_r4 >> 0x20 - uVar16) & 1);
    puVar14 = (uint *)((uint)in_r12 ^ (int)unaff_r4 << uVar16);
    bVar26 = (int)puVar14 < 0;
    bVar24 = puVar14 == (uint *)0x0;
  }
  if (bVar24) {
    puVar14 = (uint *)((uint)unaff_lr ^ 0x84b913e);
  }
  bVar23 = false;
  if (bVar26) {
    puVar14 = (uint *)((uint)in_r12 ^ (uint)puVar14);
    bVar23 = (int)puVar14 < 0;
    bVar24 = puVar14 == (uint *)0x0;
  }
  if (bVar24) {
    puVar14 = (uint *)((uint)unaff_lr ^ (uint)unaff_r11);
  }
  bVar26 = false;
  if (bVar23) {
    puVar14 = (uint *)((uint)in_r12 ^ (uint)puVar14);
    bVar26 = (int)puVar14 < 0;
    bVar24 = puVar14 == (uint *)0x0;
  }
  bVar23 = false;
  if (bVar24) {
    puVar14 = (uint *)((uint)unaff_r4 & (uint)unaff_r10);
    bVar26 = (int)puVar14 < 0;
    bVar23 = puVar14 == (uint *)0x0;
  }
  bVar24 = false;
  if (bVar23) {
    puVar14 = (uint *)((uint)unaff_r4 & (uint)unaff_r10);
    bVar26 = (int)puVar14 < 0;
    bVar24 = puVar14 == (uint *)0x0;
  }
  bVar23 = false;
  if (bVar24) {
    puVar14 = (uint *)((uint)unaff_r4 & (uint)unaff_r10);
    bVar26 = (int)puVar14 < 0;
    bVar23 = puVar14 == (uint *)0x0;
  }
  bVar24 = false;
  if (bVar23) {
    puVar14 = (uint *)((uint)unaff_r4 & (uint)unaff_r10);
    bVar26 = (int)puVar14 < 0;
    bVar24 = puVar14 == (uint *)0x0;
  }
  bVar23 = false;
  if (bVar24) {
    puVar14 = (uint *)((uint)unaff_r4 & (uint)puVar22);
    bVar26 = (int)puVar14 < 0;
    bVar23 = puVar14 == (uint *)0x0;
  }
  if (!bVar23 && bVar26 == (bool)in_OV) {
    puVar14 = (uint *)((int)unaff_r5 -
                      (((int)unaff_r4 << ((uint)puVar14 & 0xff)) + (uint)!(bool)in_CY));
  }
  bVar24 = false;
  if (bVar23) {
    puVar14 = (uint *)((uint)param_3 & 0x84b928e);
    bVar24 = puVar14 == (uint *)0x0;
    bVar26 = false;
  }
  bVar23 = false;
  if (bVar24) {
    puVar14 = (uint *)((uint)unaff_lr & (uint)puVar22);
    bVar26 = (int)puVar14 < 0;
    bVar23 = puVar14 == (uint *)0x0;
  }
  bVar24 = false;
  if (bVar23) {
    uVar16 = (uint)puVar14 & 0xff;
    in_CY = uVar16 == 0 && (bool)in_CY ||
            uVar16 != 0 && (bool)((byte)((uint)puVar22 >> 0x20 - uVar16) & 1);
    puVar14 = (uint *)((uint)unaff_r4 & (int)puVar22 << uVar16);
    bVar26 = (int)puVar14 < 0;
    bVar24 = puVar14 == (uint *)0x0;
  }
  bVar23 = false;
  if (bVar24) {
    puVar14 = (uint *)((uint)unaff_lr & (uint)puVar22);
    bVar26 = (int)puVar14 < 0;
    bVar23 = puVar14 == (uint *)0x0;
  }
  bVar24 = false;
  if (bVar23) {
    uVar16 = (uint)puVar14 & 0xff;
    in_CY = uVar16 == 0 && (bool)in_CY ||
            uVar16 != 0 && (bool)((byte)((uint)puVar22 >> 0x20 - uVar16) & 1);
    puVar14 = (uint *)((uint)unaff_r4 & (int)puVar22 << uVar16);
    bVar26 = (int)puVar14 < 0;
    bVar24 = puVar14 == (uint *)0x0;
  }
  bVar23 = false;
  if (bVar24) {
    puVar14 = (uint *)((uint)unaff_lr & (uint)puVar22);
    bVar26 = (int)puVar14 < 0;
    bVar23 = puVar14 == (uint *)0x0;
  }
  bVar24 = false;
  if (bVar23) {
    uVar16 = (uint)puVar14 & 0xff;
    in_CY = uVar16 == 0 && (bool)in_CY ||
            uVar16 != 0 && (bool)((byte)((uint)puVar22 >> 0x20 - uVar16) & 1);
    puVar14 = (uint *)((uint)unaff_r4 & (int)puVar22 << uVar16);
    bVar26 = (int)puVar14 < 0;
    bVar24 = puVar14 == (uint *)0x0;
  }
  bVar23 = false;
  if (bVar24) {
    uVar16 = (int)unaff_r4 << ((uint)puVar14 & 0xff);
    in_CY = CARRY4((uint)unaff_r4,uVar16);
    in_OV = SCARRY4((int)unaff_r4,uVar16);
    puVar14 = (uint *)((int)unaff_r4 + uVar16);
    bVar26 = (int)puVar14 < 0;
    bVar23 = puVar14 == (uint *)0x0;
  }
  bVar24 = false;
  if (bVar23) {
    uVar16 = (uint)puVar14 & 0xff;
    in_CY = uVar16 == 0 && (bool)in_CY ||
            uVar16 != 0 && (bool)((byte)((uint)unaff_lr >> 0x20 - uVar16) & 1);
    puVar14 = (uint *)((uint)puVar22 & (int)unaff_lr << uVar16);
    bVar26 = (int)puVar14 < 0;
    bVar24 = puVar14 == (uint *)0x0;
  }
  bVar23 = false;
  if (bVar24) {
    in_CY = CARRY4((uint)unaff_r4,(uint)puVar14);
    in_OV = SCARRY4((int)unaff_r4,(int)puVar14);
    puVar14 = (uint *)((int)unaff_r4 + (int)puVar14);
    bVar26 = (int)puVar14 < 0;
    bVar23 = puVar14 == (uint *)0x0;
  }
  bVar24 = false;
  if (bVar23) {
    uVar16 = (uint)puVar14 & 0xff;
    in_CY = uVar16 == 0 && (bool)in_CY ||
            uVar16 != 0 && (bool)((byte)((uint)unaff_lr >> 0x20 - uVar16) & 1);
    puVar14 = (uint *)((uint)puVar22 & (int)unaff_lr << uVar16);
    bVar26 = (int)puVar14 < 0;
    bVar24 = puVar14 == (uint *)0x0;
  }
  bVar23 = false;
  if (bVar24) {
    in_CY = CARRY4((uint)unaff_r4,(uint)puVar14);
    in_OV = SCARRY4((int)unaff_r4,(int)puVar14);
    puVar14 = (uint *)((int)unaff_r4 + (int)puVar14);
    bVar26 = (int)puVar14 < 0;
    bVar23 = puVar14 == (uint *)0x0;
  }
  bVar24 = false;
  if (bVar23) {
    uVar16 = (uint)puVar14 & 0xff;
    in_CY = uVar16 == 0 && (bool)in_CY ||
            uVar16 != 0 && (bool)((byte)((uint)unaff_lr >> 0x20 - uVar16) & 1);
    puVar14 = (uint *)((uint)puVar22 & (int)unaff_lr << uVar16);
    bVar26 = (int)puVar14 < 0;
    bVar24 = puVar14 == (uint *)0x0;
  }
  bVar23 = false;
  if (bVar24) {
    in_CY = CARRY4((uint)unaff_r4,(uint)puVar14);
    in_OV = SCARRY4((int)unaff_r4,(int)puVar14);
    puVar14 = (uint *)((int)unaff_r4 + (int)puVar14);
    bVar26 = (int)puVar14 < 0;
    bVar23 = puVar14 == (uint *)0x0;
  }
  bVar24 = false;
  if (bVar23) {
    uVar16 = (uint)puVar14 & 0xff;
    in_CY = uVar16 == 0 && (bool)in_CY ||
            uVar16 != 0 && (bool)((byte)((uint)unaff_lr >> 0x20 - uVar16) & 1);
    puVar14 = (uint *)((uint)puVar22 & (int)unaff_lr << uVar16);
    bVar26 = (int)puVar14 < 0;
    bVar24 = puVar14 == (uint *)0x0;
  }
  bVar23 = false;
  if (bVar24) {
    in_CY = CARRY4((uint)unaff_r4,(uint)puVar14);
    in_OV = SCARRY4((int)unaff_r4,(int)puVar14);
    puVar14 = (uint *)((int)unaff_r4 + (int)puVar14);
    bVar26 = (int)puVar14 < 0;
    bVar23 = puVar14 == (uint *)0x0;
  }
  bVar24 = false;
  if (bVar23) {
    uVar16 = (uint)puVar14 & 0xff;
    in_CY = uVar16 == 0 && (bool)in_CY ||
            uVar16 != 0 && (bool)((byte)((uint)unaff_lr >> 0x20 - uVar16) & 1);
    puVar14 = (uint *)((uint)puVar22 & (int)unaff_lr << uVar16);
    bVar26 = (int)puVar14 < 0;
    bVar24 = puVar14 == (uint *)0x0;
  }
  bVar23 = false;
  if (bVar24) {
    puVar14 = (uint *)((uint)unaff_lr & (uint)puVar22);
    bVar26 = (int)puVar14 < 0;
    bVar23 = puVar14 == (uint *)0x0;
  }
  bVar24 = false;
  if (bVar23) {
    uVar16 = (uint)puVar14 & 0xff;
    in_CY = uVar16 == 0 && (bool)in_CY ||
            uVar16 != 0 && (bool)((byte)((uint)puVar22 >> 0x20 - uVar16) & 1);
    puVar14 = (uint *)((uint)unaff_r4 & (int)puVar22 << uVar16);
    bVar26 = (int)puVar14 < 0;
    bVar24 = puVar14 == (uint *)0x0;
  }
  bVar23 = false;
  if (bVar24) {
    uVar16 = (int)unaff_r4 << ((uint)puVar14 & 0xff);
    in_CY = CARRY4((uint)unaff_r4,uVar16);
    in_OV = SCARRY4((int)unaff_r4,uVar16);
    puVar14 = (uint *)((int)unaff_r4 + uVar16);
    bVar26 = (int)puVar14 < 0;
    bVar23 = puVar14 == (uint *)0x0;
  }
  bVar24 = false;
  if (bVar23) {
    uVar16 = (uint)puVar14 & 0xff;
    in_CY = uVar16 == 0 && (bool)in_CY ||
            uVar16 != 0 && (bool)((byte)((uint)unaff_lr >> 0x20 - uVar16) & 1);
    puVar14 = (uint *)((uint)puVar22 & (int)unaff_lr << uVar16);
    bVar26 = (int)puVar14 < 0;
    bVar24 = puVar14 == (uint *)0x0;
  }
  bVar23 = false;
  if (bVar24) {
    in_CY = CARRY4((uint)unaff_r4,(uint)puVar14);
    in_OV = SCARRY4((int)unaff_r4,(int)puVar14);
    puVar14 = (uint *)((int)unaff_r4 + (int)puVar14);
    bVar26 = (int)puVar14 < 0;
    bVar23 = puVar14 == (uint *)0x0;
  }
  bVar24 = false;
  if (bVar23) {
    uVar16 = (uint)puVar14 & 0xff;
    in_CY = uVar16 == 0 && (bool)in_CY ||
            uVar16 != 0 && (bool)((byte)((uint)unaff_lr >> 0x20 - uVar16) & 1);
    puVar14 = (uint *)((uint)puVar22 & (int)unaff_lr << uVar16);
    bVar26 = (int)puVar14 < 0;
    bVar24 = puVar14 == (uint *)0x0;
  }
  bVar23 = false;
  if (bVar24) {
    in_CY = CARRY4((uint)unaff_r4,(uint)puVar14);
    in_OV = SCARRY4((int)unaff_r4,(int)puVar14);
    puVar14 = (uint *)((int)unaff_r4 + (int)puVar14);
    bVar26 = (int)puVar14 < 0;
    bVar23 = puVar14 == (uint *)0x0;
  }
  bVar24 = false;
  if (bVar23) {
    uVar16 = (uint)puVar14 & 0xff;
    in_CY = uVar16 == 0 && (bool)in_CY ||
            uVar16 != 0 && (bool)((byte)((uint)unaff_lr >> 0x20 - uVar16) & 1);
    puVar14 = (uint *)((uint)puVar22 & (int)unaff_lr << uVar16);
    bVar26 = (int)puVar14 < 0;
    bVar24 = puVar14 == (uint *)0x0;
  }
  bVar23 = false;
  if (bVar24) {
    in_CY = CARRY4((uint)unaff_r4,(uint)puVar14);
    in_OV = SCARRY4((int)unaff_r4,(int)puVar14);
    puVar14 = (uint *)((int)unaff_r4 + (int)puVar14);
    bVar26 = (int)puVar14 < 0;
    bVar23 = puVar14 == (uint *)0x0;
  }
  bVar24 = false;
  if (bVar23) {
    uVar16 = (uint)puVar14 & 0xff;
    in_CY = uVar16 == 0 && (bool)in_CY ||
            uVar16 != 0 && (bool)((byte)((uint)unaff_lr >> 0x20 - uVar16) & 1);
    puVar14 = (uint *)((uint)puVar22 & (int)unaff_lr << uVar16);
    bVar26 = (int)puVar14 < 0;
    bVar24 = puVar14 == (uint *)0x0;
  }
  bVar23 = false;
  if (bVar24) {
    in_CY = CARRY4((uint)unaff_r4,(uint)puVar14);
    in_OV = SCARRY4((int)unaff_r4,(int)puVar14);
    puVar14 = (uint *)((int)unaff_r4 + (int)puVar14);
    bVar26 = (int)puVar14 < 0;
    bVar23 = puVar14 == (uint *)0x0;
  }
  bVar24 = false;
  if (bVar23) {
    uVar16 = (uint)puVar14 & 0xff;
    in_CY = uVar16 == 0 && (bool)in_CY ||
            uVar16 != 0 && (bool)((byte)((uint)unaff_lr >> 0x20 - uVar16) & 1);
    puVar14 = (uint *)((uint)puVar22 & (int)unaff_lr << uVar16);
    bVar26 = (int)puVar14 < 0;
    bVar24 = puVar14 == (uint *)0x0;
  }
  bVar23 = false;
  if (bVar24) {
    puVar14 = (uint *)((uint)unaff_lr & (uint)puVar22);
    bVar26 = (int)puVar14 < 0;
    bVar23 = puVar14 == (uint *)0x0;
  }
  bVar24 = false;
  if (bVar23) {
    uVar16 = (uint)puVar14 & 0xff;
    in_CY = uVar16 == 0 && (bool)in_CY ||
            uVar16 != 0 && (bool)((byte)((uint)puVar22 >> 0x20 - uVar16) & 1);
    puVar14 = (uint *)((uint)unaff_r4 & (int)puVar22 << uVar16);
    bVar26 = (int)puVar14 < 0;
    bVar24 = puVar14 == (uint *)0x0;
  }
  bVar23 = false;
  if (bVar24) {
    uVar16 = (int)unaff_r4 << ((uint)puVar14 & 0xff);
    in_CY = CARRY4((uint)unaff_r4,uVar16);
    in_OV = SCARRY4((int)unaff_r4,uVar16);
    puVar14 = (uint *)((int)unaff_r4 + uVar16);
    bVar26 = (int)puVar14 < 0;
    bVar23 = puVar14 == (uint *)0x0;
  }
  bVar24 = false;
  if (bVar23) {
    uVar16 = (uint)puVar14 & 0xff;
    in_CY = uVar16 == 0 && (bool)in_CY ||
            uVar16 != 0 && (bool)((byte)((uint)unaff_lr >> 0x20 - uVar16) & 1);
    puVar14 = (uint *)((uint)puVar22 & (int)unaff_lr << uVar16);
    bVar26 = (int)puVar14 < 0;
    bVar24 = puVar14 == (uint *)0x0;
  }
  bVar23 = false;
  if (bVar24) {
    in_CY = CARRY4((uint)unaff_r4,(uint)puVar14);
    in_OV = SCARRY4((int)unaff_r4,(int)puVar14);
    puVar14 = (uint *)((int)unaff_r4 + (int)puVar14);
    bVar26 = (int)puVar14 < 0;
    bVar23 = puVar14 == (uint *)0x0;
  }
  bVar24 = false;
  if (bVar23) {
    uVar16 = (uint)puVar14 & 0xff;
    in_CY = uVar16 == 0 && (bool)in_CY ||
            uVar16 != 0 && (bool)((byte)((uint)unaff_lr >> 0x20 - uVar16) & 1);
    puVar14 = (uint *)((uint)puVar22 & (int)unaff_lr << uVar16);
    bVar26 = (int)puVar14 < 0;
    bVar24 = puVar14 == (uint *)0x0;
  }
  bVar23 = false;
  if (bVar24) {
    in_CY = CARRY4((uint)unaff_r4,(uint)puVar14);
    in_OV = SCARRY4((int)unaff_r4,(int)puVar14);
    puVar14 = (uint *)((int)unaff_r4 + (int)puVar14);
    bVar26 = (int)puVar14 < 0;
    bVar23 = puVar14 == (uint *)0x0;
  }
  bVar24 = false;
  if (bVar23) {
    uVar16 = (uint)puVar14 & 0xff;
    in_CY = uVar16 == 0 && (bool)in_CY ||
            uVar16 != 0 && (bool)((byte)((uint)unaff_lr >> 0x20 - uVar16) & 1);
    puVar14 = (uint *)((uint)puVar22 & (int)unaff_lr << uVar16);
    bVar26 = (int)puVar14 < 0;
    bVar24 = puVar14 == (uint *)0x0;
  }
  bVar23 = false;
  if (bVar24) {
    in_CY = CARRY4((uint)unaff_r4,(uint)puVar14);
    in_OV = SCARRY4((int)unaff_r4,(int)puVar14);
    puVar14 = (uint *)((int)unaff_r4 + (int)puVar14);
    bVar26 = (int)puVar14 < 0;
    bVar23 = puVar14 == (uint *)0x0;
  }
  bVar24 = false;
  if (bVar23) {
    uVar16 = (uint)puVar14 & 0xff;
    in_CY = uVar16 == 0 && (bool)in_CY ||
            uVar16 != 0 && (bool)((byte)((uint)unaff_lr >> 0x20 - uVar16) & 1);
    puVar14 = (uint *)((uint)puVar22 & (int)unaff_lr << uVar16);
    bVar26 = (int)puVar14 < 0;
    bVar24 = puVar14 == (uint *)0x0;
  }
  bVar23 = false;
  if (bVar24) {
    in_CY = CARRY4((uint)unaff_r4,(uint)puVar14);
    in_OV = SCARRY4((int)unaff_r4,(int)puVar14);
    puVar14 = (uint *)((int)unaff_r4 + (int)puVar14);
    bVar26 = (int)puVar14 < 0;
    bVar23 = puVar14 == (uint *)0x0;
  }
  bVar24 = false;
  if (bVar23) {
    uVar16 = (uint)puVar14 & 0xff;
    in_CY = uVar16 == 0 && (bool)in_CY ||
            uVar16 != 0 && (bool)((byte)((uint)unaff_lr >> 0x20 - uVar16) & 1);
    puVar14 = (uint *)((uint)puVar22 & (int)unaff_lr << uVar16);
    bVar26 = (int)puVar14 < 0;
    bVar24 = puVar14 == (uint *)0x0;
  }
  bVar23 = false;
  if (bVar24) {
    puVar14 = (uint *)((uint)unaff_lr & (uint)puVar22);
    bVar26 = (int)puVar14 < 0;
    bVar23 = puVar14 == (uint *)0x0;
  }
  bVar24 = false;
  if (bVar23) {
    uVar16 = (uint)puVar14 & 0xff;
    in_CY = uVar16 == 0 && (bool)in_CY ||
            uVar16 != 0 && (bool)((byte)((uint)puVar22 >> 0x20 - uVar16) & 1);
    puVar14 = (uint *)((uint)unaff_r4 & (int)puVar22 << uVar16);
    bVar26 = (int)puVar14 < 0;
    bVar24 = puVar14 == (uint *)0x0;
  }
  bVar23 = false;
  if (bVar24) {
    uVar16 = (int)unaff_r4 << ((uint)puVar14 & 0xff);
    in_CY = CARRY4((uint)unaff_r4,uVar16);
    in_OV = SCARRY4((int)unaff_r4,uVar16);
    puVar14 = (uint *)((int)unaff_r4 + uVar16);
    bVar26 = (int)puVar14 < 0;
    bVar23 = puVar14 == (uint *)0x0;
  }
  bVar24 = false;
  if (bVar23) {
    uVar16 = (uint)puVar14 & 0xff;
    in_CY = uVar16 == 0 && (bool)in_CY ||
            uVar16 != 0 && (bool)((byte)((uint)unaff_lr >> 0x20 - uVar16) & 1);
    puVar14 = (uint *)((uint)puVar22 & (int)unaff_lr << uVar16);
    bVar26 = (int)puVar14 < 0;
    bVar24 = puVar14 == (uint *)0x0;
  }
  bVar23 = false;
  if (bVar24) {
    in_CY = CARRY4((uint)unaff_r4,(uint)puVar14);
    in_OV = SCARRY4((int)unaff_r4,(int)puVar14);
    puVar14 = (uint *)((int)unaff_r4 + (int)puVar14);
    bVar26 = (int)puVar14 < 0;
    bVar23 = puVar14 == (uint *)0x0;
  }
  bVar24 = false;
  if (bVar23) {
    uVar16 = (uint)puVar14 & 0xff;
    in_CY = uVar16 == 0 && (bool)in_CY ||
            uVar16 != 0 && (bool)((byte)((uint)unaff_lr >> 0x20 - uVar16) & 1);
    puVar14 = (uint *)((uint)puVar22 & (int)unaff_lr << uVar16);
    bVar26 = (int)puVar14 < 0;
    bVar24 = puVar14 == (uint *)0x0;
  }
  bVar23 = false;
  if (bVar24) {
    in_CY = CARRY4((uint)unaff_r4,(uint)puVar14);
    in_OV = SCARRY4((int)unaff_r4,(int)puVar14);
    puVar14 = (uint *)((int)unaff_r4 + (int)puVar14);
    bVar26 = (int)puVar14 < 0;
    bVar23 = puVar14 == (uint *)0x0;
  }
  bVar24 = false;
  if (bVar23) {
    uVar16 = (uint)puVar14 & 0xff;
    in_CY = uVar16 == 0 && (bool)in_CY ||
            uVar16 != 0 && (bool)((byte)((uint)unaff_lr >> 0x20 - uVar16) & 1);
    puVar14 = (uint *)((uint)puVar22 & (int)unaff_lr << uVar16);
    bVar26 = (int)puVar14 < 0;
    bVar24 = puVar14 == (uint *)0x0;
  }
  bVar23 = false;
  if (bVar24) {
    in_CY = CARRY4((uint)unaff_r4,(uint)puVar14);
    in_OV = SCARRY4((int)unaff_r4,(int)puVar14);
    puVar14 = (uint *)((int)unaff_r4 + (int)puVar14);
    bVar26 = (int)puVar14 < 0;
    bVar23 = puVar14 == (uint *)0x0;
  }
  bVar24 = false;
  if (bVar23) {
    uVar16 = (uint)puVar14 & 0xff;
    in_CY = uVar16 == 0 && (bool)in_CY ||
            uVar16 != 0 && (bool)((byte)((uint)unaff_lr >> 0x20 - uVar16) & 1);
    puVar14 = (uint *)((uint)puVar22 & (int)unaff_lr << uVar16);
    bVar26 = (int)puVar14 < 0;
    bVar24 = puVar14 == (uint *)0x0;
  }
  bVar23 = false;
  if (bVar24) {
    in_CY = CARRY4((uint)unaff_r4,(uint)puVar14);
    in_OV = SCARRY4((int)unaff_r4,(int)puVar14);
    puVar14 = (uint *)((int)unaff_r4 + (int)puVar14);
    bVar26 = (int)puVar14 < 0;
    bVar23 = puVar14 == (uint *)0x0;
  }
  bVar24 = false;
  if (bVar23) {
    uVar16 = (uint)puVar14 & 0xff;
    in_CY = uVar16 == 0 && (bool)in_CY ||
            uVar16 != 0 && (bool)((byte)((uint)unaff_lr >> 0x20 - uVar16) & 1);
    puVar14 = (uint *)((uint)puVar22 & (int)unaff_lr << uVar16);
    bVar26 = (int)puVar14 < 0;
    bVar24 = puVar14 == (uint *)0x0;
  }
  bVar23 = false;
  if (bVar24) {
    puVar14 = (uint *)((uint)unaff_lr & (uint)puVar22);
    bVar26 = (int)puVar14 < 0;
    bVar23 = puVar14 == (uint *)0x0;
  }
  bVar24 = false;
  if (bVar23) {
    uVar16 = (uint)puVar14 & 0xff;
    in_CY = uVar16 == 0 && (bool)in_CY ||
            uVar16 != 0 && (bool)((byte)((uint)puVar22 >> 0x20 - uVar16) & 1);
    puVar14 = (uint *)((uint)unaff_r4 & (int)puVar22 << uVar16);
    bVar26 = (int)puVar14 < 0;
    bVar24 = puVar14 == (uint *)0x0;
  }
  bVar23 = false;
  if (bVar24) {
    uVar16 = (int)unaff_r4 << ((uint)puVar14 & 0xff);
    in_CY = CARRY4((uint)unaff_r4,uVar16);
    in_OV = SCARRY4((int)unaff_r4,uVar16);
    puVar14 = (uint *)((int)unaff_r4 + uVar16);
    bVar26 = (int)puVar14 < 0;
    bVar23 = puVar14 == (uint *)0x0;
  }
  bVar24 = false;
  if (bVar23) {
    uVar16 = (uint)puVar14 & 0xff;
    in_CY = uVar16 == 0 && (bool)in_CY ||
            uVar16 != 0 && (bool)((byte)((uint)unaff_lr >> 0x20 - uVar16) & 1);
    puVar14 = (uint *)((uint)puVar22 & (int)unaff_lr << uVar16);
    bVar26 = (int)puVar14 < 0;
    bVar24 = puVar14 == (uint *)0x0;
  }
  bVar23 = false;
  if (bVar24) {
    in_CY = CARRY4((uint)unaff_r4,(uint)puVar14);
    in_OV = SCARRY4((int)unaff_r4,(int)puVar14);
    puVar14 = (uint *)((int)unaff_r4 + (int)puVar14);
    bVar26 = (int)puVar14 < 0;
    bVar23 = puVar14 == (uint *)0x0;
  }
  bVar24 = false;
  if (bVar23) {
    uVar16 = (uint)puVar14 & 0xff;
    in_CY = uVar16 == 0 && (bool)in_CY ||
            uVar16 != 0 && (bool)((byte)((uint)unaff_lr >> 0x20 - uVar16) & 1);
    puVar14 = (uint *)((uint)puVar22 & (int)unaff_lr << uVar16);
    bVar26 = (int)puVar14 < 0;
    bVar24 = puVar14 == (uint *)0x0;
  }
  bVar23 = false;
  if (bVar24) {
    in_CY = CARRY4((uint)unaff_r4,(uint)puVar14);
    in_OV = SCARRY4((int)unaff_r4,(int)puVar14);
    puVar14 = (uint *)((int)unaff_r4 + (int)puVar14);
    bVar26 = (int)puVar14 < 0;
    bVar23 = puVar14 == (uint *)0x0;
  }
  bVar24 = false;
  if (bVar23) {
    uVar16 = (uint)puVar14 & 0xff;
    in_CY = uVar16 == 0 && (bool)in_CY ||
            uVar16 != 0 && (bool)((byte)((uint)unaff_lr >> 0x20 - uVar16) & 1);
    puVar14 = (uint *)((uint)puVar22 & (int)unaff_lr << uVar16);
    bVar26 = (int)puVar14 < 0;
    bVar24 = puVar14 == (uint *)0x0;
  }
  bVar23 = false;
  if (bVar24) {
    in_CY = CARRY4((uint)unaff_r4,(uint)puVar14);
    in_OV = SCARRY4((int)unaff_r4,(int)puVar14);
    puVar14 = (uint *)((int)unaff_r4 + (int)puVar14);
    bVar26 = (int)puVar14 < 0;
    bVar23 = puVar14 == (uint *)0x0;
  }
  bVar24 = false;
  if (bVar23) {
    uVar16 = (uint)puVar14 & 0xff;
    in_CY = uVar16 == 0 && (bool)in_CY ||
            uVar16 != 0 && (bool)((byte)((uint)unaff_lr >> 0x20 - uVar16) & 1);
    puVar14 = (uint *)((uint)puVar22 & (int)unaff_lr << uVar16);
    bVar26 = (int)puVar14 < 0;
    bVar24 = puVar14 == (uint *)0x0;
  }
  bVar23 = false;
  if (bVar24) {
    in_CY = CARRY4((uint)unaff_r4,(uint)puVar14);
    in_OV = SCARRY4((int)unaff_r4,(int)puVar14);
    puVar14 = (uint *)((int)unaff_r4 + (int)puVar14);
    bVar26 = (int)puVar14 < 0;
    bVar23 = puVar14 == (uint *)0x0;
  }
  bVar24 = false;
  if (bVar23) {
    uVar16 = (uint)puVar14 & 0xff;
    in_CY = uVar16 == 0 && (bool)in_CY ||
            uVar16 != 0 && (bool)((byte)((uint)unaff_lr >> 0x20 - uVar16) & 1);
    puVar14 = (uint *)((uint)puVar22 & (int)unaff_lr << uVar16);
    bVar26 = (int)puVar14 < 0;
    bVar24 = puVar14 == (uint *)0x0;
  }
  bVar23 = false;
  if (bVar24) {
    puVar14 = (uint *)((uint)unaff_lr & (uint)puVar22);
    bVar26 = (int)puVar14 < 0;
    bVar23 = puVar14 == (uint *)0x0;
  }
  bVar24 = false;
  if (bVar23) {
    uVar16 = (uint)puVar14 & 0xff;
    in_CY = uVar16 == 0 && (bool)in_CY ||
            uVar16 != 0 && (bool)((byte)((uint)puVar22 >> 0x20 - uVar16) & 1);
    puVar14 = (uint *)((uint)unaff_r4 & (int)puVar22 << uVar16);
    bVar26 = (int)puVar14 < 0;
    bVar24 = puVar14 == (uint *)0x0;
  }
  bVar23 = false;
  if (bVar24) {
    uVar16 = (int)unaff_r4 << ((uint)puVar14 & 0xff);
    in_CY = CARRY4((uint)unaff_r4,uVar16);
    in_OV = SCARRY4((int)unaff_r4,uVar16);
    puVar14 = (uint *)((int)unaff_r4 + uVar16);
    bVar26 = (int)puVar14 < 0;
    bVar23 = puVar14 == (uint *)0x0;
  }
  bVar24 = false;
  if (bVar23) {
    uVar16 = (uint)puVar14 & 0xff;
    in_CY = uVar16 == 0 && (bool)in_CY ||
            uVar16 != 0 && (bool)((byte)((uint)unaff_lr >> 0x20 - uVar16) & 1);
    puVar14 = (uint *)((uint)puVar22 & (int)unaff_lr << uVar16);
    bVar26 = (int)puVar14 < 0;
    bVar24 = puVar14 == (uint *)0x0;
  }
  bVar23 = false;
  if (bVar24) {
    in_CY = CARRY4((uint)unaff_r4,(uint)puVar14);
    in_OV = SCARRY4((int)unaff_r4,(int)puVar14);
    puVar14 = (uint *)((int)unaff_r4 + (int)puVar14);
    bVar26 = (int)puVar14 < 0;
    bVar23 = puVar14 == (uint *)0x0;
  }
  bVar24 = false;
  if (bVar23) {
    uVar16 = (uint)puVar14 & 0xff;
    in_CY = uVar16 == 0 && (bool)in_CY ||
            uVar16 != 0 && (bool)((byte)((uint)unaff_lr >> 0x20 - uVar16) & 1);
    puVar14 = (uint *)((uint)puVar22 & (int)unaff_lr << uVar16);
    bVar26 = (int)puVar14 < 0;
    bVar24 = puVar14 == (uint *)0x0;
  }
  bVar23 = false;
  if (bVar24) {
    in_CY = CARRY4((uint)unaff_r4,(uint)puVar14);
    in_OV = SCARRY4((int)unaff_r4,(int)puVar14);
    puVar14 = (uint *)((int)unaff_r4 + (int)puVar14);
    bVar26 = (int)puVar14 < 0;
    bVar23 = puVar14 == (uint *)0x0;
  }
  bVar24 = false;
  if (bVar23) {
    uVar16 = (uint)puVar14 & 0xff;
    in_CY = uVar16 == 0 && (bool)in_CY ||
            uVar16 != 0 && (bool)((byte)((uint)unaff_lr >> 0x20 - uVar16) & 1);
    puVar14 = (uint *)((uint)puVar22 & (int)unaff_lr << uVar16);
    bVar26 = (int)puVar14 < 0;
    bVar24 = puVar14 == (uint *)0x0;
  }
  bVar23 = false;
  if (bVar24) {
    in_CY = CARRY4((uint)unaff_r4,(uint)puVar14);
    in_OV = SCARRY4((int)unaff_r4,(int)puVar14);
    puVar14 = (uint *)((int)unaff_r4 + (int)puVar14);
    bVar26 = (int)puVar14 < 0;
    bVar23 = puVar14 == (uint *)0x0;
  }
  bVar24 = false;
  if (bVar23) {
    uVar16 = (uint)puVar14 & 0xff;
    in_CY = uVar16 == 0 && (bool)in_CY ||
            uVar16 != 0 && (bool)((byte)((uint)unaff_lr >> 0x20 - uVar16) & 1);
    puVar14 = (uint *)((uint)puVar22 & (int)unaff_lr << uVar16);
    bVar26 = (int)puVar14 < 0;
    bVar24 = puVar14 == (uint *)0x0;
  }
  bVar23 = false;
  if (bVar24) {
    in_CY = CARRY4((uint)unaff_r4,(uint)puVar14);
    in_OV = SCARRY4((int)unaff_r4,(int)puVar14);
    puVar14 = (uint *)((int)unaff_r4 + (int)puVar14);
    bVar26 = (int)puVar14 < 0;
    bVar23 = puVar14 == (uint *)0x0;
  }
  bVar24 = false;
  if (bVar23) {
    uVar16 = (uint)puVar14 & 0xff;
    in_CY = uVar16 == 0 && (bool)in_CY ||
            uVar16 != 0 && (bool)((byte)((uint)unaff_lr >> 0x20 - uVar16) & 1);
    puVar14 = (uint *)((uint)puVar22 & (int)unaff_lr << uVar16);
    bVar26 = (int)puVar14 < 0;
    bVar24 = puVar14 == (uint *)0x0;
  }
  bVar23 = false;
  if (bVar24) {
    puVar14 = (uint *)((uint)unaff_lr & (uint)puVar22);
    bVar26 = (int)puVar14 < 0;
    bVar23 = puVar14 == (uint *)0x0;
  }
  bVar24 = false;
  if (bVar23) {
    uVar16 = (uint)puVar14 & 0xff;
    in_CY = uVar16 == 0 && (bool)in_CY ||
            uVar16 != 0 && (bool)((byte)((uint)puVar22 >> 0x20 - uVar16) & 1);
    puVar14 = (uint *)((uint)unaff_r4 & (int)puVar22 << uVar16);
    bVar26 = (int)puVar14 < 0;
    bVar24 = puVar14 == (uint *)0x0;
  }
  bVar23 = false;
  if (bVar24) {
    uVar16 = (int)unaff_r4 << ((uint)puVar14 & 0xff);
    in_CY = CARRY4((uint)unaff_r4,uVar16);
    in_OV = SCARRY4((int)unaff_r4,uVar16);
    puVar14 = (uint *)((int)unaff_r4 + uVar16);
    bVar26 = (int)puVar14 < 0;
    bVar23 = puVar14 == (uint *)0x0;
  }
  bVar24 = false;
  if (bVar23) {
    uVar16 = (uint)puVar14 & 0xff;
    in_CY = uVar16 == 0 && (bool)in_CY ||
            uVar16 != 0 && (bool)((byte)((uint)unaff_lr >> 0x20 - uVar16) & 1);
    puVar14 = (uint *)((uint)puVar22 & (int)unaff_lr << uVar16);
    bVar26 = (int)puVar14 < 0;
    bVar24 = puVar14 == (uint *)0x0;
  }
  bVar23 = false;
  if (bVar24) {
    in_CY = CARRY4((uint)unaff_r4,(uint)puVar14);
    in_OV = SCARRY4((int)unaff_r4,(int)puVar14);
    puVar14 = (uint *)((int)unaff_r4 + (int)puVar14);
    bVar26 = (int)puVar14 < 0;
    bVar23 = puVar14 == (uint *)0x0;
  }
  bVar24 = false;
  if (bVar23) {
    uVar16 = (uint)puVar14 & 0xff;
    in_CY = uVar16 == 0 && (bool)in_CY ||
            uVar16 != 0 && (bool)((byte)((uint)unaff_lr >> 0x20 - uVar16) & 1);
    puVar14 = (uint *)((uint)puVar22 & (int)unaff_lr << uVar16);
    bVar26 = (int)puVar14 < 0;
    bVar24 = puVar14 == (uint *)0x0;
  }
  bVar23 = false;
  if (bVar24) {
    in_CY = CARRY4((uint)unaff_r4,(uint)puVar14);
    in_OV = SCARRY4((int)unaff_r4,(int)puVar14);
    puVar14 = (uint *)((int)unaff_r4 + (int)puVar14);
    bVar26 = (int)puVar14 < 0;
    bVar23 = puVar14 == (uint *)0x0;
  }
  bVar24 = false;
  if (bVar23) {
    uVar16 = (uint)puVar14 & 0xff;
    in_CY = uVar16 == 0 && (bool)in_CY ||
            uVar16 != 0 && (bool)((byte)((uint)unaff_lr >> 0x20 - uVar16) & 1);
    puVar14 = (uint *)((uint)puVar22 & (int)unaff_lr << uVar16);
    bVar26 = (int)puVar14 < 0;
    bVar24 = puVar14 == (uint *)0x0;
  }
  bVar23 = false;
  if (bVar24) {
    in_CY = CARRY4((uint)unaff_r4,(uint)puVar14);
    in_OV = SCARRY4((int)unaff_r4,(int)puVar14);
    puVar14 = (uint *)((int)unaff_r4 + (int)puVar14);
    bVar26 = (int)puVar14 < 0;
    bVar23 = puVar14 == (uint *)0x0;
  }
  bVar24 = false;
  if (bVar23) {
    uVar16 = (uint)puVar14 & 0xff;
    in_CY = uVar16 == 0 && (bool)in_CY ||
            uVar16 != 0 && (bool)((byte)((uint)unaff_lr >> 0x20 - uVar16) & 1);
    puVar14 = (uint *)((uint)puVar22 & (int)unaff_lr << uVar16);
    bVar26 = (int)puVar14 < 0;
    bVar24 = puVar14 == (uint *)0x0;
  }
  bVar23 = false;
  if (bVar24) {
    in_CY = CARRY4((uint)unaff_r4,(uint)puVar14);
    in_OV = SCARRY4((int)unaff_r4,(int)puVar14);
    puVar14 = (uint *)((int)unaff_r4 + (int)puVar14);
    bVar26 = (int)puVar14 < 0;
    bVar23 = puVar14 == (uint *)0x0;
  }
  bVar24 = false;
  if (bVar23) {
    uVar16 = (uint)puVar14 & 0xff;
    in_CY = uVar16 == 0 && (bool)in_CY ||
            uVar16 != 0 && (bool)((byte)((uint)unaff_lr >> 0x20 - uVar16) & 1);
    puVar14 = (uint *)((uint)puVar22 & (int)unaff_lr << uVar16);
    bVar26 = (int)puVar14 < 0;
    bVar24 = puVar14 == (uint *)0x0;
  }
  bVar23 = false;
  if (bVar24) {
    puVar14 = (uint *)((uint)unaff_lr & (uint)puVar22);
    bVar26 = (int)puVar14 < 0;
    bVar23 = puVar14 == (uint *)0x0;
  }
  bVar24 = false;
  if (bVar23) {
    uVar16 = (uint)puVar14 & 0xff;
    in_CY = uVar16 == 0 && (bool)in_CY ||
            uVar16 != 0 && (bool)((byte)((uint)puVar22 >> 0x20 - uVar16) & 1);
    puVar14 = (uint *)((uint)unaff_r4 & (int)puVar22 << uVar16);
    bVar26 = (int)puVar14 < 0;
    bVar24 = puVar14 == (uint *)0x0;
  }
  bVar29 = in_CY;
  if ((bool)in_CY && !bVar24) {
    uVar16 = (int)unaff_r4 << ((uint)puVar14 & 0xff);
    bVar29 = CARRY4((uint)unaff_r11,uVar16) || CARRY4((int)unaff_r11 + uVar16,(uint)(byte)in_CY);
    in_OV = SCARRY4((int)unaff_r11,uVar16) != SCARRY4((int)unaff_r11 + uVar16,(uint)(byte)in_CY);
    puVar14 = (uint *)((int)unaff_r11 + (byte)in_CY + uVar16);
    bVar26 = (int)puVar14 < 0;
    bVar24 = puVar14 == (uint *)0x0;
  }
  bVar23 = false;
  if (bVar24) {
    uVar16 = (uint)puVar14 & 0xff;
    bVar29 = uVar16 == 0 && (bool)bVar29 ||
             uVar16 != 0 && (bool)((byte)((uint)unaff_lr >> 0x20 - uVar16) & 1);
    puVar14 = (uint *)((uint)puVar22 & (int)unaff_lr << uVar16);
    bVar26 = (int)puVar14 < 0;
    bVar23 = puVar14 == (uint *)0x0;
  }
  if (bVar23) {
    puVar14 = (uint *)0x0;
    bVar26 = false;
  }
  bVar24 = false;
  if (bVar23) {
    uVar16 = (uint)puVar14 & 0xff;
    bVar29 = uVar16 == 0 && (bool)bVar29 ||
             uVar16 != 0 && (bool)((byte)((uint)puVar22 >> 0x20 - uVar16) & 1);
    puVar14 = (uint *)((uint)unaff_r4 & (int)puVar22 << uVar16);
    bVar26 = (int)puVar14 < 0;
    bVar24 = puVar14 == (uint *)0x0;
  }
  bVar23 = false;
  if (bVar24) {
    uVar16 = (uint)puVar22 & (int)unaff_r4 << ((uint)puVar14 & 0xff) & 0xff;
    bVar29 = uVar16 == 0 && (bool)bVar29 ||
             uVar16 != 0 && (bool)((byte)((uint)unaff_lr >> 0x20 - uVar16) & 1);
    puVar14 = (uint *)((uint)puVar22 & (int)unaff_lr << uVar16);
    bVar26 = (int)puVar14 < 0;
    bVar23 = puVar14 == (uint *)0x0;
  }
  bVar24 = false;
  if (bVar23) {
    uVar16 = (uint)param_3 & (uint)puVar14 & 0xff;
    bVar29 = uVar16 == 0 && (bool)bVar29 ||
             uVar16 != 0 && (bool)((byte)((uint)unaff_lr >> 0x20 - uVar16) & 1);
    puVar14 = (uint *)((uint)puVar22 & (int)unaff_lr << uVar16);
    bVar26 = (int)puVar14 < 0;
    bVar24 = puVar14 == (uint *)0x0;
  }
  bVar23 = false;
  if (bVar24) {
    uVar16 = (uint)unaff_r7 & (uint)puVar14 & 0xff;
    bVar29 = uVar16 == 0 && (bool)bVar29 ||
             uVar16 != 0 && (bool)((byte)((uint)unaff_lr >> 0x20 - uVar16) & 1);
    puVar14 = (uint *)((uint)puVar22 & (int)unaff_lr << uVar16);
    bVar26 = (int)puVar14 < 0;
    bVar23 = puVar14 == (uint *)0x0;
  }
  bVar24 = false;
  if (bVar23) {
    puVar14 = (uint *)((uint)param_4 & (uint)puVar14);
    bVar26 = (int)puVar14 < 0;
    bVar24 = puVar14 == (uint *)0x0;
  }
  bVar23 = false;
  if (bVar24) {
    uVar16 = (uint)puVar14 & 0xff;
    bVar29 = uVar16 == 0 && (bool)bVar29 ||
             uVar16 != 0 && (bool)((byte)((uint)unaff_lr >> 0x20 - uVar16) & 1);
    puVar14 = (uint *)((uint)puVar22 & (int)unaff_lr << uVar16);
    bVar26 = (int)puVar14 < 0;
    bVar23 = puVar14 == (uint *)0x0;
  }
  bVar24 = false;
  if (bVar23) {
    puVar14 = (uint *)((uint)unaff_r7 & (uint)puVar14);
    bVar26 = (int)puVar14 < 0;
    bVar24 = puVar14 == (uint *)0x0;
  }
  bVar23 = false;
  if (bVar24) {
    uVar16 = (uint)puVar14 & 0xff;
    bVar29 = uVar16 == 0 && (bool)bVar29 ||
             uVar16 != 0 && (bool)((byte)((uint)unaff_lr >> 0x20 - uVar16) & 1);
    puVar14 = (uint *)((uint)puVar22 & (int)unaff_lr << uVar16);
    bVar26 = (int)puVar14 < 0;
    bVar23 = puVar14 == (uint *)0x0;
  }
  if (bVar23) {
    puVar14 = (uint *)0x0;
    bVar26 = false;
  }
  bVar24 = false;
  if (bVar23) {
    uVar16 = (uint)puVar14 & 0xff;
    bVar29 = uVar16 == 0 && (bool)bVar29 ||
             uVar16 != 0 && (bool)((byte)((uint)puVar22 >> 0x20 - uVar16) & 1);
    puVar14 = (uint *)((uint)unaff_r4 & (int)puVar22 << uVar16);
    bVar26 = (int)puVar14 < 0;
    bVar24 = puVar14 == (uint *)0x0;
  }
  bVar23 = false;
  if (bVar24) {
    uVar16 = (uint)puVar14 & 0xff;
    bVar29 = uVar16 == 0 && (bool)bVar29 ||
             uVar16 != 0 && (bool)((byte)((uint)unaff_r4 >> 0x20 - uVar16) & 1);
    puVar14 = (uint *)((uint)unaff_r11 & (int)unaff_r4 << uVar16);
    bVar26 = (int)puVar14 < 0;
    bVar23 = puVar14 == (uint *)0x0;
  }
  bVar24 = false;
  if (bVar23) {
    uVar16 = (uint)puVar14 & 0xff;
    bVar29 = uVar16 == 0 && (bool)bVar29 ||
             uVar16 != 0 && (bool)((byte)((uint)unaff_lr >> 0x20 - uVar16) & 1);
    puVar14 = (uint *)((uint)puVar22 & (int)unaff_lr << uVar16);
    bVar26 = (int)puVar14 < 0;
    bVar24 = puVar14 == (uint *)0x0;
  }
  bVar23 = false;
  if (bVar24) {
    puVar14 = (uint *)((uint)puVar22 & (uint)unaff_lr);
    bVar26 = (int)puVar14 < 0;
    bVar23 = puVar14 == (uint *)0x0;
  }
  bVar24 = false;
  if (bVar23) {
    uVar16 = ((uint)param_3 ^ (uint)puVar14) & 0xff;
    bVar29 = uVar16 == 0 && (bool)bVar29 ||
             uVar16 != 0 && (bool)((byte)((uint)unaff_lr >> 0x20 - uVar16) & 1);
    puVar14 = (uint *)((uint)puVar22 & (int)unaff_lr << uVar16);
    bVar26 = (int)puVar14 < 0;
    bVar24 = puVar14 == (uint *)0x0;
  }
  bVar23 = false;
  if (bVar24) {
    uVar16 = ((uint)unaff_r7 ^ (uint)puVar14) & 0xff;
    bVar29 = uVar16 == 0 && (bool)bVar29 ||
             uVar16 != 0 && (bool)((byte)((uint)unaff_lr >> 0x20 - uVar16) & 1);
    puVar14 = (uint *)((uint)puVar22 & (int)unaff_lr << uVar16);
    bVar26 = (int)puVar14 < 0;
    bVar23 = puVar14 == (uint *)0x0;
  }
  bVar24 = false;
  if (bVar23) {
    uVar16 = ((uint)unaff_r4 ^ (uint)puVar14) & 0xff;
    bVar29 = uVar16 == 0 && (bool)bVar29 ||
             uVar16 != 0 && (bool)((byte)((uint)unaff_lr >> 0x20 - uVar16) & 1);
    puVar14 = (uint *)((uint)puVar22 & (int)unaff_lr << uVar16);
    bVar26 = (int)puVar14 < 0;
    bVar24 = puVar14 == (uint *)0x0;
  }
  if (bVar24) {
    puVar14 = (uint *)0x0;
    bVar26 = false;
  }
  bVar23 = false;
  if (bVar24) {
    uVar16 = (uint)puVar14 & 0xff;
    bVar29 = uVar16 == 0 && (bool)bVar29 ||
             uVar16 != 0 && (bool)((byte)((uint)puVar22 >> 0x20 - uVar16) & 1);
    puVar14 = (uint *)((uint)unaff_r4 & (int)puVar22 << uVar16);
    bVar26 = (int)puVar14 < 0;
    bVar23 = puVar14 == (uint *)0x0;
  }
  bVar24 = false;
  if (bVar23) {
    uVar16 = ((uint)unaff_r10 ^ (int)unaff_r4 << ((uint)puVar14 & 0xff)) & 0xff;
    bVar29 = uVar16 == 0 && (bool)bVar29 ||
             uVar16 != 0 && (bool)((byte)((uint)unaff_lr >> 0x20 - uVar16) & 1);
    puVar14 = (uint *)((uint)puVar22 & (int)unaff_lr << uVar16);
    bVar26 = (int)puVar14 < 0;
    bVar24 = puVar14 == (uint *)0x0;
  }
  bVar23 = false;
  if (bVar24) {
    uVar16 = ((uint)unaff_lr ^ (uint)puVar14) & 0xff;
    bVar29 = uVar16 == 0 && (bool)bVar29 ||
             uVar16 != 0 && (bool)((byte)((uint)unaff_lr >> 0x20 - uVar16) & 1);
    puVar14 = (uint *)((uint)puVar22 & (int)unaff_lr << uVar16);
    bVar26 = (int)puVar14 < 0;
    bVar23 = puVar14 == (uint *)0x0;
  }
  bVar24 = false;
  if (bVar23) {
    puVar14 = (uint *)((uint)param_4 ^ (uint)puVar14);
    bVar26 = (int)puVar14 < 0;
    bVar24 = puVar14 == (uint *)0x0;
  }
  bVar23 = false;
  if (bVar24) {
    uVar16 = (uint)puVar14 & 0xff;
    bVar29 = uVar16 == 0 && (bool)bVar29 ||
             uVar16 != 0 && (bool)((byte)((uint)unaff_lr >> 0x20 - uVar16) & 1);
    puVar14 = (uint *)((uint)puVar22 & (int)unaff_lr << uVar16);
    bVar26 = (int)puVar14 < 0;
    bVar23 = puVar14 == (uint *)0x0;
  }
  bVar24 = false;
  if (bVar23) {
    puVar14 = (uint *)((uint)unaff_r6 ^ (uint)puVar14);
    bVar26 = (int)puVar14 < 0;
    bVar24 = puVar14 == (uint *)0x0;
  }
  bVar23 = false;
  if (bVar24) {
    uVar16 = (uint)puVar14 & 0xff;
    bVar29 = uVar16 == 0 && (bool)bVar29 ||
             uVar16 != 0 && (bool)((byte)((uint)unaff_lr >> 0x20 - uVar16) & 1);
    puVar14 = (uint *)((uint)puVar22 & (int)unaff_lr << uVar16);
    bVar26 = (int)puVar14 < 0;
    bVar23 = puVar14 == (uint *)0x0;
  }
  bVar24 = false;
  if (bVar23) {
    puVar14 = (uint *)((uint)&stack0x00000000 & (uint)puVar14);
    bVar26 = (int)puVar14 < 0;
    bVar24 = puVar14 == (uint *)0x0;
  }
  bVar23 = false;
  if (bVar24) {
    uVar16 = (uint)puVar14 & 0xff;
    bVar29 = uVar16 == 0 && (bool)bVar29 ||
             uVar16 != 0 && (bool)((byte)((uint)unaff_lr >> 0x20 - uVar16) & 1);
    puVar14 = (uint *)((uint)puVar22 & (int)unaff_lr << uVar16);
    bVar26 = (int)puVar14 < 0;
    bVar23 = puVar14 == (uint *)0x0;
  }
  if (bVar23) {
    puVar14 = (uint *)0x0;
    bVar26 = false;
  }
  bVar24 = false;
  if (bVar23) {
    uVar16 = (uint)puVar14 & 0xff;
    bVar29 = uVar16 == 0 && (bool)bVar29 ||
             uVar16 != 0 && (bool)((byte)((uint)puVar22 >> 0x20 - uVar16) & 1);
    puVar14 = (uint *)((uint)unaff_r4 & (int)puVar22 << uVar16);
    bVar26 = (int)puVar14 < 0;
    bVar24 = puVar14 == (uint *)0x0;
  }
  bVar23 = false;
  if (bVar24) {
    uVar16 = (uint)puVar14 & 0xff;
    bVar29 = uVar16 == 0 && (bool)bVar29 ||
             uVar16 != 0 && (bool)((byte)((uint)unaff_r4 >> 0x20 - uVar16) & 1);
    puVar14 = (uint *)((uint)unaff_r8 & (int)unaff_r4 << uVar16);
    bVar26 = (int)puVar14 < 0;
    bVar23 = puVar14 == (uint *)0x0;
  }
  bVar24 = false;
  if (bVar23) {
    uVar16 = (uint)puVar14 & 0xff;
    bVar29 = uVar16 == 0 && (bool)bVar29 ||
             uVar16 != 0 && (bool)((byte)((uint)unaff_lr >> 0x20 - uVar16) & 1);
    puVar14 = (uint *)((uint)puVar22 & (int)unaff_lr << uVar16);
    bVar26 = (int)puVar14 < 0;
    bVar24 = puVar14 == (uint *)0x0;
  }
  bVar23 = false;
  if (bVar24) {
    uVar16 = (int)param_4 - (int)puVar14 & 0xff;
    bVar29 = uVar16 == 0 && (bool)bVar29 ||
             uVar16 != 0 && (bool)((byte)((uint)unaff_lr >> 0x20 - uVar16) & 1);
    puVar14 = (uint *)((uint)puVar22 & (int)unaff_lr << uVar16);
    bVar26 = (int)puVar14 < 0;
    bVar23 = puVar14 == (uint *)0x0;
  }
  bVar24 = false;
  if (bVar23) {
    puVar14 = (uint *)((uint)&stack0x00000000 ^ (uint)puVar14);
    bVar26 = (int)puVar14 < 0;
    bVar24 = puVar14 == (uint *)0x0;
  }
  bVar23 = false;
  if (bVar24) {
    uVar16 = (uint)puVar14 & 0xff;
    bVar29 = uVar16 == 0 && (bool)bVar29 ||
             uVar16 != 0 && (bool)((byte)((uint)unaff_lr >> 0x20 - uVar16) & 1);
    puVar14 = (uint *)((uint)puVar22 & (int)unaff_lr << uVar16);
    bVar26 = (int)puVar14 < 0;
    bVar23 = puVar14 == (uint *)0x0;
  }
  bVar24 = false;
  if (bVar23) {
    puVar14 = (uint *)((uint)unaff_r10 ^ (uint)puVar14);
    bVar26 = (int)puVar14 < 0;
    bVar24 = puVar14 == (uint *)0x0;
  }
  bVar23 = false;
  if (bVar24) {
    uVar16 = (uint)puVar14 & 0xff;
    bVar29 = uVar16 == 0 && (bool)bVar29 ||
             uVar16 != 0 && (bool)((byte)((uint)unaff_lr >> 0x20 - uVar16) & 1);
    puVar14 = (uint *)((uint)puVar22 & (int)unaff_lr << uVar16);
    bVar26 = (int)puVar14 < 0;
    bVar23 = puVar14 == (uint *)0x0;
  }
  bVar24 = false;
  if (bVar23) {
    uVar16 = (int)unaff_r6 - (int)puVar14 & 0xff;
    bVar29 = uVar16 == 0 && (bool)bVar29 ||
             uVar16 != 0 && (bool)((byte)((uint)unaff_lr >> 0x20 - uVar16) & 1);
    puVar14 = (uint *)((uint)puVar22 & (int)unaff_lr << uVar16);
    bVar26 = (int)puVar14 < 0;
    bVar24 = puVar14 == (uint *)0x0;
  }
  if (bVar24) {
    puVar14 = (uint *)0x0;
    bVar26 = false;
  }
  bVar23 = false;
  if (bVar24) {
    uVar16 = (uint)puVar14 & 0xff;
    bVar29 = uVar16 == 0 && (bool)bVar29 ||
             uVar16 != 0 && (bool)((byte)((uint)puVar22 >> 0x20 - uVar16) & 1);
    puVar14 = (uint *)((uint)unaff_r4 & (int)puVar22 << uVar16);
    bVar26 = (int)puVar14 < 0;
    bVar23 = puVar14 == (uint *)0x0;
  }
  bVar24 = false;
  if (bVar23) {
    uVar16 = (int)in_r12 - ((int)unaff_r4 << ((uint)puVar14 & 0xff)) & 0xff;
    bVar29 = uVar16 == 0 && (bool)bVar29 ||
             uVar16 != 0 && (bool)((byte)((uint)unaff_lr >> 0x20 - uVar16) & 1);
    puVar14 = (uint *)((uint)puVar22 & (int)unaff_lr << uVar16);
    bVar26 = (int)puVar14 < 0;
    bVar24 = puVar14 == (uint *)0x0;
  }
  bVar23 = false;
  if (bVar24) {
    uVar16 = (int)unaff_r9 - (int)puVar14 & 0xff;
    bVar29 = uVar16 == 0 && (bool)bVar29 ||
             uVar16 != 0 && (bool)((byte)((uint)unaff_lr >> 0x20 - uVar16) & 1);
    puVar14 = (uint *)((uint)puVar22 & (int)unaff_lr << uVar16);
    bVar26 = (int)puVar14 < 0;
    bVar23 = puVar14 == (uint *)0x0;
  }
  bVar24 = false;
  if (bVar23) {
    bVar29 = puVar14 <= param_4;
    in_OV = SBORROW4((int)param_4,(int)puVar14);
    puVar14 = (uint *)((int)param_4 - (int)puVar14);
    bVar26 = (int)puVar14 < 0;
    bVar24 = puVar14 == (uint *)0x0;
  }
  bVar23 = false;
  if (bVar24) {
    uVar16 = (uint)puVar14 & 0xff;
    bVar29 = uVar16 == 0 && (bool)bVar29 ||
             uVar16 != 0 && (bool)((byte)((uint)unaff_lr >> 0x20 - uVar16) & 1);
    puVar14 = (uint *)((uint)puVar22 & (int)unaff_lr << uVar16);
    bVar26 = (int)puVar14 < 0;
    bVar23 = puVar14 == (uint *)0x0;
  }
  bVar24 = false;
  if (bVar23) {
    puVar14 = (uint *)((uint)unaff_lr & (uint)puVar14);
    bVar26 = (int)puVar14 < 0;
    bVar24 = puVar14 == (uint *)0x0;
  }
  bVar23 = false;
  if (bVar24) {
    uVar16 = (uint)puVar14 & 0xff;
    bVar29 = uVar16 == 0 && (bool)bVar29 ||
             uVar16 != 0 && (bool)((byte)((uint)unaff_lr >> 0x20 - uVar16) & 1);
    puVar14 = (uint *)((uint)puVar22 & (int)unaff_lr << uVar16);
    bVar26 = (int)puVar14 < 0;
    bVar23 = puVar14 == (uint *)0x0;
  }
  bVar24 = false;
  if (bVar23) {
    uVar16 = 0x84b96d2U - (int)puVar14 & 0xff;
    bVar29 = uVar16 == 0 && (bool)bVar29 ||
             uVar16 != 0 && (bool)((byte)((uint)unaff_lr >> 0x20 - uVar16) & 1);
    puVar14 = (uint *)((uint)puVar22 & (int)unaff_lr << uVar16);
    bVar26 = (int)puVar14 < 0;
    bVar24 = puVar14 == (uint *)0x0;
  }
  if (bVar24) {
    puVar14 = (uint *)0x0;
    bVar26 = false;
  }
  bVar23 = false;
  if (bVar24) {
    uVar16 = (uint)puVar14 & 0xff;
    bVar29 = uVar16 == 0 && (bool)bVar29 ||
             uVar16 != 0 && (bool)((byte)((uint)puVar22 >> 0x20 - uVar16) & 1);
    puVar14 = (uint *)((uint)unaff_r4 & (int)puVar22 << uVar16);
    bVar26 = (int)puVar14 < 0;
    bVar23 = puVar14 == (uint *)0x0;
  }
  bVar24 = false;
  if (bVar23) {
    puVar14 = (uint *)((int)unaff_r4 << ((uint)puVar14 & 0xff));
    bVar29 = puVar14 <= unaff_r11;
    in_OV = SBORROW4((int)unaff_r11,(int)puVar14);
    puVar14 = (uint *)((int)unaff_r11 - (int)puVar14);
    bVar26 = (int)puVar14 < 0;
    bVar24 = puVar14 == (uint *)0x0;
  }
  bVar23 = false;
  if (bVar24) {
    uVar16 = (uint)puVar14 & 0xff;
    bVar29 = uVar16 == 0 && (bool)bVar29 ||
             uVar16 != 0 && (bool)((byte)((uint)unaff_lr >> 0x20 - uVar16) & 1);
    puVar14 = (uint *)((uint)puVar22 & (int)unaff_lr << uVar16);
    bVar26 = (int)puVar14 < 0;
    bVar23 = puVar14 == (uint *)0x0;
  }
  bVar24 = false;
  if (bVar23) {
    bVar29 = puVar14 <= unaff_r7;
    in_OV = SBORROW4((int)unaff_r7,(int)puVar14);
    puVar14 = (uint *)((int)unaff_r7 - (int)puVar14);
    bVar26 = (int)puVar14 < 0;
    bVar24 = puVar14 == (uint *)0x0;
  }
  bVar23 = false;
  if (bVar24) {
    uVar16 = (uint)puVar14 & 0xff;
    bVar29 = uVar16 == 0 && (bool)bVar29 ||
             uVar16 != 0 && (bool)((byte)((uint)unaff_lr >> 0x20 - uVar16) & 1);
    puVar14 = (uint *)((uint)puVar22 & (int)unaff_lr << uVar16);
    bVar26 = (int)puVar14 < 0;
    bVar23 = puVar14 == (uint *)0x0;
  }
  bVar24 = false;
  if (bVar23) {
    uVar16 = (int)puVar14 - (int)param_3 & 0xff;
    bVar29 = uVar16 == 0 && (bool)bVar29 ||
             uVar16 != 0 && (bool)((byte)((uint)unaff_lr >> 0x20 - uVar16) & 1);
    puVar14 = (uint *)((uint)puVar22 & (int)unaff_lr << uVar16);
    bVar26 = (int)puVar14 < 0;
    bVar24 = puVar14 == (uint *)0x0;
  }
  bVar23 = false;
  if (bVar24) {
    bVar29 = &stack0x00000000 <= puVar14;
    in_OV = SBORROW4((int)puVar14,(int)&stack0x00000000);
    puVar14 = (uint *)((int)puVar14 - (int)&stack0x00000000);
    bVar26 = (int)puVar14 < 0;
    bVar23 = puVar14 == (uint *)0x0;
  }
  bVar24 = false;
  if (bVar23) {
    uVar16 = (uint)puVar14 & 0xff;
    bVar29 = uVar16 == 0 && (bool)bVar29 ||
             uVar16 != 0 && (bool)((byte)((uint)unaff_lr >> 0x20 - uVar16) & 1);
    puVar14 = (uint *)((uint)puVar22 & (int)unaff_lr << uVar16);
    bVar26 = (int)puVar14 < 0;
    bVar24 = puVar14 == (uint *)0x0;
  }
  bVar23 = false;
  if (bVar24) {
    bVar29 = puVar14 <= unaff_lr;
    in_OV = SBORROW4((int)unaff_lr,(int)puVar14);
    puVar14 = (uint *)((int)unaff_lr - (int)puVar14);
    bVar26 = (int)puVar14 < 0;
    bVar23 = puVar14 == (uint *)0x0;
  }
  bVar24 = false;
  if (bVar23) {
    uVar16 = (uint)puVar14 & 0xff;
    bVar29 = uVar16 == 0 && (bool)bVar29 ||
             uVar16 != 0 && (bool)((byte)((uint)unaff_lr >> 0x20 - uVar16) & 1);
    puVar14 = (uint *)((uint)puVar22 & (int)unaff_lr << uVar16);
    bVar26 = (int)puVar14 < 0;
    bVar24 = puVar14 == (uint *)0x0;
  }
  if (bVar24) {
    puVar14 = (uint *)0x0;
    bVar26 = false;
  }
  bVar23 = false;
  if (bVar24) {
    uVar16 = (uint)puVar14 & 0xff;
    bVar29 = uVar16 == 0 && (bool)bVar29 ||
             uVar16 != 0 && (bool)((byte)((uint)puVar22 >> 0x20 - uVar16) & 1);
    puVar14 = (uint *)((uint)unaff_r4 & (int)puVar22 << uVar16);
    bVar26 = (int)puVar14 < 0;
    bVar23 = puVar14 == (uint *)0x0;
  }
  bVar24 = false;
  if (bVar23) {
    uVar16 = ((int)unaff_r4 << ((uint)puVar14 & 0xff)) - (int)unaff_r10 & 0xff;
    bVar29 = uVar16 == 0 && (bool)bVar29 ||
             uVar16 != 0 && (bool)((byte)((uint)unaff_lr >> 0x20 - uVar16) & 1);
    puVar14 = (uint *)((uint)puVar22 & (int)unaff_lr << uVar16);
    bVar26 = (int)puVar14 < 0;
    bVar24 = puVar14 == (uint *)0x0;
  }
  bVar23 = false;
  if (bVar24) {
    uVar16 = (int)puVar14 - (int)unaff_r4 & 0xff;
    bVar29 = uVar16 == 0 && (bool)bVar29 ||
             uVar16 != 0 && (bool)((byte)((uint)unaff_lr >> 0x20 - uVar16) & 1);
    puVar14 = (uint *)((uint)puVar22 & (int)unaff_lr << uVar16);
    bVar26 = (int)puVar14 < 0;
    bVar23 = puVar14 == (uint *)0x0;
  }
  bVar24 = false;
  if (bVar23) {
    uVar16 = (int)puVar14 * 2 & 0xff;
    bVar29 = uVar16 == 0 && (bool)bVar29 ||
             uVar16 != 0 && (bool)((byte)((uint)unaff_lr >> 0x20 - uVar16) & 1);
    puVar14 = (uint *)((uint)puVar22 & (int)unaff_lr << uVar16);
    bVar26 = (int)puVar14 < 0;
    bVar24 = puVar14 == (uint *)0x0;
  }
  bVar23 = false;
  if (bVar24) {
    uVar16 = (uint)unaff_r6 & (uint)puVar14 & 0xff;
    bVar29 = uVar16 == 0 && (bool)bVar29 ||
             uVar16 != 0 && (bool)((byte)((uint)unaff_lr >> 0x20 - uVar16) & 1);
    puVar14 = (uint *)((uint)puVar22 & (int)unaff_lr << uVar16);
    bVar26 = (int)puVar14 < 0;
    bVar23 = puVar14 == (uint *)0x0;
  }
  bVar24 = false;
  if (bVar23) {
    bVar29 = unaff_lr <= puVar14;
    in_OV = SBORROW4((int)puVar14,(int)unaff_lr);
    puVar14 = (uint *)((int)puVar14 - (int)unaff_lr);
    bVar26 = (int)puVar14 < 0;
    bVar24 = puVar14 == (uint *)0x0;
  }
  bVar23 = false;
  if (bVar24) {
    uVar16 = (uint)puVar14 & 0xff;
    bVar29 = uVar16 == 0 && (bool)bVar29 ||
             uVar16 != 0 && (bool)((byte)((uint)unaff_lr >> 0x20 - uVar16) & 1);
    puVar14 = (uint *)((uint)puVar22 & (int)unaff_lr << uVar16);
    bVar26 = (int)puVar14 < 0;
    bVar23 = puVar14 == (uint *)0x0;
  }
  if (bVar23) {
    puVar14 = (uint *)0x0;
    bVar26 = false;
  }
  bVar24 = false;
  if (bVar23) {
    uVar16 = (uint)puVar14 & 0xff;
    bVar29 = uVar16 == 0 && (bool)bVar29 ||
             uVar16 != 0 && (bool)((byte)((uint)puVar22 >> 0x20 - uVar16) & 1);
    puVar14 = (uint *)((uint)unaff_r4 & (int)puVar22 << uVar16);
    bVar26 = (int)puVar14 < 0;
    bVar24 = puVar14 == (uint *)0x0;
  }
  bVar23 = false;
  if (bVar24) {
    uVar16 = ((int)unaff_r4 << ((uint)puVar14 & 0xff)) - (int)unaff_lr & 0xff;
    bVar29 = uVar16 == 0 && (bool)bVar29 ||
             uVar16 != 0 && (bool)((byte)((uint)unaff_lr >> 0x20 - uVar16) & 1);
    puVar14 = (uint *)((uint)puVar22 & (int)unaff_lr << uVar16);
    bVar26 = (int)puVar14 < 0;
    bVar23 = puVar14 == (uint *)0x0;
  }
  bVar24 = false;
  if (bVar23) {
    bVar29 = puVar22 <= puVar14;
    in_OV = SBORROW4((int)puVar14,(int)puVar22);
    puVar14 = (uint *)((int)puVar14 - (int)puVar22);
    bVar26 = (int)puVar14 < 0;
    bVar24 = puVar14 == (uint *)0x0;
  }
  bVar23 = false;
  if (bVar24) {
    uVar16 = (uint)puVar14 & 0xff;
    bVar29 = uVar16 == 0 && (bool)bVar29 ||
             uVar16 != 0 && (bool)((byte)((uint)unaff_lr >> 0x20 - uVar16) & 1);
    puVar14 = (uint *)((uint)puVar22 & (int)unaff_lr << uVar16);
    bVar26 = (int)puVar14 < 0;
    bVar23 = puVar14 == (uint *)0x0;
  }
  bVar24 = false;
  if (bVar23) {
    bVar29 = unaff_r7 <= puVar14;
    in_OV = SBORROW4((int)puVar14,(int)unaff_r7);
    puVar14 = (uint *)((int)puVar14 - (int)unaff_r7);
    bVar26 = (int)puVar14 < 0;
    bVar24 = puVar14 == (uint *)0x0;
  }
  bVar23 = false;
  if (bVar24) {
    uVar16 = (uint)puVar14 & 0xff;
    bVar29 = uVar16 == 0 && (bool)bVar29 ||
             uVar16 != 0 && (bool)((byte)((uint)unaff_lr >> 0x20 - uVar16) & 1);
    puVar14 = (uint *)((uint)puVar22 & (int)unaff_lr << uVar16);
    bVar26 = (int)puVar14 < 0;
    bVar23 = puVar14 == (uint *)0x0;
  }
  bVar24 = false;
  if (bVar23) {
    uVar16 = (int)puVar14 - (int)unaff_r7 & 0xff;
    bVar29 = uVar16 == 0 && (bool)bVar29 ||
             uVar16 != 0 && (bool)((byte)((uint)unaff_lr >> 0x20 - uVar16) & 1);
    puVar14 = (uint *)((uint)puVar22 & (int)unaff_lr << uVar16);
    bVar26 = (int)puVar14 < 0;
    bVar24 = puVar14 == (uint *)0x0;
  }
  bVar23 = false;
  if (bVar24) {
    puVar14 = (uint *)((uint)puVar22 & (uint)unaff_lr);
    bVar26 = (int)puVar14 < 0;
    bVar23 = puVar14 == (uint *)0x0;
  }
  if (bVar23) {
    puVar14 = (uint *)0x0;
    bVar26 = false;
  }
  bVar24 = false;
  if (bVar23) {
    uVar16 = (uint)puVar14 & 0xff;
    bVar29 = uVar16 == 0 && (bool)bVar29 ||
             uVar16 != 0 && (bool)((byte)((uint)puVar22 >> 0x20 - uVar16) & 1);
    puVar14 = (uint *)((uint)unaff_r4 & (int)puVar22 << uVar16);
    bVar26 = (int)puVar14 < 0;
    bVar24 = puVar14 == (uint *)0x0;
  }
  bVar23 = false;
  if (bVar24) {
    uVar16 = (uint)puVar14 & 0xff;
    bVar29 = uVar16 == 0 && (bool)bVar29 ||
             uVar16 != 0 && (bool)((byte)((uint)unaff_r4 >> 0x20 - uVar16) & 1);
    puVar14 = (uint *)((uint)param_3 ^ (int)unaff_r4 << uVar16);
    bVar26 = (int)puVar14 < 0;
    bVar23 = puVar14 == (uint *)0x0;
  }
  bVar24 = false;
  if (bVar23) {
    uVar16 = (uint)puVar14 & 0xff;
    bVar29 = uVar16 == 0 && (bool)bVar29 ||
             uVar16 != 0 && (bool)((byte)((uint)unaff_lr >> 0x20 - uVar16) & 1);
    puVar14 = (uint *)((uint)puVar22 & (int)unaff_lr << uVar16);
    bVar26 = (int)puVar14 < 0;
    bVar24 = puVar14 == (uint *)0x0;
  }
  bVar23 = false;
  if (bVar24) {
    bVar29 = puVar14 <= unaff_r10;
    in_OV = SBORROW4((int)unaff_r10,(int)puVar14);
    puVar14 = (uint *)((int)unaff_r10 - (int)puVar14);
    bVar26 = (int)puVar14 < 0;
    bVar23 = puVar14 == (uint *)0x0;
  }
  bVar24 = false;
  if (bVar23) {
    uVar16 = (uint)puVar14 & 0xff;
    bVar29 = uVar16 == 0 && (bool)bVar29 ||
             uVar16 != 0 && (bool)((byte)((uint)unaff_lr >> 0x20 - uVar16) & 1);
    puVar14 = (uint *)((uint)puVar22 & (int)unaff_lr << uVar16);
    bVar26 = (int)puVar14 < 0;
    bVar24 = puVar14 == (uint *)0x0;
  }
  bVar23 = false;
  if (bVar24) {
    uVar16 = (int)puVar22 + (int)puVar14 & 0xff;
    bVar29 = uVar16 == 0 && (bool)bVar29 ||
             uVar16 != 0 && (bool)((byte)((uint)unaff_lr >> 0x20 - uVar16) & 1);
    puVar14 = (uint *)((uint)puVar22 & (int)unaff_lr << uVar16);
    bVar26 = (int)puVar14 < 0;
    bVar23 = puVar14 == (uint *)0x0;
  }
  bVar24 = false;
  if (bVar23) {
    bVar29 = unaff_r10 <= puVar14;
    in_OV = SBORROW4((int)puVar14,(int)unaff_r10);
    puVar14 = (uint *)((int)puVar14 - (int)unaff_r10);
    bVar26 = (int)puVar14 < 0;
    bVar24 = puVar14 == (uint *)0x0;
  }
  bVar23 = false;
  if (bVar24) {
    uVar16 = (uint)puVar14 & 0xff;
    bVar29 = uVar16 == 0 && (bool)bVar29 ||
             uVar16 != 0 && (bool)((byte)((uint)unaff_lr >> 0x20 - uVar16) & 1);
    puVar14 = (uint *)((uint)puVar22 & (int)unaff_lr << uVar16);
    bVar26 = (int)puVar14 < 0;
    bVar23 = puVar14 == (uint *)0x0;
  }
  bVar24 = false;
  if (bVar23) {
    bVar29 = unaff_r11 <= puVar14;
    in_OV = SBORROW4((int)puVar14,(int)unaff_r11);
    puVar14 = (uint *)((int)puVar14 - (int)unaff_r11);
    bVar26 = (int)puVar14 < 0;
    bVar24 = puVar14 == (uint *)0x0;
  }
  bVar23 = false;
  if (bVar24) {
    uVar16 = (uint)puVar14 & 0xff;
    bVar29 = uVar16 == 0 && (bool)bVar29 ||
             uVar16 != 0 && (bool)((byte)((uint)unaff_lr >> 0x20 - uVar16) & 1);
    puVar14 = (uint *)((uint)puVar22 & (int)unaff_lr << uVar16);
    bVar26 = (int)puVar14 < 0;
    bVar23 = puVar14 == (uint *)0x0;
  }
  if (bVar23) {
    puVar14 = (uint *)0x0;
    bVar26 = false;
  }
  bVar24 = false;
  if (bVar23) {
    uVar16 = (uint)puVar14 & 0xff;
    bVar29 = uVar16 == 0 && (bool)bVar29 ||
             uVar16 != 0 && (bool)((byte)((uint)puVar22 >> 0x20 - uVar16) & 1);
    puVar14 = (uint *)((uint)unaff_r4 & (int)puVar22 << uVar16);
    bVar26 = (int)puVar14 < 0;
    bVar24 = puVar14 == (uint *)0x0;
  }
  bVar23 = false;
  if (bVar24) {
    uVar16 = (int)unaff_r6 + ((int)unaff_r4 << ((uint)puVar14 & 0xff)) & 0xff;
    bVar29 = uVar16 == 0 && (bool)bVar29 ||
             uVar16 != 0 && (bool)((byte)((uint)unaff_lr >> 0x20 - uVar16) & 1);
    puVar14 = (uint *)((uint)puVar22 & (int)unaff_lr << uVar16);
    bVar26 = (int)puVar14 < 0;
    bVar23 = puVar14 == (uint *)0x0;
  }
  bVar24 = false;
  if (bVar23) {
    uVar16 = (int)unaff_r9 + (int)puVar14 & 0xff;
    bVar29 = uVar16 == 0 && (bool)bVar29 ||
             uVar16 != 0 && (bool)((byte)((uint)unaff_lr >> 0x20 - uVar16) & 1);
    puVar14 = (uint *)((uint)puVar22 & (int)unaff_lr << uVar16);
    bVar26 = (int)puVar14 < 0;
    bVar24 = puVar14 == (uint *)0x0;
  }
  bVar23 = false;
  if (bVar24) {
    uVar16 = (int)in_r12 + (int)puVar14 & 0xff;
    bVar29 = uVar16 == 0 && (bool)bVar29 ||
             uVar16 != 0 && (bool)((byte)((uint)unaff_lr >> 0x20 - uVar16) & 1);
    puVar14 = (uint *)((uint)puVar22 & (int)unaff_lr << uVar16);
    bVar26 = (int)puVar14 < 0;
    bVar23 = puVar14 == (uint *)0x0;
  }
  bVar24 = false;
  if (bVar23) {
    uVar16 = (int)puVar14 + 0x84b97e2U & 0xff;
    bVar29 = uVar16 == 0 && (bool)bVar29 ||
             uVar16 != 0 && (bool)((byte)((uint)unaff_lr >> 0x20 - uVar16) & 1);
    puVar14 = (uint *)((uint)puVar22 & (int)unaff_lr << uVar16);
    bVar26 = (int)puVar14 < 0;
    bVar24 = puVar14 == (uint *)0x0;
  }
  bVar23 = false;
  if (bVar24) {
    puVar14 = (uint *)((uint)in_r12 ^ (uint)puVar14);
    bVar26 = (int)puVar14 < 0;
    bVar23 = puVar14 == (uint *)0x0;
  }
  bVar24 = false;
  if (bVar23) {
    uVar16 = (uint)puVar14 & 0xff;
    bVar29 = uVar16 == 0 && (bool)bVar29 ||
             uVar16 != 0 && (bool)((byte)((uint)unaff_lr >> 0x20 - uVar16) & 1);
    puVar14 = (uint *)((uint)puVar22 & (int)unaff_lr << uVar16);
    bVar26 = (int)puVar14 < 0;
    bVar24 = puVar14 == (uint *)0x0;
  }
  if (bVar24) {
    puVar14 = (uint *)0x0;
    bVar26 = false;
  }
  bVar23 = false;
  if (bVar24) {
    uVar16 = (uint)puVar14 & 0xff;
    bVar29 = uVar16 == 0 && (bool)bVar29 ||
             uVar16 != 0 && (bool)((byte)((uint)puVar22 >> 0x20 - uVar16) & 1);
    puVar14 = (uint *)((uint)unaff_r4 & (int)puVar22 << uVar16);
    bVar26 = (int)puVar14 < 0;
    bVar23 = puVar14 == (uint *)0x0;
  }
  if ((bool)bVar29 && !bVar23) {
    puVar14 = (uint *)((uint)puVar22 & (int)unaff_r4 << ((uint)puVar14 & 0xff));
  }
  bVar24 = false;
  if (bVar23) {
    uVar16 = (uint)puVar14 & 0xff;
    bVar29 = uVar16 == 0 && (bool)bVar29 ||
             uVar16 != 0 && (bool)((byte)((uint)unaff_lr >> 0x20 - uVar16) & 1);
    puVar14 = (uint *)((uint)puVar22 & (int)unaff_lr << uVar16);
    bVar26 = (int)puVar14 < 0;
    bVar24 = puVar14 == (uint *)0x0;
  }
  if (bVar24) {
    puVar14 = (uint *)0x0;
    bVar26 = false;
  }
  bVar23 = false;
  if (bVar24) {
    uVar16 = (uint)puVar14 & 0xff;
    bVar29 = uVar16 == 0 && (bool)bVar29 ||
             uVar16 != 0 && (bool)((byte)((uint)puVar22 >> 0x20 - uVar16) & 1);
    puVar14 = (uint *)((uint)unaff_r4 & (int)puVar22 << uVar16);
    bVar26 = (int)puVar14 < 0;
    bVar23 = puVar14 == (uint *)0x0;
  }
  if ((bool)bVar29 && !bVar23) {
    puVar14 = (uint *)((uint)puVar22 & (int)unaff_r4 << ((uint)puVar14 & 0xff));
  }
  bVar24 = false;
  if (bVar23) {
    uVar16 = (uint)puVar14 & 0xff;
    bVar29 = uVar16 == 0 && (bool)bVar29 ||
             uVar16 != 0 && (bool)((byte)((uint)unaff_lr >> 0x20 - uVar16) & 1);
    puVar14 = (uint *)((uint)puVar22 & (int)unaff_lr << uVar16);
    bVar26 = (int)puVar14 < 0;
    bVar24 = puVar14 == (uint *)0x0;
  }
  if (bVar24) {
    puVar14 = (uint *)0x0;
    bVar26 = false;
  }
  bVar23 = false;
  if (bVar24) {
    uVar16 = (uint)puVar14 & 0xff;
    bVar29 = uVar16 == 0 && (bool)bVar29 ||
             uVar16 != 0 && (bool)((byte)((uint)puVar22 >> 0x20 - uVar16) & 1);
    puVar14 = (uint *)((uint)unaff_r4 & (int)puVar22 << uVar16);
    bVar26 = (int)puVar14 < 0;
    bVar23 = puVar14 == (uint *)0x0;
  }
  if ((bool)bVar29 && !bVar23) {
    puVar14 = (uint *)((uint)puVar22 & (int)unaff_r4 << ((uint)puVar14 & 0xff));
  }
  bVar24 = false;
  if (bVar23) {
    uVar16 = (uint)puVar14 & 0xff;
    bVar29 = uVar16 == 0 && (bool)bVar29 ||
             uVar16 != 0 && (bool)((byte)((uint)unaff_lr >> 0x20 - uVar16) & 1);
    puVar14 = (uint *)((uint)puVar22 & (int)unaff_lr << uVar16);
    bVar26 = (int)puVar14 < 0;
    bVar24 = puVar14 == (uint *)0x0;
  }
  if (bVar24) {
    puVar14 = (uint *)0x0;
    bVar26 = false;
  }
  bVar23 = false;
  if (bVar24) {
    uVar16 = (uint)puVar14 & 0xff;
    bVar29 = uVar16 == 0 && (bool)bVar29 ||
             uVar16 != 0 && (bool)((byte)((uint)puVar22 >> 0x20 - uVar16) & 1);
    puVar14 = (uint *)((uint)unaff_r4 & (int)puVar22 << uVar16);
    bVar26 = (int)puVar14 < 0;
    bVar23 = puVar14 == (uint *)0x0;
  }
  if ((bool)bVar29 && !bVar23) {
    puVar14 = (uint *)((uint)puVar22 & (int)unaff_r4 << ((uint)puVar14 & 0xff));
  }
  bVar24 = false;
  if (bVar23) {
    uVar16 = (uint)puVar14 & 0xff;
    bVar29 = uVar16 == 0 && (bool)bVar29 ||
             uVar16 != 0 && (bool)((byte)((uint)unaff_lr >> 0x20 - uVar16) & 1);
    puVar14 = (uint *)((uint)puVar22 & (int)unaff_lr << uVar16);
    bVar26 = (int)puVar14 < 0;
    bVar24 = puVar14 == (uint *)0x0;
  }
  if (bVar24) {
    puVar14 = (uint *)0x0;
    bVar26 = false;
  }
  bVar23 = false;
  if (bVar24) {
    uVar16 = (uint)puVar14 & 0xff;
    bVar29 = uVar16 == 0 && (bool)bVar29 ||
             uVar16 != 0 && (bool)((byte)((uint)puVar22 >> 0x20 - uVar16) & 1);
    puVar14 = (uint *)((uint)unaff_r4 & (int)puVar22 << uVar16);
    bVar26 = (int)puVar14 < 0;
    bVar23 = puVar14 == (uint *)0x0;
  }
  if (bVar23) {
    puVar14 = (uint *)0x0;
    bVar26 = false;
  }
  bVar24 = false;
  if (bVar23) {
    uVar16 = (int)in_r12 - (int)unaff_r6 & 0xff;
    bVar29 = uVar16 == 0 && (bool)bVar29 ||
             uVar16 != 0 && (bool)((byte)((uint)unaff_r4 >> 0x20 - uVar16) & 1);
    puVar14 = (uint *)((uint)&stack0x00000000 & (int)unaff_r4 << uVar16);
    bVar26 = (int)puVar14 < 0;
    bVar24 = puVar14 == (uint *)0x0;
  }
  bVar23 = false;
  if (bVar24) {
    uVar16 = (int)puVar14 - (int)unaff_r6 & 0xff;
    bVar29 = uVar16 == 0 && (bool)bVar29 ||
             uVar16 != 0 && (bool)((byte)((uint)unaff_r8 >> 0x20 - uVar16) & 1);
    puVar14 = (uint *)((uint)unaff_r10 & (int)unaff_r8 << uVar16);
    bVar26 = (int)puVar14 < 0;
    bVar23 = puVar14 == (uint *)0x0;
  }
  if (bVar23) {
    bVar26 = (int)unaff_r6 < 0;
    puVar14 = unaff_r6;
  }
  bVar24 = false;
  if (bVar23 && unaff_r6 == (uint *)0x0) {
    uVar16 = (int)param_3 + (int)in_r12 & 0xff;
    bVar29 = uVar16 == 0 && (bool)bVar29 ||
             uVar16 != 0 && (bool)((byte)((uint)unaff_r5 >> uVar16 - 1) & 1);
    puVar14 = (uint *)((uint)unaff_r5 ^ (uint)unaff_r5 >> uVar16);
    bVar26 = (int)puVar14 < 0;
    bVar24 = puVar14 == (uint *)0x0;
  }
  bVar23 = false;
  if (bVar24) {
    uVar16 = (int)param_3 + (int)puVar14 & 0xff;
    bVar29 = uVar16 == 0 && (bool)bVar29 ||
             uVar16 != 0 && (bool)((byte)((uint)unaff_r10 >> uVar16 - 1) & 1);
    puVar14 = (uint *)((uint)unaff_r5 ^ (uint)unaff_r10 >> uVar16);
    bVar26 = (int)puVar14 < 0;
    bVar23 = puVar14 == (uint *)0x0;
  }
  bVar24 = false;
  if (bVar23) {
    bVar29 = (byte)((uint)&stack0x00000000 >> 0x1f);
    puVar14 = (uint *)((uint)unaff_r6 ^ (int)&stack0x00000000 >> 0x20);
    bVar26 = (int)puVar14 < 0;
    bVar24 = puVar14 == (uint *)0x0;
  }
  if (bVar24) {
    puVar14 = (uint *)((int)puVar14 - (int)unaff_r6);
  }
  uVar16 = (int)unaff_r10 >> 0x20;
  bVar3 = (byte)((uint)unaff_r10 >> 0x18);
  bVar23 = false;
  if (bVar24) {
    bVar29 = bVar3 >> 7;
    puVar14 = (uint *)((uint)unaff_r4 ^ uVar16);
    bVar26 = (int)puVar14 < 0;
    bVar23 = puVar14 == (uint *)0x0;
  }
  if (bVar23) {
    puVar14 = (uint *)((int)puVar14 - (int)unaff_r6);
  }
  uVar1 = (int)unaff_lr >> 0x20;
  bVar4 = (byte)((uint)unaff_lr >> 0x18);
  bVar24 = false;
  if (bVar23) {
    bVar29 = bVar4 >> 7;
    puVar14 = (uint *)((uint)param_4 ^ uVar1);
    bVar26 = (int)puVar14 < 0;
    bVar24 = puVar14 == (uint *)0x0;
  }
  bVar23 = false;
  if (bVar24) {
    bVar29 = (byte)((uint)unaff_r8 >> 0x1f);
    puVar14 = (uint *)((uint)in_r12 & (int)unaff_r8 >> 0x20);
    bVar26 = (int)puVar14 < 0;
    bVar23 = puVar14 == (uint *)0x0;
  }
  if (bVar23) {
    puVar14 = (uint *)((int)param_3 + (int)puVar14);
  }
  bVar31 = (byte)((uint)in_r12 >> 0x18);
  bVar24 = false;
  if (bVar23) {
    bVar29 = bVar31 >> 7;
    puVar14 = (uint *)((uint)in_r12 & (int)in_r12 >> 0x20);
    bVar26 = (int)puVar14 < 0;
    bVar24 = puVar14 == (uint *)0x0;
  }
  if (bVar24) {
    bVar26 = (int)unaff_r9 < 0;
    puVar14 = unaff_r9;
  }
  bVar23 = bVar24 && unaff_r9 == (uint *)0x0;
  if (bVar23) {
    puVar14 = (uint *)((uint)in_r12 & (int)puVar14 << ((uint)puVar14 & 0xff));
  }
  if ((bool)bVar29 && (!bVar24 || unaff_r9 != (uint *)0x0)) {
    puVar14 = (uint *)((uint)in_r12 ^ 0x84b9bba);
    bVar26 = (int)puVar14 < 0;
    bVar23 = puVar14 == (uint *)0x0;
  }
  if (bVar23) {
    puVar14 = (uint *)(((uint)unaff_r9 &
                       (uint)&stack0x00000000 >>
                       (((uint)unaff_r9 & (int)puVar22 >> 0x20) - (int)unaff_r6 & 0xff)) -
                      (int)unaff_r6);
  }
  if (bVar23) {
    puVar14 = (uint *)0x0;
    bVar26 = false;
  }
  bVar24 = false;
  if (bVar23) {
    bVar29 = unaff_r10 <= unaff_r5;
    in_OV = SBORROW4((int)unaff_r5,(int)unaff_r10);
    puVar14 = (uint *)((int)unaff_r5 - (int)unaff_r10);
    bVar26 = (int)puVar14 < 0;
    bVar24 = puVar14 == (uint *)0x0;
  }
  bVar23 = false;
  if (bVar24) {
    bVar29 = unaff_r10 == (uint *)0x0;
    in_OV = SBORROW4(0,(int)unaff_r10);
    puVar14 = (uint *)-(int)unaff_r10;
    bVar26 = (int)puVar14 < 0;
    bVar23 = puVar14 == (uint *)0x0;
  }
  bVar5 = (byte)((uint)unaff_r7 >> 0x18);
  if (bVar23) {
    bVar29 = bVar5 >> 7;
    puVar14 = (uint *)0x0;
    bVar26 = false;
  }
  bVar24 = false;
  if (bVar23) {
    bVar29 = unaff_r10 <= puVar14;
    in_OV = SBORROW4((int)puVar14,(int)unaff_r10);
    puVar14 = (uint *)((int)puVar14 - (int)unaff_r10);
    bVar26 = (int)puVar14 < 0;
    bVar24 = puVar14 == (uint *)0x0;
  }
  bVar6 = (byte)((uint)unaff_r6 >> 0x18);
  bVar7 = (byte)((uint)param_3 >> 0x18);
  if (bVar24) {
    bVar29 = bVar7 >> 7;
    puVar14 = (uint *)0x0;
    bVar26 = false;
  }
  bVar23 = false;
  if (bVar24) {
    uVar21 = (int)puVar14 + (int)unaff_r6 * -2 & 0xff;
    bVar29 = uVar21 == 0 && (bool)bVar29 ||
             uVar21 != 0 && (bool)((byte)((uint)unaff_r9 >> 0x20 - uVar21) & 1);
    puVar14 = (uint *)((uint)&stack0x00000000 & (int)unaff_r9 << uVar21);
    bVar26 = (int)puVar14 < 0;
    bVar23 = puVar14 == (uint *)0x0;
  }
  if (bVar23) {
    puVar14 = (uint *)0x0;
    bVar26 = false;
  }
  bVar24 = false;
  if (bVar23) {
    uVar17 = (int)param_3 + (int)in_r12;
    uVar21 = uVar17 & 0xff;
    bVar29 = uVar21 == 0 && (bool)bVar29 ||
             uVar21 != 0 && (bool)((byte)(uVar17 >> 0x20 - uVar21) & 1);
    puVar14 = (uint *)((uint)unaff_r10 & uVar17 << uVar21);
    bVar26 = (int)puVar14 < 0;
    bVar24 = puVar14 == (uint *)0x0;
  }
  bVar23 = false;
  if (bVar24) {
    bVar29 = unaff_r10 <= unaff_r5;
    in_OV = SBORROW4((int)unaff_r5,(int)unaff_r10);
    puVar14 = (uint *)((int)unaff_r5 - (int)unaff_r10);
    bVar26 = (int)puVar14 < 0;
    bVar23 = puVar14 == (uint *)0x0;
  }
  bVar24 = false;
  if (bVar23) {
    uVar21 = (uint)puVar14 & 0xff;
    bVar29 = uVar21 == 0 && (bool)bVar29 ||
             uVar21 != 0 && (bool)((byte)((uint)puVar14 >> 0x20 - uVar21) & 1);
    puVar14 = (uint *)((uint)unaff_r10 ^ (int)puVar14 << uVar21);
    bVar26 = (int)puVar14 < 0;
    bVar24 = puVar14 == (uint *)0x0;
  }
  bVar23 = false;
  if (bVar24) {
    bVar29 = unaff_r10 <= puVar14;
    in_OV = SBORROW4((int)puVar14,(int)unaff_r10);
    puVar14 = (uint *)((int)puVar14 - (int)unaff_r10);
    bVar26 = (int)puVar14 < 0;
    bVar23 = puVar14 == (uint *)0x0;
  }
  bVar24 = false;
  if (bVar23) {
    bVar29 = unaff_r10 <= unaff_r5;
    in_OV = SBORROW4((int)unaff_r5,(int)unaff_r10);
    puVar14 = (uint *)((int)unaff_r5 - (int)unaff_r10);
    bVar26 = (int)puVar14 < 0;
    bVar24 = puVar14 == (uint *)0x0;
  }
  bVar23 = false;
  if (bVar24) {
    uVar21 = (uint)puVar14 & 0xff;
    bVar29 = uVar21 == 0 && (bool)bVar29 ||
             uVar21 != 0 && (bool)((byte)((uint)unaff_r6 >> 0x20 - uVar21) & 1);
    puVar14 = (uint *)((uint)unaff_r8 ^ (int)unaff_r6 << uVar21);
    bVar26 = (int)puVar14 < 0;
    bVar23 = puVar14 == (uint *)0x0;
  }
  bVar24 = false;
  if (bVar23) {
    bVar29 = unaff_r10 <= puVar14;
    in_OV = SBORROW4((int)puVar14,(int)unaff_r10);
    puVar14 = (uint *)((int)puVar14 - (int)unaff_r10);
    bVar26 = (int)puVar14 < 0;
    bVar24 = puVar14 == (uint *)0x0;
  }
  bVar23 = false;
  if (bVar24) {
    uVar21 = (int)param_3 +
             ((int)puVar22 - ((int)unaff_r9 << ((int)param_3 + (int)unaff_r5 & 0xffU))) & 0xff;
    bVar29 = uVar21 == 0 && (bool)bVar29 ||
             uVar21 != 0 && (bool)((byte)((uint)in_r12 >> 0x20 - uVar21) & 1);
    puVar14 = (uint *)((uint)unaff_r5 ^ (int)in_r12 << uVar21);
    bVar26 = (int)puVar14 < 0;
    bVar23 = puVar14 == (uint *)0x0;
  }
  if (bVar23) {
    bVar29 = false;
    bVar26 = (int)param_3 < 0;
    puVar14 = param_3;
  }
  bVar24 = false;
  if (bVar23 && param_3 == (uint *)0x0) {
    uVar21 = (int)param_3 + (int)puVar14 & 0xff;
    bVar29 = uVar21 == 0 && (bool)bVar29 ||
             uVar21 != 0 && (bool)((byte)((uint)param_4 >> uVar21 - 1) & 1);
    puVar14 = (uint *)((uint)unaff_r4 ^ (uint)param_4 >> uVar21);
    bVar26 = (int)puVar14 < 0;
    bVar24 = puVar14 == (uint *)0x0;
  }
  bVar23 = false;
  if (bVar24) {
    bVar29 = unaff_r11 <= in_r12;
    in_OV = SBORROW4((int)in_r12,(int)unaff_r11);
    puVar14 = (uint *)((int)in_r12 - (int)unaff_r11);
    bVar26 = (int)puVar14 < 0;
    bVar23 = puVar14 == (uint *)0x0;
  }
  bVar24 = false;
  if (bVar23) {
    bVar29 = unaff_r11 <= unaff_r9;
    in_OV = SBORROW4((int)unaff_r9,(int)unaff_r11);
    puVar14 = (uint *)((int)unaff_r9 - (int)unaff_r11);
    bVar26 = (int)puVar14 < 0;
    bVar24 = puVar14 == (uint *)0x0;
  }
  if (bVar24) {
    puVar14 = (uint *)((int)puVar22 - ((uint)unaff_r4 >> ((uint)puVar14 & 0xff)));
  }
  if ((bool)bVar29 && !bVar24) {
    bVar29 = in_r12 <= puVar14;
    in_OV = SBORROW4((int)puVar14,(int)in_r12);
    puVar14 = (uint *)((int)puVar14 - (int)in_r12);
    bVar26 = (int)puVar14 < 0;
    bVar24 = puVar14 == (uint *)0x0;
  }
  if (bVar24) {
    bVar26 = (int)param_3 < 0;
    puVar14 = param_3;
  }
  bVar23 = false;
  if (bVar24 && param_3 == (uint *)0x0) {
    bVar29 = unaff_r10 <= in_r12;
    in_OV = SBORROW4((int)in_r12,(int)unaff_r10);
    puVar14 = (uint *)((int)in_r12 - (int)unaff_r10);
    bVar26 = (int)puVar14 < 0;
    bVar23 = puVar14 == (uint *)0x0;
  }
  bVar24 = false;
  if (bVar23) {
    uVar21 = (uint)puVar14 & 0xff;
    bVar29 = uVar21 == 0 && (bool)bVar29 ||
             uVar21 != 0 && (bool)((byte)((uint)param_3 >> uVar21 - 1) & 1);
    puVar14 = (uint *)((uint)unaff_r10 & (uint)param_3 >> uVar21);
    bVar26 = (int)puVar14 < 0;
    bVar24 = puVar14 == (uint *)0x0;
  }
  bVar23 = false;
  if (bVar24) {
    bVar29 = unaff_r10 <= puVar14;
    in_OV = SBORROW4((int)puVar14,(int)unaff_r10);
    puVar14 = (uint *)((int)puVar14 - (int)unaff_r10);
    bVar26 = (int)puVar14 < 0;
    bVar23 = puVar14 == (uint *)0x0;
  }
  bVar24 = false;
  if (bVar23) {
    uVar21 = (uint)puVar14 & 0xff;
    bVar29 = uVar21 == 0 && (bool)bVar29 ||
             uVar21 != 0 && (bool)((byte)((uint)unaff_r7 >> uVar21 - 1) & 1);
    puVar14 = (uint *)((uint)unaff_r10 & (uint)unaff_r7 >> uVar21);
    bVar26 = (int)puVar14 < 0;
    bVar24 = puVar14 == (uint *)0x0;
  }
  bVar23 = false;
  if (bVar24) {
    bVar29 = unaff_r10 <= puVar14;
    in_OV = SBORROW4((int)puVar14,(int)unaff_r10);
    puVar14 = (uint *)((int)puVar14 - (int)unaff_r10);
    bVar26 = (int)puVar14 < 0;
    bVar23 = puVar14 == (uint *)0x0;
  }
  bVar24 = false;
  if (bVar23) {
    uVar21 = (uint)puVar14 & 0xff;
    bVar29 = uVar21 == 0 && (bool)bVar29 ||
             uVar21 != 0 && (bool)((byte)((uint)unaff_r8 >> uVar21 - 1) & 1);
    puVar14 = (uint *)((uint)unaff_lr & (uint)unaff_r8 >> uVar21);
    bVar26 = (int)puVar14 < 0;
    bVar24 = puVar14 == (uint *)0x0;
  }
  bVar23 = false;
  if (bVar24) {
    bVar29 = unaff_r10 <= puVar14;
    in_OV = SBORROW4((int)puVar14,(int)unaff_r10);
    puVar14 = (uint *)((int)puVar14 - (int)unaff_r10);
    bVar26 = (int)puVar14 < 0;
    bVar23 = puVar14 == (uint *)0x0;
  }
  bVar24 = false;
  if (bVar23) {
    uVar21 = (uint)puVar14 & 0xff;
    bVar29 = uVar21 == 0 && (bool)bVar29 ||
             uVar21 != 0 && (bool)((byte)((uint)&stack0x00000000 >> uVar21 - 1) & 1);
    puVar14 = (uint *)((uint)unaff_lr & (uint)&stack0x00000000 >> uVar21);
    bVar26 = (int)puVar14 < 0;
    bVar24 = puVar14 == (uint *)0x0;
  }
  bVar23 = false;
  if (bVar24) {
    uVar17 = (int)param_3 + (int)in_r12;
    uVar21 = uVar17 & 0xff;
    bVar29 = uVar21 == 0 && (bool)bVar29 || uVar21 != 0 && (bool)((byte)(uVar17 >> uVar21 - 1) & 1);
    puVar14 = (uint *)(uVar17 & uVar17 >> uVar21);
    bVar26 = (int)puVar14 < 0;
    bVar23 = puVar14 == (uint *)0x0;
  }
  bVar24 = false;
  if (bVar23) {
    uVar21 = (int)param_3 + (int)puVar14 & 0xff;
    bVar29 = uVar21 == 0 && (bool)bVar29 ||
             uVar21 != 0 && (bool)((byte)((uint)unaff_r6 >> uVar21 - 1) & 1);
    puVar14 = (uint *)((uint)param_4 & (uint)unaff_r6 >> uVar21);
    bVar26 = (int)puVar14 < 0;
    bVar24 = puVar14 == (uint *)0x0;
  }
  bVar23 = false;
  if (bVar24) {
    uVar21 = -(int)unaff_r9 & 0xff;
    bVar29 = uVar21 == 0 && (bool)bVar29 ||
             uVar21 != 0 && (bool)((byte)((uint)unaff_r4 >> 0x20 - uVar21) & 1);
    puVar14 = (uint *)((uint)unaff_r4 & (int)unaff_r4 << uVar21);
    bVar26 = (int)puVar14 < 0;
    bVar23 = puVar14 == (uint *)0x0;
  }
  bVar24 = false;
  if (bVar23) {
    puVar14 = (uint *)((int)unaff_r4 << ((uint)puVar14 & 0xff));
    bVar29 = unaff_r10 <= puVar14;
    in_OV = SBORROW4((int)puVar14,(int)unaff_r10);
    puVar14 = (uint *)((int)puVar14 - (int)unaff_r10);
    bVar26 = (int)puVar14 < 0;
    bVar24 = puVar14 == (uint *)0x0;
  }
  bVar23 = false;
  if (bVar24) {
    uVar21 = (uint)puVar14 & 0xff;
    bVar29 = uVar21 == 0 && (bool)bVar29 ||
             uVar21 != 0 && (bool)((byte)((int)unaff_r11 >> uVar21 - 1) & 1);
    puVar14 = (uint *)((uint)unaff_r8 & (int)unaff_r11 >> uVar21);
    bVar26 = (int)puVar14 < 0;
    bVar23 = puVar14 == (uint *)0x0;
  }
  bVar24 = false;
  if (bVar23) {
    bVar29 = unaff_r11 <= puVar14;
    in_OV = SBORROW4((int)puVar14,(int)unaff_r11);
    puVar14 = (uint *)((int)puVar14 - (int)unaff_r11);
    bVar26 = (int)puVar14 < 0;
    bVar24 = puVar14 == (uint *)0x0;
  }
  bVar23 = false;
  bVar30 = bVar29;
  if (bVar24) {
    bVar30 = (byte)unaff_r8 & 1;
    puVar14 = (uint *)((uint)in_r12 & ((uint)bVar29 << 0x1f | (uint)unaff_r8 >> 1));
    bVar26 = (int)puVar14 < 0;
    bVar23 = puVar14 == (uint *)0x0;
  }
  bVar24 = false;
  if (bVar23) {
    uVar21 = -(int)unaff_r9 & 0xff;
    bVar30 = uVar21 == 0 && (bool)bVar30 ||
             uVar21 != 0 && (bool)((byte)((uint)unaff_r4 >> 0x20 - uVar21) & 1);
    puVar14 = (uint *)((uint)unaff_r4 & (int)unaff_r4 << uVar21);
    bVar26 = (int)puVar14 < 0;
    bVar24 = puVar14 == (uint *)0x0;
  }
  bVar23 = false;
  if (bVar24) {
    puVar14 = (uint *)((int)unaff_r4 << ((uint)puVar14 & 0xff));
    bVar30 = unaff_r10 <= puVar14;
    in_OV = SBORROW4((int)puVar14,(int)unaff_r10);
    puVar14 = (uint *)((int)puVar14 - (int)unaff_r10);
    bVar26 = (int)puVar14 < 0;
    bVar23 = puVar14 == (uint *)0x0;
  }
  bVar24 = false;
  if (bVar23) {
    uVar21 = (uint)puVar14 & 0xff;
    bVar30 = uVar21 == 0 && (bool)bVar30 ||
             uVar21 != 0 && (bool)((byte)((int)in_r12 >> uVar21 - 1) & 1);
    puVar14 = (uint *)((int)in_r12 >> uVar21 & 0x84b9f3e);
    bVar24 = puVar14 == (uint *)0x0;
    bVar26 = false;
  }
  bVar23 = false;
  bVar29 = bVar30;
  if (bVar24) {
    bVar29 = (byte)in_r12 & 1;
    puVar14 = (uint *)((uint)unaff_r8 & ((uint)bVar30 << 0x1f | (uint)in_r12 >> 1));
    bVar26 = (int)puVar14 < 0;
    bVar23 = puVar14 == (uint *)0x0;
  }
  bVar24 = false;
  if (bVar23) {
    uVar17 = (int)param_3 + (int)puVar14;
    uVar21 = (uint)unaff_r8 >> (uVar17 & 0x1f) | (int)unaff_r8 << 0x20 - (uVar17 & 0x1f);
    bVar29 = (uVar17 & 0xff) == 0 && (bool)bVar29 || (uVar17 & 0xff) != 0 && SUB41(uVar21 >> 0x1f,0)
    ;
    puVar14 = (uint *)((uint)unaff_r5 & uVar21);
    bVar26 = (int)puVar14 < 0;
    bVar24 = puVar14 == (uint *)0x0;
  }
  bVar23 = false;
  if (bVar24) {
    uVar21 = -(int)unaff_r9 & 0xff;
    bVar29 = uVar21 == 0 && (bool)bVar29 ||
             uVar21 != 0 && (bool)((byte)((uint)unaff_r4 >> 0x20 - uVar21) & 1);
    puVar14 = (uint *)((uint)unaff_r4 & (int)unaff_r4 << uVar21);
    bVar26 = (int)puVar14 < 0;
    bVar23 = puVar14 == (uint *)0x0;
  }
  bVar24 = false;
  if (bVar23) {
    puVar14 = (uint *)((int)unaff_r4 << ((uint)puVar14 & 0xff));
    bVar29 = unaff_r10 <= puVar14;
    in_OV = SBORROW4((int)puVar14,(int)unaff_r10);
    puVar14 = (uint *)((int)puVar14 - (int)unaff_r10);
    bVar26 = (int)puVar14 < 0;
    bVar24 = puVar14 == (uint *)0x0;
  }
  bVar23 = false;
  bVar30 = bVar29;
  if (bVar24) {
    bVar30 = (byte)unaff_r4 & 1;
    puVar14 = (uint *)((uint)in_r12 & ((uint)bVar29 << 0x1f | (uint)unaff_r4 >> 1));
    bVar26 = (int)puVar14 < 0;
    bVar23 = puVar14 == (uint *)0x0;
  }
  bVar24 = false;
  if (bVar23) {
    bVar30 = unaff_r11 <= puVar14;
    in_OV = SBORROW4((int)puVar14,(int)unaff_r11);
    puVar14 = (uint *)((int)puVar14 - (int)unaff_r11);
    bVar26 = (int)puVar14 < 0;
    bVar24 = puVar14 == (uint *)0x0;
  }
  bVar23 = false;
  if (bVar24) {
    uVar21 = (uint)puVar22 >> ((uint)puVar14 & 0x1f) | (int)puVar22 << 0x20 - ((uint)puVar14 & 0x1f)
    ;
    bVar30 = ((uint)puVar14 & 0xff) == 0 && (bool)bVar30 ||
             ((uint)puVar14 & 0xff) != 0 && SUB41(uVar21 >> 0x1f,0);
    puVar14 = (uint *)((uint)unaff_r11 & uVar21);
    bVar26 = (int)puVar14 < 0;
    bVar23 = puVar14 == (uint *)0x0;
  }
  bVar24 = false;
  if (bVar23) {
    uVar17 = (int)puVar14 - (int)unaff_r6;
    uVar21 = (uint)unaff_r5 >> (uVar17 & 0x1f) | (int)unaff_r5 << 0x20 - (uVar17 & 0x1f);
    bVar30 = (uVar17 & 0xff) == 0 && (bool)bVar30 || (uVar17 & 0xff) != 0 && SUB41(uVar21 >> 0x1f,0)
    ;
    puVar14 = (uint *)((uint)in_r12 & uVar21);
    bVar26 = (int)puVar14 < 0;
    bVar24 = puVar14 == (uint *)0x0;
  }
  bVar23 = false;
  if (bVar24) {
    uVar21 = -(int)unaff_r9 & 0xff;
    bVar30 = uVar21 == 0 && (bool)bVar30 ||
             uVar21 != 0 && (bool)((byte)((uint)unaff_r4 >> 0x20 - uVar21) & 1);
    puVar14 = (uint *)((uint)unaff_r4 & (int)unaff_r4 << uVar21);
    bVar26 = (int)puVar14 < 0;
    bVar23 = puVar14 == (uint *)0x0;
  }
  bVar24 = false;
  if (bVar23) {
    puVar14 = (uint *)((int)unaff_r4 << ((uint)puVar14 & 0xff));
    bVar30 = unaff_r10 <= puVar14;
    in_OV = SBORROW4((int)puVar14,(int)unaff_r10);
    puVar14 = (uint *)((int)puVar14 - (int)unaff_r10);
    bVar26 = (int)puVar14 < 0;
    bVar24 = puVar14 == (uint *)0x0;
  }
  if (bVar24) {
    in_OV = SBORROW4((int)in_r12,(int)in_r12);
    puVar14 = (uint *)0x0;
    bVar30 = 1;
    bVar26 = false;
  }
  bVar23 = false;
  if (bVar24) {
    bVar30 = bVar3 >> 7;
    puVar14 = (uint *)((uint)&stack0x00000000 & (int)unaff_r10 << 1);
    bVar26 = (int)puVar14 < 0;
    bVar23 = puVar14 == (uint *)0x0;
  }
  bVar24 = false;
  if (bVar23) {
    puVar14 = (uint *)((uint)puVar22 ^ (int)unaff_r10 << 1);
    bVar30 = in_r12 <= puVar14;
    in_OV = SBORROW4((int)puVar14,(int)in_r12);
    puVar14 = (uint *)((int)puVar14 - (int)in_r12);
    bVar26 = (int)puVar14 < 0;
    bVar24 = puVar14 == (uint *)0x0;
  }
  bVar23 = false;
  if (bVar24) {
    register0x00000054 = (BADSPACEBASE *)((int)puVar22 * (int)puVar14);
    bVar26 = (int)register0x00000054 < 0;
    bVar23 = (undefined1 *)register0x00000054 == (undefined1 *)0x0;
  }
  if (bVar23) {
    puVar22 = (uint *)((int)puVar22 * ((int)puVar14 - (int)unaff_r6) +
                      ((int)puVar14 - (int)unaff_r6));
    bVar30 = 0;
    in_OV = '\0';
    bVar26 = (int)unaff_r11 < 0;
    puVar14 = unaff_r11;
  }
  bVar29 = (byte)unaff_r9;
  bVar24 = false;
  if (bVar23 && unaff_r11 == (uint *)0x0) {
    bVar30 = bVar29 & 1;
    puVar14 = (uint *)((uint)unaff_lr & (uint)unaff_r9 >> 1);
    bVar24 = puVar14 == (uint *)0x0;
    bVar26 = false;
  }
  bVar23 = false;
  if (bVar24) {
    bVar30 = unaff_r10 <= unaff_r5;
    in_OV = SBORROW4((int)unaff_r5,(int)unaff_r10);
    puVar14 = (uint *)((int)unaff_r5 - (int)unaff_r10);
    bVar26 = (int)puVar14 < 0;
    bVar23 = puVar14 == (uint *)0x0;
  }
  bVar24 = false;
  if (bVar23) {
    puVar14 = (uint *)((uint)unaff_r6 & (uint)puVar14 >> 1);
    bVar30 = unaff_r10 <= puVar14;
    in_OV = SBORROW4((int)puVar14,(int)unaff_r10);
    puVar14 = (uint *)((int)puVar14 - (int)unaff_r10);
    bVar26 = (int)puVar14 < 0;
    bVar24 = puVar14 == (uint *)0x0;
  }
  bVar23 = false;
  if (bVar24) {
    puVar14 = (uint *)((uint)unaff_r9 & (uint)puVar22 >> 1);
    bVar30 = unaff_r10 <= puVar14;
    in_OV = SBORROW4((int)puVar14,(int)unaff_r10);
    puVar14 = (uint *)((int)puVar14 - (int)unaff_r10);
    bVar26 = (int)puVar14 < 0;
    bVar23 = puVar14 == (uint *)0x0;
  }
  if (bVar23) {
    puVar14 = (uint *)((uint)unaff_r11 & (uint)unaff_r6 >> 1);
  }
  if ((bool)bVar30 && !bVar23) {
    puVar14 = (uint *)((uint)puVar14 ^ 0x84ba06a);
    bVar26 = (int)puVar14 < 0;
    bVar23 = puVar14 == (uint *)0x0;
  }
  if (bVar23) {
    unaff_r8 = (uint *)((int)unaff_r10 * (int)puVar14);
    puVar14 = (uint *)0x0;
    bVar26 = false;
  }
  bVar24 = false;
  if (bVar23) {
    uVar21 = (uint)puVar14 & 0xff;
    bVar30 = uVar21 == 0 && (bool)bVar30 ||
             uVar21 != 0 && (bool)((byte)((uint)puVar22 >> 0x20 - uVar21) & 1);
    puVar14 = (uint *)((uint)unaff_r4 & (int)puVar22 << uVar21);
    bVar26 = (int)puVar14 < 0;
    bVar24 = puVar14 == (uint *)0x0;
  }
  if (bVar26) {
    puVar14 = (uint *)((int)param_4 + ((int)unaff_r4 << ((uint)puVar14 & 0xff)));
  }
  bVar23 = false;
  if (bVar24) {
    uVar21 = (uint)puVar14 & 0xff;
    bVar30 = uVar21 == 0 && (bool)bVar30 ||
             uVar21 != 0 && (bool)((byte)((uint)unaff_lr >> 0x20 - uVar21) & 1);
    puVar14 = (uint *)((uint)puVar22 & (int)unaff_lr << uVar21);
    bVar26 = (int)puVar14 < 0;
    bVar23 = puVar14 == (uint *)0x0;
  }
  if (bVar26) {
    puVar14 = (uint *)((int)puVar14 - (int)unaff_r10);
  }
  if (bVar23) {
    bVar30 = bVar3 >> 7;
    puVar14 = (uint *)0x0;
    bVar26 = false;
  }
  if (bVar26) {
    puVar14 = (uint *)((int)puVar14 - (int)unaff_r10);
  }
  if (bVar23) {
    puVar14 = (uint *)0x0;
    bVar26 = false;
  }
  bVar24 = false;
  if (bVar23) {
    uVar21 = (int)in_r12 - (int)unaff_r6 & 0xff;
    bVar30 = uVar21 == 0 && (bool)bVar30 ||
             uVar21 != 0 && (bool)((byte)((uint)unaff_r4 >> 0x20 - uVar21) & 1);
    puVar14 = (uint *)((uint)register0x00000054 & (int)unaff_r4 << uVar21);
    bVar26 = (int)puVar14 < 0;
    bVar24 = puVar14 == (uint *)0x0;
  }
  bVar23 = false;
  if (bVar24) {
    uVar21 = (int)puVar14 - (int)unaff_r6 & 0xff;
    bVar30 = uVar21 == 0 && (bool)bVar30 ||
             uVar21 != 0 && (bool)((byte)((uint)unaff_r8 >> 0x20 - uVar21) & 1);
    puVar14 = (uint *)((uint)unaff_r10 & (int)unaff_r8 << uVar21);
    bVar26 = (int)puVar14 < 0;
    bVar23 = puVar14 == (uint *)0x0;
  }
  if (bVar23) {
    bVar26 = (int)unaff_r6 < 0;
    puVar14 = unaff_r6;
  }
  bVar24 = false;
  if (bVar23 && unaff_r6 == (uint *)0x0) {
    uVar21 = (int)param_3 + (int)in_r12 & 0xff;
    bVar30 = uVar21 == 0 && (bool)bVar30 ||
             uVar21 != 0 && (bool)((byte)((uint)unaff_r5 >> uVar21 - 1) & 1);
    puVar14 = (uint *)((uint)unaff_r5 ^ (uint)unaff_r5 >> uVar21);
    bVar26 = (int)puVar14 < 0;
    bVar24 = puVar14 == (uint *)0x0;
  }
  bVar23 = false;
  if (bVar24) {
    uVar21 = (int)param_3 + (int)puVar14 & 0xff;
    bVar30 = uVar21 == 0 && (bool)bVar30 ||
             uVar21 != 0 && (bool)((byte)((uint)unaff_r10 >> uVar21 - 1) & 1);
    puVar14 = (uint *)((uint)unaff_r5 ^ (uint)unaff_r10 >> uVar21);
    bVar26 = (int)puVar14 < 0;
    bVar23 = puVar14 == (uint *)0x0;
  }
  bVar24 = false;
  if (bVar23) {
    bVar30 = (byte)((uint)register0x00000054 >> 0x1f);
    puVar14 = (uint *)((uint)unaff_r6 ^ (int)register0x00000054 >> 0x20);
    bVar26 = (int)puVar14 < 0;
    bVar24 = puVar14 == (uint *)0x0;
  }
  bVar23 = false;
  if (bVar24) {
    bVar30 = bVar3 >> 7;
    puVar14 = (uint *)((uint)unaff_r4 ^ uVar16);
    bVar26 = (int)puVar14 < 0;
    bVar23 = puVar14 == (uint *)0x0;
  }
  bVar24 = false;
  if (bVar23) {
    bVar30 = bVar4 >> 7;
    puVar14 = (uint *)((uint)param_4 ^ uVar1);
    bVar26 = (int)puVar14 < 0;
    bVar24 = puVar14 == (uint *)0x0;
  }
  bVar23 = false;
  if (bVar24) {
    bVar30 = (byte)((uint)unaff_r8 >> 0x1f);
    puVar14 = (uint *)((uint)in_r12 & (int)unaff_r8 >> 0x20);
    bVar26 = (int)puVar14 < 0;
    bVar23 = puVar14 == (uint *)0x0;
  }
  bVar24 = false;
  if (bVar23) {
    bVar30 = bVar31 >> 7;
    puVar14 = (uint *)((uint)in_r12 & (int)in_r12 >> 0x20);
    bVar26 = (int)puVar14 < 0;
    bVar24 = puVar14 == (uint *)0x0;
  }
  if (bVar24) {
    bVar26 = (int)unaff_r9 < 0;
    puVar14 = unaff_r9;
  }
  bVar23 = bVar24 && unaff_r9 == (uint *)0x0;
  if (bVar23) {
    puVar14 = (uint *)((uint)in_r12 & (int)puVar14 << ((uint)puVar14 & 0xff));
  }
  if ((bool)bVar30 && (!bVar24 || unaff_r9 != (uint *)0x0)) {
    puVar14 = (uint *)((uint)in_r12 ^ 0x84ba282);
    bVar26 = (int)puVar14 < 0;
    bVar23 = puVar14 == (uint *)0x0;
  }
  if (bVar23) {
    puVar14 = (uint *)0x0;
    bVar26 = false;
  }
  bVar24 = false;
  if (bVar23) {
    bVar30 = unaff_r10 <= unaff_r5;
    in_OV = SBORROW4((int)unaff_r5,(int)unaff_r10);
    puVar14 = (uint *)((int)unaff_r5 - (int)unaff_r10);
    bVar26 = (int)puVar14 < 0;
    bVar24 = puVar14 == (uint *)0x0;
  }
  bVar23 = false;
  if (bVar24) {
    bVar30 = unaff_r10 == (uint *)0x0;
    in_OV = SBORROW4(0,(int)unaff_r10);
    puVar14 = (uint *)-(int)unaff_r10;
    bVar26 = (int)puVar14 < 0;
    bVar23 = puVar14 == (uint *)0x0;
  }
  if (bVar23) {
    bVar30 = bVar5 >> 7;
    puVar14 = (uint *)0x0;
    bVar26 = false;
  }
  bVar24 = false;
  if (bVar23) {
    bVar30 = unaff_r10 <= puVar14;
    in_OV = SBORROW4((int)puVar14,(int)unaff_r10);
    puVar14 = (uint *)((int)puVar14 - (int)unaff_r10);
    bVar26 = (int)puVar14 < 0;
    bVar24 = puVar14 == (uint *)0x0;
  }
  if (bVar24) {
    bVar30 = bVar7 >> 7;
    puVar14 = (uint *)0x0;
    bVar26 = false;
  }
  bVar23 = false;
  if (bVar24) {
    uVar21 = (int)puVar14 + (int)unaff_r6 * -2 & 0xff;
    bVar30 = uVar21 == 0 && (bool)bVar30 ||
             uVar21 != 0 && (bool)((byte)((uint)unaff_r9 >> 0x20 - uVar21) & 1);
    puVar14 = (uint *)((uint)register0x00000054 & (int)unaff_r9 << uVar21);
    bVar26 = (int)puVar14 < 0;
    bVar23 = puVar14 == (uint *)0x0;
  }
  if (bVar23) {
    puVar14 = (uint *)0x0;
    bVar26 = false;
  }
  bVar24 = false;
  if (bVar23) {
    uVar17 = (int)param_3 + (int)in_r12;
    uVar21 = uVar17 & 0xff;
    bVar30 = uVar21 == 0 && (bool)bVar30 ||
             uVar21 != 0 && (bool)((byte)(uVar17 >> 0x20 - uVar21) & 1);
    puVar14 = (uint *)((uint)unaff_r10 & uVar17 << uVar21);
    bVar26 = (int)puVar14 < 0;
    bVar24 = puVar14 == (uint *)0x0;
  }
  bVar23 = false;
  if (bVar24) {
    bVar30 = unaff_r10 <= unaff_r5;
    in_OV = SBORROW4((int)unaff_r5,(int)unaff_r10);
    puVar14 = (uint *)((int)unaff_r5 - (int)unaff_r10);
    bVar26 = (int)puVar14 < 0;
    bVar23 = puVar14 == (uint *)0x0;
  }
  bVar24 = false;
  if (bVar23) {
    uVar21 = (uint)puVar14 & 0xff;
    bVar30 = uVar21 == 0 && (bool)bVar30 ||
             uVar21 != 0 && (bool)((byte)((uint)puVar14 >> 0x20 - uVar21) & 1);
    puVar14 = (uint *)((uint)unaff_r10 ^ (int)puVar14 << uVar21);
    bVar26 = (int)puVar14 < 0;
    bVar24 = puVar14 == (uint *)0x0;
  }
  bVar23 = false;
  if (bVar24) {
    bVar30 = unaff_r10 <= puVar14;
    in_OV = SBORROW4((int)puVar14,(int)unaff_r10);
    puVar14 = (uint *)((int)puVar14 - (int)unaff_r10);
    bVar26 = (int)puVar14 < 0;
    bVar23 = puVar14 == (uint *)0x0;
  }
  bVar24 = false;
  if (bVar23) {
    bVar30 = unaff_r10 <= unaff_r5;
    in_OV = SBORROW4((int)unaff_r5,(int)unaff_r10);
    puVar14 = (uint *)((int)unaff_r5 - (int)unaff_r10);
    bVar26 = (int)puVar14 < 0;
    bVar24 = puVar14 == (uint *)0x0;
  }
  bVar23 = false;
  if (bVar24) {
    uVar21 = (uint)puVar14 & 0xff;
    bVar30 = uVar21 == 0 && (bool)bVar30 ||
             uVar21 != 0 && (bool)((byte)((uint)unaff_r6 >> 0x20 - uVar21) & 1);
    puVar14 = (uint *)((uint)unaff_r8 ^ (int)unaff_r6 << uVar21);
    bVar26 = (int)puVar14 < 0;
    bVar23 = puVar14 == (uint *)0x0;
  }
  bVar24 = false;
  if (bVar23) {
    bVar30 = unaff_r10 <= puVar14;
    in_OV = SBORROW4((int)puVar14,(int)unaff_r10);
    puVar14 = (uint *)((int)puVar14 - (int)unaff_r10);
    bVar26 = (int)puVar14 < 0;
    bVar24 = puVar14 == (uint *)0x0;
  }
  bVar23 = false;
  if (bVar24) {
    uVar21 = (int)param_3 +
             ((int)puVar22 - ((int)unaff_r9 << ((int)param_3 + (int)unaff_r5 & 0xffU))) & 0xff;
    bVar30 = uVar21 == 0 && (bool)bVar30 ||
             uVar21 != 0 && (bool)((byte)((uint)in_r12 >> 0x20 - uVar21) & 1);
    puVar14 = (uint *)((uint)unaff_r5 ^ (int)in_r12 << uVar21);
    bVar26 = (int)puVar14 < 0;
    bVar23 = puVar14 == (uint *)0x0;
  }
  if (bVar23) {
    bVar30 = false;
    bVar26 = (int)param_3 < 0;
    puVar14 = param_3;
  }
  bVar24 = false;
  if (bVar23 && param_3 == (uint *)0x0) {
    uVar21 = (int)param_3 + (int)puVar14 & 0xff;
    bVar30 = uVar21 == 0 && (bool)bVar30 ||
             uVar21 != 0 && (bool)((byte)((uint)param_4 >> uVar21 - 1) & 1);
    puVar14 = (uint *)((uint)unaff_r4 ^ (uint)param_4 >> uVar21);
    bVar26 = (int)puVar14 < 0;
    bVar24 = puVar14 == (uint *)0x0;
  }
  bVar23 = false;
  if (bVar24) {
    bVar30 = unaff_r11 <= in_r12;
    in_OV = SBORROW4((int)in_r12,(int)unaff_r11);
    puVar14 = (uint *)((int)in_r12 - (int)unaff_r11);
    bVar26 = (int)puVar14 < 0;
    bVar23 = puVar14 == (uint *)0x0;
  }
  bVar24 = false;
  if (bVar23) {
    bVar30 = unaff_r11 <= unaff_r9;
    in_OV = SBORROW4((int)unaff_r9,(int)unaff_r11);
    puVar14 = (uint *)((int)unaff_r9 - (int)unaff_r11);
    bVar26 = (int)puVar14 < 0;
    bVar24 = puVar14 == (uint *)0x0;
  }
  if (bVar24) {
    puVar14 = (uint *)((int)puVar22 - ((uint)unaff_r4 >> ((uint)puVar14 & 0xff)));
  }
  if ((bool)bVar30 && !bVar24) {
    bVar30 = in_r12 <= puVar14;
    in_OV = SBORROW4((int)puVar14,(int)in_r12);
    puVar14 = (uint *)((int)puVar14 - (int)in_r12);
    bVar26 = (int)puVar14 < 0;
    bVar24 = puVar14 == (uint *)0x0;
  }
  if (bVar24) {
    bVar26 = (int)param_3 < 0;
    puVar14 = param_3;
  }
  bVar23 = false;
  if (bVar24 && param_3 == (uint *)0x0) {
    bVar30 = unaff_r10 <= in_r12;
    in_OV = SBORROW4((int)in_r12,(int)unaff_r10);
    puVar14 = (uint *)((int)in_r12 - (int)unaff_r10);
    bVar26 = (int)puVar14 < 0;
    bVar23 = puVar14 == (uint *)0x0;
  }
  bVar24 = false;
  if (bVar23) {
    uVar21 = (uint)puVar14 & 0xff;
    bVar30 = uVar21 == 0 && (bool)bVar30 ||
             uVar21 != 0 && (bool)((byte)((uint)param_3 >> uVar21 - 1) & 1);
    puVar14 = (uint *)((uint)unaff_r10 & (uint)param_3 >> uVar21);
    bVar26 = (int)puVar14 < 0;
    bVar24 = puVar14 == (uint *)0x0;
  }
  bVar23 = false;
  if (bVar24) {
    bVar30 = unaff_r10 <= puVar14;
    in_OV = SBORROW4((int)puVar14,(int)unaff_r10);
    puVar14 = (uint *)((int)puVar14 - (int)unaff_r10);
    bVar26 = (int)puVar14 < 0;
    bVar23 = puVar14 == (uint *)0x0;
  }
  bVar24 = false;
  if (bVar23) {
    uVar21 = (uint)puVar14 & 0xff;
    bVar30 = uVar21 == 0 && (bool)bVar30 ||
             uVar21 != 0 && (bool)((byte)((uint)unaff_r7 >> uVar21 - 1) & 1);
    puVar14 = (uint *)((uint)unaff_r10 & (uint)unaff_r7 >> uVar21);
    bVar26 = (int)puVar14 < 0;
    bVar24 = puVar14 == (uint *)0x0;
  }
  bVar23 = false;
  if (bVar24) {
    bVar30 = unaff_r10 <= puVar14;
    in_OV = SBORROW4((int)puVar14,(int)unaff_r10);
    puVar14 = (uint *)((int)puVar14 - (int)unaff_r10);
    bVar26 = (int)puVar14 < 0;
    bVar23 = puVar14 == (uint *)0x0;
  }
  bVar24 = false;
  if (bVar23) {
    uVar21 = (uint)puVar14 & 0xff;
    bVar30 = uVar21 == 0 && (bool)bVar30 ||
             uVar21 != 0 && (bool)((byte)((uint)unaff_r8 >> uVar21 - 1) & 1);
    puVar14 = (uint *)((uint)unaff_lr & (uint)unaff_r8 >> uVar21);
    bVar26 = (int)puVar14 < 0;
    bVar24 = puVar14 == (uint *)0x0;
  }
  bVar23 = false;
  if (bVar24) {
    bVar30 = unaff_r10 <= puVar14;
    in_OV = SBORROW4((int)puVar14,(int)unaff_r10);
    puVar14 = (uint *)((int)puVar14 - (int)unaff_r10);
    bVar26 = (int)puVar14 < 0;
    bVar23 = puVar14 == (uint *)0x0;
  }
  bVar24 = false;
  if (bVar23) {
    uVar21 = (uint)puVar14 & 0xff;
    bVar30 = uVar21 == 0 && (bool)bVar30 ||
             uVar21 != 0 && (bool)((byte)((uint)register0x00000054 >> uVar21 - 1) & 1);
    puVar14 = (uint *)((uint)unaff_lr & (uint)register0x00000054 >> uVar21);
    bVar26 = (int)puVar14 < 0;
    bVar24 = puVar14 == (uint *)0x0;
  }
  bVar23 = false;
  if (bVar24) {
    uVar17 = (int)param_3 + (int)in_r12;
    uVar21 = uVar17 & 0xff;
    bVar30 = uVar21 == 0 && (bool)bVar30 || uVar21 != 0 && (bool)((byte)(uVar17 >> uVar21 - 1) & 1);
    puVar14 = (uint *)(uVar17 & uVar17 >> uVar21);
    bVar26 = (int)puVar14 < 0;
    bVar23 = puVar14 == (uint *)0x0;
  }
  bVar24 = false;
  if (bVar23) {
    uVar21 = (int)param_3 + (int)puVar14 & 0xff;
    bVar30 = uVar21 == 0 && (bool)bVar30 ||
             uVar21 != 0 && (bool)((byte)((uint)unaff_r6 >> uVar21 - 1) & 1);
    puVar14 = (uint *)((uint)param_4 & (uint)unaff_r6 >> uVar21);
    bVar26 = (int)puVar14 < 0;
    bVar24 = puVar14 == (uint *)0x0;
  }
  bVar23 = false;
  if (bVar24) {
    uVar21 = -(int)unaff_r9 & 0xff;
    bVar30 = uVar21 == 0 && (bool)bVar30 ||
             uVar21 != 0 && (bool)((byte)((uint)unaff_r4 >> 0x20 - uVar21) & 1);
    puVar14 = (uint *)((uint)unaff_r4 & (int)unaff_r4 << uVar21);
    bVar26 = (int)puVar14 < 0;
    bVar23 = puVar14 == (uint *)0x0;
  }
  bVar24 = false;
  if (bVar23) {
    puVar14 = (uint *)((int)unaff_r4 << ((uint)puVar14 & 0xff));
    bVar30 = unaff_r10 <= puVar14;
    in_OV = SBORROW4((int)puVar14,(int)unaff_r10);
    puVar14 = (uint *)((int)puVar14 - (int)unaff_r10);
    bVar26 = (int)puVar14 < 0;
    bVar24 = puVar14 == (uint *)0x0;
  }
  bVar23 = false;
  if (bVar24) {
    uVar21 = (uint)puVar14 & 0xff;
    bVar30 = uVar21 == 0 && (bool)bVar30 ||
             uVar21 != 0 && (bool)((byte)((int)unaff_r11 >> uVar21 - 1) & 1);
    puVar14 = (uint *)((uint)unaff_r8 & (int)unaff_r11 >> uVar21);
    bVar26 = (int)puVar14 < 0;
    bVar23 = puVar14 == (uint *)0x0;
  }
  bVar24 = false;
  if (bVar23) {
    bVar30 = unaff_r11 <= puVar14;
    in_OV = SBORROW4((int)puVar14,(int)unaff_r11);
    puVar14 = (uint *)((int)puVar14 - (int)unaff_r11);
    bVar26 = (int)puVar14 < 0;
    bVar24 = puVar14 == (uint *)0x0;
  }
  bVar23 = false;
  bVar31 = bVar30;
  if (bVar24) {
    bVar31 = (byte)unaff_r8 & 1;
    puVar14 = (uint *)((uint)in_r12 & ((uint)bVar30 << 0x1f | (uint)unaff_r8 >> 1));
    bVar26 = (int)puVar14 < 0;
    bVar23 = puVar14 == (uint *)0x0;
  }
  bVar24 = false;
  if (bVar23) {
    uVar21 = -(int)unaff_r9 & 0xff;
    bVar31 = uVar21 == 0 && (bool)bVar31 ||
             uVar21 != 0 && (bool)((byte)((uint)unaff_r4 >> 0x20 - uVar21) & 1);
    puVar14 = (uint *)((uint)unaff_r4 & (int)unaff_r4 << uVar21);
    bVar26 = (int)puVar14 < 0;
    bVar24 = puVar14 == (uint *)0x0;
  }
  bVar23 = false;
  if (bVar24) {
    puVar14 = (uint *)((int)unaff_r4 << ((uint)puVar14 & 0xff));
    bVar31 = unaff_r10 <= puVar14;
    in_OV = SBORROW4((int)puVar14,(int)unaff_r10);
    puVar14 = (uint *)((int)puVar14 - (int)unaff_r10);
    bVar26 = (int)puVar14 < 0;
    bVar23 = puVar14 == (uint *)0x0;
  }
  bVar24 = false;
  if (bVar23) {
    uVar21 = (uint)puVar14 & 0xff;
    bVar31 = uVar21 == 0 && (bool)bVar31 ||
             uVar21 != 0 && (bool)((byte)((int)in_r12 >> uVar21 - 1) & 1);
    puVar14 = (uint *)((int)in_r12 >> uVar21 & 0x84ba606);
    bVar24 = puVar14 == (uint *)0x0;
    bVar26 = false;
  }
  bVar23 = false;
  bVar30 = bVar31;
  if (bVar24) {
    bVar30 = (byte)in_r12 & 1;
    puVar14 = (uint *)((uint)unaff_r8 & ((uint)bVar31 << 0x1f | (uint)in_r12 >> 1));
    bVar26 = (int)puVar14 < 0;
    bVar23 = puVar14 == (uint *)0x0;
  }
  bVar24 = false;
  if (bVar23) {
    uVar17 = (int)param_3 + (int)puVar14;
    uVar21 = (uint)unaff_r8 >> (uVar17 & 0x1f) | (int)unaff_r8 << 0x20 - (uVar17 & 0x1f);
    bVar30 = (uVar17 & 0xff) == 0 && (bool)bVar30 || (uVar17 & 0xff) != 0 && SUB41(uVar21 >> 0x1f,0)
    ;
    puVar14 = (uint *)((uint)unaff_r5 & uVar21);
    bVar26 = (int)puVar14 < 0;
    bVar24 = puVar14 == (uint *)0x0;
  }
  bVar23 = false;
  if (bVar24) {
    uVar21 = -(int)unaff_r9 & 0xff;
    bVar30 = uVar21 == 0 && (bool)bVar30 ||
             uVar21 != 0 && (bool)((byte)((uint)unaff_r4 >> 0x20 - uVar21) & 1);
    puVar14 = (uint *)((uint)unaff_r4 & (int)unaff_r4 << uVar21);
    bVar26 = (int)puVar14 < 0;
    bVar23 = puVar14 == (uint *)0x0;
  }
  bVar24 = false;
  if (bVar23) {
    puVar14 = (uint *)((int)unaff_r4 << ((uint)puVar14 & 0xff));
    bVar30 = unaff_r10 <= puVar14;
    in_OV = SBORROW4((int)puVar14,(int)unaff_r10);
    puVar14 = (uint *)((int)puVar14 - (int)unaff_r10);
    bVar26 = (int)puVar14 < 0;
    bVar24 = puVar14 == (uint *)0x0;
  }
  bVar23 = false;
  bVar31 = bVar30;
  if (bVar24) {
    bVar31 = (byte)unaff_r4 & 1;
    puVar14 = (uint *)((uint)in_r12 & ((uint)bVar30 << 0x1f | (uint)unaff_r4 >> 1));
    bVar26 = (int)puVar14 < 0;
    bVar23 = puVar14 == (uint *)0x0;
  }
  bVar24 = false;
  if (bVar23) {
    bVar31 = unaff_r11 <= puVar14;
    in_OV = SBORROW4((int)puVar14,(int)unaff_r11);
    puVar14 = (uint *)((int)puVar14 - (int)unaff_r11);
    bVar26 = (int)puVar14 < 0;
    bVar24 = puVar14 == (uint *)0x0;
  }
  bVar23 = false;
  if (bVar24) {
    uVar21 = (uint)puVar22 >> ((uint)puVar14 & 0x1f) | (int)puVar22 << 0x20 - ((uint)puVar14 & 0x1f)
    ;
    bVar31 = ((uint)puVar14 & 0xff) == 0 && (bool)bVar31 ||
             ((uint)puVar14 & 0xff) != 0 && SUB41(uVar21 >> 0x1f,0);
    puVar14 = (uint *)((uint)unaff_r11 & uVar21);
    bVar26 = (int)puVar14 < 0;
    bVar23 = puVar14 == (uint *)0x0;
  }
  bVar24 = false;
  if (bVar23) {
    uVar17 = (int)puVar14 - (int)unaff_r6;
    uVar21 = (uint)unaff_r5 >> (uVar17 & 0x1f) | (int)unaff_r5 << 0x20 - (uVar17 & 0x1f);
    bVar31 = (uVar17 & 0xff) == 0 && (bool)bVar31 || (uVar17 & 0xff) != 0 && SUB41(uVar21 >> 0x1f,0)
    ;
    puVar14 = (uint *)((uint)in_r12 & uVar21);
    bVar26 = (int)puVar14 < 0;
    bVar24 = puVar14 == (uint *)0x0;
  }
  bVar23 = false;
  if (bVar24) {
    uVar21 = -(int)unaff_r9 & 0xff;
    bVar31 = uVar21 == 0 && (bool)bVar31 ||
             uVar21 != 0 && (bool)((byte)((uint)unaff_r4 >> 0x20 - uVar21) & 1);
    puVar14 = (uint *)((uint)unaff_r4 & (int)unaff_r4 << uVar21);
    bVar26 = (int)puVar14 < 0;
    bVar23 = puVar14 == (uint *)0x0;
  }
  bVar24 = false;
  if (bVar23) {
    puVar14 = (uint *)((int)unaff_r4 << ((uint)puVar14 & 0xff));
    bVar31 = unaff_r10 <= puVar14;
    in_OV = SBORROW4((int)puVar14,(int)unaff_r10);
    puVar14 = (uint *)((int)puVar14 - (int)unaff_r10);
    bVar26 = (int)puVar14 < 0;
    bVar24 = puVar14 == (uint *)0x0;
  }
  if (bVar24) {
    in_OV = SBORROW4((int)in_r12,(int)in_r12);
    puVar14 = (uint *)0x0;
    bVar31 = 1;
    bVar26 = false;
  }
  bVar23 = false;
  if (bVar24) {
    bVar31 = bVar3 >> 7;
    puVar14 = (uint *)((uint)register0x00000054 & (int)unaff_r10 << 1);
    bVar26 = (int)puVar14 < 0;
    bVar23 = puVar14 == (uint *)0x0;
  }
  bVar24 = false;
  if (bVar23) {
    puVar14 = (uint *)((uint)puVar22 ^ (int)unaff_r10 << 1);
    bVar31 = in_r12 <= puVar14;
    in_OV = SBORROW4((int)puVar14,(int)in_r12);
    puVar14 = (uint *)((int)puVar14 - (int)in_r12);
    bVar26 = (int)puVar14 < 0;
    bVar24 = puVar14 == (uint *)0x0;
  }
  bVar23 = false;
  if (bVar24) {
    register0x00000054 = (BADSPACEBASE *)((int)puVar22 * (int)puVar14);
    bVar26 = (int)register0x00000054 < 0;
    bVar23 = (undefined1 *)register0x00000054 == (undefined1 *)0x0;
  }
  if (bVar23) {
    puVar22 = (uint *)((int)puVar22 * ((int)puVar14 - (int)unaff_r6) +
                      ((int)puVar14 - (int)unaff_r6));
    bVar31 = 0;
    in_OV = '\0';
    bVar26 = (int)unaff_r11 < 0;
    puVar14 = unaff_r11;
  }
  bVar24 = false;
  if (bVar23 && unaff_r11 == (uint *)0x0) {
    bVar31 = bVar29 & 1;
    puVar14 = (uint *)((uint)unaff_lr & (uint)unaff_r9 >> 1);
    bVar24 = puVar14 == (uint *)0x0;
    bVar26 = false;
  }
  bVar23 = false;
  if (bVar24) {
    bVar31 = unaff_r10 <= unaff_r5;
    in_OV = SBORROW4((int)unaff_r5,(int)unaff_r10);
    puVar14 = (uint *)((int)unaff_r5 - (int)unaff_r10);
    bVar26 = (int)puVar14 < 0;
    bVar23 = puVar14 == (uint *)0x0;
  }
  bVar24 = false;
  if (bVar23) {
    puVar14 = (uint *)((uint)unaff_r6 & (uint)puVar14 >> 1);
    bVar31 = unaff_r10 <= puVar14;
    in_OV = SBORROW4((int)puVar14,(int)unaff_r10);
    puVar14 = (uint *)((int)puVar14 - (int)unaff_r10);
    bVar26 = (int)puVar14 < 0;
    bVar24 = puVar14 == (uint *)0x0;
  }
  bVar23 = false;
  if (bVar24) {
    puVar14 = (uint *)((uint)unaff_r9 & (uint)puVar22 >> 1);
    bVar31 = unaff_r10 <= puVar14;
    in_OV = SBORROW4((int)puVar14,(int)unaff_r10);
    puVar14 = (uint *)((int)puVar14 - (int)unaff_r10);
    bVar26 = (int)puVar14 < 0;
    bVar23 = puVar14 == (uint *)0x0;
  }
  if (bVar23) {
    puVar14 = (uint *)((uint)unaff_r11 & (uint)unaff_r6 >> 1);
  }
  if ((bool)bVar31 && !bVar23) {
    puVar14 = (uint *)((uint)puVar14 ^ 0x84ba732);
    bVar26 = (int)puVar14 < 0;
    bVar23 = puVar14 == (uint *)0x0;
  }
  if (bVar23) {
    unaff_r8 = (uint *)((int)unaff_r10 * (int)puVar14);
    puVar14 = (uint *)0x0;
    bVar26 = false;
  }
  bVar24 = false;
  if (bVar23) {
    uVar21 = (uint)puVar14 & 0xff;
    bVar31 = uVar21 == 0 && (bool)bVar31 ||
             uVar21 != 0 && (bool)((byte)((uint)puVar22 >> 0x20 - uVar21) & 1);
    puVar14 = (uint *)((uint)unaff_r4 & (int)puVar22 << uVar21);
    bVar26 = (int)puVar14 < 0;
    bVar24 = puVar14 == (uint *)0x0;
  }
  if (bVar26) {
    puVar14 = (uint *)((int)unaff_r4 + ((int)unaff_r4 << ((uint)puVar14 & 0xff)));
  }
  bVar23 = false;
  if (bVar24) {
    uVar21 = (uint)puVar14 & 0xff;
    bVar31 = uVar21 == 0 && (bool)bVar31 ||
             uVar21 != 0 && (bool)((byte)((uint)unaff_lr >> 0x20 - uVar21) & 1);
    puVar14 = (uint *)((uint)puVar22 & (int)unaff_lr << uVar21);
    bVar26 = (int)puVar14 < 0;
    bVar23 = puVar14 == (uint *)0x0;
  }
  if (bVar26) {
    puVar14 = (uint *)((int)puVar14 - (int)unaff_r11);
  }
  if (bVar23) {
    bVar31 = bVar3 >> 7;
    puVar14 = (uint *)0x0;
    bVar26 = false;
  }
  if (bVar26) {
    puVar14 = (uint *)((int)puVar14 - (int)unaff_r11);
  }
  bVar24 = false;
  if (bVar23) {
    puVar14 = (uint *)((uint)unaff_r11 & (uint)unaff_r5);
    bVar26 = (int)puVar14 < 0;
    bVar24 = puVar14 == (uint *)0x0;
  }
  if (bVar24) {
    bVar31 = bVar6 >> 7;
    puVar14 = (uint *)0x0;
    bVar26 = false;
  }
  bVar23 = false;
  if (bVar24) {
    puVar14 = (uint *)((uint)unaff_r11 & (uint)puVar14);
    bVar26 = (int)puVar14 < 0;
    bVar23 = puVar14 == (uint *)0x0;
  }
  bVar24 = false;
  if (bVar23) {
    uVar21 = (uint)puVar14 & 0xff;
    bVar31 = uVar21 == 0 && (bool)bVar31 ||
             uVar21 != 0 && (bool)((byte)((uint)unaff_r11 >> 0x20 - uVar21) & 1);
    puVar14 = (uint *)((uint)unaff_r8 & (int)unaff_r11 << uVar21);
    bVar26 = (int)puVar14 < 0;
    bVar24 = puVar14 == (uint *)0x0;
  }
  if (bVar24) {
    bVar31 = bVar7 >> 7;
    puVar14 = (uint *)0x0;
    bVar26 = false;
  }
  bVar23 = false;
  if (bVar24) {
    puVar14 = (uint *)((uint)puVar22 & (uint)unaff_r7);
    bVar26 = (int)puVar14 < 0;
    bVar23 = puVar14 == (uint *)0x0;
  }
  bVar24 = false;
  if (bVar23) {
    puVar14 = (uint *)((uint)unaff_r11 & (uint)unaff_r5);
    bVar26 = (int)puVar14 < 0;
    bVar24 = puVar14 == (uint *)0x0;
  }
  bVar23 = false;
  if (bVar24) {
    puVar14 = (uint *)((uint)unaff_r7 & (uint)register0x00000054);
    bVar26 = (int)puVar14 < 0;
    bVar23 = puVar14 == (uint *)0x0;
  }
  bVar24 = false;
  if (bVar23) {
    puVar14 = (uint *)((uint)unaff_r11 & (uint)puVar14);
    bVar26 = (int)puVar14 < 0;
    bVar24 = puVar14 == (uint *)0x0;
  }
  bVar23 = false;
  if (bVar24) {
    puVar14 = (uint *)((uint)unaff_r9 & (uint)puVar22 & (uint)unaff_r9);
    bVar26 = (int)puVar14 < 0;
    bVar23 = puVar14 == (uint *)0x0;
  }
  if (bVar23) {
    puVar14 = (uint *)0x0;
  }
  if ((bool)bVar31 && !bVar23) {
    puVar14 = (uint *)0x0;
  }
  if (bVar23) {
    bVar31 = bVar5 >> 7;
    bVar26 = (int)unaff_r4 < 0;
    puVar14 = unaff_r4;
  }
  bVar23 = bVar23 && unaff_r4 == (uint *)0x0;
  if (bVar23) {
    bVar31 = bVar5 >> 7;
    bVar26 = (int)puVar22 < 0;
    puVar14 = puVar22;
  }
  bVar23 = bVar23 && puVar22 == (uint *)0x0;
  bVar30 = (byte)((uint)puVar22 >> 0x18);
  if (bVar23) {
    bVar31 = bVar30 >> 7;
    bVar26 = (int)param_4 < 0;
    puVar14 = param_4;
  }
  bVar24 = false;
  if (bVar23 && param_4 == (uint *)0x0) {
    puVar14 = (uint *)((uint)unaff_r4 ^ (uint)puVar14);
    bVar31 = bVar30 >> 7;
    bVar26 = (int)puVar14 < 0;
    bVar24 = puVar14 == (uint *)0x0;
  }
  bVar11 = (byte)((uint)unaff_r5 >> 0x18);
  if (bVar24) {
    bVar31 = (bVar5 ^ bVar11) >> 7;
    puVar14 = (uint *)0x0;
    bVar26 = false;
  }
  bVar23 = false;
  if (bVar24) {
    uVar21 = ((uint)unaff_r7 ^ (uint)puVar14) & 0xff;
    bVar31 = uVar21 == 0 && (bool)bVar31 ||
             uVar21 != 0 && (bool)((byte)((uint)unaff_lr >> 0x20 - uVar21) & 1);
    puVar14 = (uint *)((uint)unaff_r9 & (int)unaff_lr << uVar21);
    bVar26 = (int)puVar14 < 0;
    bVar23 = puVar14 == (uint *)0x0;
  }
  if (bVar23) {
    bVar31 = bVar30 >> 7;
    puVar14 = (uint *)0x0;
    bVar26 = false;
  }
  bVar24 = false;
  if (bVar23) {
    uVar21 = ((uint)unaff_r5 ^ (uint)puVar14) & 0xff;
    bVar31 = uVar21 == 0 && (bool)bVar31 ||
             uVar21 != 0 && (bool)((byte)((uint)unaff_r8 >> 0x20 - uVar21) & 1);
    puVar14 = (uint *)((uint)unaff_r6 & (int)unaff_r8 << uVar21);
    bVar26 = (int)puVar14 < 0;
    bVar24 = puVar14 == (uint *)0x0;
  }
  bVar23 = false;
  if (bVar24) {
    puVar14 = (uint *)((uint)param_3 ^ (uint)puVar22 & (uint)unaff_r9);
    bVar26 = (int)puVar14 < 0;
    bVar23 = puVar14 == (uint *)0x0;
  }
  bVar24 = false;
  if (bVar23) {
    puVar14 = (uint *)((uint)unaff_r9 & (uint)puVar22 & (uint)unaff_r9);
    bVar26 = (int)puVar14 < 0;
    bVar24 = puVar14 == (uint *)0x0;
  }
  if (bVar24) {
    puVar14 = (uint *)((uint)unaff_r5 &
                      (uint)unaff_r7 >> (((uint)unaff_r5 ^ (uint)puVar22 & (uint)unaff_r9) & 0xff));
  }
  if ((bool)bVar31 && !bVar24) {
    puVar14 = (uint *)((uint)param_4 ^ (uint)unaff_r5);
  }
  bVar23 = false;
  if (bVar24) {
    uVar21 = ((uint)unaff_r7 ^ (uint)unaff_r6) & 0xff;
    bVar31 = uVar21 == 0 && (bool)bVar31 ||
             uVar21 != 0 && (bool)((byte)((uint)unaff_r8 >> 0x20 - uVar21) & 1);
    puVar14 = (uint *)((uint)unaff_lr ^ (int)unaff_r8 << uVar21);
    bVar26 = (int)puVar14 < 0;
    bVar23 = puVar14 == (uint *)0x0;
  }
  bVar24 = false;
  if (bVar23) {
    puVar14 = (uint *)((uint)param_4 & (uint)puVar22 & (uint)unaff_r9);
    bVar26 = (int)puVar14 < 0;
    bVar24 = puVar14 == (uint *)0x0;
  }
  bVar23 = false;
  if (bVar24) {
    uVar21 = ((uint)param_4 ^ (uint)in_r12) & 0xff;
    bVar31 = uVar21 == 0 && (bool)bVar31 ||
             uVar21 != 0 && (bool)((byte)((uint)unaff_r11 >> 0x20 - uVar21) & 1);
    puVar14 = (uint *)((uint)param_4 & (int)unaff_r11 << uVar21);
    bVar26 = (int)puVar14 < 0;
    bVar23 = puVar14 == (uint *)0x0;
  }
  bVar13 = (byte)((uint)param_4 >> 0x18);
  if (bVar23) {
    bVar31 = (byte)(bVar13 ^ (byte)((uint)puVar14 >> 0x18)) >> 7;
    puVar14 = (uint *)0x0;
    bVar26 = false;
  }
  bVar24 = false;
  if (bVar23) {
    uVar21 = ((uint)param_4 ^ (uint)puVar14) & 0xff;
    bVar31 = uVar21 == 0 && (bool)bVar31 ||
             uVar21 != 0 && (bool)((byte)((uint)unaff_lr >> 0x20 - uVar21) & 1);
    puVar14 = (uint *)((uint)unaff_r6 & (int)unaff_lr << uVar21);
    bVar26 = (int)puVar14 < 0;
    bVar24 = puVar14 == (uint *)0x0;
  }
  bVar23 = false;
  if (bVar24) {
    puVar14 = (uint *)((uint)puVar22 & (int)unaff_r10 << ((uint)puVar14 & 0xff) & 0x84baa5a);
    bVar23 = puVar14 == (uint *)0x0;
    bVar26 = false;
  }
  if (bVar23) {
    bVar31 = bVar3 >> 7;
    puVar14 = (uint *)0x0;
    bVar26 = false;
  }
  bVar24 = false;
  if (bVar23) {
    puVar14 = (uint *)((uint)unaff_lr & (uint)unaff_r5);
    bVar26 = (int)puVar14 < 0;
    bVar24 = puVar14 == (uint *)0x0;
  }
  bVar23 = false;
  if (bVar24) {
    puVar14 = (uint *)((uint)unaff_lr & ((uint)unaff_r6 ^ (int)unaff_r7 << ((uint)puVar14 & 0xff)));
    bVar26 = (int)puVar14 < 0;
    bVar23 = puVar14 == (uint *)0x0;
  }
  bVar24 = false;
  if (bVar23) {
    puVar14 = (uint *)((uint)unaff_lr & ((uint)unaff_r8 ^ (int)in_r12 << ((uint)puVar14 & 0xff)));
    bVar26 = (int)puVar14 < 0;
    bVar24 = puVar14 == (uint *)0x0;
  }
  bVar23 = false;
  if (bVar24) {
    uVar21 = (uint)puVar14 & 0xff;
    bVar31 = uVar21 == 0 && (bool)bVar31 ||
             uVar21 != 0 && (bool)((byte)((uint)unaff_r7 >> 0x20 - uVar21) & 1);
    puVar14 = (uint *)((uint)register0x00000054 & (int)unaff_r7 << uVar21);
    bVar26 = (int)puVar14 < 0;
    bVar23 = puVar14 == (uint *)0x0;
  }
  bVar24 = false;
  if (bVar23) {
    puVar14 = (uint *)((uint)unaff_r10 ^ (uint)puVar22 & (int)unaff_r10 << ((uint)puVar14 & 0xff));
    bVar26 = (int)puVar14 < 0;
    bVar24 = puVar14 == (uint *)0x0;
  }
  if (bVar24) {
    puVar14 = (uint *)((uint)unaff_r6 ^ (uint)in_r12);
  }
  uVar21 = (int)param_3 >> 0x20;
  if (bVar24) {
    puVar14 = (uint *)((uint)unaff_r6 ^ (uint)unaff_r11 & uVar21);
  }
  puVar2 = (uint *)((int)puVar22 >> 0x20);
  bVar23 = false;
  if (bVar24) {
    puVar14 = (uint *)((uint)param_4 ^ (uint)unaff_r5);
    bVar31 = bVar3 >> 7;
    bVar26 = (int)puVar14 < 0;
    bVar23 = puVar14 == (uint *)0x0;
  }
  bVar24 = false;
  if (bVar23) {
    puVar14 = (uint *)((uint)param_3 ^
                      (uint)puVar22 & (int)unaff_r10 << ((uint)register0x00000054 & 0xff));
    bVar26 = (int)puVar14 < 0;
    bVar24 = puVar14 == (uint *)0x0;
  }
  if (bVar24) {
    puVar14 = (uint *)((uint)unaff_r5 & (uint)puVar22 >> ((uint)puVar14 & 0xff));
  }
  if ((bool)bVar31 && !bVar24) {
    puVar14 = (uint *)((int)unaff_r10 - (int)unaff_r5);
  }
  if (bVar24) {
    puVar14 = (uint *)0x0;
    bVar26 = false;
  }
  bVar23 = false;
  if (bVar24) {
    uVar17 = (uint)puVar14 & 0xff;
    bVar31 = uVar17 == 0 && (bool)bVar31 ||
             uVar17 != 0 && (bool)((byte)((uint)puVar22 >> 0x20 - uVar17) & 1);
    puVar14 = (uint *)((uint)unaff_r4 & (int)puVar22 << uVar17);
    bVar26 = (int)puVar14 < 0;
    bVar23 = puVar14 == (uint *)0x0;
  }
  bVar24 = false;
  if (bVar23) {
    puVar14 = (uint *)(((uint)unaff_r8 ^ (uint)unaff_r6 & 0x84babee) & 0x84babf6);
    bVar24 = puVar14 == (uint *)0x0;
    bVar26 = false;
  }
  bVar23 = false;
  if (bVar24) {
    puVar14 = (uint *)((uint)unaff_r6 &
                      (uint)puVar22 &
                      (int)unaff_r10 <<
                      ((uint)unaff_r11 &
                       (int)unaff_r9 << ((int)unaff_r10 - ((uint)unaff_r11 & (uint)unaff_r4) & 0xff)
                      & 0xff));
    bVar26 = (int)puVar14 < 0;
    bVar23 = puVar14 == (uint *)0x0;
  }
  bVar24 = false;
  if (bVar23) {
    uVar17 = (int)unaff_r9 + (int)unaff_r5 & 0xff;
    bVar31 = uVar17 == 0 && (bool)bVar31 ||
             uVar17 != 0 && (bool)((byte)((uint)unaff_lr >> 0x20 - uVar17) & 1);
    puVar14 = (uint *)((uint)unaff_r9 & (int)unaff_lr << uVar17);
    bVar26 = (int)puVar14 < 0;
    bVar24 = puVar14 == (uint *)0x0;
  }
  bVar8 = (byte)((uint)unaff_r4 >> 0x18);
  if (bVar24) {
    bVar31 = bVar8 >> 7;
    puVar14 = (uint *)0x0;
    bVar26 = false;
  }
  bVar23 = false;
  if (bVar24) {
    uVar18 = (int)unaff_r11 -
             ((uint)register0x00000054 &
             (uint)in_r12 >>
             ((int)unaff_r11 -
              ((uint)in_r12 & (uint)unaff_r7 >> ((int)unaff_r11 - (int)unaff_r5 & 0xffU)) & 0xff));
    uVar17 = uVar18 & 0xff;
    bVar31 = uVar17 == 0 && (bool)bVar31 ||
             uVar17 != 0 && (bool)((byte)((uint)register0x00000054 >> uVar17 - 1) & 1);
    puVar14 = (uint *)(uVar18 & (uint)register0x00000054 >> uVar17);
    bVar26 = (int)puVar14 < 0;
    bVar23 = puVar14 == (uint *)0x0;
  }
  bVar24 = false;
  if (bVar23) {
    bVar31 = bVar4 >> 7;
    puVar14 = (uint *)((uint)unaff_r7 & uVar1);
    bVar26 = (int)puVar14 < 0;
    bVar24 = puVar14 == (uint *)0x0;
  }
  if (bVar24) {
    puVar14 = (uint *)((int)unaff_r9 + (int)puVar14);
  }
  uVar17 = (int)unaff_r11 >> 0x20;
  bVar9 = (byte)((uint)unaff_r11 >> 0x18);
  bVar23 = false;
  if (bVar24) {
    bVar31 = bVar9 >> 7;
    puVar14 = (uint *)((uint)unaff_r9 & uVar17);
    bVar26 = (int)puVar14 < 0;
    bVar23 = puVar14 == (uint *)0x0;
  }
  bVar24 = false;
  if (bVar23) {
    bVar31 = bVar5 >> 7;
    puVar14 = (uint *)((uint)in_r12 & (int)unaff_r7 >> 0x20);
    bVar26 = (int)puVar14 < 0;
    bVar24 = puVar14 == (uint *)0x0;
  }
  if (bVar24) {
    puVar14 = (uint *)0x0;
  }
  if ((bool)bVar31 && !bVar24) {
    puVar14 = (uint *)((int)unaff_lr + (int)unaff_r5);
  }
  if (bVar24) {
    bVar31 = bVar9 >> 7;
    bVar26 = (int)puVar22 < 0;
    puVar14 = puVar22;
  }
  bVar23 = false;
  if (bVar24 && puVar22 == (uint *)0x0) {
    uVar18 = (int)in_r12 + ((uint)register0x00000054 ^ (uint)puVar22 >> ((int)in_r12 * 2 & 0xffU)) &
             0xff;
    bVar31 = uVar18 == 0 && (bool)bVar31 ||
             uVar18 != 0 && (bool)((byte)((uint)param_4 >> uVar18 - 1) & 1);
    puVar14 = (uint *)((uint)puVar22 ^ (uint)param_4 >> uVar18);
    bVar26 = (int)puVar14 < 0;
    bVar23 = puVar14 == (uint *)0x0;
  }
  if (bVar23) {
    bVar31 = bVar4 >> 7;
    bVar26 = (int)unaff_r4 < 0;
    puVar14 = unaff_r4;
  }
  bVar23 = bVar23 && unaff_r4 == (uint *)0x0;
  if (bVar23) {
    puVar14 = (uint *)0x0;
    bVar26 = false;
  }
  bVar24 = false;
  if (bVar23) {
    uVar18 = (int)register0x00000054 + (int)unaff_r5 & 0xff;
    bVar31 = uVar18 == 0 && (bool)bVar31 ||
             uVar18 != 0 && (bool)((byte)((uint)unaff_r4 >> 0x20 - uVar18) & 1);
    puVar14 = (uint *)((int)unaff_r4 << uVar18 & 0x84badae);
    bVar24 = puVar14 == (uint *)0x0;
    bVar26 = false;
  }
  bVar23 = false;
  if (bVar24) {
    uVar18 = (int)register0x00000054 + (int)unaff_r5 & 0xff;
    bVar31 = uVar18 == 0 && (bool)bVar31 ||
             uVar18 != 0 && (bool)((byte)((uint)puVar22 >> 0x20 - uVar18) & 1);
    puVar14 = (uint *)((uint)unaff_r9 & (int)puVar22 << uVar18);
    bVar26 = (int)puVar14 < 0;
    bVar23 = puVar14 == (uint *)0x0;
  }
  bVar24 = false;
  if (bVar23) {
    uVar18 = (int)register0x00000054 + (int)puVar14 & 0xff;
    bVar31 = uVar18 == 0 && (bool)bVar31 ||
             uVar18 != 0 && (bool)((byte)((uint)unaff_r7 >> 0x20 - uVar18) & 1);
    puVar14 = (uint *)((uint)unaff_r10 & (int)unaff_r7 << uVar18);
    bVar26 = (int)puVar14 < 0;
    bVar24 = puVar14 == (uint *)0x0;
  }
  bVar23 = false;
  if (bVar24) {
    uVar18 = (int)unaff_r10 + (int)puVar14 & 0xff;
    bVar31 = uVar18 == 0 && (bool)bVar31 ||
             uVar18 != 0 && (bool)((byte)((uint)unaff_r7 >> 0x20 - uVar18) & 1);
    puVar14 = (uint *)((uint)unaff_r6 & (int)unaff_r7 << uVar18);
    bVar26 = (int)puVar14 < 0;
    bVar23 = puVar14 == (uint *)0x0;
  }
  bVar24 = false;
  if (bVar23) {
    uVar18 = (int)unaff_r10 + (int)puVar14 & 0xff;
    bVar31 = uVar18 == 0 && (bool)bVar31 ||
             uVar18 != 0 && (bool)((byte)((uint)unaff_lr >> 0x20 - uVar18) & 1);
    puVar14 = (uint *)((uint)unaff_r6 & (int)unaff_lr << uVar18);
    bVar26 = (int)puVar14 < 0;
    bVar24 = puVar14 == (uint *)0x0;
  }
  bVar10 = (byte)((uint)register0x00000054 >> 0x18);
  if (bVar24) {
    bVar31 = bVar10 >> 7;
    puVar14 = (uint *)0x0;
    bVar26 = false;
  }
  bVar23 = false;
  if (bVar24) {
    uVar18 = (int)register0x00000054 + (int)puVar14 & 0xff;
    bVar31 = uVar18 == 0 && (bool)bVar31 ||
             uVar18 != 0 && (bool)((byte)((uint)unaff_r11 >> 0x20 - uVar18) & 1);
    puVar14 = (uint *)((uint)unaff_r6 & (int)unaff_r11 << uVar18);
    bVar26 = (int)puVar14 < 0;
    bVar23 = puVar14 == (uint *)0x0;
  }
  if (bVar23) {
    bVar26 = (int)unaff_r6 < 0;
    puVar14 = unaff_r6;
  }
  bVar23 = bVar23 && unaff_r6 == (uint *)0x0;
  if (bVar23) {
    puVar14 = (uint *)((int)register0x00000054 +
                      ((uint)unaff_r7 ^
                      (uint)unaff_r9 >> ((int)register0x00000054 + (int)in_r12 & 0xffU)));
  }
  if (bVar23) {
    bVar26 = (int)register0x00000054 < 0;
    puVar14 = (uint *)register0x00000054;
  }
  bVar24 = false;
  if (bVar23 && (undefined1 *)register0x00000054 == (undefined1 *)0x0) {
    bVar31 = bVar6 >> 7;
    puVar14 = (uint *)((uint)unaff_lr & (int)unaff_r6 >> 0x20);
    bVar26 = (int)puVar14 < 0;
    bVar24 = puVar14 == (uint *)0x0;
  }
  bVar23 = false;
  if (bVar24) {
    bVar31 = bVar9 >> 7;
    puVar14 = (uint *)((uint)in_r12 & uVar17);
    bVar26 = (int)puVar14 < 0;
    bVar23 = puVar14 == (uint *)0x0;
  }
  if (bVar23) {
    bVar26 = (int)unaff_r4 < 0;
    puVar14 = unaff_r4;
  }
  bVar24 = bVar23 && unaff_r4 == (uint *)0x0;
  if (bVar24) {
    puVar14 = (uint *)((uint)in_r12 & (int)unaff_r6 << ((uint)puVar14 & 0xff));
  }
  if ((bool)bVar31 && (!bVar23 || unaff_r4 != (uint *)0x0)) {
    puVar14 = (uint *)((int)unaff_r11 + (int)in_r12);
  }
  bVar23 = false;
  if (bVar24) {
    uVar18 = (int)unaff_r10 + ((uint)param_4 >> ((uint)unaff_r10 & 0xff) & 0x84baf06) & 0xff;
    bVar31 = uVar18 == 0 && (bool)bVar31 ||
             uVar18 != 0 && (bool)((byte)((uint)param_4 >> uVar18 - 1) & 1);
    puVar14 = (uint *)((uint)param_3 & (uint)param_4 >> uVar18);
    bVar26 = (int)puVar14 < 0;
    bVar23 = puVar14 == (uint *)0x0;
  }
  bVar24 = false;
  if (bVar23) {
    puVar14 = (uint *)((uint)unaff_r4 & 0x84baf66);
    bVar24 = puVar14 == (uint *)0x0;
    bVar26 = false;
  }
  bVar23 = false;
  if (bVar26) {
    uVar18 = (int)unaff_r4 << ((uint)puVar14 & 0xff);
    bVar31 = CARRY4((uint)puVar22,uVar18);
    in_OV = SCARRY4((int)puVar22,uVar18);
    puVar14 = (uint *)((int)puVar22 + uVar18);
    bVar23 = (int)puVar14 < 0;
    bVar24 = puVar14 == (uint *)0x0;
  }
  if (bVar24) {
    puVar14 = (uint *)((uint)register0x00000054 & 0x84baf6e);
  }
  if (bVar23) {
    puVar14 = (uint *)((int)unaff_lr + (int)puVar14);
  }
  if (bVar24) {
    puVar14 = (uint *)((uint)unaff_r10 & (uint)in_r12);
  }
  if (bVar23) {
    puVar14 = (uint *)((int)unaff_r11 + (int)puVar14);
  }
  bVar26 = false;
  if (bVar24) {
    puVar14 = (uint *)((uint)param_3 & (uint)puVar22);
    bVar23 = (int)puVar14 < 0;
    bVar26 = puVar14 == (uint *)0x0;
  }
  if (bVar26) {
    puVar14 = (uint *)(((uint)puVar14 >> ((uint)puVar14 & 0xff)) - (int)unaff_r4);
  }
  if (bVar23) {
    puVar14 = (uint *)((uint)puVar22 & ((uint)bVar31 << 0x1f | (uint)unaff_r4 >> 1));
  }
  bVar24 = false;
  if (bVar26) {
    uVar18 = (uint)puVar14 & 0xff;
    bVar31 = uVar18 == 0 && (bool)bVar31 ||
             uVar18 != 0 && (bool)((byte)((uint)param_4 >> 0x20 - uVar18) & 1);
    puVar14 = (uint *)((uint)unaff_r9 & (int)param_4 << uVar18);
    bVar23 = (int)puVar14 < 0;
    bVar24 = puVar14 == (uint *)0x0;
  }
  if (bVar23) {
    puVar14 = (uint *)((uint)param_4 & (uint)puVar14);
  }
  bVar26 = false;
  if (bVar24) {
    uVar18 = (uint)puVar14 & 0xff;
    bVar31 = uVar18 == 0 && (bool)bVar31 ||
             uVar18 != 0 && (bool)((byte)((uint)unaff_r5 >> 0x20 - uVar18) & 1);
    puVar14 = (uint *)((uint)unaff_r9 & (int)unaff_r5 << uVar18);
    bVar23 = (int)puVar14 < 0;
    bVar26 = puVar14 == (uint *)0x0;
  }
  if (bVar26) {
    bVar31 = bVar6 >> 7;
    puVar14 = (uint *)0x0;
    bVar23 = false;
  }
  bVar24 = false;
  if (bVar26) {
    puVar14 = (uint *)((uint)unaff_r11 ^ (uint)puVar22);
    bVar23 = (int)puVar14 < 0;
    bVar24 = puVar14 == (uint *)0x0;
  }
  bVar26 = false;
  if (bVar24) {
    puVar14 = (uint *)((uint)unaff_r11 & (uint)in_r12);
    bVar23 = (int)puVar14 < 0;
    bVar26 = puVar14 == (uint *)0x0;
  }
  bVar24 = false;
  if (bVar26) {
    bVar31 = bVar7 >> 7;
    puVar14 = (uint *)((uint)unaff_lr & uVar21);
    bVar23 = (int)puVar14 < 0;
    bVar24 = puVar14 == (uint *)0x0;
  }
  bVar26 = false;
  if (bVar24) {
    puVar14 = (uint *)((uint)unaff_r11 & (uint)puVar14);
    bVar23 = (int)puVar14 < 0;
    bVar26 = puVar14 == (uint *)0x0;
  }
  bVar24 = false;
  if (bVar26) {
    puVar14 = (uint *)((uint)unaff_r8 & (uint)puVar22);
    bVar23 = (int)puVar14 < 0;
    bVar24 = puVar14 == (uint *)0x0;
  }
  if (bVar24) {
    puVar14 = (uint *)0x0;
  }
  if ((bool)bVar31 && !bVar24) {
    puVar14 = (uint *)((uint)param_3 & (uint)in_r12);
  }
  bVar26 = false;
  if (bVar24) {
    uVar18 = (uint)puVar22 & ((uint)unaff_r10 ^ (int)puVar14 << ((uint)puVar14 & 0xff));
    uVar18 = (uint)puVar22 &
             ((uint)unaff_r11 ^
             (int)unaff_r5 << ((uint)puVar22 & ((uint)unaff_lr ^ uVar18 << (uVar18 & 0xff)) & 0xff))
             & 0xff;
    bVar31 = uVar18 == 0 && (bool)bVar31 ||
             uVar18 != 0 && (bool)((byte)((uint)unaff_r8 >> 0x20 - uVar18) & 1);
    puVar14 = (uint *)((uint)puVar22 ^ (int)unaff_r8 << uVar18);
    bVar23 = (int)puVar14 < 0;
    bVar26 = puVar14 == (uint *)0x0;
  }
  if (bVar26) {
    bVar31 = bVar13 >> 7;
    puVar14 = (uint *)0x0;
    bVar23 = false;
  }
  bVar24 = false;
  if (bVar26) {
    puVar14 = (uint *)((uint)param_3 & (uint)puVar22);
    bVar23 = (int)puVar14 < 0;
    bVar24 = puVar14 == (uint *)0x0;
  }
  bVar26 = false;
  if (bVar24) {
    puVar14 = (uint *)((uint)unaff_r11 &
                      ((uint)unaff_r7 ^ (int)param_3 << ((uint)puVar22 & (uint)in_r12 & 0xff)));
    bVar23 = (int)puVar14 < 0;
    bVar26 = puVar14 == (uint *)0x0;
  }
  bVar24 = false;
  if (bVar26) {
    puVar14 = (uint *)((uint)unaff_r11 & ((uint)unaff_r6 ^ (uint)in_r12));
    bVar23 = (int)puVar14 < 0;
    bVar24 = puVar14 == (uint *)0x0;
  }
  if (bVar24) {
    bVar31 = 1;
    in_OV = SBORROW4((int)puVar22,(int)puVar22);
    puVar14 = (uint *)0x0;
    bVar23 = false;
  }
  bVar26 = false;
  if (bVar24) {
    puVar14 = (uint *)((uint)unaff_r11 &
                      ((uint)param_4 ^ (int)puVar22 >> ((uint)param_3 & (uint)in_r12 & 0xff)));
    bVar23 = (int)puVar14 < 0;
    bVar26 = puVar14 == (uint *)0x0;
  }
  bVar24 = false;
  if (bVar26) {
    puVar14 = (uint *)((uint)unaff_r11 & ((uint)param_4 ^ (int)unaff_r6 >> ((uint)puVar14 & 0xff)));
    bVar23 = (int)puVar14 < 0;
    bVar24 = puVar14 == (uint *)0x0;
  }
  bVar26 = false;
  if (bVar24) {
    bVar31 = (byte)(((uint)param_3 & (uint)in_r12) >> 0x1f);
    puVar14 = (uint *)((uint)unaff_r9 & (int)((uint)param_3 & (uint)in_r12) >> 0x20);
    bVar23 = (int)puVar14 < 0;
    bVar26 = puVar14 == (uint *)0x0;
  }
  bVar24 = false;
  if (bVar26) {
    uVar18 = (uint)puVar22 & (uint)puVar14 & 0xff;
    bVar31 = uVar18 == 0 && (bool)bVar31 ||
             uVar18 != 0 && (bool)((byte)(0x84bb24e >> uVar18 - 1) & 1);
    puVar14 = (uint *)((uint)in_r12 & 0x84bb24eU >> uVar18);
    bVar23 = (int)puVar14 < 0;
    bVar24 = puVar14 == (uint *)0x0;
  }
  bVar26 = false;
  if (bVar24) {
    bVar31 = bVar6 >> 7;
    puVar14 = (uint *)((uint)unaff_r8 & (int)unaff_r6 >> 0x20);
    bVar23 = (int)puVar14 < 0;
    bVar26 = puVar14 == (uint *)0x0;
  }
  bVar24 = false;
  if (bVar26) {
    puVar14 = (uint *)((uint)unaff_lr & (uint)puVar22);
    bVar23 = (int)puVar14 < 0;
    bVar24 = puVar14 == (uint *)0x0;
  }
  if (bVar24) {
    bVar31 = bVar7 >> 7;
    bVar23 = (int)unaff_r8 < 0;
    puVar14 = unaff_r8;
  }
  bVar24 = bVar24 && unaff_r8 == (uint *)0x0;
  if (bVar24) {
    bVar31 = bVar10 >> 7;
    bVar23 = (int)in_r12 < 0;
    puVar14 = in_r12;
  }
  bVar26 = false;
  if (bVar24 && in_r12 == (uint *)0x0) {
    puVar14 = (uint *)((uint)unaff_r10 ^ (uint)puVar22);
    bVar23 = (int)puVar14 < 0;
    bVar26 = puVar14 == (uint *)0x0;
  }
  if (bVar26) {
    puVar14 = (uint *)((uint)in_r12 & (uint)unaff_r5 >> ((uint)puVar14 & 0xff));
  }
  if ((bool)bVar31 && !bVar26) {
    puVar14 = (uint *)((uint)param_4 & (uint)in_r12);
  }
  bVar24 = false;
  if (bVar26) {
    uVar18 = (uint)puVar14 & 0xff;
    bVar31 = uVar18 == 0 && (bool)bVar31 ||
             uVar18 != 0 && (bool)((byte)((uint)register0x00000054 >> uVar18 - 1) & 1);
    puVar14 = (uint *)((uint)unaff_r9 ^ (uint)register0x00000054 >> uVar18);
    bVar23 = (int)puVar14 < 0;
    bVar24 = puVar14 == (uint *)0x0;
  }
  bVar26 = false;
  if (bVar24) {
    uVar18 = (uint)puVar22 & (uint)puVar14 & 0xff;
    bVar31 = uVar18 == 0 && (bool)bVar31 ||
             uVar18 != 0 && (bool)((byte)((uint)unaff_r7 >> uVar18 - 1) & 1);
    puVar14 = (uint *)((uint)unaff_r9 ^ (uint)unaff_r7 >> uVar18);
    bVar23 = (int)puVar14 < 0;
    bVar26 = puVar14 == (uint *)0x0;
  }
  bVar24 = false;
  if (bVar26) {
    bVar31 = (byte)(((uint)puVar22 & (uint)puVar14) >> 0x1f);
    puVar14 = (uint *)((uint)param_3 ^ (int)((uint)puVar22 & (uint)puVar14) >> 0x20);
    bVar23 = (int)puVar14 < 0;
    bVar24 = puVar14 == (uint *)0x0;
  }
  bVar26 = false;
  if (bVar24) {
    puVar14 = (uint *)((uint)unaff_r4 ^ (uint)puVar22);
    bVar23 = (int)puVar14 < 0;
    bVar26 = puVar14 == (uint *)0x0;
  }
  bVar24 = false;
  if (bVar26) {
    puVar14 = (uint *)((uint)unaff_r8 & (uint)puVar22);
    bVar23 = (int)puVar14 < 0;
    bVar24 = puVar14 == (uint *)0x0;
  }
  bVar26 = false;
  if (bVar24) {
    puVar14 = (uint *)((uint)unaff_r11 & (uint)unaff_r5);
    bVar23 = (int)puVar14 < 0;
    bVar26 = puVar14 == (uint *)0x0;
  }
  bVar24 = false;
  if (bVar26) {
    puVar14 = (uint *)((uint)unaff_r11 & ((uint)unaff_r11 ^ (uint)in_r12));
    bVar23 = (int)puVar14 < 0;
    bVar24 = puVar14 == (uint *)0x0;
  }
  bVar26 = false;
  if (bVar24) {
    puVar14 = (uint *)((uint)unaff_r11 & ((uint)unaff_r7 ^ (uint)in_r12));
    bVar23 = (int)puVar14 < 0;
    bVar26 = puVar14 == (uint *)0x0;
  }
  bVar24 = false;
  if (bVar26) {
    uVar18 = (uint)param_3 & (uint)unaff_r5 & 0xff;
    bVar31 = uVar18 == 0 && (bool)bVar31 ||
             uVar18 != 0 && (bool)((byte)((uint)unaff_r5 >> 0x20 - uVar18) & 1);
    puVar14 = (uint *)((uint)unaff_r4 & (int)unaff_r5 << uVar18);
    bVar23 = (int)puVar14 < 0;
    bVar24 = puVar14 == (uint *)0x0;
  }
  bVar26 = false;
  if (bVar24) {
    uVar18 = (uint)param_3 & (uint)puVar14 & 0xff;
    bVar31 = uVar18 == 0 && (bool)bVar31 ||
             uVar18 != 0 && (bool)((byte)((uint)in_r12 >> 0x20 - uVar18) & 1);
    puVar14 = (uint *)((uint)param_4 & (int)in_r12 << uVar18);
    bVar23 = (int)puVar14 < 0;
    bVar26 = puVar14 == (uint *)0x0;
  }
  bVar24 = false;
  if (bVar26) {
    uVar18 = (uint)param_3 & (uint)puVar14 & 0xff;
    bVar31 = uVar18 == 0 && (bool)bVar31 ||
             uVar18 != 0 && (bool)((byte)((uint)register0x00000054 >> 0x20 - uVar18) & 1);
    puVar14 = (uint *)((uint)param_3 & (uint)puVar14 & (int)register0x00000054 << uVar18);
    bVar23 = (int)puVar14 < 0;
    bVar24 = puVar14 == (uint *)0x0;
  }
  if ((bool)bVar31 && !bVar24) {
    puVar14 = (uint *)((uint)unaff_r4 & (uint)puVar14);
  }
  bVar26 = false;
  if (bVar24) {
    puVar14 = (uint *)((uint)unaff_r11 & (uint)unaff_r5);
    bVar23 = (int)puVar14 < 0;
    bVar26 = puVar14 == (uint *)0x0;
  }
  bVar24 = false;
  if (bVar26) {
    uVar18 = (uint)puVar14 & 0xff;
    bVar31 = uVar18 == 0 && (bool)bVar31 ||
             uVar18 != 0 && (bool)((byte)(0x84bb406 >> uVar18 - 1) & 1);
    puVar14 = (uint *)((uint)in_r12 & 0x84bb406U >> uVar18);
    bVar23 = (int)puVar14 < 0;
    bVar24 = puVar14 == (uint *)0x0;
  }
  bVar26 = false;
  if (bVar24) {
    puVar14 = (uint *)((uint)unaff_r11 & (uint)puVar14);
    bVar23 = (int)puVar14 < 0;
    bVar26 = puVar14 == (uint *)0x0;
  }
  bVar24 = false;
  if (bVar26) {
    puVar14 = (uint *)((uint)unaff_r11 & ((uint)puVar14 ^ 0x84bb40eU >> ((uint)puVar14 & 0xff)));
    bVar23 = (int)puVar14 < 0;
    bVar24 = puVar14 == (uint *)0x0;
  }
  bVar26 = false;
  if (bVar24) {
    uVar18 = (uint)puVar14 & 0xff;
    bVar31 = uVar18 == 0 && (bool)bVar31 ||
             uVar18 != 0 && (bool)((byte)((int)unaff_r6 >> uVar18 - 1) & 1);
    puVar14 = (uint *)((uint)unaff_r9 & (int)unaff_r6 >> uVar18);
    bVar23 = (int)puVar14 < 0;
    bVar26 = puVar14 == (uint *)0x0;
  }
  bVar24 = false;
  if (bVar26) {
    puVar14 = (uint *)((uint)unaff_r11 & (uint)puVar14);
    bVar23 = (int)puVar14 < 0;
    bVar24 = puVar14 == (uint *)0x0;
  }
  bVar26 = false;
  if (bVar24) {
    bVar31 = bVar3 >> 7;
    puVar14 = (uint *)((uint)unaff_lr & uVar16);
    bVar23 = (int)puVar14 < 0;
    bVar26 = puVar14 == (uint *)0x0;
  }
  bVar24 = false;
  if (bVar26) {
    bVar31 = puVar22 <= unaff_r10;
    in_OV = SBORROW4((int)unaff_r10,(int)puVar22);
    puVar14 = (uint *)((int)unaff_r10 - (int)puVar22);
    bVar23 = (int)puVar14 < 0;
    bVar24 = puVar14 == (uint *)0x0;
  }
  bVar26 = false;
  if (bVar24) {
    uVar18 = (uint)puVar22 &
             ((uint)unaff_lr ^
             (uint)in_r12 >> ((uint)puVar22 & ((uint)in_r12 ^ (uint)puVar2) & 0xff)) & 0xff;
    bVar31 = uVar18 == 0 && (bool)bVar31 ||
             uVar18 != 0 && (bool)((byte)((uint)in_r12 >> uVar18 - 1) & 1);
    puVar14 = (uint *)((uint)unaff_r11 ^ (uint)in_r12 >> uVar18);
    bVar23 = (int)puVar14 < 0;
    bVar26 = puVar14 == (uint *)0x0;
  }
  bVar24 = false;
  if (bVar26) {
    uVar18 = (uint)puVar22 & (uint)puVar14 & 0xff;
    bVar31 = uVar18 == 0 && (bool)bVar31 ||
             uVar18 != 0 && (bool)((byte)((uint)in_r12 >> uVar18 - 1) & 1);
    puVar14 = (uint *)((uint)in_r12 >> uVar18 ^ 0x84bb48e);
    bVar23 = (int)puVar14 < 0;
    bVar24 = puVar14 == (uint *)0x0;
  }
  bVar26 = false;
  if (bVar24) {
    uVar18 = (uint)unaff_r4 & 0xae;
    bVar31 = uVar18 == 0 && (bool)bVar31 ||
             uVar18 != 0 && (bool)((byte)((uint)register0x00000054 >> 0x20 - uVar18) & 1);
    puVar14 = (uint *)((uint)param_4 ^ (int)register0x00000054 << uVar18);
    bVar23 = (int)puVar14 < 0;
    bVar26 = puVar14 == (uint *)0x0;
  }
  bVar24 = false;
  if (bVar26) {
    uVar18 = (uint)param_3 & (uint)puVar14 & 0xff;
    bVar31 = uVar18 == 0 && (bool)bVar31 ||
             uVar18 != 0 && (bool)((byte)((uint)unaff_r7 >> 0x20 - uVar18) & 1);
    puVar14 = (uint *)((uint)puVar22 ^ (int)unaff_r7 << uVar18);
    bVar23 = (int)puVar14 < 0;
    bVar24 = puVar14 == (uint *)0x0;
  }
  bVar26 = false;
  if (bVar24) {
    puVar14 = (uint *)((uint)param_3 & (uint)puVar22);
    bVar23 = (int)puVar14 < 0;
    bVar26 = puVar14 == (uint *)0x0;
  }
  if (bVar26) {
    bVar31 = bVar30 >> 7;
    puVar14 = (uint *)0x0;
    bVar23 = false;
  }
  bVar24 = false;
  if (bVar26) {
    uVar18 = (uint)puVar22 & (uint)puVar14 & 0xff;
    bVar31 = uVar18 == 0 && (bool)bVar31 ||
             uVar18 != 0 && (bool)((byte)((uint)unaff_r9 >> 0x20 - uVar18) & 1);
    puVar14 = (uint *)((uint)unaff_r7 & (int)unaff_r9 << uVar18);
    bVar23 = (int)puVar14 < 0;
    bVar24 = puVar14 == (uint *)0x0;
  }
  if (bVar24) {
    bVar31 = bVar8 >> 7;
    puVar14 = (uint *)0x0;
    bVar23 = false;
  }
  if ((bool)bVar31 && !bVar24) {
    puVar14 = (uint *)((uint)param_4 & (uint)puVar14);
  }
  if (bVar24) {
    bVar31 = bVar11 >> 7;
    puVar14 = (uint *)0x0;
    bVar23 = false;
  }
  bVar26 = false;
  if (bVar24) {
    puVar14 = (uint *)((uint)param_4 & (uint)puVar22);
    bVar23 = (int)puVar14 < 0;
    bVar26 = puVar14 == (uint *)0x0;
  }
  if (bVar26) {
    bVar31 = bVar6 >> 7;
    puVar14 = (uint *)0x0;
    bVar23 = false;
  }
  if (bVar23) {
    puVar14 = (uint *)((uint)unaff_r4 & (uint)unaff_r5 & (int)unaff_r4 << ((uint)puVar14 & 0xff));
  }
  bVar24 = false;
  if (bVar26) {
    uVar18 = (uint)puVar14 & 0xff;
    bVar31 = uVar18 == 0 && (bool)bVar31 ||
             uVar18 != 0 && (bool)((byte)((uint)register0x00000054 >> 0x20 - uVar18) & 1);
    puVar14 = (uint *)((uint)unaff_r9 & (int)register0x00000054 << uVar18);
    bVar23 = (int)puVar14 < 0;
    bVar24 = puVar14 == (uint *)0x0;
  }
  if (bVar23) {
    puVar14 = (uint *)((uint)unaff_r4 & (uint)puVar14);
  }
  if (bVar24) {
    puVar14 = unaff_r4;
  }
  if (bVar23) {
    puVar14 = (uint *)((uint)unaff_r4 & (uint)puVar14);
  }
  if (bVar24) {
    puVar14 = unaff_r11;
  }
  if (bVar23) {
    puVar14 = (uint *)((uint)unaff_r4 & (uint)puVar14);
  }
  bVar26 = false;
  if (bVar24) {
    uVar18 = (uint)puVar14 & 0xff;
    bVar31 = uVar18 == 0 && (bool)bVar31 ||
             uVar18 != 0 && (bool)((byte)((uint)puVar14 >> 0x20 - uVar18) & 1);
    puVar14 = (uint *)((uint)register0x00000054 & (int)puVar14 << uVar18);
    bVar23 = (int)puVar14 < 0;
    bVar26 = puVar14 == (uint *)0x0;
  }
  bVar24 = false;
  if (bVar26) {
    puVar14 = (uint *)((uint)unaff_r4 ^ (uint)param_3 & (uint)puVar22);
    bVar23 = (int)puVar14 < 0;
    bVar24 = puVar14 == (uint *)0x0;
  }
  bVar26 = false;
  if (bVar24) {
    uVar18 = (int)unaff_r5 - (int)param_3 & 0xff;
    bVar31 = uVar18 == 0 && (bool)bVar31 ||
             uVar18 != 0 && (bool)((byte)((uint)param_3 >> uVar18 - 1) & 1);
    puVar14 = (uint *)((int)unaff_r5 - (int)param_3 ^ (uint)param_3 >> uVar18);
    bVar23 = (int)puVar14 < 0;
    bVar26 = puVar14 == (uint *)0x0;
  }
  bVar24 = false;
  if (bVar26) {
    uVar18 = (int)puVar14 - (int)param_3 & 0xff;
    bVar31 = uVar18 == 0 && (bool)bVar31 ||
             uVar18 != 0 && (bool)((byte)((uint)unaff_r9 >> uVar18 - 1) & 1);
    puVar14 = (uint *)((uint)param_3 ^ (uint)unaff_r9 >> uVar18);
    bVar23 = (int)puVar14 < 0;
    bVar24 = puVar14 == (uint *)0x0;
  }
  bVar26 = false;
  if (bVar24) {
    uVar18 = (int)puVar14 - (int)param_3 & 0xff;
    bVar31 = uVar18 == 0 && (bool)bVar31 ||
             uVar18 != 0 && (bool)((byte)((uint)unaff_r5 >> uVar18 - 1) & 1);
    puVar14 = (uint *)((uint)unaff_r4 ^ (uint)unaff_r5 >> uVar18);
    bVar23 = (int)puVar14 < 0;
    bVar26 = puVar14 == (uint *)0x0;
  }
  bVar24 = false;
  if (bVar26) {
    bVar31 = in_r12 <= param_4;
    in_OV = SBORROW4((int)param_4,(int)in_r12);
    puVar14 = (uint *)((int)param_4 - (int)in_r12);
    bVar23 = (int)puVar14 < 0;
    bVar24 = puVar14 == (uint *)0x0;
  }
  if (bVar24) {
    bVar31 = 0;
    bVar23 = (int)unaff_r4 < 0;
    puVar14 = unaff_r4;
  }
  bVar26 = false;
  if (bVar24 && unaff_r4 == (uint *)0x0) {
    bVar31 = puVar14 <= param_4;
    in_OV = SBORROW4((int)param_4,(int)puVar14);
    puVar14 = (uint *)((int)param_4 - (int)puVar14);
    bVar23 = (int)puVar14 < 0;
    bVar26 = puVar14 == (uint *)0x0;
  }
  if (bVar26) {
    puVar14 = (uint *)((int)unaff_r5 - ((int)unaff_r9 >> 0x20 ^ 0x84bb60eU));
  }
  if (bVar26) {
    puVar14 = (uint *)0x0;
    bVar23 = false;
  }
  bVar24 = false;
  if (bVar26) {
    uVar18 = (int)unaff_r5 - ((uint)unaff_r8 ^ 0x84bb636 << ((int)unaff_r5 - (int)in_r12 & 0xffU)) &
             0xff;
    bVar31 = uVar18 == 0 && (bool)bVar31 ||
             uVar18 != 0 && (bool)((byte)((uint)register0x00000054 >> 0x20 - uVar18) & 1);
    puVar14 = (uint *)((uint)unaff_lr & (int)register0x00000054 << uVar18);
    bVar23 = (int)puVar14 < 0;
    bVar24 = puVar14 == (uint *)0x0;
  }
  bVar11 = (byte)((uint)unaff_r8 >> 0x18);
  if (bVar24) {
    bVar31 = bVar11 >> 7;
    bVar23 = (int)puVar22 < 0;
    puVar14 = puVar22;
  }
  bVar26 = false;
  if (bVar24 && puVar22 == (uint *)0x0) {
    bVar31 = in_r12 <= param_4;
    in_OV = SBORROW4((int)param_4,(int)in_r12);
    puVar14 = (uint *)((int)param_4 - (int)in_r12);
    bVar23 = (int)puVar14 < 0;
    bVar26 = puVar14 == (uint *)0x0;
  }
  bVar24 = false;
  if (bVar26) {
    uVar18 = (uint)puVar14 & 0xff;
    bVar31 = uVar18 == 0 && (bool)bVar31 ||
             uVar18 != 0 && (bool)((byte)((uint)unaff_r11 >> 0x20 - uVar18) & 1);
    puVar14 = (uint *)((uint)param_3 & (int)unaff_r11 << uVar18);
    bVar23 = (int)puVar14 < 0;
    bVar24 = puVar14 == (uint *)0x0;
  }
  bVar26 = false;
  if (bVar24) {
    bVar31 = puVar14 <= param_4;
    in_OV = SBORROW4((int)param_4,(int)puVar14);
    puVar14 = (uint *)((int)param_4 - (int)puVar14);
    bVar23 = (int)puVar14 < 0;
    bVar26 = puVar14 == (uint *)0x0;
  }
  if (bVar26) {
    bVar31 = true;
    in_OV = '\0';
    bVar23 = (int)unaff_r5 < 0;
    puVar14 = unaff_r5;
  }
  bVar24 = false;
  if (bVar26 && unaff_r5 == (uint *)0x0) {
    uVar18 = (int)in_r12 - (int)puVar22 & 0xff;
    bVar31 = uVar18 == 0 && (bool)bVar31 ||
             uVar18 != 0 && (bool)((byte)((int)unaff_r5 >> uVar18 - 1) & 1);
    puVar14 = (uint *)((uint)unaff_r9 & (int)unaff_r5 >> uVar18);
    bVar23 = (int)puVar14 < 0;
    bVar24 = puVar14 == (uint *)0x0;
  }
  bVar26 = false;
  if (bVar24) {
    bVar31 = bVar4 >> 7;
    puVar14 = (uint *)((uint)unaff_r9 & uVar1);
    bVar23 = (int)puVar14 < 0;
    bVar26 = puVar14 == (uint *)0x0;
  }
  if (bVar26) {
    bVar31 = false;
    puVar14 = (uint *)0x0;
    bVar23 = false;
  }
  if ((bool)bVar31 && !bVar26) {
    puVar14 = (uint *)0x0;
  }
  uVar18 = (int)unaff_r8 >> 0x20;
  bVar24 = false;
  if (bVar26) {
    bVar31 = bVar11 >> 7;
    puVar14 = (uint *)((uint)unaff_r5 & uVar18);
    bVar23 = (int)puVar14 < 0;
    bVar24 = puVar14 == (uint *)0x0;
  }
  bVar26 = false;
  if (bVar24) {
    uVar19 = (int)unaff_r8 - (0x84bb78e - (int)register0x00000054);
    uVar20 = (int)puVar22 << (uVar19 & 0xff);
    bVar31 = uVar20 <= uVar19;
    in_OV = SBORROW4(uVar19,uVar20);
    puVar14 = (uint *)(uVar19 - uVar20);
    bVar23 = (int)puVar14 < 0;
    bVar26 = puVar14 == (uint *)0x0;
  }
  if (bVar26) {
    bVar31 = 1;
    in_OV = '\0';
    bVar23 = (int)unaff_r5 < 0;
    puVar14 = unaff_r5;
  }
  bVar26 = bVar26 && unaff_r5 == (uint *)0x0;
  if (bVar26) {
    bVar31 = 1;
    in_OV = '\0';
    bVar23 = (int)param_4 < 0;
    puVar14 = param_4;
  }
  bVar26 = bVar26 && param_4 == (uint *)0x0;
  if (bVar26) {
    bVar31 = 1;
    in_OV = '\0';
    bVar23 = (int)param_4 < 0;
    puVar14 = param_4;
  }
  bVar24 = false;
  if (bVar26 && param_4 == (uint *)0x0) {
    bVar31 = unaff_r6 <= param_3;
    in_OV = SBORROW4((int)param_3,(int)unaff_r6);
    puVar14 = (uint *)((int)param_3 - (int)unaff_r6);
    bVar23 = (int)puVar14 < 0;
    bVar24 = puVar14 == (uint *)0x0;
  }
  bVar26 = false;
  if (bVar24) {
    puVar14 = (uint *)((uint)unaff_r11 >> ((int)unaff_r5 - (int)puVar14 & 0xffU));
    bVar31 = puVar14 <= param_4;
    in_OV = SBORROW4((int)param_4,(int)puVar14);
    puVar14 = (uint *)((int)param_4 - (int)puVar14);
    bVar23 = (int)puVar14 < 0;
    bVar26 = puVar14 == (uint *)0x0;
  }
  bVar24 = false;
  if (bVar26) {
    puVar14 = (uint *)(0x84bb806 << ((int)unaff_r8 - (int)puVar14 & 0xffU));
    bVar31 = puVar14 <= param_4;
    in_OV = SBORROW4((int)param_4,(int)puVar14);
    puVar14 = (uint *)((int)param_4 - (int)puVar14);
    bVar23 = (int)puVar14 < 0;
    bVar24 = puVar14 == (uint *)0x0;
  }
  if (bVar24) {
    bVar23 = (int)unaff_r11 < 0;
    puVar14 = unaff_r11;
  }
  bVar26 = false;
  if (bVar24 && unaff_r11 == (uint *)0x0) {
    bVar31 = unaff_r5 <= param_4;
    in_OV = SBORROW4((int)param_4,(int)unaff_r5);
    puVar14 = (uint *)((int)param_4 - (int)unaff_r5);
    bVar23 = (int)puVar14 < 0;
    bVar26 = puVar14 == (uint *)0x0;
  }
  bVar24 = false;
  if (bVar26) {
    puVar14 = (uint *)((int)unaff_r5 - ((uint)unaff_r8 >> ((uint)puVar14 & 0xff)));
    bVar31 = puVar14 <= param_4;
    in_OV = SBORROW4((int)param_4,(int)puVar14);
    puVar14 = (uint *)((int)param_4 - (int)puVar14);
    bVar23 = (int)puVar14 < 0;
    bVar24 = puVar14 == (uint *)0x0;
  }
  bVar26 = false;
  if (bVar24) {
    puVar14 = (uint *)((int)unaff_r5 - (0x84bb836U >> ((uint)puVar14 & 0xff)));
    bVar31 = puVar14 <= param_4;
    in_OV = SBORROW4((int)param_4,(int)puVar14);
    puVar14 = (uint *)((int)param_4 - (int)puVar14);
    bVar23 = (int)puVar14 < 0;
    bVar26 = puVar14 == (uint *)0x0;
  }
  if (bVar26) {
    bVar23 = (int)unaff_r10 < 0;
    puVar14 = unaff_r10;
  }
  bVar24 = false;
  if (bVar26 && unaff_r10 == (uint *)0x0) {
    bVar31 = bVar11 >> 7;
    puVar14 = (uint *)((uint)unaff_r4 & uVar18);
    bVar23 = (int)puVar14 < 0;
    bVar24 = puVar14 == (uint *)0x0;
  }
  bVar26 = false;
  if (bVar24) {
    bVar31 = bVar13 >> 7;
    puVar14 = (uint *)((uint)unaff_r4 & (int)param_4 >> 0x20);
    bVar23 = (int)puVar14 < 0;
    bVar26 = puVar14 == (uint *)0x0;
  }
  bVar24 = false;
  if (bVar26) {
    bVar31 = bVar30 >> 7;
    puVar14 = (uint *)((uint)puVar22 & (uint)puVar2);
    bVar23 = (int)puVar14 < 0;
    bVar24 = puVar14 == (uint *)0x0;
  }
  bVar26 = false;
  if (bVar24) {
    uVar20 = (int)puVar14 - (int)puVar22 & 0xff;
    bVar31 = uVar20 == 0 && (bool)bVar31 ||
             uVar20 != 0 && (bool)((byte)((uint)unaff_lr >> uVar20 - 1) & 1);
    puVar14 = (uint *)((uint)unaff_r5 & (uint)unaff_lr >> uVar20);
    bVar23 = (int)puVar14 < 0;
    bVar26 = puVar14 == (uint *)0x0;
  }
  if (bVar26) {
    puVar14 = (uint *)((uint)in_r12 & (int)unaff_r4 << ((uint)unaff_lr & 0xff));
  }
  if ((bool)bVar31 && !bVar26) {
    puVar14 = (uint *)((int)in_r12 - (int)puVar14);
  }
  if (bVar26) {
    bVar31 = bVar4 >> 7;
    puVar14 = (uint *)0x0;
    bVar23 = false;
  }
  bVar24 = false;
  if (bVar26) {
    uVar20 = (uint)puVar14 & 0xff;
    bVar31 = uVar20 == 0 && (bool)bVar31 ||
             uVar20 != 0 && (bool)((byte)((uint)unaff_r4 >> 0x20 - uVar20) & 1);
    puVar14 = (uint *)((uint)unaff_r4 & (int)unaff_r4 << uVar20);
    bVar23 = (int)puVar14 < 0;
    bVar24 = puVar14 == (uint *)0x0;
  }
  if (bVar23) {
    puVar14 = (uint *)((int)param_4 -
                      (((int)unaff_r4 << ((uint)puVar14 & 0xff)) + (uint)!(bool)bVar31));
  }
  if (bVar24) {
    bVar31 = bVar5 >> 7;
    puVar14 = (uint *)0x0;
    bVar23 = false;
  }
  if (bVar23) {
    puVar14 = (uint *)((int)unaff_r4 - ((int)unaff_r8 + (uint)!(bool)bVar31));
  }
  if (bVar24) {
    puVar14 = (uint *)0x0;
    bVar23 = false;
  }
  bVar26 = false;
  if (bVar24) {
    bVar31 = unaff_r5 <= param_4;
    in_OV = SBORROW4((int)param_4,(int)unaff_r5);
    puVar14 = (uint *)((int)param_4 - (int)unaff_r5);
    bVar23 = (int)puVar14 < 0;
    bVar26 = puVar14 == (uint *)0x0;
  }
  bVar24 = false;
  if (bVar26) {
    puVar14 = (uint *)((uint)unaff_r6 ^ (int)puVar22 << ((uint)puVar14 & 0xff));
    bVar31 = puVar14 <= param_4;
    in_OV = SBORROW4((int)param_4,(int)puVar14);
    puVar14 = (uint *)((int)param_4 - (int)puVar14);
    bVar23 = (int)puVar14 < 0;
    bVar24 = puVar14 == (uint *)0x0;
  }
  bVar26 = false;
  if (bVar24) {
    puVar14 = (uint *)((uint)unaff_r5 ^ (int)unaff_r8 << ((uint)puVar14 & 0xff));
    bVar31 = puVar14 <= param_4;
    in_OV = SBORROW4((int)param_4,(int)puVar14);
    puVar14 = (uint *)((int)param_4 - (int)puVar14);
    bVar23 = (int)puVar14 < 0;
    bVar26 = puVar14 == (uint *)0x0;
  }
  if (bVar26) {
    bVar23 = false;
    puVar14 = (uint *)((uint)unaff_r9 ^
                      (int)in_r12 <<
                      (((uint)unaff_r11 ^ (int)param_3 << ((int)in_r12 - (int)param_4 & 0xffU)) -
                       (int)param_4 & 0xff));
  }
  if ((bool)bVar31 && !bVar26) {
    puVar14 = (uint *)((int)puVar14 - (int)puVar22);
  }
  bVar24 = false;
  if (bVar26) {
    uVar20 = (uint)puVar14 & 0xff;
    bVar31 = uVar20 == 0 && (bool)bVar31 ||
             uVar20 != 0 && (bool)((byte)((uint)unaff_r10 >> 0x20 - uVar20) & 1);
    puVar14 = (uint *)((uint)puVar22 ^ (int)unaff_r10 << uVar20);
    bVar23 = (int)puVar14 < 0;
    bVar24 = puVar14 == (uint *)0x0;
  }
  if (bVar24) {
    bVar23 = (int)unaff_lr < 0;
    puVar14 = unaff_lr;
  }
  bVar26 = false;
  if (bVar24 && unaff_lr == (uint *)0x0) {
    uVar20 = (uint)puVar14 & 0xff;
    bVar31 = uVar20 == 0 && (bool)bVar31 ||
             uVar20 != 0 && (bool)((byte)((uint)unaff_lr >> uVar20 - 1) & 1);
    puVar14 = (uint *)((uint)unaff_r4 & (uint)unaff_lr >> uVar20);
    bVar23 = (int)puVar14 < 0;
    bVar26 = puVar14 == (uint *)0x0;
  }
  bVar24 = false;
  if (bVar23) {
    puVar14 = (uint *)((int)unaff_r4 << ((uint)puVar14 & 0xff));
    bVar31 = puVar14 <= puVar22;
    in_OV = SBORROW4((int)puVar22,(int)puVar14);
    puVar14 = (uint *)((int)puVar22 - (int)puVar14);
    bVar24 = (int)puVar14 < 0;
    bVar26 = puVar14 == (uint *)0x0;
  }
  bVar12 = (byte)((uint)unaff_r9 >> 0x18);
  if (bVar26) {
    bVar31 = bVar12 >> 7;
    bVar24 = (int)puVar14 < 0;
  }
  bVar26 = bVar26 && puVar14 == (uint *)0x0;
  if (bVar24) {
    puVar14 = (uint *)((uint)register0x00000054 ^ (uint)puVar14);
  }
  if (bVar26) {
    bVar31 = bVar30 >> 7;
    bVar24 = (int)unaff_r8 < 0;
    puVar14 = unaff_r8;
  }
  if (bVar24) {
    puVar14 = (uint *)((uint)register0x00000054 ^ (uint)puVar14);
  }
  bVar23 = false;
  if (bVar26 && unaff_r8 == (uint *)0x0) {
    uVar20 = (uint)puVar14 & 0xff;
    bVar31 = uVar20 == 0 && (bool)bVar31 ||
             uVar20 != 0 && (bool)((byte)((uint)puVar22 >> uVar20 - 1) & 1);
    puVar14 = (uint *)((uint)unaff_r8 ^ (uint)puVar22 >> uVar20);
    bVar24 = (int)puVar14 < 0;
    bVar23 = puVar14 == (uint *)0x0;
  }
  if (bVar24) {
    puVar14 = (uint *)((uint)register0x00000054 ^ (uint)puVar14);
  }
  if (bVar23) {
    puVar14 = (uint *)((uint)unaff_r9 ^ (uint)puVar22 >> ((uint)puVar14 & 0xff));
  }
  if (bVar24) {
    puVar14 = (uint *)((uint)register0x00000054 ^ (uint)puVar14);
  }
  bVar26 = false;
  if (bVar23) {
    uVar20 = (uint)unaff_r8 & 0xff;
    bVar31 = uVar20 == 0 && (bool)bVar31 ||
             uVar20 != 0 && (bool)((byte)((uint)register0x00000054 >> uVar20 - 1) & 1);
    puVar14 = (uint *)((uint)unaff_r4 & (uint)register0x00000054 >> uVar20);
    bVar24 = (int)puVar14 < 0;
    bVar26 = puVar14 == (uint *)0x0;
  }
  bVar23 = false;
  if (bVar26) {
    uVar20 = (int)unaff_r4 << ((uint)puVar14 & 0xff);
    bVar31 = CARRY4((uint)unaff_r6,uVar20);
    in_OV = SCARRY4((int)unaff_r6,uVar20);
    puVar14 = (uint *)((int)unaff_r6 + uVar20);
    bVar24 = (int)puVar14 < 0;
    bVar23 = puVar14 == (uint *)0x0;
  }
  if (bVar23) {
    bVar31 = bVar8 >> 7;
    bVar24 = (int)unaff_r9 < 0;
    puVar14 = unaff_r9;
  }
  bVar26 = false;
  if (bVar23 && unaff_r9 == (uint *)0x0) {
    bVar31 = CARRY4((uint)unaff_r6,(uint)puVar14);
    in_OV = SCARRY4((int)unaff_r6,(int)puVar14);
    puVar14 = (uint *)((int)unaff_r6 + (int)puVar14);
    bVar24 = (int)puVar14 < 0;
    bVar26 = puVar14 == (uint *)0x0;
  }
  bVar23 = false;
  if (bVar26) {
    bVar31 = CARRY4((uint)unaff_r6,(uint)param_4);
    in_OV = SCARRY4((int)unaff_r6,(int)param_4);
    puVar14 = (uint *)((int)unaff_r6 + (int)param_4);
    bVar24 = (int)puVar14 < 0;
    bVar23 = puVar14 == (uint *)0x0;
  }
  if (bVar23) {
    puVar14 = (uint *)0x0;
    bVar24 = false;
  }
  bVar26 = false;
  if (bVar23) {
    puVar14 = (uint *)((uint)in_r12 ^ (uint)unaff_r5);
    bVar24 = (int)puVar14 < 0;
    bVar26 = puVar14 == (uint *)0x0;
  }
  bVar23 = false;
  if (bVar26) {
    puVar14 = (uint *)((uint)in_r12 ^ (uint)param_4 ^ (int)unaff_r5 << ((uint)puVar14 & 0xff));
    bVar24 = (int)puVar14 < 0;
    bVar23 = puVar14 == (uint *)0x0;
  }
  bVar26 = false;
  if (bVar23) {
    puVar14 = (uint *)((uint)in_r12 ^ (uint)puVar22 ^ (int)puVar22 << ((uint)puVar14 & 0xff));
    bVar24 = (int)puVar14 < 0;
    bVar26 = puVar14 == (uint *)0x0;
  }
  if (bVar26) {
    puVar14 = (uint *)0x0;
    bVar24 = false;
  }
  bVar23 = false;
  if (bVar26) {
    bVar31 = CARRY4((uint)unaff_r6,(uint)unaff_r5);
    in_OV = SCARRY4((int)unaff_r6,(int)unaff_r5);
    puVar14 = (uint *)((int)unaff_r6 + (int)unaff_r5);
    bVar24 = (int)puVar14 < 0;
    bVar23 = puVar14 == (uint *)0x0;
  }
  bVar26 = false;
  if (bVar23) {
    uVar20 = (uint)puVar14 & 0xff;
    bVar31 = uVar20 == 0 && (bool)bVar31 ||
             uVar20 != 0 && (bool)((byte)((uint)param_3 >> 0x20 - uVar20) & 1);
    puVar14 = (uint *)((uint)param_4 & (int)param_3 << uVar20);
    bVar24 = (int)puVar14 < 0;
    bVar26 = puVar14 == (uint *)0x0;
  }
  bVar23 = false;
  if (bVar26) {
    bVar31 = CARRY4((uint)unaff_r6,(uint)puVar14);
    in_OV = SCARRY4((int)unaff_r6,(int)puVar14);
    puVar14 = (uint *)((int)unaff_r6 + (int)puVar14);
    bVar24 = (int)puVar14 < 0;
    bVar23 = puVar14 == (uint *)0x0;
  }
  if (bVar23) {
    bVar31 = bVar9 >> 7;
    puVar14 = (uint *)0x0;
    bVar24 = false;
  }
  if ((bool)bVar31 && !bVar23) {
    puVar14 = (uint *)((int)puVar14 + 0x84bbbba);
  }
  bVar26 = false;
  if (bVar23) {
    uVar20 = (uint)puVar14 & 0xff;
    bVar31 = uVar20 == 0 && (bool)bVar31 ||
             uVar20 != 0 && (bool)((byte)((uint)unaff_lr >> 0x20 - uVar20) & 1);
    puVar14 = (uint *)((uint)param_4 & (int)unaff_lr << uVar20);
    bVar24 = (int)puVar14 < 0;
    bVar26 = puVar14 == (uint *)0x0;
  }
  bVar23 = false;
  if (bVar26) {
    bVar31 = CARRY4((uint)unaff_r6,(uint)puVar14);
    in_OV = SCARRY4((int)unaff_r6,(int)puVar14);
    puVar14 = (uint *)((int)unaff_r6 + (int)puVar14);
    bVar24 = (int)puVar14 < 0;
    bVar23 = puVar14 == (uint *)0x0;
  }
  if (bVar23) {
    puVar14 = (uint *)0x0;
    bVar24 = false;
  }
  bVar26 = false;
  if (bVar23) {
    puVar14 = (uint *)((uint)in_r12 ^ (uint)unaff_r5);
    bVar24 = (int)puVar14 < 0;
    bVar26 = puVar14 == (uint *)0x0;
  }
  bVar23 = false;
  if (bVar26) {
    puVar14 = (uint *)((uint)in_r12 ^
                      (uint)unaff_r8 ^ (int)register0x00000054 << ((uint)puVar14 & 0xff));
    bVar24 = (int)puVar14 < 0;
    bVar23 = puVar14 == (uint *)0x0;
  }
  bVar26 = false;
  if (bVar23) {
    puVar14 = (uint *)((uint)in_r12 ^ (uint)unaff_r6);
    bVar24 = (int)puVar14 < 0;
    bVar26 = puVar14 == (uint *)0x0;
  }
  if (bVar26) {
    in_OV = SBORROW4((int)unaff_r5,(int)unaff_r5);
    puVar14 = (uint *)0x0;
    bVar31 = 1;
    bVar24 = false;
  }
  bVar23 = false;
  if (bVar26) {
    bVar31 = unaff_r5 <= puVar22;
    in_OV = SBORROW4((int)puVar22,(int)unaff_r5);
    puVar14 = (uint *)((int)puVar22 - (int)unaff_r5);
    bVar24 = (int)puVar14 < 0;
    bVar23 = puVar14 == (uint *)0x0;
  }
  if (bVar23) {
    bVar31 = bVar4 >> 7;
    puVar14 = (uint *)0x0;
    bVar24 = false;
  }
  bVar26 = false;
  if (bVar23) {
    bVar31 = unaff_r5 <= puVar14;
    in_OV = SBORROW4((int)puVar14,(int)unaff_r5);
    puVar14 = (uint *)((int)puVar14 - (int)unaff_r5);
    bVar24 = (int)puVar14 < 0;
    bVar26 = puVar14 == (uint *)0x0;
  }
  bVar23 = false;
  if (bVar26) {
    bVar31 = unaff_r5 <= unaff_r10;
    in_OV = SBORROW4((int)unaff_r10,(int)unaff_r5);
    puVar14 = (uint *)((int)unaff_r10 - (int)unaff_r5);
    bVar24 = (int)puVar14 < 0;
    bVar23 = puVar14 == (uint *)0x0;
  }
  if (bVar23) {
    bVar24 = (int)unaff_r10 < 0;
    puVar14 = unaff_r10;
  }
  bVar26 = false;
  if (bVar23 && unaff_r10 == (uint *)0x0) {
    bVar31 = CARRY4((uint)unaff_r6,(uint)in_r12);
    in_OV = SCARRY4((int)unaff_r6,(int)in_r12);
    puVar14 = (uint *)((int)unaff_r6 + (int)in_r12);
    bVar24 = (int)puVar14 < 0;
    bVar26 = puVar14 == (uint *)0x0;
  }
  bVar23 = false;
  if (bVar26) {
    uVar20 = (uint)puVar22 ^ (uint)unaff_r10 >> ((uint)puVar14 & 0xff);
    bVar31 = CARRY4((uint)unaff_r6,uVar20);
    in_OV = SCARRY4((int)unaff_r6,uVar20);
    puVar14 = (uint *)((int)unaff_r6 + uVar20);
    bVar24 = (int)puVar14 < 0;
    bVar23 = puVar14 == (uint *)0x0;
  }
  bVar26 = false;
  if (bVar23) {
    uVar20 = (uint)param_3 ^ (int)puVar14 >> 0x20;
    bVar31 = CARRY4((uint)unaff_r6,uVar20);
    in_OV = SCARRY4((int)unaff_r6,uVar20);
    puVar14 = (uint *)((int)unaff_r6 + uVar20);
    bVar24 = (int)puVar14 < 0;
    bVar26 = puVar14 == (uint *)0x0;
  }
  bVar23 = false;
  if (bVar26) {
    uVar20 = (uint)puVar14 & 0xff;
    bVar31 = uVar20 == 0 && (bool)bVar31 ||
             uVar20 != 0 && (bool)((byte)((uint)unaff_r8 >> uVar20 - 1) & 1);
    puVar14 = (uint *)((uint)register0x00000054 & (uint)unaff_r8 >> uVar20);
    bVar24 = (int)puVar14 < 0;
    bVar23 = puVar14 == (uint *)0x0;
  }
  if (bVar23) {
    bVar31 = 1;
    in_OV = '\0';
    bVar24 = (int)param_4 < 0;
    puVar14 = param_4;
  }
  bVar26 = false;
  if (bVar23 && param_4 == (uint *)0x0) {
    bVar31 = CARRY4((uint)unaff_r6,(uint)unaff_r5);
    in_OV = SCARRY4((int)unaff_r6,(int)unaff_r5);
    puVar14 = (uint *)((int)unaff_r6 + (int)unaff_r5);
    bVar24 = (int)puVar14 < 0;
    bVar26 = puVar14 == (uint *)0x0;
  }
  bVar23 = false;
  if (bVar26) {
    uVar20 = (uint)puVar14 ^ uVar16;
    bVar31 = CARRY4((uint)unaff_r6,uVar20);
    in_OV = SCARRY4((int)unaff_r6,uVar20);
    puVar14 = (uint *)((int)unaff_r6 + uVar20);
    bVar24 = (int)puVar14 < 0;
    bVar23 = puVar14 == (uint *)0x0;
  }
  bVar26 = false;
  if (bVar23) {
    uVar20 = (uint)puVar14 ^ (int)in_r12 >> ((uint)puVar14 & 0xff);
    bVar31 = CARRY4((uint)unaff_r6,uVar20);
    in_OV = SCARRY4((int)unaff_r6,uVar20);
    puVar14 = (uint *)((int)unaff_r6 + uVar20);
    bVar24 = (int)puVar14 < 0;
    bVar26 = puVar14 == (uint *)0x0;
  }
  if (bVar26) {
    bVar24 = (int)param_4 < 0;
    puVar14 = param_4;
  }
  bVar23 = bVar26 && param_4 == (uint *)0x0;
  if (bVar23) {
    bVar31 = bVar8 >> 7;
    bVar24 = false;
    puVar14 = (uint *)0x0;
  }
  if ((bool)bVar31 && (!bVar26 || param_4 != (uint *)0x0)) {
    bVar31 = unaff_r6 <= in_r12;
    in_OV = SBORROW4((int)in_r12,(int)unaff_r6);
    puVar14 = (uint *)((int)in_r12 - (int)unaff_r6);
    bVar24 = (int)puVar14 < 0;
    bVar23 = puVar14 == (uint *)0x0;
  }
  bVar26 = false;
  if (bVar23) {
    puVar14 = (uint *)((int)unaff_r6 << ((uint)puVar14 & 0xff) & 0x84bbd36);
    bVar31 = unaff_r5 <= puVar14;
    in_OV = SBORROW4((int)puVar14,(int)unaff_r5);
    puVar14 = (uint *)((int)puVar14 - (int)unaff_r5);
    bVar24 = (int)puVar14 < 0;
    bVar26 = puVar14 == (uint *)0x0;
  }
  bVar23 = false;
  if (bVar26) {
    uVar20 = (uint)puVar14 & 0xff;
    bVar31 = uVar20 == 0 && (bool)bVar31 ||
             uVar20 != 0 && (bool)((byte)((uint)puVar14 >> 0x20 - uVar20) & 1);
    puVar14 = (uint *)((uint)param_3 & (int)puVar14 << uVar20);
    bVar24 = (int)puVar14 < 0;
    bVar23 = puVar14 == (uint *)0x0;
  }
  bVar26 = false;
  if (bVar23) {
    bVar31 = unaff_r5 <= puVar14;
    in_OV = SBORROW4((int)puVar14,(int)unaff_r5);
    puVar14 = (uint *)((int)puVar14 - (int)unaff_r5);
    bVar24 = (int)puVar14 < 0;
    bVar26 = puVar14 == (uint *)0x0;
  }
  if (bVar26) {
    bVar24 = (int)unaff_r6 < 0;
    puVar14 = unaff_r6;
  }
  bVar23 = false;
  if (bVar26 && unaff_r6 == (uint *)0x0) {
    bVar31 = bVar11 >> 7;
    puVar14 = (uint *)((uint)unaff_r4 & uVar18);
    bVar24 = (int)puVar14 < 0;
    bVar23 = puVar14 == (uint *)0x0;
  }
  if (bVar23) {
    bVar24 = (int)unaff_r11 < 0;
    puVar14 = unaff_r11;
  }
  bVar26 = false;
  if (bVar23 && unaff_r11 == (uint *)0x0) {
    bVar31 = CARRY4((uint)unaff_r5,(uint)unaff_r5);
    in_OV = SCARRY4((int)unaff_r5,(int)unaff_r5);
    puVar14 = (uint *)((int)unaff_r5 * 2);
    bVar24 = (int)puVar14 < 0;
    bVar26 = puVar14 == (uint *)0x0;
  }
  bVar23 = false;
  if (bVar26) {
    uVar20 = (int)puVar22 - ((int)unaff_r5 >> 0x20);
    bVar31 = CARRY4((uint)unaff_r5,uVar20);
    in_OV = SCARRY4((int)unaff_r5,uVar20);
    puVar14 = (uint *)((int)unaff_r5 + uVar20);
    bVar24 = (int)puVar14 < 0;
    bVar23 = puVar14 == (uint *)0x0;
  }
  bVar26 = false;
  if (bVar23) {
    uVar16 = (int)unaff_r5 - uVar16;
    bVar31 = CARRY4((uint)unaff_r5,uVar16);
    in_OV = SCARRY4((int)unaff_r5,uVar16);
    puVar14 = (uint *)((int)unaff_r5 + uVar16);
    bVar24 = (int)puVar14 < 0;
    bVar26 = puVar14 == (uint *)0x0;
  }
  if (bVar26) {
    puVar14 = (uint *)0x0;
    bVar24 = false;
  }
  bVar23 = false;
  if (bVar26) {
    bVar31 = CARRY4((uint)unaff_r6,(uint)unaff_r5);
    in_OV = SCARRY4((int)unaff_r6,(int)unaff_r5);
    puVar14 = (uint *)((int)unaff_r6 + (int)unaff_r5);
    bVar24 = (int)puVar14 < 0;
    bVar23 = puVar14 == (uint *)0x0;
  }
  bVar26 = false;
  if (bVar23) {
    puVar14 = (uint *)((uint)register0x00000054 ^ 0x84bbe4e);
    bVar24 = (int)puVar14 < 0;
    bVar26 = puVar14 == (uint *)0x0;
  }
  bVar23 = false;
  if (bVar26) {
    bVar31 = CARRY4((uint)unaff_r6,(uint)puVar14);
    in_OV = SCARRY4((int)unaff_r6,(int)puVar14);
    puVar14 = (uint *)((int)unaff_r6 + (int)puVar14);
    bVar24 = (int)puVar14 < 0;
    bVar23 = puVar14 == (uint *)0x0;
  }
  bVar26 = false;
  if (bVar23) {
    puVar14 = (uint *)((uint)unaff_r11 ^ (uint)unaff_lr);
    bVar24 = (int)puVar14 < 0;
    bVar26 = puVar14 == (uint *)0x0;
  }
  bVar23 = false;
  if (bVar26) {
    bVar31 = CARRY4((uint)unaff_r6,(uint)puVar14);
    in_OV = SCARRY4((int)unaff_r6,(int)puVar14);
    puVar14 = (uint *)((int)unaff_r6 + (int)puVar14);
    bVar24 = (int)puVar14 < 0;
    bVar23 = puVar14 == (uint *)0x0;
  }
  if (bVar23) {
    puVar14 = (uint *)0x0;
    bVar24 = false;
  }
  bVar26 = false;
  if (bVar23) {
    bVar31 = CARRY4((uint)unaff_r6,(uint)unaff_r5);
    in_OV = SCARRY4((int)unaff_r6,(int)unaff_r5);
    puVar14 = (uint *)((int)unaff_r6 + (int)unaff_r5);
    bVar24 = (int)puVar14 < 0;
    bVar26 = puVar14 == (uint *)0x0;
  }
  if (bVar26) {
    bVar31 = bVar30 >> 7;
    bVar24 = (int)unaff_r10 < 0;
    puVar14 = unaff_r10;
  }
  bVar23 = false;
  if (bVar26 && unaff_r10 == (uint *)0x0) {
    bVar31 = CARRY4((uint)unaff_r6,(uint)puVar14);
    in_OV = SCARRY4((int)unaff_r6,(int)puVar14);
    puVar14 = (uint *)((int)unaff_r6 + (int)puVar14);
    bVar24 = (int)puVar14 < 0;
    bVar23 = puVar14 == (uint *)0x0;
  }
  if (bVar23) {
    bVar31 = bVar8 >> 7;
    bVar24 = (int)unaff_r11 < 0;
    puVar14 = unaff_r11;
  }
  bVar26 = false;
  if (bVar23 && unaff_r11 == (uint *)0x0) {
    bVar31 = CARRY4((uint)unaff_r6,(uint)puVar14);
    in_OV = SCARRY4((int)unaff_r6,(int)puVar14);
    puVar14 = (uint *)((int)unaff_r6 + (int)puVar14);
    bVar24 = (int)puVar14 < 0;
    bVar26 = puVar14 == (uint *)0x0;
  }
  if (bVar26) {
    bVar31 = bVar9 >> 7;
    puVar14 = (uint *)0x84bbe96;
    bVar24 = false;
  }
  bVar26 = false;
  bVar23 = false;
  if ((bool)bVar31) {
    uVar16 = (int)unaff_r4 << ((uint)puVar14 & 0xff);
    bVar23 = CARRY4((uint)puVar14,uVar16);
    in_OV = SCARRY4((int)puVar14,uVar16);
    puVar14 = (uint *)((int)puVar14 + uVar16);
    bVar24 = (int)puVar14 < 0;
    bVar26 = puVar14 == (uint *)0x0;
  }
  bVar27 = false;
  if (bVar26) {
    uVar16 = (uint)puVar14 & 0xff;
    bVar23 = uVar16 == 0 && bVar23 ||
             uVar16 != 0 && (bool)((byte)((uint)unaff_r4 >> uVar16 - 1) & 1);
    puVar14 = (uint *)((uint)unaff_r6 & (uint)unaff_r4 >> uVar16);
    bVar24 = (int)puVar14 < 0;
    bVar27 = puVar14 == (uint *)0x0;
  }
  if (bVar27) {
    bVar23 = true;
    in_OV = '\0';
    bVar24 = (int)unaff_r8 < 0;
    puVar14 = unaff_r8;
  }
  bVar26 = false;
  if (bVar27 && unaff_r8 == (uint *)0x0) {
    uVar16 = (int)param_3 - (int)unaff_r5 & 0xff;
    bVar23 = uVar16 == 0 && bVar23 ||
             uVar16 != 0 && (bool)((byte)((int)unaff_r10 >> uVar16 - 1) & 1);
    puVar14 = (uint *)((uint)unaff_r5 & (int)unaff_r10 >> uVar16);
    bVar24 = (int)puVar14 < 0;
    bVar26 = puVar14 == (uint *)0x0;
  }
  bVar4 = (byte)param_3;
  bVar27 = false;
  bVar32 = bVar23;
  if (bVar26) {
    bVar32 = (bool)(bVar4 & 1);
    puVar14 = (uint *)((uint)unaff_r9 & ((uint)bVar23 << 0x1f | (uint)param_3 >> 1));
    bVar24 = (int)puVar14 < 0;
    bVar27 = puVar14 == (uint *)0x0;
  }
  bVar23 = false;
  bVar26 = bVar32;
  if (bVar27) {
    bVar26 = (bool)(bVar4 & 1);
    puVar14 = (uint *)((uint)unaff_r5 & ((uint)bVar32 << 0x1f | (uint)param_3 >> 1));
    bVar24 = (int)puVar14 < 0;
    bVar23 = puVar14 == (uint *)0x0;
  }
  bVar27 = false;
  if (bVar23) {
    uVar16 = (int)param_3 - (int)puVar14 & 0xff;
    bVar26 = uVar16 == 0 && bVar26 || uVar16 != 0 && (bool)((byte)((int)puVar22 >> uVar16 - 1) & 1);
    puVar14 = (uint *)((int)puVar22 >> uVar16 & 0x84bc026);
    bVar27 = puVar14 == (uint *)0x0;
    bVar24 = false;
  }
  if (bVar27) {
    in_OV = '\0';
    puVar14 = (uint *)0x0;
    bVar26 = true;
    bVar24 = false;
  }
  bVar23 = false;
  bVar32 = bVar26;
  if (bVar27) {
    bVar32 = (bool)((byte)unaff_r8 & 1);
    puVar14 = (uint *)((uint)unaff_r6 & ((uint)bVar26 << 0x1f | (uint)unaff_r8 >> 1));
    bVar24 = (int)puVar14 < 0;
    bVar23 = puVar14 == (uint *)0x0;
  }
  bVar26 = false;
  bVar27 = bVar32;
  if (bVar23) {
    bVar27 = (bool)((byte)unaff_r5 & 1);
    puVar14 = (uint *)((uint)unaff_r9 & ((uint)bVar32 << 0x1f | (uint)unaff_r5 >> 1));
    bVar24 = (int)puVar14 < 0;
    bVar26 = puVar14 == (uint *)0x0;
  }
  bVar23 = false;
  bVar32 = bVar27;
  if (bVar26) {
    bVar32 = (bool)(bVar29 & 1);
    puVar14 = (uint *)((uint)unaff_r4 & ((uint)bVar27 << 0x1f | (uint)unaff_r9 >> 1));
    bVar24 = (int)puVar14 < 0;
    bVar23 = puVar14 == (uint *)0x0;
  }
  if (bVar23) {
    in_OV = '\0';
    bVar32 = true;
    bVar24 = (int)in_r12 < 0;
    puVar14 = in_r12;
  }
  bVar26 = false;
  if (bVar23 && in_r12 == (uint *)0x0) {
    bVar32 = in_r12 <= param_3;
    in_OV = SBORROW4((int)param_3,(int)in_r12);
    puVar14 = (uint *)((int)param_3 - (int)in_r12);
    bVar24 = (int)puVar14 < 0;
    bVar26 = puVar14 == (uint *)0x0;
  }
  if (bVar26) {
    bVar24 = (int)unaff_r8 < 0;
    puVar14 = unaff_r8;
  }
  bVar23 = false;
  if (bVar26 && unaff_r8 == (uint *)0x0) {
    bVar32 = in_r12 <= param_3;
    in_OV = SBORROW4((int)param_3,(int)in_r12);
    puVar14 = (uint *)((int)param_3 - (int)in_r12);
    bVar24 = (int)puVar14 < 0;
    bVar23 = puVar14 == (uint *)0x0;
  }
  bVar26 = false;
  if (bVar23) {
    uVar16 = (uint)puVar14 & 0xff;
    bVar32 = uVar16 == 0 && bVar32 ||
             uVar16 != 0 && (bool)((byte)((uint)unaff_r8 >> uVar16 - 1) & 1);
    puVar14 = (uint *)((uint)unaff_r4 ^ (uint)unaff_r8 >> uVar16);
    bVar24 = (int)puVar14 < 0;
    bVar26 = puVar14 == (uint *)0x0;
  }
  if (bVar26) {
    bVar24 = (int)unaff_r9 < 0;
    puVar14 = unaff_r9;
  }
  bVar23 = false;
  if (bVar26 && unaff_r9 == (uint *)0x0) {
    bVar32 = param_4 <= unaff_r5;
    in_OV = SBORROW4((int)unaff_r5,(int)param_4);
    puVar14 = (uint *)((int)unaff_r5 - (int)param_4);
    bVar24 = (int)puVar14 < 0;
    bVar23 = puVar14 == (uint *)0x0;
  }
  bVar26 = false;
  if (bVar23) {
    uVar16 = (uint)puVar14 & 0xff;
    bVar32 = uVar16 == 0 && bVar32 ||
             uVar16 != 0 && (bool)((byte)((uint)register0x00000054 >> uVar16 - 1) & 1);
    puVar14 = (uint *)((uint)unaff_r8 ^ (uint)register0x00000054 >> uVar16);
    bVar24 = (int)puVar14 < 0;
    bVar26 = puVar14 == (uint *)0x0;
  }
  bVar23 = false;
  if (bVar26) {
    bVar32 = param_4 <= puVar14;
    in_OV = SBORROW4((int)puVar14,(int)param_4);
    puVar14 = (uint *)((int)puVar14 - (int)param_4);
    bVar24 = (int)puVar14 < 0;
    bVar23 = puVar14 == (uint *)0x0;
  }
  bVar26 = false;
  if (bVar23) {
    bVar32 = (bool)(bVar7 >> 7);
    puVar14 = (uint *)((uint)unaff_r6 ^ uVar21);
    bVar24 = (int)puVar14 < 0;
    bVar26 = puVar14 == (uint *)0x0;
  }
  bVar23 = false;
  if (bVar26) {
    bVar32 = param_4 <= puVar14;
    in_OV = SBORROW4((int)puVar14,(int)param_4);
    puVar14 = (uint *)((int)puVar14 - (int)param_4);
    bVar24 = (int)puVar14 < 0;
    bVar23 = puVar14 == (uint *)0x0;
  }
  bVar26 = false;
  if (bVar23) {
    bVar32 = (bool)(bVar7 >> 7);
    puVar14 = (uint *)((uint)in_r12 ^ uVar21);
    bVar24 = (int)puVar14 < 0;
    bVar26 = puVar14 == (uint *)0x0;
  }
  if (bVar26) {
    bVar24 = false;
    puVar14 = (uint *)((uint)unaff_r5 & 0x84bc236);
  }
  if (bVar32 && !bVar26) {
    bVar32 = CARRY4((uint)puVar14,(uint)unaff_r5);
    in_OV = SCARRY4((int)puVar14,(int)unaff_r5);
    puVar14 = (uint *)((int)puVar14 + (int)unaff_r5);
    bVar24 = (int)puVar14 < 0;
    bVar26 = puVar14 == (uint *)0x0;
  }
  bVar23 = false;
  if (bVar26) {
    bVar32 = CARRY4((uint)param_3,(uint)in_r12);
    in_OV = SCARRY4((int)param_3,(int)in_r12);
    puVar14 = (uint *)((int)param_3 + (int)in_r12);
    bVar24 = (int)puVar14 < 0;
    bVar23 = puVar14 == (uint *)0x0;
  }
  bVar26 = false;
  if (bVar23) {
    uVar16 = (int)param_3 - ((int)unaff_r11 << ((uint)puVar14 & 0xff));
    bVar32 = CARRY4((uint)param_3,uVar16);
    in_OV = SCARRY4((int)param_3,uVar16);
    puVar14 = (uint *)((int)param_3 + uVar16);
    bVar24 = (int)puVar14 < 0;
    bVar26 = puVar14 == (uint *)0x0;
  }
  bVar23 = false;
  if (bVar26) {
    bVar32 = CARRY4((uint)param_3,(uint)puVar22);
    in_OV = SCARRY4((int)param_3,(int)puVar22);
    puVar14 = (uint *)((int)param_3 + (int)puVar22);
    bVar24 = (int)puVar14 < 0;
    bVar23 = puVar14 == (uint *)0x0;
  }
  if (bVar23) {
    bVar32 = (bool)(bVar30 >> 7);
    bVar24 = (int)unaff_r9 < 0;
    puVar14 = unaff_r9;
  }
  bVar23 = bVar23 && unaff_r9 == (uint *)0x0;
  if (bVar23) {
    in_OV = SBORROW4((int)unaff_r5,(int)unaff_r5);
    puVar14 = (uint *)0x0;
    bVar32 = true;
    bVar24 = false;
  }
  bVar26 = false;
  if (bVar23) {
    uVar16 = (uint)puVar14 & 0xff;
    bVar32 = uVar16 == 0 && bVar32 ||
             uVar16 != 0 && (bool)((byte)((uint)unaff_r4 >> uVar16 - 1) & 1);
    puVar14 = (uint *)((uint)unaff_r9 ^ (uint)unaff_r4 >> uVar16);
    bVar24 = (int)puVar14 < 0;
    bVar26 = puVar14 == (uint *)0x0;
  }
  bVar23 = false;
  if (bVar26) {
    bVar32 = unaff_r5 <= puVar14;
    in_OV = SBORROW4((int)puVar14,(int)unaff_r5);
    puVar14 = (uint *)((int)puVar14 - (int)unaff_r5);
    bVar24 = (int)puVar14 < 0;
    bVar23 = puVar14 == (uint *)0x0;
  }
  if (bVar23) {
    bVar32 = (bool)(bVar13 >> 7);
    bVar24 = (int)unaff_r9 < 0;
    puVar14 = unaff_r9;
  }
  bVar26 = false;
  if (bVar23 && unaff_r9 == (uint *)0x0) {
    bVar32 = unaff_r5 <= puVar14;
    in_OV = SBORROW4((int)puVar14,(int)unaff_r5);
    puVar14 = (uint *)((int)puVar14 - (int)unaff_r5);
    bVar24 = (int)puVar14 < 0;
    bVar26 = puVar14 == (uint *)0x0;
  }
  bVar23 = false;
  if (bVar26) {
    puVar14 = (uint *)((uint)unaff_r10 & (uint)unaff_r5);
    bVar24 = (int)puVar14 < 0;
    bVar23 = puVar14 == (uint *)0x0;
  }
  bVar26 = false;
  if (bVar23) {
    puVar14 = (uint *)((uint)unaff_r10 & ((uint)param_4 ^ 0x84bc31eU >> ((uint)puVar14 & 0xff)));
    bVar24 = (int)puVar14 < 0;
    bVar26 = puVar14 == (uint *)0x0;
  }
  if (bVar26) {
    bVar24 = (int)unaff_r11 < 0;
    puVar14 = unaff_r11;
  }
  bVar26 = bVar26 && unaff_r11 == (uint *)0x0;
  if (bVar26) {
    bVar32 = (bool)(bVar9 >> 7);
    puVar14 = (uint *)0x0;
    bVar24 = false;
  }
  bVar23 = false;
  if (bVar26) {
    uVar16 = (int)unaff_r9 + (int)unaff_r5 & 0xff;
    bVar32 = uVar16 == 0 && bVar32 ||
             uVar16 != 0 && (bool)((byte)((uint)register0x00000054 >> 0x20 - uVar16) & 1);
    puVar14 = (uint *)((uint)unaff_r9 & (int)register0x00000054 << uVar16);
    bVar24 = (int)puVar14 < 0;
    bVar23 = puVar14 == (uint *)0x0;
  }
  if (bVar23) {
    uVar16 = (int)unaff_r9 + ((int)unaff_lr << ((int)unaff_r9 + (int)puVar14 & 0xffU) & 0x84bc3ceU);
    puVar14 = (uint *)(uVar16 << (uVar16 & 0xff) & 0x84bc3d6);
  }
  if (bVar32 && !bVar23) {
    puVar14 = (uint *)((int)unaff_r10 + (int)puVar14);
  }
  bVar26 = false;
  if (bVar23) {
    puVar14 = (uint *)((uint)unaff_r6 & (uint)in_r12);
    bVar24 = (int)puVar14 < 0;
    bVar26 = puVar14 == (uint *)0x0;
  }
  if (bVar26) {
    bVar24 = (int)unaff_r7 < 0;
    puVar14 = unaff_r7;
  }
  bVar23 = false;
  if (bVar26 && unaff_r7 == (uint *)0x0) {
    uVar16 = (uint)puVar14 & 0xff;
    bVar32 = uVar16 == 0 && bVar32 ||
             uVar16 != 0 && (bool)((byte)((uint)unaff_r9 >> 0x20 - uVar16) & 1);
    puVar14 = (uint *)((uint)unaff_r4 & (int)unaff_r9 << uVar16);
    bVar24 = (int)puVar14 < 0;
    bVar23 = puVar14 == (uint *)0x0;
  }
  bVar26 = false;
  if (bVar23) {
    bVar32 = (bool)(bVar11 >> 7);
    puVar14 = (uint *)((uint)param_3 & uVar18);
    bVar24 = (int)puVar14 < 0;
    bVar26 = puVar14 == (uint *)0x0;
  }
  if (bVar26) {
    in_OV = SBORROW4((int)unaff_r5,(int)unaff_r5);
    puVar14 = (uint *)0x0;
    bVar32 = true;
    bVar24 = false;
  }
  bVar23 = false;
  if (bVar26) {
    puVar14 = (uint *)((uint)puVar14 & 0x84bc4de);
    bVar23 = puVar14 == (uint *)0x0;
    bVar24 = false;
  }
  bVar26 = false;
  if (bVar23) {
    bVar32 = unaff_r5 <= puVar14;
    in_OV = SBORROW4((int)puVar14,(int)unaff_r5);
    puVar14 = (uint *)((int)puVar14 - (int)unaff_r5);
    bVar24 = (int)puVar14 < 0;
    bVar26 = puVar14 == (uint *)0x0;
  }
  bVar23 = false;
  if (bVar26) {
    puVar14 = (uint *)((uint)param_4 & (uint)in_r12);
    bVar24 = (int)puVar14 < 0;
    bVar23 = puVar14 == (uint *)0x0;
  }
  if (bVar23) {
    puVar14 = (uint *)0x0;
    bVar24 = false;
  }
  bVar26 = false;
  if (bVar23) {
    bVar32 = CARRY4((uint)unaff_r6,(uint)unaff_r5);
    in_OV = SCARRY4((int)unaff_r6,(int)unaff_r5);
    puVar14 = (uint *)((int)unaff_r6 + (int)unaff_r5);
    bVar24 = (int)puVar14 < 0;
    bVar26 = puVar14 == (uint *)0x0;
  }
  bVar23 = false;
  if (bVar26) {
    uVar16 = (uint)puVar14 & 0xff;
    bVar32 = uVar16 == 0 && bVar32 ||
             uVar16 != 0 && (bool)((byte)((uint)unaff_r10 >> 0x20 - uVar16) & 1);
    puVar14 = (uint *)((uint)unaff_r7 & (int)unaff_r10 << uVar16);
    bVar24 = (int)puVar14 < 0;
    bVar23 = puVar14 == (uint *)0x0;
  }
  bVar26 = false;
  if (bVar23) {
    bVar32 = CARRY4((uint)unaff_r6,(uint)puVar14);
    in_OV = SCARRY4((int)unaff_r6,(int)puVar14);
    puVar14 = (uint *)((int)unaff_r6 + (int)puVar14);
    bVar24 = (int)puVar14 < 0;
    bVar26 = puVar14 == (uint *)0x0;
  }
  bVar23 = false;
  if (bVar26) {
    uVar16 = (uint)puVar14 & 0xff;
    bVar32 = uVar16 == 0 && bVar32 ||
             uVar16 != 0 && (bool)((byte)((uint)unaff_r10 >> 0x20 - uVar16) & 1);
    puVar14 = (uint *)((uint)in_r12 & (int)unaff_r10 << uVar16);
    bVar24 = (int)puVar14 < 0;
    bVar23 = puVar14 == (uint *)0x0;
  }
  bVar26 = false;
  if (bVar23) {
    bVar32 = CARRY4((uint)unaff_r5,(uint)unaff_r10);
    in_OV = SCARRY4((int)unaff_r5,(int)unaff_r10);
    puVar14 = (uint *)((int)unaff_r5 + (int)unaff_r10);
    bVar24 = (int)puVar14 < 0;
    bVar26 = puVar14 == (uint *)0x0;
  }
  bVar23 = false;
  if (bVar26) {
    uVar16 = (uint)unaff_r10 ^ (int)unaff_r10 << ((uint)puVar14 & 0xff);
    bVar32 = CARRY4((uint)unaff_r5,uVar16);
    in_OV = SCARRY4((int)unaff_r5,uVar16);
    puVar14 = (uint *)((int)unaff_r5 + uVar16);
    bVar24 = (int)puVar14 < 0;
    bVar23 = puVar14 == (uint *)0x0;
  }
  if (bVar23) {
    bVar24 = (int)in_r12 < 0;
    puVar14 = in_r12;
  }
  bVar26 = false;
  if (bVar23 && in_r12 == (uint *)0x0) {
    uVar16 = (uint)puVar14 & 0xff;
    bVar32 = uVar16 == 0 && bVar32 ||
             uVar16 != 0 && (bool)((byte)((uint)unaff_r10 >> uVar16 - 1) & 1);
    puVar14 = (uint *)((uint)unaff_r4 & (uint)unaff_r10 >> uVar16);
    bVar24 = (int)puVar14 < 0;
    bVar26 = puVar14 == (uint *)0x0;
  }
  if (bVar32 && !bVar26) {
    puVar14 = (uint *)((int)param_4 + ((int)unaff_r4 << ((uint)puVar14 & 0xff)));
  }
  bVar23 = false;
  if (bVar26) {
    uVar16 = (uint)puVar14 & 0xff;
    bVar32 = uVar16 == 0 && bVar32 || uVar16 != 0 && (bool)((byte)((uint)in_r12 >> uVar16 - 1) & 1);
    puVar14 = (uint *)((uint)unaff_r9 ^ (uint)in_r12 >> uVar16);
    bVar24 = (int)puVar14 < 0;
    bVar23 = puVar14 == (uint *)0x0;
  }
  bVar26 = false;
  if (bVar23) {
    uVar16 = (int)unaff_r5 - (int)unaff_r9 & 0xff;
    bVar32 = uVar16 == 0 && bVar32 || uVar16 != 0 && (bool)((byte)((int)unaff_r5 >> uVar16 - 1) & 1)
    ;
    puVar14 = (uint *)((uint)in_r12 & (int)unaff_r5 >> uVar16);
    bVar24 = (int)puVar14 < 0;
    bVar26 = puVar14 == (uint *)0x0;
  }
  bVar23 = false;
  if (bVar26) {
    uVar16 = (int)puVar14 - (int)unaff_r9 & 0xff;
    bVar32 = uVar16 == 0 && bVar32 || uVar16 != 0 && (bool)((byte)((int)unaff_r5 >> uVar16 - 1) & 1)
    ;
    puVar14 = (uint *)((uint)in_r12 & (int)unaff_r5 >> uVar16);
    bVar24 = (int)puVar14 < 0;
    bVar23 = puVar14 == (uint *)0x0;
  }
  bVar26 = false;
  if (bVar23) {
    bVar32 = CARRY4((uint)unaff_r5,(uint)unaff_r5);
    in_OV = SCARRY4((int)unaff_r5,(int)unaff_r5);
    puVar14 = (uint *)((int)unaff_r5 * 2);
    bVar24 = (int)puVar14 < 0;
    bVar26 = puVar14 == (uint *)0x0;
  }
  bVar23 = false;
  if (bVar26) {
    bVar32 = CARRY4((uint)unaff_r5,(uint)param_4);
    in_OV = SCARRY4((int)unaff_r5,(int)param_4);
    puVar14 = (uint *)((int)unaff_r5 + (int)param_4);
    bVar24 = (int)puVar14 < 0;
    bVar23 = puVar14 == (uint *)0x0;
  }
  bVar26 = false;
  if (bVar23) {
    bVar32 = CARRY4((uint)unaff_r5,(uint)puVar14);
    in_OV = SCARRY4((int)unaff_r5,(int)puVar14);
    puVar14 = (uint *)((int)unaff_r5 + (int)puVar14);
    bVar24 = (int)puVar14 < 0;
    bVar26 = puVar14 == (uint *)0x0;
  }
  bVar23 = false;
  if (bVar26) {
    uVar16 = (uint)unaff_r4 ^ (uint)unaff_r6 >> ((uint)puVar14 & 0xff);
    bVar32 = CARRY4((uint)unaff_r5,uVar16);
    in_OV = SCARRY4((int)unaff_r5,uVar16);
    puVar14 = (uint *)((int)unaff_r5 + uVar16);
    bVar24 = (int)puVar14 < 0;
    bVar23 = puVar14 == (uint *)0x0;
  }
  bVar26 = false;
  if (bVar23) {
    uVar16 = (uint)unaff_r6 & 0xff;
    bVar32 = uVar16 == 0 && bVar32 ||
             uVar16 != 0 && (bool)((byte)((uint)unaff_r4 >> uVar16 - 1) & 1);
    puVar14 = (uint *)((uint)unaff_r4 & (uint)unaff_r4 >> uVar16);
    bVar24 = (int)puVar14 < 0;
    bVar26 = puVar14 == (uint *)0x0;
  }
  bVar23 = false;
  if (bVar26) {
    puVar14 = (uint *)((int)unaff_r4 << ((uint)puVar14 & 0xff));
    bVar32 = unaff_r9 <= puVar14;
    in_OV = SBORROW4((int)puVar14,(int)unaff_r9);
    puVar14 = (uint *)((int)puVar14 - (int)unaff_r9);
    bVar24 = (int)puVar14 < 0;
    bVar23 = puVar14 == (uint *)0x0;
  }
  if (bVar23) {
    bVar32 = (bool)(bVar3 >> 7);
    bVar24 = (int)param_4 < 0;
    puVar14 = param_4;
  }
  bVar26 = false;
  if (bVar23 && param_4 == (uint *)0x0) {
    bVar32 = CARRY4((uint)unaff_r5,(uint)puVar14);
    in_OV = SCARRY4((int)unaff_r5,(int)puVar14);
    puVar14 = (uint *)((int)unaff_r5 + (int)puVar14);
    bVar24 = (int)puVar14 < 0;
    bVar26 = puVar14 == (uint *)0x0;
  }
  bVar23 = false;
  if (bVar26) {
    bVar32 = (uint *)0xf7b438b1 < unaff_r5;
    in_OV = SCARRY4((int)unaff_r5,0x84bc74e);
    puVar14 = (uint *)((int)unaff_r5 + 0x84bc74e);
    bVar24 = (int)puVar14 < 0;
    bVar23 = puVar14 == (uint *)0x0;
  }
  bVar26 = false;
  if (bVar23) {
    uVar16 = (uint)puVar14 & 0xff;
    bVar32 = uVar16 == 0 && bVar32 || uVar16 != 0 && (bool)((byte)((uint)param_4 >> uVar16 - 1) & 1)
    ;
    puVar14 = (uint *)((uint)param_3 ^ (uint)param_4 >> uVar16);
    bVar24 = (int)puVar14 < 0;
    bVar26 = puVar14 == (uint *)0x0;
  }
  if (bVar26) {
    bVar32 = true;
    in_OV = '\0';
    bVar24 = (int)param_4 < 0;
    puVar14 = param_4;
  }
  bVar23 = false;
  if (bVar26 && param_4 == (uint *)0x0) {
    uVar16 = (uint)puVar14 & 0xff;
    bVar32 = uVar16 == 0 && bVar32 ||
             uVar16 != 0 && (bool)((byte)((uint)register0x00000054 >> 0x20 - uVar16) & 1);
    puVar14 = (uint *)((uint)unaff_r4 & (int)register0x00000054 << uVar16);
    bVar24 = (int)puVar14 < 0;
    bVar23 = puVar14 == (uint *)0x0;
  }
  if (bVar32 && !bVar23) {
    puVar14 = (uint *)((int)unaff_r4 + ((int)unaff_r4 << ((uint)puVar14 & 0xff)));
  }
  bVar26 = false;
  bVar27 = bVar32;
  if (bVar23) {
    bVar27 = (bool)((byte)param_4 & 1);
    puVar14 = (uint *)((uint)unaff_r5 & ((uint)bVar32 << 0x1f | (uint)param_4 >> 1));
    bVar24 = (int)puVar14 < 0;
    bVar26 = puVar14 == (uint *)0x0;
  }
  bVar23 = false;
  if (bVar26) {
    bVar27 = CARRY4((uint)unaff_r6,(uint)puVar14);
    in_OV = SCARRY4((int)unaff_r6,(int)puVar14);
    puVar14 = (uint *)((int)unaff_r6 + (int)puVar14);
    bVar24 = (int)puVar14 < 0;
    bVar23 = puVar14 == (uint *)0x0;
  }
  if (bVar23) {
    bVar27 = false;
    puVar14 = (uint *)0x0;
    bVar24 = false;
  }
  bVar26 = false;
  if (bVar23) {
    bVar27 = CARRY4((uint)unaff_r6,(uint)puVar14);
    in_OV = SCARRY4((int)unaff_r6,(int)puVar14);
    puVar14 = (uint *)((int)unaff_r6 + (int)puVar14);
    bVar24 = (int)puVar14 < 0;
    bVar26 = puVar14 == (uint *)0x0;
  }
  bVar23 = false;
  if (bVar26) {
    bVar27 = (bool)((byte)puVar14 & 1);
    puVar14 = (uint *)((uint)puVar14 >> 1 & 0x84bc78e);
    bVar23 = puVar14 == (uint *)0x0;
    bVar24 = false;
  }
  bVar26 = false;
  if (bVar23) {
    uVar16 = (uint)unaff_r6 & 0xff;
    bVar27 = uVar16 == 0 && bVar27 ||
             uVar16 != 0 && (bool)((byte)((uint)unaff_lr >> 0x20 - uVar16) & 1);
    puVar14 = (uint *)((uint)unaff_r4 & (int)unaff_lr << uVar16);
    bVar24 = (int)puVar14 < 0;
    bVar26 = puVar14 == (uint *)0x0;
  }
  if (bVar24) {
    puVar14 = (uint *)((int)unaff_r5 + ((int)unaff_r4 << ((uint)puVar14 & 0xff)));
  }
  bVar23 = false;
  if (bVar26) {
    uVar16 = (uint)puVar14 & 0xff;
    bVar27 = uVar16 == 0 && bVar27 ||
             uVar16 != 0 && (bool)((byte)((uint)unaff_r6 >> uVar16 - 1) & 1);
    puVar14 = (uint *)((uint)unaff_r6 & (uint)unaff_r6 >> uVar16);
    bVar24 = (int)puVar14 < 0;
    bVar23 = puVar14 == (uint *)0x0;
  }
  bVar26 = false;
  if (bVar24) {
    bVar27 = CARRY4((uint)unaff_r5,(uint)puVar14);
    in_OV = SCARRY4((int)unaff_r5,(int)puVar14);
    puVar14 = (uint *)((int)unaff_r5 + (int)puVar14);
    bVar26 = (int)puVar14 < 0;
    bVar23 = puVar14 == (uint *)0x0;
  }
  bVar24 = false;
  if (bVar23) {
    uVar16 = (uint)puVar14 & 0xff;
    bVar27 = uVar16 == 0 && bVar27 || uVar16 != 0 && (bool)((byte)((uint)param_3 >> uVar16 - 1) & 1)
    ;
    puVar14 = (uint *)((uint)puVar14 & (uint)param_3 >> uVar16);
    bVar26 = (int)puVar14 < 0;
    bVar24 = puVar14 == (uint *)0x0;
  }
  cVar25 = false;
  if (bVar26) {
    bVar27 = CARRY4((uint)unaff_r6,(uint)puVar14);
    in_OV = SCARRY4((int)unaff_r6,(int)puVar14);
    puVar14 = (uint *)((int)unaff_r6 + (int)puVar14);
    cVar25 = (int)puVar14 < 0;
    bVar24 = puVar14 == (uint *)0x0;
  }
  bVar23 = false;
  if (bVar24) {
    bVar27 = (bool)(bVar7 >> 7);
    puVar14 = (uint *)((uint)unaff_r8 & uVar21);
    cVar25 = (int)puVar14 < 0;
    bVar23 = puVar14 == (uint *)0x0;
  }
  bVar26 = false;
  if (bVar23) {
    puVar14 = (uint *)((uint)unaff_r4 ^ (uint)unaff_r5);
    cVar25 = (int)puVar14 < 0;
    bVar26 = puVar14 == (uint *)0x0;
  }
  bVar23 = false;
  if (bVar26) {
    puVar14 = (uint *)((uint)unaff_r4 ^ (uint)param_3 ^ (uint)unaff_r8);
    cVar25 = (int)puVar14 < 0;
    bVar23 = puVar14 == (uint *)0x0;
  }
  bVar26 = false;
  if (bVar23) {
    puVar14 = (uint *)((uint)unaff_r4 ^ (uint)unaff_r5 ^ (int)unaff_r5 << ((uint)puVar14 & 0xff));
    cVar25 = (int)puVar14 < 0;
    bVar26 = puVar14 == (uint *)0x0;
  }
  bVar23 = false;
  if (bVar26) {
    puVar14 = (uint *)((uint)unaff_lr & (uint)unaff_r9);
    cVar25 = (int)puVar14 < 0;
    bVar23 = puVar14 == (uint *)0x0;
  }
  bVar26 = false;
  if (bVar23) {
    puVar14 = (uint *)((uint)unaff_r4 ^ (uint)puVar14);
    cVar25 = (int)puVar14 < 0;
    bVar26 = puVar14 == (uint *)0x0;
  }
  bVar23 = false;
  if (bVar26) {
    uVar16 = (uint)puVar14 & 0xff;
    bVar27 = uVar16 == 0 && bVar27 ||
             uVar16 != 0 && (bool)((byte)((uint)unaff_r4 >> 0x20 - uVar16) & 1);
    puVar14 = (uint *)((uint)register0x00000054 & (int)unaff_r4 << uVar16);
    cVar25 = (int)puVar14 < 0;
    bVar23 = puVar14 == (uint *)0x0;
  }
  if (bVar23) {
    puVar14 = (uint *)((uint)register0x00000054 & (uint)in_r12);
  }
  if (bVar27 && !bVar23) {
    puVar14 = (uint *)((uint)unaff_r11 ^ (uint)puVar14);
  }
  bVar26 = false;
  if (bVar23) {
    puVar14 = (uint *)((uint)puVar22 ^
                      (uint)puVar22 & (int)unaff_r5 << ((uint)register0x00000054 & 0xd6));
    cVar25 = (int)puVar14 < 0;
    bVar26 = puVar14 == (uint *)0x0;
  }
  if (bVar26) {
    bVar27 = true;
    in_OV = '\0';
    cVar25 = (int)param_4 < 0;
    puVar14 = param_4;
  }
  bVar23 = false;
  if (bVar26 && param_4 == (uint *)0x0) {
    uVar20 = (uint)unaff_r11 & (uint)puVar14;
    uVar16 = 0x84bc946 << (uVar20 & 0xff);
    bVar27 = uVar16 <= uVar20;
    in_OV = SBORROW4(uVar20,uVar16);
    puVar14 = (uint *)(uVar20 - uVar16);
    cVar25 = (int)puVar14 < 0;
    bVar23 = puVar14 == (uint *)0x0;
  }
  bVar26 = false;
  if (bVar23) {
    puVar14 = (uint *)((uint)unaff_lr >> ((uint)unaff_r11 & (uint)puVar14 & 0xff));
    bVar27 = puVar14 <= param_3;
    in_OV = SBORROW4((int)param_3,(int)puVar14);
    puVar14 = (uint *)((int)param_3 - (int)puVar14);
    cVar25 = (int)puVar14 < 0;
    bVar26 = puVar14 == (uint *)0x0;
  }
  bVar23 = false;
  if (bVar26) {
    bVar27 = puVar2 <= param_3;
    in_OV = SBORROW4((int)param_3,(int)puVar2);
    puVar14 = (uint *)((int)param_3 - (int)puVar2);
    cVar25 = (int)puVar14 < 0;
    bVar23 = puVar14 == (uint *)0x0;
  }
  bVar26 = false;
  if (bVar23) {
    puVar14 = (uint *)((uint)unaff_r4 ^ (uint)unaff_r5);
    cVar25 = (int)puVar14 < 0;
    bVar26 = puVar14 == (uint *)0x0;
  }
  bVar23 = false;
  if (bVar26) {
    puVar14 = (uint *)((uint)unaff_r4 ^ (int)in_r12 - ((int)register0x00000054 >> 0x20));
    cVar25 = (int)puVar14 < 0;
    bVar23 = puVar14 == (uint *)0x0;
  }
  bVar26 = false;
  if (bVar23) {
    puVar14 = (uint *)((uint)unaff_lr >> ((uint)puVar14 & 0xff));
    bVar27 = puVar14 <= param_3;
    in_OV = SBORROW4((int)param_3,(int)puVar14);
    puVar14 = (uint *)((int)param_3 - (int)puVar14);
    cVar25 = (int)puVar14 < 0;
    bVar26 = puVar14 == (uint *)0x0;
  }
  bVar23 = false;
  if (bVar26) {
    puVar14 = (uint *)((uint)param_4 & (uint)puVar22 & (int)unaff_r5 << ((uint)puVar14 & 0xff));
    cVar25 = (int)puVar14 < 0;
    bVar23 = puVar14 == (uint *)0x0;
  }
  bVar26 = false;
  if (bVar23) {
    uVar16 = (uint)unaff_r11 &
             ((uint)unaff_lr ^
             (uint)unaff_lr >>
             ((uint)unaff_r11 &
              ((uint)unaff_lr ^ (uint)unaff_r10 >> ((uint)unaff_r11 & (uint)unaff_r5 & 0xff)) & 0xff
             )) & 0xff;
    bVar27 = uVar16 == 0 && bVar27 || uVar16 != 0 && (bool)((byte)(0x84bca2e >> 0x20 - uVar16) & 1);
    puVar14 = (uint *)((uint)unaff_r7 ^ 0x84bca2e << uVar16);
    cVar25 = (int)puVar14 < 0;
    bVar26 = puVar14 == (uint *)0x0;
  }
  if (bVar26) {
    bVar27 = false;
    puVar14 = (uint *)0x0;
    cVar25 = false;
  }
  bVar23 = false;
  if (bVar26) {
    puVar14 = (uint *)((uint)unaff_r4 ^ (uint)puVar22 & (int)unaff_r5 << ((uint)puVar14 & 0xff));
    cVar25 = (int)puVar14 < 0;
    bVar23 = puVar14 == (uint *)0x0;
  }
  if (bVar23) {
    bVar27 = (bool)(bVar6 >> 7);
    puVar14 = (uint *)0x0;
    cVar25 = false;
  }
  if (bVar27 && !bVar23) {
    puVar14 = (uint *)((uint)unaff_r11 ^ (uint)puVar14);
  }
  bVar26 = false;
  if (bVar23) {
    puVar14 = (uint *)((uint)unaff_r5 & (uint)puVar22 & (uint)unaff_r5);
    cVar25 = (int)puVar14 < 0;
    bVar26 = puVar14 == (uint *)0x0;
  }
  bVar23 = false;
  if (bVar26) {
    puVar14 = (uint *)((uint)unaff_r8 & (uint)unaff_r5);
    cVar25 = (int)puVar14 < 0;
    bVar23 = puVar14 == (uint *)0x0;
  }
  bVar26 = false;
  if (bVar23) {
    puVar14 = (uint *)((uint)unaff_r9 & (uint)unaff_r8);
    cVar25 = (int)puVar14 < 0;
    bVar26 = puVar14 == (uint *)0x0;
  }
  bVar23 = false;
  if (bVar26) {
    puVar14 = (uint *)((uint)unaff_r8 & (uint)puVar14);
    cVar25 = (int)puVar14 < 0;
    bVar23 = puVar14 == (uint *)0x0;
  }
  bVar26 = false;
  if (bVar23) {
    puVar14 = (uint *)((uint)in_r12 & (uint)unaff_r5);
    cVar25 = (int)puVar14 < 0;
    bVar26 = puVar14 == (uint *)0x0;
  }
  bVar23 = false;
  if (bVar26) {
    puVar14 = (uint *)((uint)unaff_r8 & (uint)puVar14);
    cVar25 = (int)puVar14 < 0;
    bVar23 = puVar14 == (uint *)0x0;
  }
  bVar26 = false;
  if (bVar23) {
    puVar14 = (uint *)((uint)register0x00000054 & (uint)unaff_r10);
    cVar25 = (int)puVar14 < 0;
    bVar26 = puVar14 == (uint *)0x0;
  }
  bVar23 = false;
  if (bVar26) {
    puVar14 = (uint *)((uint)unaff_r8 & (uint)puVar14);
    cVar25 = (int)puVar14 < 0;
    bVar23 = puVar14 == (uint *)0x0;
  }
  bVar26 = false;
  if (bVar23) {
    puVar14 = (uint *)((uint)unaff_lr &
                      (uint)puVar22 & (int)unaff_r5 << (((uint)puVar14 ^ (uint)unaff_r6) & 0xff));
    cVar25 = (int)puVar14 < 0;
    bVar26 = puVar14 == (uint *)0x0;
  }
  bVar23 = false;
  if (bVar26) {
    uVar16 = (uint)puVar14 & 0xff;
    bVar27 = uVar16 == 0 && bVar27 ||
             uVar16 != 0 && (bool)((byte)((uint)puVar22 >> 0x20 - uVar16) & 1);
    puVar14 = (uint *)((uint)unaff_r4 & (int)puVar22 << uVar16);
    cVar25 = (int)puVar14 < 0;
    bVar23 = puVar14 == (uint *)0x0;
  }
  bVar26 = false;
  if (bVar23) {
    uVar16 = (uint)unaff_r11 &
             ((uint)param_3 >> ((uint)unaff_r11 & (uint)in_r12 & 0xff) ^ 0x84bcc16) & 0xff;
    bVar27 = uVar16 == 0 && bVar27 ||
             uVar16 != 0 && (bool)((byte)((uint)unaff_lr >> 0x20 - uVar16) & 1);
    puVar14 = (uint *)((uint)unaff_r4 ^ (int)unaff_lr << uVar16);
    cVar25 = (int)puVar14 < 0;
    bVar26 = puVar14 == (uint *)0x0;
  }
  bVar23 = false;
  if (bVar26) {
    uVar16 = (uint)unaff_r11 & (uint)unaff_r8 & 0xff;
    bVar27 = uVar16 == 0 && bVar27 || uVar16 != 0 && (bool)((byte)((uint)in_r12 >> uVar16 - 1) & 1);
    puVar14 = (uint *)((uint)unaff_r4 ^ (uint)in_r12 >> uVar16);
    cVar25 = (int)puVar14 < 0;
    bVar23 = puVar14 == (uint *)0x0;
  }
  if (bVar23) {
    puVar14 = (uint *)((uint)in_r12 &
                      (int)unaff_r6 <<
                      (((uint)register0x00000054 ^
                       (uint)puVar22 & (int)unaff_r5 << ((uint)puVar22 & (uint)puVar14 & 0xff)) &
                      0xff));
  }
  if (bVar27 && !bVar23) {
    puVar14 = (uint *)((uint)unaff_r5 & (uint)in_r12);
    cVar25 = (int)puVar14 < 0;
    bVar23 = puVar14 == (uint *)0x0;
  }
  if (bVar23) {
    bVar27 = (bool)(bVar10 >> 7);
    puVar14 = (uint *)0x0;
    cVar25 = false;
  }
  bVar26 = false;
  if (bVar23) {
    bVar27 = puVar14 <= param_4;
    in_OV = SBORROW4((int)param_4,(int)puVar14);
    puVar14 = (uint *)((int)param_4 - (int)puVar14);
    cVar25 = (int)puVar14 < 0;
    bVar26 = puVar14 == (uint *)0x0;
  }
  if (bVar26) {
    bVar27 = true;
    in_OV = '\0';
    cVar25 = (int)param_4 < 0;
    puVar14 = param_4;
  }
  bVar23 = false;
  if (bVar26 && param_4 == (uint *)0x0) {
    puVar14 = (uint *)((uint)in_r12 & (uint)param_3 >> ((uint)puVar14 & 0xff));
    bVar27 = puVar14 <= param_4;
    in_OV = SBORROW4((int)param_4,(int)puVar14);
    puVar14 = (uint *)((int)param_4 - (int)puVar14);
    cVar25 = (int)puVar14 < 0;
    bVar23 = puVar14 == (uint *)0x0;
  }
  if (bVar23) {
    bVar27 = (bool)(bVar5 >> 7);
    puVar14 = (uint *)0x0;
    cVar25 = false;
  }
  bVar26 = false;
  if (bVar23) {
    bVar27 = puVar14 <= param_4;
    in_OV = SBORROW4((int)param_4,(int)puVar14);
    puVar14 = (uint *)((int)param_4 - (int)puVar14);
    cVar25 = (int)puVar14 < 0;
    bVar26 = puVar14 == (uint *)0x0;
  }
  bVar23 = false;
  if (bVar26) {
    uVar16 = (uint)puVar14 & 0xff;
    bVar27 = uVar16 == 0 && bVar27 || uVar16 != 0 && (bool)((byte)((uint)param_3 >> uVar16 - 1) & 1)
    ;
    puVar14 = (uint *)((uint)unaff_r6 & (uint)param_3 >> uVar16);
    cVar25 = (int)puVar14 < 0;
    bVar23 = puVar14 == (uint *)0x0;
  }
  bVar26 = false;
  if (bVar23) {
    puVar14 = (uint *)((uint)param_4 ^ (uint)unaff_r5);
    cVar25 = (int)puVar14 < 0;
    bVar26 = puVar14 == (uint *)0x0;
  }
  bVar23 = false;
  if (bVar26) {
    puVar14 = (uint *)((uint)param_4 ^ (uint)unaff_r8 ^ (int)unaff_r4 >> 0x20);
    cVar25 = (int)puVar14 < 0;
    bVar23 = puVar14 == (uint *)0x0;
  }
  bVar26 = false;
  if (bVar23) {
    puVar14 = (uint *)((uint)param_4 ^ (uint)unaff_r11 ^ uVar21);
    cVar25 = (int)puVar14 < 0;
    bVar26 = puVar14 == (uint *)0x0;
  }
  bVar23 = false;
  if (bVar26) {
    puVar14 = (uint *)((uint)param_4 &
                      (uint)puVar22 &
                      (int)unaff_r5 << ((uint)puVar22 & ((uint)unaff_r11 ^ uVar18) & 0xff));
    cVar25 = (int)puVar14 < 0;
    bVar23 = puVar14 == (uint *)0x0;
  }
  bVar26 = false;
  if (bVar23) {
    puVar14 = (uint *)((uint)unaff_r4 ^ (uint)unaff_r5);
    cVar25 = (int)puVar14 < 0;
    bVar26 = puVar14 == (uint *)0x0;
  }
  bVar23 = false;
  if (bVar26) {
    puVar14 = (uint *)((uint)unaff_r4 ^ (uint)unaff_r7 ^ (int)unaff_r4 << ((uint)puVar14 & 0xff));
    cVar25 = (int)puVar14 < 0;
    bVar23 = puVar14 == (uint *)0x0;
  }
  bVar26 = false;
  if (bVar23) {
    puVar14 = (uint *)((uint)unaff_r4 ^ (uint)unaff_r8 ^ (int)unaff_r7 << ((uint)puVar14 & 0xff));
    cVar25 = (int)puVar14 < 0;
    bVar26 = puVar14 == (uint *)0x0;
  }
  bVar23 = false;
  if (bVar26) {
    puVar14 = (uint *)((uint)param_4 &
                      (uint)puVar22 &
                      (int)unaff_r5 << ((uint)puVar22 & ((uint)unaff_r11 ^ 0x84bcd06) & 0xff));
    cVar25 = (int)puVar14 < 0;
    bVar23 = puVar14 == (uint *)0x0;
  }
  bVar26 = false;
  if (bVar23) {
    puVar14 = (uint *)((uint)unaff_r6 ^ (uint)unaff_r5);
    cVar25 = (int)puVar14 < 0;
    bVar26 = puVar14 == (uint *)0x0;
  }
  bVar23 = false;
  if (bVar26) {
    puVar14 = (uint *)((uint)unaff_r6 ^ (uint)register0x00000054 & (uint)unaff_lr);
    cVar25 = (int)puVar14 < 0;
    bVar23 = puVar14 == (uint *)0x0;
  }
  bVar26 = false;
  if (bVar23) {
    puVar14 = (uint *)((uint)unaff_r6 ^ (uint)unaff_lr & (int)puVar22 << ((uint)puVar14 & 0xff));
    cVar25 = (int)puVar14 < 0;
    bVar26 = puVar14 == (uint *)0x0;
  }
  bVar23 = false;
  if (bVar26) {
    uVar16 = (uint)puVar14 & 0xff;
    bVar27 = uVar16 == 0 && bVar27 ||
             uVar16 != 0 && (bool)((byte)((uint)unaff_r4 >> 0x20 - uVar16) & 1);
    puVar14 = (uint *)((uint)puVar14 & (int)unaff_r4 << uVar16);
    cVar25 = (int)puVar14 < 0;
    bVar23 = puVar14 == (uint *)0x0;
  }
  bVar26 = false;
  if (bVar23) {
    puVar14 = (uint *)((uint)unaff_r7 ^ (uint)unaff_r5);
    cVar25 = (int)puVar14 < 0;
    bVar26 = puVar14 == (uint *)0x0;
  }
  bVar23 = false;
  if (bVar26) {
    puVar14 = (uint *)((uint)unaff_r7 ^ (uint)in_r12 & uVar18);
    cVar25 = (int)puVar14 < 0;
    bVar23 = puVar14 == (uint *)0x0;
  }
  bVar26 = false;
  if (bVar23) {
    puVar14 = (uint *)((uint)unaff_r7 ^ (uint)in_r12 & uVar17);
    cVar25 = (int)puVar14 < 0;
    bVar26 = puVar14 == (uint *)0x0;
  }
  bVar23 = false;
  if (bVar26) {
    puVar14 = (uint *)((uint)unaff_lr &
                      (uint)puVar22 &
                      (int)unaff_r5 << ((uint)puVar22 & (int)unaff_r4 >> 0x20 & 0x84bcd76U & 0xff));
    cVar25 = (int)puVar14 < 0;
    bVar23 = puVar14 == (uint *)0x0;
  }
  bVar26 = false;
  if (bVar23) {
    uVar16 = (uint)puVar14 & 0xff;
    bVar27 = uVar16 == 0 && bVar27 ||
             uVar16 != 0 && (bool)((byte)((uint)puVar22 >> 0x20 - uVar16) & 1);
    puVar14 = (uint *)((uint)unaff_r4 & (int)puVar22 << uVar16);
    cVar25 = (int)puVar14 < 0;
    bVar26 = puVar14 == (uint *)0x0;
  }
  bVar23 = false;
  if (bVar26) {
    puVar14 = (uint *)((uint)unaff_r5 &
                      (uint)puVar22 &
                      (int)unaff_r5 <<
                      ((uint)puVar14 & (int)unaff_r4 << ((uint)puVar14 & 0xff) & 0xff));
    cVar25 = (int)puVar14 < 0;
    bVar23 = puVar14 == (uint *)0x0;
  }
  bVar26 = false;
  if (bVar23) {
    uVar16 = (int)unaff_r5 - (int)in_r12 & 0xff;
    bVar27 = uVar16 == 0 && bVar27 ||
             uVar16 != 0 && (bool)((byte)((uint)unaff_r5 >> 0x20 - uVar16) & 1);
    puVar14 = (uint *)((int)unaff_r5 - (int)in_r12 & (int)unaff_r5 << uVar16);
    cVar25 = (int)puVar14 < 0;
    bVar26 = puVar14 == (uint *)0x0;
  }
  bVar23 = false;
  if (bVar26) {
    puVar14 = (uint *)((uint)puVar22 ^
                      (uint)puVar22 & (int)unaff_r10 << ((uint)unaff_r9 & (uint)unaff_r8 & 0xff));
    cVar25 = (int)puVar14 < 0;
    bVar23 = puVar14 == (uint *)0x0;
  }
  bVar26 = false;
  if (bVar23) {
    uVar16 = (int)unaff_r9 - (int)unaff_r5 & 0xff;
    bVar27 = uVar16 == 0 && bVar27 ||
             uVar16 != 0 && (bool)((byte)((uint)unaff_r8 >> 0x20 - uVar16) & 1);
    puVar14 = (uint *)((uint)in_r12 & (int)unaff_r8 << uVar16);
    cVar25 = (int)puVar14 < 0;
    bVar26 = puVar14 == (uint *)0x0;
  }
  bVar23 = false;
  if (bVar26) {
    uVar16 = (int)unaff_r9 - (int)puVar14 & 0xff;
    bVar27 = uVar16 == 0 && bVar27 ||
             uVar16 != 0 && (bool)((byte)((uint)param_4 >> 0x20 - uVar16) & 1);
    puVar14 = (uint *)((uint)unaff_r11 & (int)param_4 << uVar16);
    cVar25 = (int)puVar14 < 0;
    bVar23 = puVar14 == (uint *)0x0;
  }
  bVar26 = false;
  if (bVar23) {
    puVar14 = (uint *)((uint)param_4 & (uint)puVar22 & (int)unaff_r10 << ((uint)puVar14 & 0xff));
    cVar25 = (int)puVar14 < 0;
    bVar26 = puVar14 == (uint *)0x0;
  }
  bVar23 = false;
  if (bVar26) {
    puVar14 = (uint *)((uint)unaff_r4 & (uint)unaff_r7);
    cVar25 = (int)puVar14 < 0;
    bVar23 = puVar14 == (uint *)0x0;
  }
  bVar26 = false;
  if (bVar23) {
    puVar14 = (uint *)((uint)unaff_r8 & (uint)puVar22 & (int)unaff_r10 << ((uint)puVar14 & 0xff));
    cVar25 = (int)puVar14 < 0;
    bVar26 = puVar14 == (uint *)0x0;
  }
  bVar23 = false;
  if (bVar26) {
    puVar14 = (uint *)((uint)unaff_r8 & (uint)puVar22 & (uint)unaff_r10);
    cVar25 = (int)puVar14 < 0;
    bVar23 = puVar14 == (uint *)0x0;
  }
  bVar26 = false;
  if (bVar23) {
    uVar16 = (int)unaff_r9 - (int)unaff_r5 & 0xff;
    bVar27 = uVar16 == 0 && bVar27 ||
             uVar16 != 0 && (bool)((byte)((uint)in_r12 >> 0x20 - uVar16) & 1);
    puVar14 = (uint *)((uint)unaff_r11 & (int)in_r12 << uVar16);
    cVar25 = (int)puVar14 < 0;
    bVar26 = puVar14 == (uint *)0x0;
  }
  bVar23 = false;
  if (bVar26) {
    uVar16 = (int)unaff_r9 - (int)puVar14 & 0xff;
    bVar27 = uVar16 == 0 && bVar27 ||
             uVar16 != 0 && (bool)((byte)((uint)unaff_r8 >> 0x20 - uVar16) & 1);
    puVar14 = (uint *)((uint)unaff_lr & (int)unaff_r8 << uVar16);
    cVar25 = (int)puVar14 < 0;
    bVar23 = puVar14 == (uint *)0x0;
  }
  if (bVar23) {
    bVar27 = (bool)(bVar13 >> 7);
    puVar14 = (uint *)0x0;
    cVar25 = false;
  }
  bVar26 = false;
  if (bVar23) {
    puVar14 = (uint *)((uint)unaff_r4 & (uint)puVar22 & (int)unaff_r10 << ((uint)puVar14 & 0xff));
    cVar25 = (int)puVar14 < 0;
    bVar26 = puVar14 == (uint *)0x0;
  }
  bVar23 = false;
  if (bVar26) {
    uVar16 = (int)unaff_r9 - (int)unaff_r5 & 0xff;
    bVar27 = uVar16 == 0 && bVar27 ||
             uVar16 != 0 && (bool)((byte)((uint)unaff_r5 >> uVar16 - 1) & 1);
    puVar14 = (uint *)((uint)unaff_lr & (uint)unaff_r5 >> uVar16);
    cVar25 = (int)puVar14 < 0;
    bVar23 = puVar14 == (uint *)0x0;
  }
  bVar26 = false;
  if (bVar23) {
    uVar16 = (int)unaff_r9 - (int)puVar14 & 0xff;
    bVar27 = uVar16 == 0 && bVar27 || uVar16 != 0 && (bool)((byte)((uint)in_r12 >> uVar16 - 1) & 1);
    puVar14 = (uint *)((uint)register0x00000054 & (uint)in_r12 >> uVar16);
    cVar25 = (int)puVar14 < 0;
    bVar26 = puVar14 == (uint *)0x0;
  }
  bVar23 = false;
  if (bVar26) {
    bVar27 = SUB41((uint)((int)unaff_r9 - (int)puVar14) >> 0x1f,0);
    puVar14 = (uint *)((int)unaff_r9 - (int)puVar14 >> 0x20 & 0x84bd04e);
    bVar23 = puVar14 == (uint *)0x0;
    cVar25 = false;
  }
  bVar26 = false;
  if (bVar23) {
    uVar21 = (int)unaff_r9 - (int)unaff_r5;
    uVar16 = uVar21 & 0xff;
    bVar27 = uVar16 == 0 && bVar27 || uVar16 != 0 && (bool)((byte)((int)uVar21 >> uVar16 - 1) & 1);
    puVar14 = (uint *)((uint)register0x00000054 & (int)uVar21 >> uVar16);
    cVar25 = (int)puVar14 < 0;
    bVar26 = puVar14 == (uint *)0x0;
  }
  bVar23 = false;
  if (bVar26) {
    uVar16 = (int)unaff_r9 - (int)puVar14 & 0xff;
    bVar27 = uVar16 == 0 && bVar27 || uVar16 != 0 && (bool)((byte)((int)puVar22 >> uVar16 - 1) & 1);
    puVar14 = (uint *)((uint)unaff_r9 & (int)puVar22 >> uVar16);
    cVar25 = (int)puVar14 < 0;
    bVar23 = puVar14 == (uint *)0x0;
  }
  bVar26 = false;
  if (bVar23) {
    puVar14 = (uint *)((uint)puVar22 & (int)unaff_r10 << ((uint)puVar14 & 0xff));
    bVar27 = puVar14 <= puVar22;
    in_OV = SBORROW4((int)puVar22,(int)puVar14);
    puVar14 = (uint *)((int)puVar22 - (int)puVar14);
    cVar25 = (int)puVar14 < 0;
    bVar26 = puVar14 == (uint *)0x0;
  }
  bVar23 = false;
  if (bVar26) {
    puVar14 = (uint *)((uint)unaff_r6 ^
                      (uint)puVar22 &
                      (int)unaff_r10 <<
                      ((uint)unaff_r9 & (int)param_3 >> ((int)unaff_r5 - (int)in_r12 & 0xffU) & 0xff
                      ));
    cVar25 = (int)puVar14 < 0;
    bVar23 = puVar14 == (uint *)0x0;
  }
  bVar26 = false;
  if (bVar23) {
    uVar16 = ((uint)param_4 ^ (uint)param_4 >> (((uint)param_4 ^ (uint)unaff_r5) & 0xff) ^ 0x84bd0e6
             ) & 0xff;
    bVar27 = uVar16 == 0 && bVar27 ||
             uVar16 != 0 && (bool)((byte)((uint)unaff_r6 >> uVar16 - 1) & 1);
    puVar14 = (uint *)((uint)puVar22 ^ (uint)unaff_r6 >> uVar16);
    cVar25 = (int)puVar14 < 0;
    bVar26 = puVar14 == (uint *)0x0;
  }
  bVar23 = false;
  if (bVar26) {
    uVar16 = ((uint)param_4 ^ (uint)puVar14) & 0xff;
    bVar27 = uVar16 == 0 && bVar27 ||
             uVar16 != 0 && (bool)((byte)((uint)unaff_r11 >> uVar16 - 1) & 1);
    puVar14 = (uint *)((uint)puVar22 ^ (uint)unaff_r11 >> uVar16);
    cVar25 = (int)puVar14 < 0;
    bVar23 = puVar14 == (uint *)0x0;
  }
  if (bVar23) {
    puVar14 = (uint *)((uint)unaff_r5 & (uint)unaff_r11);
  }
  if (bVar27 && !bVar23) {
    puVar14 = (uint *)((int)unaff_r10 - (int)unaff_r5);
  }
  bVar26 = false;
  if (bVar23) {
    puVar14 = (uint *)((uint)unaff_r7 & (uint)register0x00000054);
    cVar25 = (int)puVar14 < 0;
    bVar26 = puVar14 == (uint *)0x0;
  }
  bVar23 = false;
  if (bVar26) {
    puVar14 = (uint *)((uint)unaff_lr & (uint)unaff_r5);
    cVar25 = (int)puVar14 < 0;
    bVar23 = puVar14 == (uint *)0x0;
  }
  bVar26 = false;
  if (bVar23) {
    puVar14 = (uint *)((uint)unaff_r6 & (uint)unaff_r8);
    cVar25 = (int)puVar14 < 0;
    bVar26 = puVar14 == (uint *)0x0;
  }
  bVar23 = false;
  if (bVar26) {
    puVar14 = (uint *)((uint)unaff_lr & (uint)puVar14);
    cVar25 = (int)puVar14 < 0;
    bVar23 = puVar14 == (uint *)0x0;
  }
  bVar26 = false;
  if (bVar23) {
    puVar14 = (uint *)((uint)param_3 & (uint)unaff_r8);
    cVar25 = (int)puVar14 < 0;
    bVar26 = puVar14 == (uint *)0x0;
  }
  bVar23 = false;
  if (bVar26) {
    puVar14 = (uint *)((uint)param_3 & (uint)puVar22 & (int)unaff_r10 << ((uint)puVar14 & 0xff));
    cVar25 = (int)puVar14 < 0;
    bVar23 = puVar14 == (uint *)0x0;
  }
  bVar26 = false;
  if (bVar23) {
    uVar16 = (int)unaff_r9 -
             ((uint)param_3 ^ (int)param_3 << ((int)unaff_r9 - (int)unaff_r5 & 0xffU)) & 0xff;
    bVar27 = uVar16 == 0 && bVar27 ||
             uVar16 != 0 && (bool)((byte)((uint)in_r12 >> 0x20 - uVar16) & 1);
    puVar14 = (uint *)((uint)unaff_r8 & (int)in_r12 << uVar16);
    cVar25 = (int)puVar14 < 0;
    bVar26 = puVar14 == (uint *)0x0;
  }
  bVar23 = false;
  if (bVar26) {
    uVar16 = (int)unaff_r9 - (int)puVar14 & 0xff;
    bVar27 = uVar16 == 0 && bVar27 ||
             uVar16 != 0 && (bool)((byte)((uint)register0x00000054 >> 0x20 - uVar16) & 1);
    puVar14 = (uint *)((uint)unaff_r6 & (int)register0x00000054 << uVar16);
    cVar25 = (int)puVar14 < 0;
    bVar23 = puVar14 == (uint *)0x0;
  }
  bVar26 = false;
  if (bVar23) {
    puVar14 = (uint *)((uint)puVar22 & (uint)puVar22 & (int)unaff_r10 << ((uint)puVar14 & 0xff));
    cVar25 = (int)puVar14 < 0;
    bVar26 = puVar14 == (uint *)0x0;
  }
  bVar23 = false;
  if (bVar26) {
    puVar14 = (uint *)((uint)unaff_lr & (uint)unaff_r5);
    cVar25 = (int)puVar14 < 0;
    bVar23 = puVar14 == (uint *)0x0;
  }
  bVar26 = false;
  if (bVar23) {
    uVar16 = (uint)puVar14 & 0xff;
    bVar27 = uVar16 == 0 && bVar27 ||
             uVar16 != 0 && (bool)((byte)((uint)puVar22 >> 0x20 - uVar16) & 1);
    puVar14 = (uint *)((uint)unaff_r7 ^ (int)puVar22 << uVar16);
    cVar25 = (int)puVar14 < 0;
    bVar26 = puVar14 == (uint *)0x0;
  }
  bVar23 = false;
  if (bVar26) {
    puVar14 = (uint *)((uint)unaff_lr & (uint)puVar14);
    cVar25 = (int)puVar14 < 0;
    bVar23 = puVar14 == (uint *)0x0;
  }
  bVar26 = false;
  if (bVar23) {
    uVar16 = (uint)puVar14 & 0xff;
    bVar27 = uVar16 == 0 && bVar27 ||
             uVar16 != 0 && (bool)((byte)((uint)puVar22 >> 0x20 - uVar16) & 1);
    puVar14 = (uint *)((uint)unaff_r8 & (int)puVar22 << uVar16);
    cVar25 = (int)puVar14 < 0;
    bVar26 = puVar14 == (uint *)0x0;
  }
  bVar23 = false;
  if (bVar26) {
    puVar14 = (uint *)((uint)param_3 & (uint)puVar22 & (int)unaff_r10 << ((uint)puVar14 & 0xff));
    cVar25 = (int)puVar14 < 0;
    bVar23 = puVar14 == (uint *)0x0;
  }
  bVar26 = false;
  if (bVar23) {
    puVar14 = (uint *)((uint)unaff_lr & (uint)unaff_r5);
    cVar25 = (int)puVar14 < 0;
    bVar26 = puVar14 == (uint *)0x0;
  }
  bVar23 = false;
  if (bVar26) {
    puVar14 = (uint *)((uint)unaff_lr & ((uint)unaff_r11 ^ (int)unaff_lr << ((uint)puVar14 & 0xff)))
    ;
    cVar25 = (int)puVar14 < 0;
    bVar23 = puVar14 == (uint *)0x0;
  }
  bVar26 = false;
  if (bVar23) {
    puVar14 = (uint *)((uint)unaff_lr & (uint)unaff_r11);
    cVar25 = (int)puVar14 < 0;
    bVar26 = puVar14 == (uint *)0x0;
  }
  bVar23 = false;
  if (bVar26) {
    uVar16 = ((uint)param_4 ^ (uint)unaff_r5) & 0xff;
    bVar27 = uVar16 == 0 && bVar27 ||
             uVar16 != 0 && (bool)((byte)((uint)unaff_r7 >> 0x20 - uVar16) & 1);
    puVar14 = (uint *)((uint)unaff_r8 & (int)unaff_r7 << uVar16);
    cVar25 = (int)puVar14 < 0;
    bVar23 = puVar14 == (uint *)0x0;
  }
  if (bVar23) {
    bVar27 = (bool)(bVar9 >> 7);
    puVar14 = (uint *)0x0;
    cVar25 = false;
  }
  bVar26 = false;
  if (bVar23) {
    puVar14 = (uint *)((uint)unaff_r7 ^ (uint)puVar22 & (int)unaff_r10 << ((uint)puVar14 & 0xff));
    cVar25 = (int)puVar14 < 0;
    bVar26 = puVar14 == (uint *)0x0;
  }
  bVar23 = false;
  if (bVar26) {
    uVar16 = (int)unaff_r5 - (int)in_r12 & 0xff;
    bVar27 = uVar16 == 0 && bVar27 ||
             uVar16 != 0 && (bool)((byte)((uint)unaff_r8 >> uVar16 - 1) & 1);
    puVar14 = (uint *)((uint)unaff_r6 & (uint)unaff_r8 >> uVar16);
    cVar25 = (int)puVar14 < 0;
    bVar23 = puVar14 == (uint *)0x0;
  }
  bVar26 = false;
  if (bVar23) {
    uVar16 = (int)puVar14 - (int)in_r12 & 0xff;
    bVar27 = uVar16 == 0 && bVar27 || uVar16 != 0 && (bool)((byte)((uint)in_r12 >> uVar16 - 1) & 1);
    puVar14 = (uint *)((uint)unaff_r7 & (uint)in_r12 >> uVar16);
    cVar25 = (int)puVar14 < 0;
    bVar26 = puVar14 == (uint *)0x0;
  }
  bVar23 = false;
  if (bVar26) {
    puVar14 = (uint *)((uint)unaff_r7 ^
                      (uint)puVar22 & (int)unaff_r10 << (((uint)register0x00000054 ^ uVar1) & 0xff))
    ;
    cVar25 = (int)puVar14 < 0;
    bVar23 = puVar14 == (uint *)0x0;
  }
  if (bVar23) {
    puVar14 = (uint *)((uint)unaff_r5 & (uint)unaff_r6 >> ((uint)puVar14 & 0xff));
  }
  if (bVar27 && !bVar23) {
    puVar14 = (uint *)((int)unaff_r11 - (int)unaff_r5);
  }
  if (bVar23) {
    bVar27 = (bool)(bVar11 >> 7);
    puVar14 = (uint *)0x0;
    cVar25 = false;
  }
  if ((bool)cVar25) {
    puVar14 = (uint *)(((int)unaff_r4 << ((uint)puVar14 & 0xff)) - (int)register0x00000054);
  }
  bVar26 = false;
  if (bVar23) {
    puVar14 = (uint *)((uint)unaff_r8 & 0x84bd466);
    bVar26 = puVar14 == (uint *)0x0;
    cVar25 = false;
  }
  if ((bool)cVar25) {
    puVar14 = (uint *)((int)unaff_r11 - (int)puVar14);
  }
  bVar23 = false;
  if (bVar26) {
    uVar16 = (uint)puVar14 & 0xff;
    bVar27 = uVar16 == 0 && bVar27 ||
             uVar16 != 0 && (bool)((byte)((uint)unaff_r8 >> 0x20 - uVar16) & 1);
    puVar14 = (uint *)((uint)unaff_lr & (int)unaff_r8 << uVar16);
    cVar25 = (int)puVar14 < 0;
    bVar23 = puVar14 == (uint *)0x0;
  }
  if ((bool)cVar25) {
    puVar14 = (uint *)((int)unaff_r11 - (int)puVar14);
  }
  bVar26 = false;
  if (bVar23) {
    puVar14 = (uint *)((uint)unaff_lr & (uint)unaff_r6);
    cVar25 = (int)puVar14 < 0;
    bVar26 = puVar14 == (uint *)0x0;
  }
  if ((bool)cVar25) {
    puVar14 = (uint *)((int)unaff_r11 - (int)puVar14);
  }
  if (bVar26) {
    puVar14 = (uint *)((uint)register0x00000054 & (uint)unaff_r7);
  }
  if ((bool)cVar25) {
    puVar14 = (uint *)((int)unaff_r11 - (int)puVar14);
  }
  bVar23 = false;
  if (bVar26) {
    puVar14 = (uint *)((uint)in_r12 ^ (uint)unaff_r5);
    cVar25 = (int)puVar14 < 0;
    bVar23 = puVar14 == (uint *)0x0;
  }
  bVar26 = false;
  if (bVar23) {
    uVar16 = (uint)puVar14 & 0xff;
    bVar27 = uVar16 == 0 && bVar27 || uVar16 != 0 && (bool)((byte)((int)puVar22 >> uVar16 - 1) & 1);
    puVar14 = (uint *)((uint)puVar14 & (int)puVar22 >> uVar16);
    cVar25 = (int)puVar14 < 0;
    bVar26 = puVar14 == (uint *)0x0;
  }
  bVar23 = false;
  if (bVar26) {
    puVar14 = (uint *)((uint)in_r12 ^ (uint)puVar14);
    cVar25 = (int)puVar14 < 0;
    bVar23 = puVar14 == (uint *)0x0;
  }
  bVar26 = false;
  if (bVar23) {
    uVar16 = (uint)puVar14 & 0xff;
    bVar27 = uVar16 == 0 && bVar27 || uVar16 != 0 && (bool)((byte)((int)puVar22 >> uVar16 - 1) & 1);
    puVar14 = (uint *)((uint)unaff_r7 & (int)puVar22 >> uVar16);
    cVar25 = (int)puVar14 < 0;
    bVar26 = puVar14 == (uint *)0x0;
  }
  bVar23 = false;
  if (bVar26) {
    puVar14 = (uint *)((uint)in_r12 ^ (uint)puVar14);
    cVar25 = (int)puVar14 < 0;
    bVar23 = puVar14 == (uint *)0x0;
  }
  bVar26 = false;
  if (bVar23) {
    uVar16 = (uint)puVar14 & 0xff;
    bVar27 = uVar16 == 0 && bVar27 || uVar16 != 0 && (bool)((byte)((int)param_3 >> uVar16 - 1) & 1);
    puVar14 = (uint *)((uint)param_4 & (int)param_3 >> uVar16);
    cVar25 = (int)puVar14 < 0;
    bVar26 = puVar14 == (uint *)0x0;
  }
  bVar23 = false;
  if (bVar26) {
    bVar27 = unaff_r5 <= unaff_r6;
    in_OV = SBORROW4((int)unaff_r6,(int)unaff_r5);
    puVar14 = (uint *)((int)unaff_r6 - (int)unaff_r5);
    cVar25 = (int)puVar14 < 0;
    bVar23 = puVar14 == (uint *)0x0;
  }
  bVar26 = false;
  if (bVar23) {
    puVar14 = (uint *)((uint)unaff_r7 ^ (int)puVar14 >> 0x20);
    bVar27 = puVar14 <= unaff_r6;
    in_OV = SBORROW4((int)unaff_r6,(int)puVar14);
    puVar14 = (uint *)((int)unaff_r6 - (int)puVar14);
    cVar25 = (int)puVar14 < 0;
    bVar26 = puVar14 == (uint *)0x0;
  }
  bVar23 = false;
  if (bVar26) {
    puVar14 = (uint *)((uint)unaff_r7 ^ (uint)unaff_r9 >> ((uint)puVar14 & 0xff));
    bVar27 = puVar14 <= unaff_r6;
    in_OV = SBORROW4((int)unaff_r6,(int)puVar14);
    puVar14 = (uint *)((int)unaff_r6 - (int)puVar14);
    cVar25 = (int)puVar14 < 0;
    bVar23 = puVar14 == (uint *)0x0;
  }
  if (bVar23) {
    cVar25 = (int)in_r12 < 0;
    puVar14 = in_r12;
  }
  bVar26 = false;
  if (bVar23 && in_r12 == (uint *)0x0) {
    bVar27 = CARRY4((uint)unaff_r7,(uint)in_r12);
    in_OV = SCARRY4((int)unaff_r7,(int)in_r12);
    puVar14 = (uint *)((int)unaff_r7 + (int)in_r12);
    cVar25 = (int)puVar14 < 0;
    bVar26 = puVar14 == (uint *)0x0;
  }
  bVar23 = false;
  if (bVar26) {
    uVar16 = (uint)in_r12 ^ (uint)unaff_lr >> ((uint)puVar14 & 0xff);
    bVar27 = CARRY4((uint)unaff_r7,uVar16);
    in_OV = SCARRY4((int)unaff_r7,uVar16);
    puVar14 = (uint *)((int)unaff_r7 + uVar16);
    cVar25 = (int)puVar14 < 0;
    bVar23 = puVar14 == (uint *)0x0;
  }
  bVar26 = false;
  if (bVar23) {
    uVar16 = (uint)register0x00000054 ^ (uint)param_4 >> ((uint)puVar14 & 0xff);
    bVar27 = CARRY4((uint)unaff_r7,uVar16);
    in_OV = SCARRY4((int)unaff_r7,uVar16);
    puVar14 = (uint *)((int)unaff_r7 + uVar16);
    cVar25 = (int)puVar14 < 0;
    bVar26 = puVar14 == (uint *)0x0;
  }
  if (bVar26) {
    bVar27 = false;
    cVar25 = (int)puVar22 < 0;
    puVar14 = puVar22;
  }
  bVar23 = false;
  if (bVar26 && puVar22 == (uint *)0x0) {
    bVar27 = CARRY4((uint)unaff_r7,(uint)puVar14);
    in_OV = SCARRY4((int)unaff_r7,(int)puVar14);
    puVar14 = (uint *)((int)unaff_r7 + (int)puVar14);
    cVar25 = (int)puVar14 < 0;
    bVar23 = puVar14 == (uint *)0x0;
  }
  bVar26 = false;
  if (bVar23) {
    puVar14 = (uint *)((uint)unaff_r5 & (int)param_4 << ((uint)unaff_r10 & 0xff));
    bVar27 = puVar14 <= unaff_r5;
    in_OV = SBORROW4((int)unaff_r5,(int)puVar14);
    puVar14 = (uint *)((int)unaff_r5 - (int)puVar14);
    cVar25 = (int)puVar14 < 0;
    bVar26 = puVar14 == (uint *)0x0;
  }
  bVar23 = false;
  if (bVar26) {
    uVar16 = (uint)puVar14 & 0xff;
    bVar27 = uVar16 == 0 && bVar27 || uVar16 != 0 && (bool)((byte)((uint)puVar22 >> uVar16 - 1) & 1)
    ;
    puVar14 = (uint *)((uint)param_4 & (uint)puVar22 >> uVar16);
    cVar25 = (int)puVar14 < 0;
    bVar23 = puVar14 == (uint *)0x0;
  }
  if (bVar23) {
    in_OV = SBORROW4((int)puVar14,(int)puVar14);
    bVar27 = (bool)(bVar30 >> 7);
    puVar14 = (uint *)0x0;
    cVar25 = false;
  }
  bVar26 = false;
  if (bVar23) {
    bVar27 = CARRY4((uint)unaff_r7,(uint)puVar14);
    in_OV = SCARRY4((int)unaff_r7,(int)puVar14);
    puVar14 = (uint *)((int)unaff_r7 + (int)puVar14);
    cVar25 = (int)puVar14 < 0;
    bVar26 = puVar14 == (uint *)0x0;
  }
  bVar23 = false;
  if (bVar26) {
    uVar16 = (uint)puVar14 & 0xff;
    bVar27 = uVar16 == 0 && bVar27 ||
             uVar16 != 0 && (bool)((byte)((uint)unaff_r8 >> uVar16 - 1) & 1);
    puVar14 = (uint *)((uint)param_4 & (uint)unaff_r8 >> uVar16);
    cVar25 = (int)puVar14 < 0;
    bVar23 = puVar14 == (uint *)0x0;
  }
  bVar26 = false;
  if (bVar23) {
    bVar27 = CARRY4((uint)unaff_r7,(uint)puVar14);
    in_OV = SCARRY4((int)unaff_r7,(int)puVar14);
    puVar14 = (uint *)((int)unaff_r7 + (int)puVar14);
    cVar25 = (int)puVar14 < 0;
    bVar26 = puVar14 == (uint *)0x0;
  }
  bVar23 = false;
  if (bVar26) {
    uVar16 = (uint)puVar14 & 0xff;
    bVar27 = uVar16 == 0 && bVar27 || uVar16 != 0 && (bool)((byte)((uint)in_r12 >> uVar16 - 1) & 1);
    puVar14 = (uint *)((uint)unaff_r8 & (uint)in_r12 >> uVar16);
    cVar25 = (int)puVar14 < 0;
    bVar23 = puVar14 == (uint *)0x0;
  }
  if (bVar23) {
    cVar25 = false;
    puVar14 = (uint *)((uint)in_r12 & (uint)unaff_r11);
  }
  if (bVar27 && !bVar23) {
    bVar27 = (uint *)0x84bd5b1 < in_r12;
    in_OV = SBORROW4((int)in_r12,0x84bd5b2);
    puVar14 = (uint *)((int)in_r12 + 0xf7b42a4e);
    cVar25 = (int)puVar14 < 0;
    bVar23 = puVar14 == (uint *)0x0;
  }
  bVar26 = false;
  if (bVar23) {
    uVar16 = (uint)puVar14 & 0xff;
    bVar27 = uVar16 == 0 && bVar27 ||
             uVar16 != 0 && (bool)((byte)((uint)param_4 >> 0x20 - uVar16) & 1);
    puVar14 = (uint *)((uint)unaff_r11 & (int)param_4 << uVar16);
    cVar25 = (int)puVar14 < 0;
    bVar26 = puVar14 == (uint *)0x0;
  }
  bVar23 = false;
  if (bVar26) {
    puVar14 = (uint *)((uint)in_r12 ^ (uint)puVar14);
    cVar25 = (int)puVar14 < 0;
    bVar23 = puVar14 == (uint *)0x0;
  }
  bVar26 = false;
  if (bVar23) {
    uVar16 = (uint)puVar14 & 0xff;
    bVar27 = uVar16 == 0 && bVar27 ||
             uVar16 != 0 && (bool)((byte)((uint)unaff_r5 >> 0x20 - uVar16) & 1);
    puVar14 = (uint *)((uint)unaff_lr & (int)unaff_r5 << uVar16);
    cVar25 = (int)puVar14 < 0;
    bVar26 = puVar14 == (uint *)0x0;
  }
  bVar23 = false;
  if (bVar26) {
    puVar14 = (uint *)((uint)in_r12 ^ (uint)puVar14);
    cVar25 = (int)puVar14 < 0;
    bVar23 = puVar14 == (uint *)0x0;
  }
  bVar26 = false;
  if (bVar23) {
    puVar14 = (uint *)((uint)unaff_r9 & (uint)in_r12);
    cVar25 = (int)puVar14 < 0;
    bVar26 = puVar14 == (uint *)0x0;
  }
  bVar23 = false;
  if (bVar26) {
    puVar14 = (uint *)((uint)in_r12 ^ (uint)puVar14);
    cVar25 = (int)puVar14 < 0;
    bVar23 = puVar14 == (uint *)0x0;
  }
  bVar26 = false;
  if (bVar23) {
    puVar14 = (uint *)((uint)unaff_r10 & (uint)unaff_r8);
    cVar25 = (int)puVar14 < 0;
    bVar26 = puVar14 == (uint *)0x0;
  }
  bVar23 = false;
  if (bVar26) {
    puVar14 = (uint *)((uint)in_r12 & (uint)register0x00000054);
    bVar27 = puVar14 <= in_r12;
    in_OV = SBORROW4((int)in_r12,(int)puVar14);
    puVar14 = (uint *)((int)in_r12 - (int)puVar14);
    cVar25 = (int)puVar14 < 0;
    bVar23 = puVar14 == (uint *)0x0;
  }
  if (bVar23) {
    in_OV = SBORROW4((uint)unaff_r11 & (uint)puVar2,(uint)unaff_r11 & (uint)puVar2);
    puVar14 = (uint *)0x0;
    bVar27 = true;
    cVar25 = false;
  }
  bVar26 = false;
  if (bVar23) {
    puVar14 = (uint *)((uint)in_r12 & (uint)register0x00000054);
    bVar27 = puVar14 <= in_r12;
    in_OV = SBORROW4((int)in_r12,(int)puVar14);
    puVar14 = (uint *)((int)in_r12 - (int)puVar14);
    cVar25 = (int)puVar14 < 0;
    bVar26 = puVar14 == (uint *)0x0;
  }
  if (bVar26) {
    uVar16 = (uint)unaff_lr & 0x84bd65eU >> ((uint)puVar14 & 0xff);
    in_OV = SBORROW4(uVar16,uVar16);
    puVar14 = (uint *)0x0;
    bVar27 = true;
    cVar25 = false;
  }
  bVar23 = false;
  if (bVar26) {
    puVar14 = (uint *)((uint)in_r12 & (uint)register0x00000054);
    bVar27 = puVar14 <= in_r12;
    in_OV = SBORROW4((int)in_r12,(int)puVar14);
    puVar14 = (uint *)((int)in_r12 - (int)puVar14);
    cVar25 = (int)puVar14 < 0;
    bVar23 = puVar14 == (uint *)0x0;
  }
  if (bVar23) {
    uVar16 = (uint)unaff_r11 & (int)register0x00000054 >> ((uint)puVar14 & 0xff);
    in_OV = SBORROW4(uVar16,uVar16);
    puVar14 = (uint *)0x0;
    bVar27 = true;
    cVar25 = false;
  }
  bVar26 = false;
  if (bVar23) {
    puVar14 = (uint *)((uint)in_r12 & (uint)register0x00000054);
    bVar27 = puVar14 <= in_r12;
    in_OV = SBORROW4((int)in_r12,(int)puVar14);
    puVar14 = (uint *)((int)in_r12 - (int)puVar14);
    cVar25 = (int)puVar14 < 0;
    bVar26 = puVar14 == (uint *)0x0;
  }
  if (bVar26) {
    bVar27 = true;
    in_OV = '\0';
    cVar25 = (int)unaff_r5 < 0;
    puVar14 = unaff_r5;
  }
  bVar23 = false;
  if (bVar26 && unaff_r5 == (uint *)0x0) {
    puVar14 = (uint *)((uint)unaff_r5 & (int)unaff_r9 << ((uint)puVar14 & 0xff));
    bVar27 = puVar14 <= unaff_r5;
    in_OV = SBORROW4((int)unaff_r5,(int)puVar14);
    puVar14 = (uint *)((int)unaff_r5 - (int)puVar14);
    cVar25 = (int)puVar14 < 0;
    bVar23 = puVar14 == (uint *)0x0;
  }
  bVar26 = false;
  if (bVar23) {
    uVar16 = (uint)puVar14 & 0xff;
    bVar27 = uVar16 == 0 && bVar27 || uVar16 != 0 && (bool)((byte)((int)unaff_r6 >> uVar16 - 1) & 1)
    ;
    puVar14 = (uint *)((int)unaff_r6 >> uVar16 & 0x84bd706);
    bVar26 = puVar14 == (uint *)0x0;
    cVar25 = false;
  }
  bVar23 = false;
  if (bVar26) {
    bVar27 = CARRY4((uint)unaff_r7,(uint)puVar14);
    in_OV = SCARRY4((int)unaff_r7,(int)puVar14);
    puVar14 = (uint *)((int)unaff_r7 + (int)puVar14);
    cVar25 = (int)puVar14 < 0;
    bVar23 = puVar14 == (uint *)0x0;
  }
  bVar26 = false;
  if (bVar23) {
    uVar16 = (uint)unaff_lr & (int)unaff_r5 >> ((uint)puVar14 & 0xff);
    bVar27 = CARRY4((uint)unaff_r7,uVar16);
    in_OV = SCARRY4((int)unaff_r7,uVar16);
    puVar14 = (uint *)((int)unaff_r7 + uVar16);
    cVar25 = (int)puVar14 < 0;
    bVar26 = puVar14 == (uint *)0x0;
  }
  bVar23 = false;
  if (bVar26) {
    uVar16 = (uint)in_r12 & (int)unaff_r5 >> ((uint)puVar14 & 0xff);
    bVar27 = CARRY4((uint)unaff_r7,uVar16);
    in_OV = SCARRY4((int)unaff_r7,uVar16);
    puVar14 = (uint *)((int)unaff_r7 + uVar16);
    cVar25 = (int)puVar14 < 0;
    bVar23 = puVar14 == (uint *)0x0;
  }
  bVar26 = false;
  if (bVar23) {
    puVar14 = (uint *)((uint)puVar22 ^ (uint)unaff_r5);
    cVar25 = (int)puVar14 < 0;
    bVar26 = puVar14 == (uint *)0x0;
  }
  bVar23 = false;
  bVar24 = bVar27;
  if (bVar26) {
    bVar24 = (bool)((byte)unaff_r6 & 1);
    puVar14 = (uint *)((uint)unaff_r10 & ((uint)bVar27 << 0x1f | (uint)unaff_r6 >> 1));
    cVar25 = (int)puVar14 < 0;
    bVar23 = puVar14 == (uint *)0x0;
  }
  bVar26 = false;
  if (bVar23) {
    puVar14 = (uint *)((uint)puVar22 ^ (uint)puVar14);
    cVar25 = (int)puVar14 < 0;
    bVar26 = puVar14 == (uint *)0x0;
  }
  bVar23 = false;
  bVar27 = bVar24;
  if (bVar26) {
    bVar27 = (bool)(bVar4 & 1);
    puVar14 = (uint *)((uint)unaff_lr & ((uint)bVar24 << 0x1f | (uint)param_3 >> 1));
    cVar25 = (int)puVar14 < 0;
    bVar23 = puVar14 == (uint *)0x0;
  }
  bVar26 = false;
  if (bVar23) {
    bVar27 = param_4 == (uint *)0x0;
    in_OV = SBORROW4(0,(int)param_4);
    puVar14 = (uint *)-(int)param_4;
    cVar25 = (int)puVar14 < 0;
    bVar26 = puVar14 == (uint *)0x0;
  }
  bVar23 = false;
  if (bVar26) {
    bVar27 = CARRY4((uint)unaff_r7,(uint)unaff_r5);
    in_OV = SCARRY4((int)unaff_r7,(int)unaff_r5);
    puVar14 = (uint *)((int)unaff_r7 + (int)unaff_r5);
    cVar25 = (int)puVar14 < 0;
    bVar23 = puVar14 == (uint *)0x0;
  }
  bVar26 = false;
  if (bVar23) {
    uVar16 = (uint)unaff_lr & ((uint)bVar27 << 0x1f | (uint)unaff_r10 >> 1);
    bVar27 = CARRY4((uint)unaff_r7,uVar16);
    in_OV = SCARRY4((int)unaff_r7,uVar16);
    puVar14 = (uint *)((int)unaff_r7 + uVar16);
    cVar25 = (int)puVar14 < 0;
    bVar26 = puVar14 == (uint *)0x0;
  }
  bVar23 = false;
  if (bVar26) {
    uVar16 = (uint)in_r12 & ((uint)bVar27 << 0x1f | (uint)unaff_r9 >> 1);
    bVar27 = CARRY4((uint)unaff_r7,uVar16);
    in_OV = SCARRY4((int)unaff_r7,uVar16);
    puVar14 = (uint *)((int)unaff_r7 + uVar16);
    cVar25 = (int)puVar14 < 0;
    bVar23 = puVar14 == (uint *)0x0;
  }
  bVar26 = false;
  if (bVar23) {
    uVar16 = (uint)puVar14 >> ((uint)puVar14 & 0x1f) | (int)puVar14 << 0x20 - ((uint)puVar14 & 0x1f)
    ;
    bVar27 = ((uint)puVar14 & 0xff) == 0 && bVar27 ||
             ((uint)puVar14 & 0xff) != 0 && SUB41(uVar16 >> 0x1f,0);
    puVar14 = (uint *)((uint)unaff_r9 & uVar16);
    cVar25 = (int)puVar14 < 0;
    bVar26 = puVar14 == (uint *)0x0;
  }
  if (bVar26) {
    cVar25 = (int)unaff_r11 < 0;
    puVar14 = unaff_r11;
  }
  bVar23 = false;
  if (bVar26 && unaff_r11 == (uint *)0x0) {
    puVar14 = (uint *)((uint)in_r12 ^ (uint)unaff_r5);
    cVar25 = (int)puVar14 < 0;
    bVar23 = puVar14 == (uint *)0x0;
  }
  bVar26 = false;
  if (bVar23) {
    puVar14 = (uint *)((uint)in_r12 ^ (uint)in_r12 & (uint)unaff_r9 >> ((uint)puVar14 & 0xff));
    cVar25 = (int)puVar14 < 0;
    bVar26 = puVar14 == (uint *)0x0;
  }
  bVar23 = false;
  if (bVar26) {
    uVar16 = (uint)puVar14 & 0xff;
    bVar27 = uVar16 == 0 && bVar27 ||
             uVar16 != 0 && (bool)((byte)((uint)unaff_r10 >> uVar16 - 1) & 1);
    puVar14 = (uint *)((uint)puVar22 & (uint)unaff_r10 >> uVar16);
    cVar25 = (int)puVar14 < 0;
    bVar23 = puVar14 == (uint *)0x0;
  }
  bVar26 = false;
  if (bVar23) {
    puVar14 = (uint *)((uint)in_r12 ^ (uint)puVar14);
    cVar25 = (int)puVar14 < 0;
    bVar26 = puVar14 == (uint *)0x0;
  }
  if (bVar26) {
    cVar25 = (int)unaff_r9 < 0;
    puVar14 = unaff_r9;
  }
  bVar23 = false;
  if (bVar26 && unaff_r9 == (uint *)0x0) {
    puVar14 = (uint *)((uint)unaff_r5 & (int)unaff_r6 << ((uint)puVar14 & 0xff));
    bVar27 = puVar14 <= unaff_r5;
    in_OV = SBORROW4((int)unaff_r5,(int)puVar14);
    puVar14 = (uint *)((int)unaff_r5 - (int)puVar14);
    cVar25 = (int)puVar14 < 0;
    bVar23 = puVar14 == (uint *)0x0;
  }
  bVar26 = false;
  if (bVar23) {
    uVar16 = (uint)puVar14 & 0xff;
    bVar27 = uVar16 == 0 && bVar27 ||
             uVar16 != 0 && (bool)((byte)((uint)unaff_r7 >> uVar16 - 1) & 1);
    puVar14 = (uint *)((uint)unaff_r10 & (uint)unaff_r7 >> uVar16);
    cVar25 = (int)puVar14 < 0;
    bVar26 = puVar14 == (uint *)0x0;
  }
  if (bVar26) {
    in_OV = SBORROW4((int)puVar14,(int)puVar14);
    puVar14 = (uint *)0x0;
    bVar27 = true;
    cVar25 = false;
  }
  bVar23 = false;
  if (bVar26) {
    uVar16 = (uint)puVar14 & 0xff;
    bVar27 = uVar16 == 0 && bVar27 || uVar16 != 0 && (bool)((byte)((uint)in_r12 >> uVar16 - 1) & 1);
    puVar14 = (uint *)((uint)in_r12 & (uint)in_r12 >> uVar16);
    cVar25 = (int)puVar14 < 0;
    bVar23 = puVar14 == (uint *)0x0;
  }
  if (bVar23) {
    in_OV = SBORROW4((int)puVar14,(int)puVar14);
    puVar14 = (uint *)0x0;
    bVar27 = true;
    cVar25 = false;
  }
  bVar26 = false;
  if (bVar23) {
    uVar16 = (uint)puVar14 & 0xff;
    bVar27 = uVar16 == 0 && bVar27 ||
             uVar16 != 0 && (bool)((byte)((uint)unaff_r7 >> uVar16 - 1) & 1);
    puVar14 = (uint *)((uint)unaff_lr & (uint)unaff_r7 >> uVar16);
    cVar25 = (int)puVar14 < 0;
    bVar26 = puVar14 == (uint *)0x0;
  }
  bVar23 = false;
  if (bVar26) {
    bVar27 = (uint *)0x84bd819 < in_r12;
    in_OV = SBORROW4((int)in_r12,0x84bd81a);
    puVar14 = (uint *)((int)in_r12 + 0xf7b427e6);
    cVar25 = (int)puVar14 < 0;
    bVar23 = puVar14 == (uint *)0x0;
  }
  if (bVar23) {
    bVar27 = (bool)(bVar6 >> 7);
    puVar14 = (uint *)0x0;
    cVar25 = false;
  }
  bVar26 = false;
  if (bVar23) {
    bVar27 = (uint *)0x84bd821 < puVar14;
    in_OV = SBORROW4((int)puVar14,0x84bd822);
    puVar14 = (uint *)((int)puVar14 + 0xf7b427de);
    cVar25 = (int)puVar14 < 0;
    bVar26 = puVar14 == (uint *)0x0;
  }
  if (bVar26) {
    bVar27 = (bool)(bVar11 >> 7);
    puVar14 = (uint *)0x0;
    cVar25 = false;
  }
  bVar23 = false;
  if (bVar26) {
    bVar27 = (uint *)0x84bd829 < puVar14;
    in_OV = SBORROW4((int)puVar14,0x84bd82a);
    puVar14 = (uint *)((int)puVar14 + 0xf7b427d6);
    cVar25 = (int)puVar14 < 0;
    bVar23 = puVar14 == (uint *)0x0;
  }
  if (bVar23) {
    bVar27 = (bool)(bVar7 >> 7);
    puVar14 = (uint *)0x0;
    cVar25 = false;
  }
  if (bVar27 && !bVar23) {
    puVar14 = (uint *)((int)puVar14 - (int)unaff_r9);
  }
  if (bVar23) {
    bVar27 = (bool)(bVar30 >> 7);
    puVar14 = (uint *)0x0;
    cVar25 = false;
  }
  bVar26 = false;
  if (bVar23) {
    bVar27 = CARRY4((uint)unaff_r7,(uint)unaff_r5);
    in_OV = SCARRY4((int)unaff_r7,(int)unaff_r5);
    puVar14 = (uint *)((int)unaff_r7 + (int)unaff_r5);
    cVar25 = (int)puVar14 < 0;
    bVar26 = puVar14 == (uint *)0x0;
  }
  bVar23 = false;
  if (bVar26) {
    uVar16 = (uint)in_r12 & (int)param_3 << ((uint)puVar14 & 0xff);
    bVar27 = CARRY4((uint)unaff_r7,uVar16);
    in_OV = SCARRY4((int)unaff_r7,uVar16);
    puVar14 = (uint *)((int)unaff_r7 + uVar16);
    cVar25 = (int)puVar14 < 0;
    bVar23 = puVar14 == (uint *)0x0;
  }
  bVar26 = false;
  if (bVar23) {
    bVar27 = (uint *)0xf7b427a1 < unaff_r7;
    in_OV = SCARRY4((int)unaff_r7,0x84bd85e);
    puVar14 = (uint *)((int)unaff_r7 + 0x84bd85e);
    cVar25 = (int)puVar14 < 0;
    bVar26 = puVar14 == (uint *)0x0;
  }
  bVar23 = false;
  if (bVar26) {
    uVar16 = (uint)in_r12 & (uint)unaff_r9;
    bVar27 = CARRY4((uint)unaff_r7,uVar16);
    in_OV = SCARRY4((int)unaff_r7,uVar16);
    puVar14 = (uint *)((int)unaff_r7 + uVar16);
    cVar25 = (int)puVar14 < 0;
    bVar23 = puVar14 == (uint *)0x0;
  }
  bVar26 = false;
  if (bVar23) {
    uVar16 = (uint)puVar14 & 0xff;
    bVar27 = uVar16 == 0 && bVar27 ||
             uVar16 != 0 && (bool)((byte)((uint)puVar22 >> 0x20 - uVar16) & 1);
    puVar14 = (uint *)((uint)puVar14 & (int)puVar22 << uVar16);
    cVar25 = (int)puVar14 < 0;
    bVar26 = puVar14 == (uint *)0x0;
  }
  if (bVar26) {
    puVar14 = (uint *)0x0;
    cVar25 = false;
  }
  bVar23 = false;
  if (bVar26) {
    bVar27 = CARRY4((uint)unaff_r7,(uint)unaff_r5);
    in_OV = SCARRY4((int)unaff_r7,(int)unaff_r5);
    puVar14 = (uint *)((int)unaff_r7 + (int)unaff_r5);
    cVar25 = (int)puVar14 < 0;
    bVar23 = puVar14 == (uint *)0x0;
  }
  bVar26 = false;
  if (bVar23) {
    uVar16 = (int)unaff_r10 - ((int)unaff_lr << ((uint)puVar14 & 0xff));
    bVar27 = CARRY4((uint)unaff_r7,uVar16);
    in_OV = SCARRY4((int)unaff_r7,uVar16);
    puVar14 = (uint *)((int)unaff_r7 + uVar16);
    cVar25 = (int)puVar14 < 0;
    bVar26 = puVar14 == (uint *)0x0;
  }
  if (bVar26) {
    puVar14 = (uint *)0x0;
    cVar25 = false;
  }
  bVar23 = false;
  if (bVar26) {
    bVar27 = CARRY4((uint)unaff_r7,(uint)unaff_r5);
    in_OV = SCARRY4((int)unaff_r7,(int)unaff_r5);
    puVar14 = (uint *)((int)unaff_r7 + (int)unaff_r5);
    cVar25 = (int)puVar14 < 0;
    bVar23 = puVar14 == (uint *)0x0;
  }
  bVar26 = false;
  if (bVar23) {
    uVar16 = (int)unaff_lr << ((uint)puVar14 & 0xff);
    bVar27 = uVar16 < 0x84bd8ff;
    in_OV = SBORROW4(0x84bd8fe,uVar16);
    puVar14 = (uint *)(0x84bd8fe - uVar16);
    cVar25 = (int)puVar14 < 0;
    bVar26 = puVar14 == (uint *)0x0;
  }
  bVar23 = false;
  if (bVar26) {
    bVar27 = CARRY4((uint)unaff_r7,(uint)puVar14);
    in_OV = SCARRY4((int)unaff_r7,(int)puVar14);
    puVar14 = (uint *)((int)unaff_r7 + (int)puVar14);
    cVar25 = (int)puVar14 < 0;
    bVar23 = puVar14 == (uint *)0x0;
  }
  bVar26 = false;
  if (bVar23) {
    uVar16 = (int)unaff_lr << ((uint)puVar14 & 0xff);
    bVar27 = uVar16 < 0x84bd907;
    in_OV = SBORROW4(0x84bd906,uVar16);
    puVar14 = (uint *)(0x84bd906 - uVar16);
    cVar25 = (int)puVar14 < 0;
    bVar26 = puVar14 == (uint *)0x0;
  }
  if (bVar26) {
    puVar14 = (uint *)0x0;
    cVar25 = false;
  }
  bVar23 = false;
  if (bVar26) {
    bVar27 = CARRY4((uint)unaff_r7,(uint)unaff_r5);
    in_OV = SCARRY4((int)unaff_r7,(int)unaff_r5);
    puVar14 = (uint *)((int)unaff_r7 + (int)unaff_r5);
    cVar25 = (int)puVar14 < 0;
    bVar23 = puVar14 == (uint *)0x0;
  }
  bVar26 = false;
  if (bVar23) {
    puVar14 = (uint *)((int)puVar14 << ((uint)puVar14 & 0xff));
    bVar27 = puVar14 <= param_4;
    in_OV = SBORROW4((int)param_4,(int)puVar14);
    puVar14 = (uint *)((int)param_4 - (int)puVar14);
    cVar25 = (int)puVar14 < 0;
    bVar26 = puVar14 == (uint *)0x0;
  }
  bVar23 = false;
  if (bVar26) {
    bVar27 = CARRY4((uint)unaff_r7,(uint)puVar14);
    in_OV = SCARRY4((int)unaff_r7,(int)puVar14);
    puVar14 = (uint *)((int)unaff_r7 + (int)puVar14);
    cVar25 = (int)puVar14 < 0;
    bVar23 = puVar14 == (uint *)0x0;
  }
  bVar26 = false;
  if (bVar23) {
    puVar14 = (uint *)((int)puVar14 << ((uint)puVar14 & 0xff));
    bVar27 = puVar14 <= param_4;
    in_OV = SBORROW4((int)param_4,(int)puVar14);
    puVar14 = (uint *)((int)param_4 - (int)puVar14);
    cVar25 = (int)puVar14 < 0;
    bVar26 = puVar14 == (uint *)0x0;
  }
  if (bVar26) {
    puVar14 = (uint *)0x0;
    cVar25 = false;
  }
  bVar23 = false;
  if (bVar26) {
    bVar27 = CARRY4((uint)unaff_r7,(uint)unaff_r5);
    in_OV = SCARRY4((int)unaff_r7,(int)unaff_r5);
    puVar14 = (uint *)((int)unaff_r7 + (int)unaff_r5);
    cVar25 = (int)puVar14 < 0;
    bVar23 = puVar14 == (uint *)0x0;
  }
  if (bVar23) {
    bVar27 = true;
    in_OV = '\0';
    cVar25 = (int)param_4 < 0;
    puVar14 = param_4;
  }
  bVar26 = false;
  if (bVar23 && param_4 == (uint *)0x0) {
    bVar27 = CARRY4((uint)unaff_r7,(uint)puVar14);
    in_OV = SCARRY4((int)unaff_r7,(int)puVar14);
    puVar14 = (uint *)((int)unaff_r7 + (int)puVar14);
    cVar25 = (int)puVar14 < 0;
    bVar26 = puVar14 == (uint *)0x0;
  }
  if (bVar26) {
    bVar27 = true;
    in_OV = '\0';
    cVar25 = (int)param_4 < 0;
    puVar14 = param_4;
  }
  bVar26 = bVar26 && param_4 == (uint *)0x0;
  if (bVar26) {
    puVar14 = (uint *)0x0;
    cVar25 = false;
  }
  bVar23 = false;
  if (bVar26) {
    bVar27 = CARRY4((uint)unaff_r7,(uint)unaff_r5);
    in_OV = SCARRY4((int)unaff_r7,(int)unaff_r5);
    puVar14 = (uint *)((int)unaff_r7 + (int)unaff_r5);
    cVar25 = (int)puVar14 < 0;
    bVar23 = puVar14 == (uint *)0x0;
  }
  bVar26 = false;
  if (bVar23) {
    uVar16 = (uint)in_r12 ^ (int)unaff_lr << ((uint)puVar14 & 0xff);
    bVar27 = CARRY4((uint)unaff_r7,uVar16);
    in_OV = SCARRY4((int)unaff_r7,uVar16);
    puVar14 = (uint *)((int)unaff_r7 + uVar16);
    cVar25 = (int)puVar14 < 0;
    bVar26 = puVar14 == (uint *)0x0;
  }
  bVar23 = false;
  if (bVar26) {
    uVar16 = (uint)in_r12 ^ (int)unaff_lr << ((uint)puVar14 & 0xff);
    bVar27 = CARRY4((uint)unaff_r7,uVar16);
    in_OV = SCARRY4((int)unaff_r7,uVar16);
    puVar14 = (uint *)((int)unaff_r7 + uVar16);
    cVar25 = (int)puVar14 < 0;
    bVar23 = puVar14 == (uint *)0x0;
  }
  if (bVar23) {
    puVar14 = (uint *)0x0;
    cVar25 = false;
  }
  bVar26 = false;
  if (bVar23) {
    bVar27 = CARRY4((uint)unaff_r7,(uint)unaff_r5);
    in_OV = SCARRY4((int)unaff_r7,(int)unaff_r5);
    puVar14 = (uint *)((int)unaff_r7 + (int)unaff_r5);
    cVar25 = (int)puVar14 < 0;
    bVar26 = puVar14 == (uint *)0x0;
  }
  bVar23 = false;
  if (bVar26) {
    uVar16 = (int)puVar22 - ((int)unaff_lr << ((uint)puVar14 & 0xff));
    bVar27 = CARRY4((uint)unaff_r7,uVar16);
    in_OV = SCARRY4((int)unaff_r7,uVar16);
    puVar14 = (uint *)((int)unaff_r7 + uVar16);
    cVar25 = (int)puVar14 < 0;
    bVar23 = puVar14 == (uint *)0x0;
  }
  bVar26 = false;
  if (bVar23) {
    uVar16 = (int)puVar22 - ((int)unaff_lr << ((uint)puVar14 & 0xff));
    bVar27 = CARRY4((uint)unaff_r7,uVar16);
    in_OV = SCARRY4((int)unaff_r7,uVar16);
    puVar14 = (uint *)((int)unaff_r7 + uVar16);
    cVar25 = (int)puVar14 < 0;
    bVar26 = puVar14 == (uint *)0x0;
  }
  if (bVar26) {
    puVar14 = (uint *)0x0;
    cVar25 = false;
  }
  bVar23 = false;
  if (bVar26) {
    bVar27 = CARRY4((uint)unaff_r7,(uint)unaff_r5);
    in_OV = SCARRY4((int)unaff_r7,(int)unaff_r5);
    puVar14 = (uint *)((int)unaff_r7 + (int)unaff_r5);
    cVar25 = (int)puVar14 < 0;
    bVar23 = puVar14 == (uint *)0x0;
  }
  bVar26 = false;
  if (bVar23) {
    uVar16 = (uint)puVar14 & 0xff;
    bVar27 = uVar16 == 0 && bVar27 ||
             uVar16 != 0 && (bool)((byte)((uint)puVar14 >> 0x20 - uVar16) & 1);
    puVar14 = (uint *)((uint)unaff_r5 ^ (int)puVar14 << uVar16);
    cVar25 = (int)puVar14 < 0;
    bVar26 = puVar14 == (uint *)0x0;
  }
  bVar23 = false;
  if (bVar26) {
    bVar27 = CARRY4((uint)unaff_r7,(uint)puVar14);
    in_OV = SCARRY4((int)unaff_r7,(int)puVar14);
    puVar14 = (uint *)((int)unaff_r7 + (int)puVar14);
    cVar25 = (int)puVar14 < 0;
    bVar23 = puVar14 == (uint *)0x0;
  }
  bVar26 = false;
  if (bVar23) {
    uVar16 = (uint)puVar14 & 0xff;
    bVar27 = uVar16 == 0 && bVar27 ||
             uVar16 != 0 && (bool)((byte)((uint)puVar14 >> 0x20 - uVar16) & 1);
    puVar14 = (uint *)((uint)unaff_r5 ^ (int)puVar14 << uVar16);
    cVar25 = (int)puVar14 < 0;
    bVar26 = puVar14 == (uint *)0x0;
  }
  bVar23 = false;
  if (bVar26) {
    bVar27 = CARRY4((uint)unaff_r7,(uint)puVar14);
    in_OV = SCARRY4((int)unaff_r7,(int)puVar14);
    puVar14 = (uint *)((int)unaff_r7 + (int)puVar14);
    cVar25 = (int)puVar14 < 0;
    bVar23 = puVar14 == (uint *)0x0;
  }
  bVar26 = false;
  if (bVar23) {
    uVar16 = (uint)puVar14 & 0xff;
    bVar27 = uVar16 == 0 && bVar27 ||
             uVar16 != 0 && (bool)((byte)((uint)puVar14 >> 0x20 - uVar16) & 1);
    puVar14 = (uint *)((uint)unaff_r5 ^ (int)puVar14 << uVar16);
    cVar25 = (int)puVar14 < 0;
    bVar26 = puVar14 == (uint *)0x0;
  }
  if (bVar26) {
    puVar14 = (uint *)0x0;
    cVar25 = false;
  }
  bVar23 = false;
  if (bVar26) {
    bVar27 = CARRY4((uint)unaff_r7,(uint)unaff_r5);
    in_OV = SCARRY4((int)unaff_r7,(int)unaff_r5);
    puVar14 = (uint *)((int)unaff_r7 + (int)unaff_r5);
    cVar25 = (int)puVar14 < 0;
    bVar23 = puVar14 == (uint *)0x0;
  }
  if (bVar23) {
    bVar27 = (bool)(bVar12 >> 7);
    cVar25 = (int)unaff_r5 < 0;
    puVar14 = unaff_r5;
  }
  bVar26 = false;
  if (bVar23 && unaff_r5 == (uint *)0x0) {
    bVar27 = CARRY4((uint)unaff_r7,(uint)puVar14);
    in_OV = SCARRY4((int)unaff_r7,(int)puVar14);
    puVar14 = (uint *)((int)unaff_r7 + (int)puVar14);
    cVar25 = (int)puVar14 < 0;
    bVar26 = puVar14 == (uint *)0x0;
  }
  if (bVar26) {
    bVar27 = (bool)(bVar12 >> 7);
    cVar25 = (int)unaff_r5 < 0;
    puVar14 = unaff_r5;
  }
  bVar23 = false;
  if (bVar26 && unaff_r5 == (uint *)0x0) {
    bVar27 = CARRY4((uint)unaff_r7,(uint)puVar14);
    in_OV = SCARRY4((int)unaff_r7,(int)puVar14);
    puVar14 = (uint *)((int)unaff_r7 + (int)puVar14);
    cVar25 = (int)puVar14 < 0;
    bVar23 = puVar14 == (uint *)0x0;
  }
  if (bVar23) {
    bVar27 = (bool)(bVar12 >> 7);
    cVar25 = (int)unaff_r5 < 0;
    puVar14 = unaff_r5;
  }
  bVar23 = bVar23 && unaff_r5 == (uint *)0x0;
  if (bVar23) {
    puVar14 = (uint *)0x0;
    cVar25 = false;
  }
  bVar26 = false;
  if (bVar23) {
    puVar14 = (uint *)((uint)in_r12 ^ (int)unaff_r5 - ((int)unaff_r11 << ((uint)puVar14 & 0xff)));
    cVar25 = (int)puVar14 < 0;
    bVar26 = puVar14 == (uint *)0x0;
  }
  bVar23 = false;
  if (bVar26) {
    puVar14 = (uint *)((uint)in_r12 ^ (uint)unaff_r4);
    cVar25 = (int)puVar14 < 0;
    bVar23 = puVar14 == (uint *)0x0;
  }
  if (bVar23) {
    puVar14 = (uint *)0x0;
    cVar25 = false;
  }
  bVar26 = false;
  if (bVar23) {
    puVar14 = (uint *)((uint)puVar22 ^ (uint)unaff_r5);
    cVar25 = (int)puVar14 < 0;
    bVar26 = puVar14 == (uint *)0x0;
  }
  bVar23 = false;
  if (bVar26) {
    puVar14 = (uint *)((uint)puVar22 ^ (int)unaff_r11 - (int)unaff_lr);
    cVar25 = (int)puVar14 < 0;
    bVar23 = puVar14 == (uint *)0x0;
  }
  bVar26 = false;
  if (bVar23) {
    puVar14 = (uint *)((uint)puVar22 ^ (uint)unaff_r5);
    cVar25 = (int)puVar14 < 0;
    bVar26 = puVar14 == (uint *)0x0;
  }
  bVar23 = false;
  if (bVar26) {
    puVar14 = (uint *)((uint)puVar22 ^ (uint)unaff_r6);
    cVar25 = (int)puVar14 < 0;
    bVar23 = puVar14 == (uint *)0x0;
  }
  if (bVar23) {
    cVar25 = false;
    puVar14 = (uint *)((uint)in_r12 & (uint)unaff_lr);
  }
  if (bVar27 && !bVar23) {
    bVar27 = CARRY4((uint)puVar14,(uint)in_r12);
    in_OV = SCARRY4((int)puVar14,(int)in_r12);
    puVar14 = (uint *)((int)puVar14 + (int)in_r12);
    cVar25 = (int)puVar14 < 0;
    bVar23 = puVar14 == (uint *)0x0;
  }
  bVar26 = false;
  if (bVar23) {
    puVar14 = (uint *)((uint)puVar22 ^
                      (uint)register0x00000054 & (int)unaff_lr << ((uint)puVar14 & 0xff));
    cVar25 = (int)puVar14 < 0;
    bVar26 = puVar14 == (uint *)0x0;
  }
  bVar23 = false;
  if (bVar26) {
    uVar16 = (uint)puVar14 & 0xff;
    bVar27 = uVar16 == 0 && bVar27 ||
             uVar16 != 0 && (bool)((byte)((uint)puVar14 >> 0x20 - uVar16) & 1);
    puVar14 = (uint *)((uint)unaff_r7 & (int)puVar14 << uVar16);
    cVar25 = (int)puVar14 < 0;
    bVar23 = puVar14 == (uint *)0x0;
  }
  bVar26 = false;
  if (bVar23) {
    puVar14 = (uint *)((uint)puVar22 ^ (uint)puVar14);
    cVar25 = (int)puVar14 < 0;
    bVar26 = puVar14 == (uint *)0x0;
  }
  if (bVar26) {
    bVar27 = (bool)(bVar9 >> 7);
    puVar14 = (uint *)0x0;
    cVar25 = false;
  }
  bVar23 = false;
  if (bVar26) {
    bVar27 = CARRY4((uint)unaff_r7,(uint)unaff_r5);
    in_OV = SCARRY4((int)unaff_r7,(int)unaff_r5);
    puVar14 = (uint *)((int)unaff_r7 + (int)unaff_r5);
    cVar25 = (int)puVar14 < 0;
    bVar23 = puVar14 == (uint *)0x0;
  }
  if (bVar23) {
    bVar27 = (bool)(bVar5 >> 7);
    puVar14 = (uint *)0x0;
    cVar25 = false;
  }
  bVar26 = false;
  if (bVar23) {
    bVar27 = CARRY4((uint)unaff_r7,(uint)puVar14);
    in_OV = SCARRY4((int)unaff_r7,(int)puVar14);
    puVar14 = (uint *)((int)unaff_r7 + (int)puVar14);
    cVar25 = (int)puVar14 < 0;
    bVar26 = puVar14 == (uint *)0x0;
  }
  if (bVar26) {
    bVar27 = (bool)(bVar7 >> 7);
    puVar14 = (uint *)0x0;
    cVar25 = false;
  }
  bVar23 = false;
  if (bVar26) {
    bVar27 = CARRY4((uint)unaff_r7,(uint)unaff_r5);
    in_OV = SCARRY4((int)unaff_r7,(int)unaff_r5);
    puVar14 = (uint *)((int)unaff_r7 + (int)unaff_r5);
    cVar25 = (int)puVar14 < 0;
    bVar23 = puVar14 == (uint *)0x0;
  }
  bVar26 = false;
  if (bVar23) {
    uVar16 = (uint)puVar14 & 0xff;
    bVar27 = uVar16 == 0 && bVar27 ||
             uVar16 != 0 && (bool)((byte)((uint)puVar14 >> 0x20 - uVar16) & 1);
    puVar14 = (uint *)((uint)unaff_r8 & (int)puVar14 << uVar16);
    cVar25 = (int)puVar14 < 0;
    bVar26 = puVar14 == (uint *)0x0;
  }
  bVar23 = false;
  if (bVar26) {
    bVar27 = CARRY4((uint)unaff_r7,(uint)puVar14);
    in_OV = SCARRY4((int)unaff_r7,(int)puVar14);
    puVar14 = (uint *)((int)unaff_r7 + (int)puVar14);
    cVar25 = (int)puVar14 < 0;
    bVar23 = puVar14 == (uint *)0x0;
  }
  bVar26 = false;
  if (bVar23) {
    uVar16 = (uint)puVar14 & 0xff;
    bVar27 = uVar16 == 0 && bVar27 ||
             uVar16 != 0 && (bool)((byte)((uint)unaff_r6 >> 0x20 - uVar16) & 1);
    puVar14 = (uint *)((uint)unaff_r7 & (int)unaff_r6 << uVar16);
    cVar25 = (int)puVar14 < 0;
    bVar26 = puVar14 == (uint *)0x0;
  }
  bVar23 = false;
  if (bVar26) {
    puVar14 = (uint *)((uint)in_r12 ^ (uint)unaff_r5);
    cVar25 = (int)puVar14 < 0;
    bVar23 = puVar14 == (uint *)0x0;
  }
  if (bVar23) {
    cVar25 = (int)param_4 < 0;
    puVar14 = param_4;
  }
  bVar26 = false;
  if (bVar23 && param_4 == (uint *)0x0) {
    uVar16 = (uint)param_4 ^ (int)puVar14 << ((uint)puVar14 & 0xff);
    bVar27 = CARRY4((uint)unaff_r7,uVar16);
    in_OV = SCARRY4((int)unaff_r7,uVar16);
    puVar14 = (uint *)((int)unaff_r7 + uVar16);
    cVar25 = (int)puVar14 < 0;
    bVar26 = puVar14 == (uint *)0x0;
  }
  if (bVar26) {
    puVar14 = (uint *)0x0;
    cVar25 = false;
  }
  bVar23 = false;
  if (bVar26) {
    puVar14 = (uint *)((uint)in_r12 ^ (uint)unaff_r5);
    cVar25 = (int)puVar14 < 0;
    bVar23 = puVar14 == (uint *)0x0;
  }
  bVar26 = false;
  if (bVar23) {
    puVar14 = (uint *)((uint)in_r12 ^ (uint)unaff_lr ^ (int)puVar14 << ((uint)puVar14 & 0xff));
    cVar25 = (int)puVar14 < 0;
    bVar26 = puVar14 == (uint *)0x0;
  }
  if (bVar26) {
    cVar25 = (int)in_r12 < 0;
    puVar14 = in_r12;
  }
  bVar23 = false;
  if (bVar26 && in_r12 == (uint *)0x0) {
    uVar16 = (uint)puVar14 & 0xff;
    bVar27 = uVar16 == 0 && bVar27 ||
             uVar16 != 0 && (bool)((byte)((uint)puVar22 >> 0x20 - uVar16) & 1);
    puVar14 = (uint *)((uint)puVar14 ^ (int)puVar22 << uVar16);
    cVar25 = (int)puVar14 < 0;
    bVar23 = puVar14 == (uint *)0x0;
  }
  if (bVar23) {
    puVar14 = (uint *)0x0;
    cVar25 = false;
  }
  bVar26 = false;
  if (bVar23) {
    puVar14 = (uint *)((uint)puVar22 ^ (uint)in_r12);
    cVar25 = (int)puVar14 < 0;
    bVar26 = puVar14 == (uint *)0x0;
  }
  bVar23 = false;
  if (bVar26) {
    puVar14 = (uint *)((uint)puVar22 ^ (uint)unaff_lr & (int)unaff_r7 << ((uint)puVar14 & 0xff));
    cVar25 = (int)puVar14 < 0;
    bVar23 = puVar14 == (uint *)0x0;
  }
  if (bVar23) {
    puVar14 = (uint *)0x0;
  }
  if (bVar27 && !bVar23) {
    puVar14 = (uint *)((int)puVar14 - (int)unaff_r9);
  }
  bVar26 = false;
  if (bVar23) {
    puVar14 = (uint *)((uint)puVar14 & (int)unaff_lr << ((uint)puVar14 & 0xff));
    cVar25 = (int)puVar14 < 0;
    bVar26 = puVar14 == (uint *)0x0;
  }
  if (bVar26) {
    puVar14 = (uint *)0x0;
    cVar25 = false;
  }
  bVar23 = false;
  if (bVar26) {
    in_OV = SBORROW4((int)in_r12,0x84bdd22);
    puVar14 = (uint *)((int)in_r12 + 0xf7b422de);
    cVar25 = (int)puVar14 < 0;
    bVar23 = puVar14 == (uint *)0x0;
  }
  bVar26 = false;
  if (bVar23) {
    puVar14 = (uint *)((uint)puVar14 & (int)unaff_r9 << ((uint)puVar14 & 0xff));
    cVar25 = (int)puVar14 < 0;
    bVar26 = puVar14 == (uint *)0x0;
  }
  bVar23 = false;
  if (bVar26) {
    in_OV = SBORROW4((int)puVar14,0x84bdd2a);
    puVar14 = (uint *)((int)puVar14 + 0xf7b422d6);
    cVar25 = (int)puVar14 < 0;
    bVar23 = puVar14 == (uint *)0x0;
  }
  if (bVar23) {
    puVar14 = (uint *)0x0;
    cVar25 = false;
  }
  bVar26 = false;
  if (bVar23) {
    in_OV = SBORROW4((int)puVar14,0x84bdd32);
    puVar14 = (uint *)((int)puVar14 + 0xf7b422ce);
    cVar25 = (int)puVar14 < 0;
    bVar26 = puVar14 == (uint *)0x0;
  }
  bVar23 = false;
  if (bVar26) {
    puVar14 = (uint *)((uint)puVar14 & (int)unaff_lr << ((uint)puVar14 & 0xff));
    cVar25 = (int)puVar14 < 0;
    bVar23 = puVar14 == (uint *)0x0;
  }
  bVar26 = false;
  if (bVar23) {
    in_OV = SBORROW4((int)puVar14,0x84bdd3a);
    puVar14 = (uint *)((int)puVar14 + 0xf7b422c6);
    cVar25 = (int)puVar14 < 0;
    bVar26 = puVar14 == (uint *)0x0;
  }
  bVar23 = false;
  if (bVar26) {
    uVar16 = (uint)in_r12 & (int)unaff_r11 << ((uint)puVar14 & 0xff);
    in_OV = SBORROW4(uVar16,0x84bdd42);
    puVar14 = (uint *)(uVar16 + 0xf7b422be);
    cVar25 = (int)puVar14 < 0;
    bVar23 = puVar14 == (uint *)0x0;
  }
  if (bVar23) {
    cVar25 = (int)unaff_r5 < 0;
    puVar14 = unaff_r5;
  }
  bVar26 = false;
  if (bVar23 && unaff_r5 == (uint *)0x0) {
    in_OV = SCARRY4((int)unaff_r7,(int)unaff_r5);
    puVar14 = (uint *)((int)unaff_r7 + (int)unaff_r5);
    cVar25 = (int)puVar14 < 0;
    bVar26 = puVar14 == (uint *)0x0;
  }
  bVar23 = false;
  if (bVar26) {
    puVar14 = (uint *)((uint)param_3 ^ (uint)param_4 >> ((uint)puVar14 & 0xff));
    cVar25 = (int)puVar14 < 0;
    bVar23 = puVar14 == (uint *)0x0;
  }
  bVar26 = false;
  if (bVar23) {
    in_OV = SCARRY4((int)unaff_r7,(int)puVar14);
    puVar14 = (uint *)((int)unaff_r7 + (int)puVar14);
    cVar25 = (int)puVar14 < 0;
    bVar26 = puVar14 == (uint *)0x0;
  }
  bVar23 = false;
  if (bVar26) {
    puVar14 = (uint *)((uint)param_4 ^ (uint)unaff_r7 >> ((uint)puVar14 & 0xff));
    cVar25 = (int)puVar14 < 0;
    bVar23 = puVar14 == (uint *)0x0;
  }
  bVar26 = false;
  if (bVar23) {
    puVar14 = (uint *)((uint)in_r12 ^ (uint)puVar14);
    cVar25 = (int)puVar14 < 0;
    bVar26 = puVar14 == (uint *)0x0;
  }
  bVar23 = false;
  if (bVar26) {
    puVar14 = (uint *)((uint)in_r12 ^ (uint)param_4);
    cVar25 = (int)puVar14 < 0;
    bVar23 = puVar14 == (uint *)0x0;
  }
  if (bVar23) {
    in_OV = '\0';
    cVar25 = (int)unaff_r10 < 0;
    puVar14 = unaff_r10;
  }
  bVar26 = false;
  if (bVar23 && unaff_r10 == (uint *)0x0) {
    in_OV = SCARRY4((int)unaff_r7,(int)unaff_r5);
    puVar14 = (uint *)((int)unaff_r7 + (int)unaff_r5);
    cVar25 = (int)puVar14 < 0;
    bVar26 = puVar14 == (uint *)0x0;
  }
  bVar23 = false;
  if (bVar26) {
    puVar14 = (uint *)((uint)param_3 & (int)unaff_r8 >> ((uint)puVar14 & 0xff));
    cVar25 = (int)puVar14 < 0;
    bVar23 = puVar14 == (uint *)0x0;
  }
  bVar26 = false;
  if (bVar23) {
    in_OV = SCARRY4((int)unaff_r7,(int)puVar14);
    puVar14 = (uint *)((int)unaff_r7 + (int)puVar14);
    cVar25 = (int)puVar14 < 0;
    bVar26 = puVar14 == (uint *)0x0;
  }
  if (bVar26) {
    in_OV = '\0';
    cVar25 = (int)unaff_r10 < 0;
    puVar14 = unaff_r10;
  }
  bVar23 = false;
  if (bVar26 && unaff_r10 == (uint *)0x0) {
    in_OV = SCARRY4((int)unaff_r7,(int)unaff_r5);
    puVar14 = (uint *)((int)unaff_r7 + (int)unaff_r5);
    cVar25 = (int)puVar14 < 0;
    bVar23 = puVar14 == (uint *)0x0;
  }
  bVar26 = false;
  if (bVar23) {
    puVar14 = (uint *)((uint)puVar14 & (int)unaff_r10 >> ((uint)puVar14 & 0xff));
    cVar25 = (int)puVar14 < 0;
    bVar26 = puVar14 == (uint *)0x0;
  }
  bVar23 = false;
  if (bVar26) {
    in_OV = SCARRY4((int)unaff_r7,(int)puVar14);
    puVar14 = (uint *)((int)unaff_r7 + (int)puVar14);
    cVar25 = (int)puVar14 < 0;
    bVar23 = puVar14 == (uint *)0x0;
  }
  if (bVar23) {
    in_OV = '\0';
    cVar25 = (int)unaff_r10 < 0;
    puVar14 = unaff_r10;
  }
  bVar26 = false;
  if (bVar23 && unaff_r10 == (uint *)0x0) {
    in_OV = SCARRY4((int)unaff_r7,(int)unaff_r5);
    puVar14 = (uint *)((int)unaff_r7 + (int)unaff_r5);
    cVar25 = (int)puVar14 < 0;
    bVar26 = puVar14 == (uint *)0x0;
  }
  bVar23 = false;
  if (bVar26) {
    uVar16 = (uint)in_r12 & (int)unaff_r7 >> ((uint)puVar14 & 0xff);
    in_OV = SCARRY4((int)unaff_r7,uVar16);
    puVar14 = (uint *)((int)unaff_r7 + uVar16);
    cVar25 = (int)puVar14 < 0;
    bVar23 = puVar14 == (uint *)0x0;
  }
  bVar26 = false;
  if (bVar23) {
    puVar14 = (uint *)((uint)puVar14 & (int)unaff_r10 >> ((uint)puVar14 & 0xff));
    cVar25 = (int)puVar14 < 0;
    bVar26 = puVar14 == (uint *)0x0;
  }
  if (bVar26) {
    in_OV = '\0';
    cVar25 = (int)unaff_r10 < 0;
    puVar14 = unaff_r10;
  }
  bVar23 = false;
  if (bVar26 && unaff_r10 == (uint *)0x0) {
    in_OV = SCARRY4((int)unaff_r7,(int)unaff_r5);
    puVar14 = (uint *)((int)unaff_r7 + (int)unaff_r5);
    cVar25 = (int)puVar14 < 0;
    bVar23 = puVar14 == (uint *)0x0;
  }
  bVar26 = false;
  if (bVar23) {
    uVar16 = (uint)in_r12 & 0x84bde3e >> ((uint)puVar14 & 0xff);
    in_OV = SCARRY4((int)unaff_r7,uVar16);
    puVar14 = (uint *)((int)unaff_r7 + uVar16);
    cVar25 = (int)puVar14 < 0;
    bVar26 = puVar14 == (uint *)0x0;
  }
  bVar23 = false;
  if (bVar26) {
    puVar14 = (uint *)((uint)param_3 & (int)unaff_r8 >> ((uint)puVar14 & 0xff));
    cVar25 = (int)puVar14 < 0;
    bVar23 = puVar14 == (uint *)0x0;
  }
  bVar26 = false;
  if (bVar23) {
    in_OV = SBORROW4((int)unaff_r5,0x84bde72);
    puVar14 = (uint *)((int)unaff_r5 + 0xf7b4218e);
    cVar25 = (int)puVar14 < 0;
    bVar26 = puVar14 == (uint *)0x0;
  }
  bVar23 = false;
  if (bVar26) {
    puVar14 = (uint *)((uint)unaff_r6 ^ (int)unaff_r11 >> ((uint)puVar14 & 0xff));
    cVar25 = (int)puVar14 < 0;
    bVar23 = puVar14 == (uint *)0x0;
  }
  bVar26 = false;
  if (bVar23) {
    in_OV = SBORROW4((int)puVar14,0x84bde7a);
    puVar14 = (uint *)((int)puVar14 + 0xf7b42186);
    cVar25 = (int)puVar14 < 0;
    bVar26 = puVar14 == (uint *)0x0;
  }
  bVar23 = false;
  if (bVar26) {
    uVar16 = (uint)param_3 ^ (int)unaff_r11 >> ((uint)puVar14 & 0xff);
    cVar25 = (int)uVar16 < 0;
    bVar23 = uVar16 == 0;
  }
  if (bVar23) {
    cVar25 = false;
  }
  uVar28 = false;
  if (bVar23 && ((uint)unaff_r4 & 0x84bdede) == 0) {
    uVar16 = (int)unaff_r8 - (int)unaff_r9 &
             (int)unaff_r8 << ((int)unaff_r8 - (int)unaff_r9 & 0xffU);
    cVar25 = (int)uVar16 < 0;
    uVar28 = uVar16 == 0;
  }
  if ((bool)uVar28 || cVar25 != in_OV) {
    if (!(bool)uVar28 && cVar25 == in_OV) {
      func_0x07bbdf52();
      in_r12 = extraout_r12_00;
    }
    if (!(bool)uVar28 && cVar25 == in_OV) {
      coprocessor_load(0,in_cr0,in_r12);
      coprocessor_function(0,0xe,0,in_cr0,in_cr12,in_cr0);
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

