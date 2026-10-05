
/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x084bbe92) */
/* WARNING: Removing unreachable block (ram,0x084bbeba) */
/* WARNING: Removing unreachable block (ram,0x084bbec2) */
/* WARNING: Removing unreachable block (ram,0x084bbeca) */
/* WARNING: Removing unreachable block (ram,0x084bbed2) */
/* WARNING: Removing unreachable block (ram,0x084bbf56) */
/* WARNING: Removing unreachable block (ram,0x084bbf6e) */
/* WARNING: Removing unreachable block (ram,0x084bbf7a) */
/* WARNING: Removing unreachable block (ram,0x084bbf76) */
/* WARNING: Removing unreachable block (ram,0x084bbf8e) */
/* WARNING: Type propagation algorithm not settling */

void FUN_08348192(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4,
                 undefined1 param_5)

{
  undefined4 *puVar1;
  uint uVar2;
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
  byte bVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  undefined4 *unaff_r4;
  undefined4 *unaff_r5;
  undefined4 *unaff_r6;
  undefined4 *unaff_r7;
  undefined4 *unaff_r8;
  undefined4 *unaff_r9;
  undefined4 *unaff_r10;
  undefined4 *unaff_r11;
  undefined4 *in_r12;
  undefined4 *extraout_r12;
  undefined4 *unaff_lr;
  char in_NG;
  bool bVar21;
  bool in_ZR;
  bool in_CY;
  char in_OV;
  char cVar22;
  bool bVar23;
  bool bVar24;
  undefined1 uVar25;
  bool bVar26;
  char cVar27;
  bool bVar28;
  undefined4 in_cr0;
  undefined4 in_cr12;
  undefined8 in_d2;
  
  if (in_ZR || in_NG != in_OV) {
    *unaff_r7 = 0x834819a;
    unaff_r7[-1] = register0x00000054;
    unaff_r7[-2] = in_r12;
    unaff_r7[-3] = unaff_r10;
    unaff_r7[-4] = unaff_r8;
    unaff_r7[-5] = unaff_r7;
    unaff_r7[-6] = unaff_r6;
    unaff_r7[-7] = unaff_r5;
    unaff_r7[-8] = param_4;
    unaff_r7[-9] = param_2;
    unaff_r7[-10] = param_1;
  }
  if (!in_ZR) {
                    /* WARNING: Could not recover jumptable at 0x0834819e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    if (!in_CY) {
      param_5 = SUB41(param_1,0);
      func_0x0918f932();
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    (*(code *)((uint)unaff_r10 ^ 0x80000037))();
    return;
  }
  *(undefined8 *)(param_3 + -6) = in_d2;
  bVar26 = unaff_r11 <= param_1;
  cVar27 = SBORROW4((int)param_1,(int)unaff_r11);
  param_1 = (undefined4 *)((int)param_1 - (int)unaff_r11);
  bVar21 = false;
  if (param_1 == (undefined4 *)0x0) {
    param_1 = (undefined4 *)((uint)unaff_r11 & (uint)param_2);
    bVar21 = param_1 == (undefined4 *)0x0;
  }
  bVar23 = false;
  if (bVar21) {
    uVar15 = (int)param_1 - (int)unaff_r6;
    uVar20 = (uint)unaff_r5 >> (uVar15 & 0x1f) | (int)unaff_r5 << 0x20 - (uVar15 & 0x1f);
    bVar26 = (uVar15 & 0xff) == 0 && bVar26 || (uVar15 & 0xff) != 0 && SUB41(uVar20 >> 0x1f,0);
    param_1 = (undefined4 *)((uint)in_r12 & uVar20);
    bVar23 = param_1 == (undefined4 *)0x0;
  }
  bVar21 = false;
  if (bVar23) {
    uVar20 = -(int)unaff_r9 & 0xff;
    bVar26 = uVar20 == 0 && bVar26 ||
             uVar20 != 0 && (bool)((byte)((uint)unaff_r4 >> 0x20 - uVar20) & 1);
    param_1 = (undefined4 *)((uint)unaff_r4 & (int)unaff_r4 << uVar20);
    bVar21 = param_1 == (undefined4 *)0x0;
  }
  bVar23 = false;
  if (bVar21) {
    param_1 = (undefined4 *)((int)unaff_r4 << ((uint)param_1 & 0xff));
    bVar26 = unaff_r10 <= param_1;
    cVar27 = SBORROW4((int)param_1,(int)unaff_r10);
    param_1 = (undefined4 *)((int)param_1 - (int)unaff_r10);
    bVar23 = param_1 == (undefined4 *)0x0;
  }
  bVar21 = (int)param_1 < 0;
  if (bVar23) {
    cVar27 = SBORROW4((int)in_r12,(int)in_r12);
    param_1 = (undefined4 *)0x0;
    bVar26 = true;
  }
  bVar21 = !bVar23 && bVar21;
  bVar13 = (byte)((uint)unaff_r10 >> 0x18);
  bVar24 = false;
  if (bVar23) {
    bVar26 = (bool)(bVar13 >> 7);
    param_1 = (undefined4 *)((uint)&param_5 & (int)unaff_r10 << 1);
    bVar21 = (int)param_1 < 0;
    bVar24 = param_1 == (undefined4 *)0x0;
  }
  bVar23 = false;
  if (bVar24) {
    param_1 = (undefined4 *)((uint)param_2 ^ (int)unaff_r10 << 1);
    bVar26 = in_r12 <= param_1;
    cVar27 = SBORROW4((int)param_1,(int)in_r12);
    param_1 = (undefined4 *)((int)param_1 - (int)in_r12);
    bVar21 = (int)param_1 < 0;
    bVar23 = param_1 == (undefined4 *)0x0;
  }
  bVar24 = false;
  if (bVar23) {
    register0x00000054 = (BADSPACEBASE *)((int)param_2 * (int)param_1);
    bVar21 = (int)register0x00000054 < 0;
    bVar24 = (undefined1 *)register0x00000054 == (undefined1 *)0x0;
  }
  if (bVar24) {
    param_2 = (undefined4 *)
              ((int)param_2 * ((int)param_1 - (int)unaff_r6) + ((int)param_1 - (int)unaff_r6));
    bVar26 = false;
    cVar27 = false;
    bVar21 = (int)unaff_r11 < 0;
    param_1 = unaff_r11;
  }
  bVar23 = false;
  if (bVar24 && unaff_r11 == (undefined4 *)0x0) {
    bVar26 = (bool)((byte)unaff_r9 & 1);
    param_1 = (undefined4 *)((uint)unaff_lr & (uint)unaff_r9 >> 1);
    bVar23 = param_1 == (undefined4 *)0x0;
    bVar21 = false;
  }
  bVar24 = false;
  if (bVar23) {
    bVar26 = unaff_r10 <= unaff_r5;
    cVar27 = SBORROW4((int)unaff_r5,(int)unaff_r10);
    param_1 = (undefined4 *)((int)unaff_r5 - (int)unaff_r10);
    bVar21 = (int)param_1 < 0;
    bVar24 = param_1 == (undefined4 *)0x0;
  }
  bVar23 = false;
  if (bVar24) {
    param_1 = (undefined4 *)((uint)unaff_r6 & (uint)param_1 >> 1);
    bVar26 = unaff_r10 <= param_1;
    cVar27 = SBORROW4((int)param_1,(int)unaff_r10);
    param_1 = (undefined4 *)((int)param_1 - (int)unaff_r10);
    bVar21 = (int)param_1 < 0;
    bVar23 = param_1 == (undefined4 *)0x0;
  }
  bVar24 = false;
  if (bVar23) {
    param_1 = (undefined4 *)((uint)unaff_r9 & (uint)param_2 >> 1);
    bVar26 = unaff_r10 <= param_1;
    cVar27 = SBORROW4((int)param_1,(int)unaff_r10);
    param_1 = (undefined4 *)((int)param_1 - (int)unaff_r10);
    bVar21 = (int)param_1 < 0;
    bVar24 = param_1 == (undefined4 *)0x0;
  }
  if (bVar24) {
    param_1 = (undefined4 *)((uint)unaff_r11 & (uint)unaff_r6 >> 1);
  }
  if (bVar26 && !bVar24) {
    param_1 = (undefined4 *)((uint)param_1 ^ 0x84ba732);
    bVar21 = (int)param_1 < 0;
    bVar24 = param_1 == (undefined4 *)0x0;
  }
  if (bVar24) {
    unaff_r8 = (undefined4 *)((int)unaff_r10 * (int)param_1);
    param_1 = (undefined4 *)0x0;
    bVar21 = false;
  }
  bVar23 = false;
  if (bVar24) {
    uVar20 = (uint)param_1 & 0xff;
    bVar26 = uVar20 == 0 && bVar26 ||
             uVar20 != 0 && (bool)((byte)((uint)param_2 >> 0x20 - uVar20) & 1);
    param_1 = (undefined4 *)((uint)unaff_r4 & (int)param_2 << uVar20);
    bVar21 = (int)param_1 < 0;
    bVar23 = param_1 == (undefined4 *)0x0;
  }
  if (bVar21) {
    param_1 = (undefined4 *)((int)unaff_r4 + ((int)unaff_r4 << ((uint)param_1 & 0xff)));
  }
  bVar24 = false;
  if (bVar23) {
    uVar20 = (uint)param_1 & 0xff;
    bVar26 = uVar20 == 0 && bVar26 ||
             uVar20 != 0 && (bool)((byte)((uint)unaff_lr >> 0x20 - uVar20) & 1);
    param_1 = (undefined4 *)((uint)param_2 & (int)unaff_lr << uVar20);
    bVar21 = (int)param_1 < 0;
    bVar24 = param_1 == (undefined4 *)0x0;
  }
  if (bVar21) {
    param_1 = (undefined4 *)((int)param_1 - (int)unaff_r11);
  }
  if (bVar24) {
    bVar26 = (bool)(bVar13 >> 7);
    param_1 = (undefined4 *)0x0;
    bVar21 = false;
  }
  if (bVar21) {
    param_1 = (undefined4 *)((int)param_1 - (int)unaff_r11);
  }
  bVar23 = false;
  if (bVar24) {
    param_1 = (undefined4 *)((uint)unaff_r11 & (uint)unaff_r5);
    bVar21 = (int)param_1 < 0;
    bVar23 = param_1 == (undefined4 *)0x0;
  }
  bVar3 = (byte)((uint)unaff_r6 >> 0x18);
  if (bVar23) {
    bVar26 = (bool)(bVar3 >> 7);
    param_1 = (undefined4 *)0x0;
    bVar21 = false;
  }
  bVar24 = false;
  if (bVar23) {
    param_1 = (undefined4 *)((uint)unaff_r11 & (uint)param_1);
    bVar21 = (int)param_1 < 0;
    bVar24 = param_1 == (undefined4 *)0x0;
  }
  bVar23 = false;
  if (bVar24) {
    uVar20 = (uint)param_1 & 0xff;
    bVar26 = uVar20 == 0 && bVar26 ||
             uVar20 != 0 && (bool)((byte)((uint)unaff_r11 >> 0x20 - uVar20) & 1);
    param_1 = (undefined4 *)((uint)unaff_r8 & (int)unaff_r11 << uVar20);
    bVar21 = (int)param_1 < 0;
    bVar23 = param_1 == (undefined4 *)0x0;
  }
  bVar4 = (byte)((uint)param_3 >> 0x18);
  if (bVar23) {
    bVar26 = (bool)(bVar4 >> 7);
    param_1 = (undefined4 *)0x0;
    bVar21 = false;
  }
  bVar24 = false;
  if (bVar23) {
    param_1 = (undefined4 *)((uint)param_2 & (uint)unaff_r7);
    bVar21 = (int)param_1 < 0;
    bVar24 = param_1 == (undefined4 *)0x0;
  }
  bVar23 = false;
  if (bVar24) {
    param_1 = (undefined4 *)((uint)unaff_r11 & (uint)unaff_r5);
    bVar21 = (int)param_1 < 0;
    bVar23 = param_1 == (undefined4 *)0x0;
  }
  bVar24 = false;
  if (bVar23) {
    param_1 = (undefined4 *)((uint)unaff_r7 & (uint)register0x00000054);
    bVar21 = (int)param_1 < 0;
    bVar24 = param_1 == (undefined4 *)0x0;
  }
  bVar23 = false;
  if (bVar24) {
    param_1 = (undefined4 *)((uint)unaff_r11 & (uint)param_1);
    bVar21 = (int)param_1 < 0;
    bVar23 = param_1 == (undefined4 *)0x0;
  }
  bVar24 = false;
  if (bVar23) {
    param_1 = (undefined4 *)((uint)unaff_r9 & (uint)param_2 & (uint)unaff_r9);
    bVar21 = (int)param_1 < 0;
    bVar24 = param_1 == (undefined4 *)0x0;
  }
  if (bVar24) {
    param_1 = (undefined4 *)0x0;
  }
  if (bVar26 && !bVar24) {
    param_1 = (undefined4 *)0x0;
  }
  bVar5 = (byte)((uint)unaff_r7 >> 0x18);
  if (bVar24) {
    bVar26 = (bool)(bVar5 >> 7);
    bVar21 = (int)unaff_r4 < 0;
    param_1 = unaff_r4;
  }
  bVar24 = bVar24 && unaff_r4 == (undefined4 *)0x0;
  if (bVar24) {
    bVar26 = (bool)(bVar5 >> 7);
    bVar21 = (int)param_2 < 0;
    param_1 = param_2;
  }
  bVar24 = bVar24 && param_2 == (undefined4 *)0x0;
  bVar6 = (byte)((uint)param_2 >> 0x18);
  if (bVar24) {
    bVar26 = (bool)(bVar6 >> 7);
    bVar21 = (int)param_4 < 0;
    param_1 = param_4;
  }
  bVar23 = false;
  if (bVar24 && param_4 == (undefined4 *)0x0) {
    param_1 = (undefined4 *)((uint)unaff_r4 ^ (uint)param_1);
    bVar26 = (bool)(bVar6 >> 7);
    bVar21 = (int)param_1 < 0;
    bVar23 = param_1 == (undefined4 *)0x0;
  }
  bVar10 = (byte)((uint)unaff_r5 >> 0x18);
  if (bVar23) {
    bVar26 = (bool)((bVar5 ^ bVar10) >> 7);
    param_1 = (undefined4 *)0x0;
    bVar21 = false;
  }
  bVar24 = false;
  if (bVar23) {
    uVar20 = ((uint)unaff_r7 ^ (uint)param_1) & 0xff;
    bVar26 = uVar20 == 0 && bVar26 ||
             uVar20 != 0 && (bool)((byte)((uint)unaff_lr >> 0x20 - uVar20) & 1);
    param_1 = (undefined4 *)((uint)unaff_r9 & (int)unaff_lr << uVar20);
    bVar21 = (int)param_1 < 0;
    bVar24 = param_1 == (undefined4 *)0x0;
  }
  if (bVar24) {
    bVar26 = (bool)(bVar6 >> 7);
    param_1 = (undefined4 *)0x0;
    bVar21 = false;
  }
  bVar23 = false;
  if (bVar24) {
    uVar20 = ((uint)unaff_r5 ^ (uint)param_1) & 0xff;
    bVar26 = uVar20 == 0 && bVar26 ||
             uVar20 != 0 && (bool)((byte)((uint)unaff_r8 >> 0x20 - uVar20) & 1);
    param_1 = (undefined4 *)((uint)unaff_r6 & (int)unaff_r8 << uVar20);
    bVar21 = (int)param_1 < 0;
    bVar23 = param_1 == (undefined4 *)0x0;
  }
  bVar24 = false;
  if (bVar23) {
    param_1 = (undefined4 *)((uint)param_3 ^ (uint)param_2 & (uint)unaff_r9);
    bVar21 = (int)param_1 < 0;
    bVar24 = param_1 == (undefined4 *)0x0;
  }
  bVar23 = false;
  if (bVar24) {
    param_1 = (undefined4 *)((uint)unaff_r9 & (uint)param_2 & (uint)unaff_r9);
    bVar21 = (int)param_1 < 0;
    bVar23 = param_1 == (undefined4 *)0x0;
  }
  if (bVar23) {
    param_1 = (undefined4 *)
              ((uint)unaff_r5 &
              (uint)unaff_r7 >> (((uint)unaff_r5 ^ (uint)param_2 & (uint)unaff_r9) & 0xff));
  }
  if (bVar26 && !bVar23) {
    param_1 = (undefined4 *)((uint)param_4 ^ (uint)unaff_r5);
  }
  bVar24 = false;
  if (bVar23) {
    uVar20 = ((uint)unaff_r7 ^ (uint)unaff_r6) & 0xff;
    bVar26 = uVar20 == 0 && bVar26 ||
             uVar20 != 0 && (bool)((byte)((uint)unaff_r8 >> 0x20 - uVar20) & 1);
    param_1 = (undefined4 *)((uint)unaff_lr ^ (int)unaff_r8 << uVar20);
    bVar21 = (int)param_1 < 0;
    bVar24 = param_1 == (undefined4 *)0x0;
  }
  bVar23 = false;
  if (bVar24) {
    param_1 = (undefined4 *)((uint)param_4 & (uint)param_2 & (uint)unaff_r9);
    bVar21 = (int)param_1 < 0;
    bVar23 = param_1 == (undefined4 *)0x0;
  }
  bVar24 = false;
  if (bVar23) {
    uVar20 = ((uint)param_4 ^ (uint)in_r12) & 0xff;
    bVar26 = uVar20 == 0 && bVar26 ||
             uVar20 != 0 && (bool)((byte)((uint)unaff_r11 >> 0x20 - uVar20) & 1);
    param_1 = (undefined4 *)((uint)param_4 & (int)unaff_r11 << uVar20);
    bVar21 = (int)param_1 < 0;
    bVar24 = param_1 == (undefined4 *)0x0;
  }
  bVar14 = (byte)((uint)param_4 >> 0x18);
  if (bVar24) {
    bVar26 = (bool)((byte)(bVar14 ^ (byte)((uint)param_1 >> 0x18)) >> 7);
    param_1 = (undefined4 *)0x0;
    bVar21 = false;
  }
  bVar23 = false;
  if (bVar24) {
    uVar20 = ((uint)param_4 ^ (uint)param_1) & 0xff;
    bVar26 = uVar20 == 0 && bVar26 ||
             uVar20 != 0 && (bool)((byte)((uint)unaff_lr >> 0x20 - uVar20) & 1);
    param_1 = (undefined4 *)((uint)unaff_r6 & (int)unaff_lr << uVar20);
    bVar21 = (int)param_1 < 0;
    bVar23 = param_1 == (undefined4 *)0x0;
  }
  bVar24 = false;
  if (bVar23) {
    param_1 = (undefined4 *)((uint)param_2 & (int)unaff_r10 << ((uint)param_1 & 0xff) & 0x84baa5a);
    bVar24 = param_1 == (undefined4 *)0x0;
    bVar21 = false;
  }
  if (bVar24) {
    bVar26 = (bool)(bVar13 >> 7);
    param_1 = (undefined4 *)0x0;
    bVar21 = false;
  }
  bVar23 = false;
  if (bVar24) {
    param_1 = (undefined4 *)((uint)unaff_lr & (uint)unaff_r5);
    bVar21 = (int)param_1 < 0;
    bVar23 = param_1 == (undefined4 *)0x0;
  }
  bVar24 = false;
  if (bVar23) {
    param_1 = (undefined4 *)
              ((uint)unaff_lr & ((uint)unaff_r6 ^ (int)unaff_r7 << ((uint)param_1 & 0xff)));
    bVar21 = (int)param_1 < 0;
    bVar24 = param_1 == (undefined4 *)0x0;
  }
  bVar23 = false;
  if (bVar24) {
    param_1 = (undefined4 *)
              ((uint)unaff_lr & ((uint)unaff_r8 ^ (int)in_r12 << ((uint)param_1 & 0xff)));
    bVar21 = (int)param_1 < 0;
    bVar23 = param_1 == (undefined4 *)0x0;
  }
  bVar24 = false;
  if (bVar23) {
    uVar20 = (uint)param_1 & 0xff;
    bVar26 = uVar20 == 0 && bVar26 ||
             uVar20 != 0 && (bool)((byte)((uint)unaff_r7 >> 0x20 - uVar20) & 1);
    param_1 = (undefined4 *)((uint)register0x00000054 & (int)unaff_r7 << uVar20);
    bVar21 = (int)param_1 < 0;
    bVar24 = param_1 == (undefined4 *)0x0;
  }
  bVar23 = false;
  if (bVar24) {
    param_1 = (undefined4 *)
              ((uint)unaff_r10 ^ (uint)param_2 & (int)unaff_r10 << ((uint)param_1 & 0xff));
    bVar21 = (int)param_1 < 0;
    bVar23 = param_1 == (undefined4 *)0x0;
  }
  if (bVar23) {
    param_1 = (undefined4 *)((uint)unaff_r6 ^ (uint)unaff_r5);
  }
  if (bVar23) {
    param_1 = (undefined4 *)((uint)unaff_r6 ^ (uint)in_r12);
  }
  uVar20 = (int)param_3 >> 0x20;
  if (bVar23) {
    param_1 = (undefined4 *)((uint)unaff_r6 ^ (uint)unaff_r11 & uVar20);
  }
  puVar1 = (undefined4 *)((int)param_2 >> 0x20);
  bVar24 = false;
  if (bVar23) {
    param_1 = (undefined4 *)((uint)param_4 ^ (uint)unaff_r5);
    bVar26 = (bool)(bVar13 >> 7);
    bVar21 = (int)param_1 < 0;
    bVar24 = param_1 == (undefined4 *)0x0;
  }
  bVar23 = false;
  if (bVar24) {
    param_1 = (undefined4 *)
              ((uint)param_3 ^ (uint)param_2 & (int)unaff_r10 << ((uint)register0x00000054 & 0xff));
    bVar21 = (int)param_1 < 0;
    bVar23 = param_1 == (undefined4 *)0x0;
  }
  if (bVar23) {
    param_1 = (undefined4 *)((uint)unaff_r5 & (uint)param_2 >> ((uint)param_1 & 0xff));
  }
  if (bVar26 && !bVar23) {
    param_1 = (undefined4 *)((int)unaff_r10 - (int)unaff_r5);
  }
  if (bVar23) {
    param_1 = (undefined4 *)0x0;
    bVar21 = false;
  }
  bVar24 = false;
  if (bVar23) {
    uVar15 = (uint)param_1 & 0xff;
    bVar26 = uVar15 == 0 && bVar26 ||
             uVar15 != 0 && (bool)((byte)((uint)param_2 >> 0x20 - uVar15) & 1);
    param_1 = (undefined4 *)((uint)unaff_r4 & (int)param_2 << uVar15);
    bVar21 = (int)param_1 < 0;
    bVar24 = param_1 == (undefined4 *)0x0;
  }
  bVar23 = false;
  if (bVar24) {
    param_1 = (undefined4 *)(((uint)unaff_r8 ^ (uint)unaff_r6 & 0x84babee) & 0x84babf6);
    bVar23 = param_1 == (undefined4 *)0x0;
    bVar21 = false;
  }
  bVar24 = false;
  if (bVar23) {
    param_1 = (undefined4 *)
              ((uint)unaff_r6 &
              (uint)param_2 &
              (int)unaff_r10 <<
              ((uint)unaff_r11 &
               (int)unaff_r9 << ((int)unaff_r10 - ((uint)unaff_r11 & (uint)unaff_r4) & 0xff) & 0xff)
              );
    bVar21 = (int)param_1 < 0;
    bVar24 = param_1 == (undefined4 *)0x0;
  }
  bVar23 = false;
  if (bVar24) {
    uVar15 = (int)unaff_r9 + (int)unaff_r5 & 0xff;
    bVar26 = uVar15 == 0 && bVar26 ||
             uVar15 != 0 && (bool)((byte)((uint)unaff_lr >> 0x20 - uVar15) & 1);
    param_1 = (undefined4 *)((uint)unaff_r9 & (int)unaff_lr << uVar15);
    bVar21 = (int)param_1 < 0;
    bVar23 = param_1 == (undefined4 *)0x0;
  }
  bVar12 = (byte)((uint)unaff_r4 >> 0x18);
  if (bVar23) {
    bVar26 = (bool)(bVar12 >> 7);
    param_1 = (undefined4 *)0x0;
    bVar21 = false;
  }
  bVar24 = false;
  if (bVar23) {
    uVar16 = (int)unaff_r11 -
             ((uint)register0x00000054 &
             (uint)in_r12 >>
             ((int)unaff_r11 -
              ((uint)in_r12 & (uint)unaff_r7 >> ((int)unaff_r11 - (int)unaff_r5 & 0xffU)) & 0xff));
    uVar15 = uVar16 & 0xff;
    bVar26 = uVar15 == 0 && bVar26 ||
             uVar15 != 0 && (bool)((byte)((uint)register0x00000054 >> uVar15 - 1) & 1);
    param_1 = (undefined4 *)(uVar16 & (uint)register0x00000054 >> uVar15);
    bVar21 = (int)param_1 < 0;
    bVar24 = param_1 == (undefined4 *)0x0;
  }
  if (bVar24) {
    param_1 = (undefined4 *)((int)unaff_r9 + (int)unaff_r5);
  }
  uVar15 = (int)unaff_lr >> 0x20;
  bVar7 = (byte)((uint)unaff_lr >> 0x18);
  bVar23 = false;
  if (bVar24) {
    bVar26 = (bool)(bVar7 >> 7);
    param_1 = (undefined4 *)((uint)unaff_r7 & uVar15);
    bVar21 = (int)param_1 < 0;
    bVar23 = param_1 == (undefined4 *)0x0;
  }
  if (bVar23) {
    param_1 = (undefined4 *)((int)unaff_r9 + (int)param_1);
  }
  uVar16 = (int)unaff_r11 >> 0x20;
  bVar8 = (byte)((uint)unaff_r11 >> 0x18);
  bVar24 = false;
  if (bVar23) {
    bVar26 = (bool)(bVar8 >> 7);
    param_1 = (undefined4 *)((uint)unaff_r9 & uVar16);
    bVar21 = (int)param_1 < 0;
    bVar24 = param_1 == (undefined4 *)0x0;
  }
  bVar23 = false;
  if (bVar24) {
    bVar26 = (bool)(bVar5 >> 7);
    param_1 = (undefined4 *)((uint)in_r12 & (int)unaff_r7 >> 0x20);
    bVar21 = (int)param_1 < 0;
    bVar23 = param_1 == (undefined4 *)0x0;
  }
  if (bVar23) {
    param_1 = (undefined4 *)0x0;
  }
  if (bVar26 && !bVar23) {
    param_1 = (undefined4 *)((int)unaff_lr + (int)unaff_r5);
  }
  if (bVar23) {
    bVar26 = (bool)(bVar8 >> 7);
    bVar21 = (int)param_2 < 0;
    param_1 = param_2;
  }
  bVar24 = false;
  if (bVar23 && param_2 == (undefined4 *)0x0) {
    uVar17 = (int)in_r12 + ((uint)register0x00000054 ^ (uint)param_2 >> ((int)in_r12 * 2 & 0xffU)) &
             0xff;
    bVar26 = uVar17 == 0 && bVar26 || uVar17 != 0 && (bool)((byte)((uint)param_4 >> uVar17 - 1) & 1)
    ;
    param_1 = (undefined4 *)((uint)param_2 ^ (uint)param_4 >> uVar17);
    bVar21 = (int)param_1 < 0;
    bVar24 = param_1 == (undefined4 *)0x0;
  }
  if (bVar24) {
    bVar26 = (bool)(bVar7 >> 7);
    bVar21 = (int)unaff_r4 < 0;
    param_1 = unaff_r4;
  }
  bVar24 = bVar24 && unaff_r4 == (undefined4 *)0x0;
  if (bVar24) {
    param_1 = (undefined4 *)0x0;
    bVar21 = false;
  }
  bVar23 = false;
  if (bVar24) {
    uVar17 = (int)register0x00000054 + (int)unaff_r5 & 0xff;
    bVar26 = uVar17 == 0 && bVar26 ||
             uVar17 != 0 && (bool)((byte)((uint)unaff_r4 >> 0x20 - uVar17) & 1);
    param_1 = (undefined4 *)((int)unaff_r4 << uVar17 & 0x84badae);
    bVar23 = param_1 == (undefined4 *)0x0;
    bVar21 = false;
  }
  bVar24 = false;
  if (bVar23) {
    uVar17 = (int)register0x00000054 + (int)unaff_r5 & 0xff;
    bVar26 = uVar17 == 0 && bVar26 ||
             uVar17 != 0 && (bool)((byte)((uint)param_2 >> 0x20 - uVar17) & 1);
    param_1 = (undefined4 *)((uint)unaff_r9 & (int)param_2 << uVar17);
    bVar21 = (int)param_1 < 0;
    bVar24 = param_1 == (undefined4 *)0x0;
  }
  bVar23 = false;
  if (bVar24) {
    uVar17 = (int)register0x00000054 + (int)param_1 & 0xff;
    bVar26 = uVar17 == 0 && bVar26 ||
             uVar17 != 0 && (bool)((byte)((uint)unaff_r7 >> 0x20 - uVar17) & 1);
    param_1 = (undefined4 *)((uint)unaff_r10 & (int)unaff_r7 << uVar17);
    bVar21 = (int)param_1 < 0;
    bVar23 = param_1 == (undefined4 *)0x0;
  }
  bVar24 = false;
  if (bVar23) {
    uVar17 = (int)unaff_r10 + (int)param_1 & 0xff;
    bVar26 = uVar17 == 0 && bVar26 ||
             uVar17 != 0 && (bool)((byte)((uint)unaff_r7 >> 0x20 - uVar17) & 1);
    param_1 = (undefined4 *)((uint)unaff_r6 & (int)unaff_r7 << uVar17);
    bVar21 = (int)param_1 < 0;
    bVar24 = param_1 == (undefined4 *)0x0;
  }
  bVar23 = false;
  if (bVar24) {
    uVar17 = (int)unaff_r10 + (int)param_1 & 0xff;
    bVar26 = uVar17 == 0 && bVar26 ||
             uVar17 != 0 && (bool)((byte)((uint)unaff_lr >> 0x20 - uVar17) & 1);
    param_1 = (undefined4 *)((uint)unaff_r6 & (int)unaff_lr << uVar17);
    bVar21 = (int)param_1 < 0;
    bVar23 = param_1 == (undefined4 *)0x0;
  }
  bVar9 = (byte)((uint)register0x00000054 >> 0x18);
  if (bVar23) {
    bVar26 = (bool)(bVar9 >> 7);
    param_1 = (undefined4 *)0x0;
    bVar21 = false;
  }
  bVar24 = false;
  if (bVar23) {
    uVar17 = (int)register0x00000054 + (int)param_1 & 0xff;
    bVar26 = uVar17 == 0 && bVar26 ||
             uVar17 != 0 && (bool)((byte)((uint)unaff_r11 >> 0x20 - uVar17) & 1);
    param_1 = (undefined4 *)((uint)unaff_r6 & (int)unaff_r11 << uVar17);
    bVar21 = (int)param_1 < 0;
    bVar24 = param_1 == (undefined4 *)0x0;
  }
  if (bVar24) {
    bVar21 = (int)unaff_r6 < 0;
    param_1 = unaff_r6;
  }
  bVar24 = bVar24 && unaff_r6 == (undefined4 *)0x0;
  if (bVar24) {
    param_1 = (undefined4 *)
              ((int)register0x00000054 +
              ((uint)unaff_r7 ^ (uint)unaff_r9 >> ((int)register0x00000054 + (int)in_r12 & 0xffU)));
  }
  if (bVar24) {
    bVar21 = (int)register0x00000054 < 0;
    param_1 = (undefined4 *)register0x00000054;
  }
  bVar23 = false;
  if (bVar24 && (undefined1 *)register0x00000054 == (undefined1 *)0x0) {
    bVar26 = (bool)(bVar3 >> 7);
    param_1 = (undefined4 *)((uint)unaff_lr & (int)unaff_r6 >> 0x20);
    bVar21 = (int)param_1 < 0;
    bVar23 = param_1 == (undefined4 *)0x0;
  }
  bVar24 = false;
  if (bVar23) {
    bVar26 = (bool)(bVar8 >> 7);
    param_1 = (undefined4 *)((uint)in_r12 & uVar16);
    bVar21 = (int)param_1 < 0;
    bVar24 = param_1 == (undefined4 *)0x0;
  }
  if (bVar24) {
    bVar21 = (int)unaff_r4 < 0;
    param_1 = unaff_r4;
  }
  bVar23 = bVar24 && unaff_r4 == (undefined4 *)0x0;
  if (bVar23) {
    param_1 = (undefined4 *)((uint)in_r12 & (int)unaff_r6 << ((uint)param_1 & 0xff));
  }
  if (bVar26 && (!bVar24 || unaff_r4 != (undefined4 *)0x0)) {
    param_1 = (undefined4 *)((int)unaff_r11 + (int)in_r12);
  }
  bVar24 = false;
  if (bVar23) {
    uVar17 = (int)unaff_r10 + ((uint)param_4 >> ((uint)unaff_r10 & 0xff) & 0x84baf06) & 0xff;
    bVar26 = uVar17 == 0 && bVar26 || uVar17 != 0 && (bool)((byte)((uint)param_4 >> uVar17 - 1) & 1)
    ;
    param_1 = (undefined4 *)((uint)param_3 & (uint)param_4 >> uVar17);
    bVar21 = (int)param_1 < 0;
    bVar24 = param_1 == (undefined4 *)0x0;
  }
  bVar23 = false;
  if (bVar24) {
    param_1 = (undefined4 *)((uint)unaff_r4 & 0x84baf66);
    bVar23 = param_1 == (undefined4 *)0x0;
    bVar21 = false;
  }
  bVar24 = false;
  if (bVar21) {
    uVar17 = (int)unaff_r4 << ((uint)param_1 & 0xff);
    bVar26 = CARRY4((uint)param_2,uVar17);
    cVar27 = SCARRY4((int)param_2,uVar17);
    param_1 = (undefined4 *)((int)param_2 + uVar17);
    bVar24 = (int)param_1 < 0;
    bVar23 = param_1 == (undefined4 *)0x0;
  }
  if (bVar23) {
    param_1 = (undefined4 *)((uint)register0x00000054 & 0x84baf6e);
  }
  if (bVar24) {
    param_1 = (undefined4 *)((int)unaff_lr + (int)param_1);
  }
  if (bVar23) {
    param_1 = (undefined4 *)((uint)unaff_r10 & (uint)in_r12);
  }
  if (bVar24) {
    param_1 = (undefined4 *)((int)unaff_r11 + (int)param_1);
  }
  bVar21 = false;
  if (bVar23) {
    param_1 = (undefined4 *)((uint)param_3 & (uint)param_2);
    bVar24 = (int)param_1 < 0;
    bVar21 = param_1 == (undefined4 *)0x0;
  }
  if (bVar21) {
    param_1 = (undefined4 *)(((uint)param_1 >> ((uint)param_1 & 0xff)) - (int)unaff_r4);
  }
  if (bVar24) {
    param_1 = (undefined4 *)((uint)param_2 & ((uint)bVar26 << 0x1f | (uint)unaff_r4 >> 1));
  }
  bVar23 = false;
  if (bVar21) {
    uVar17 = (uint)param_1 & 0xff;
    bVar26 = uVar17 == 0 && bVar26 ||
             uVar17 != 0 && (bool)((byte)((uint)param_4 >> 0x20 - uVar17) & 1);
    param_1 = (undefined4 *)((uint)unaff_r9 & (int)param_4 << uVar17);
    bVar24 = (int)param_1 < 0;
    bVar23 = param_1 == (undefined4 *)0x0;
  }
  if (bVar24) {
    param_1 = (undefined4 *)((uint)param_4 & (uint)param_1);
  }
  bVar21 = false;
  if (bVar23) {
    uVar17 = (uint)param_1 & 0xff;
    bVar26 = uVar17 == 0 && bVar26 ||
             uVar17 != 0 && (bool)((byte)((uint)unaff_r5 >> 0x20 - uVar17) & 1);
    param_1 = (undefined4 *)((uint)unaff_r9 & (int)unaff_r5 << uVar17);
    bVar24 = (int)param_1 < 0;
    bVar21 = param_1 == (undefined4 *)0x0;
  }
  if (bVar21) {
    bVar26 = (bool)(bVar3 >> 7);
    param_1 = (undefined4 *)0x0;
    bVar24 = false;
  }
  bVar23 = false;
  if (bVar21) {
    param_1 = (undefined4 *)((uint)unaff_r11 ^ (uint)param_2);
    bVar24 = (int)param_1 < 0;
    bVar23 = param_1 == (undefined4 *)0x0;
  }
  bVar21 = false;
  if (bVar23) {
    param_1 = (undefined4 *)((uint)unaff_r11 & (uint)in_r12);
    bVar24 = (int)param_1 < 0;
    bVar21 = param_1 == (undefined4 *)0x0;
  }
  bVar23 = false;
  if (bVar21) {
    bVar26 = (bool)(bVar4 >> 7);
    param_1 = (undefined4 *)((uint)unaff_lr & uVar20);
    bVar24 = (int)param_1 < 0;
    bVar23 = param_1 == (undefined4 *)0x0;
  }
  bVar21 = false;
  if (bVar23) {
    param_1 = (undefined4 *)((uint)unaff_r11 & (uint)param_1);
    bVar24 = (int)param_1 < 0;
    bVar21 = param_1 == (undefined4 *)0x0;
  }
  bVar23 = false;
  if (bVar21) {
    param_1 = (undefined4 *)((uint)unaff_r8 & (uint)param_2);
    bVar24 = (int)param_1 < 0;
    bVar23 = param_1 == (undefined4 *)0x0;
  }
  if (bVar23) {
    param_1 = (undefined4 *)0x0;
  }
  if (bVar26 && !bVar23) {
    param_1 = (undefined4 *)((uint)param_3 & (uint)in_r12);
  }
  bVar21 = false;
  if (bVar23) {
    uVar17 = (uint)param_2 & ((uint)unaff_r10 ^ (int)param_1 << ((uint)param_1 & 0xff));
    uVar17 = (uint)param_2 &
             ((uint)unaff_r11 ^
             (int)unaff_r5 << ((uint)param_2 & ((uint)unaff_lr ^ uVar17 << (uVar17 & 0xff)) & 0xff))
             & 0xff;
    bVar26 = uVar17 == 0 && bVar26 ||
             uVar17 != 0 && (bool)((byte)((uint)unaff_r8 >> 0x20 - uVar17) & 1);
    param_1 = (undefined4 *)((uint)param_2 ^ (int)unaff_r8 << uVar17);
    bVar24 = (int)param_1 < 0;
    bVar21 = param_1 == (undefined4 *)0x0;
  }
  if (bVar21) {
    bVar26 = (bool)(bVar14 >> 7);
    param_1 = (undefined4 *)0x0;
    bVar24 = false;
  }
  bVar23 = false;
  if (bVar21) {
    param_1 = (undefined4 *)((uint)param_3 & (uint)param_2);
    bVar24 = (int)param_1 < 0;
    bVar23 = param_1 == (undefined4 *)0x0;
  }
  bVar21 = false;
  if (bVar23) {
    param_1 = (undefined4 *)
              ((uint)unaff_r11 &
              ((uint)unaff_r7 ^ (int)param_3 << ((uint)param_2 & (uint)in_r12 & 0xff)));
    bVar24 = (int)param_1 < 0;
    bVar21 = param_1 == (undefined4 *)0x0;
  }
  bVar23 = false;
  if (bVar21) {
    param_1 = (undefined4 *)((uint)unaff_r11 & ((uint)unaff_r6 ^ (uint)in_r12));
    bVar24 = (int)param_1 < 0;
    bVar23 = param_1 == (undefined4 *)0x0;
  }
  if (bVar23) {
    bVar26 = true;
    cVar27 = SBORROW4((int)param_2,(int)param_2);
    param_1 = (undefined4 *)0x0;
    bVar24 = false;
  }
  bVar21 = false;
  if (bVar23) {
    param_1 = (undefined4 *)
              ((uint)unaff_r11 &
              ((uint)param_4 ^ (int)param_2 >> ((uint)param_3 & (uint)in_r12 & 0xff)));
    bVar24 = (int)param_1 < 0;
    bVar21 = param_1 == (undefined4 *)0x0;
  }
  bVar23 = false;
  if (bVar21) {
    param_1 = (undefined4 *)
              ((uint)unaff_r11 & ((uint)param_4 ^ (int)unaff_r6 >> ((uint)param_1 & 0xff)));
    bVar24 = (int)param_1 < 0;
    bVar23 = param_1 == (undefined4 *)0x0;
  }
  bVar21 = false;
  if (bVar23) {
    bVar26 = SUB41(((uint)param_3 & (uint)in_r12) >> 0x1f,0);
    param_1 = (undefined4 *)((uint)unaff_r9 & (int)((uint)param_3 & (uint)in_r12) >> 0x20);
    bVar24 = (int)param_1 < 0;
    bVar21 = param_1 == (undefined4 *)0x0;
  }
  bVar23 = false;
  if (bVar21) {
    uVar17 = (uint)param_2 & (uint)param_1 & 0xff;
    bVar26 = uVar17 == 0 && bVar26 || uVar17 != 0 && (bool)((byte)(0x84bb24e >> uVar17 - 1) & 1);
    param_1 = (undefined4 *)((uint)in_r12 & 0x84bb24eU >> uVar17);
    bVar24 = (int)param_1 < 0;
    bVar23 = param_1 == (undefined4 *)0x0;
  }
  bVar21 = false;
  if (bVar23) {
    bVar26 = (bool)(bVar3 >> 7);
    param_1 = (undefined4 *)((uint)unaff_r8 & (int)unaff_r6 >> 0x20);
    bVar24 = (int)param_1 < 0;
    bVar21 = param_1 == (undefined4 *)0x0;
  }
  bVar23 = false;
  if (bVar21) {
    param_1 = (undefined4 *)((uint)unaff_lr & (uint)param_2);
    bVar24 = (int)param_1 < 0;
    bVar23 = param_1 == (undefined4 *)0x0;
  }
  if (bVar23) {
    bVar26 = (bool)(bVar4 >> 7);
    bVar24 = (int)unaff_r8 < 0;
    param_1 = unaff_r8;
  }
  bVar23 = bVar23 && unaff_r8 == (undefined4 *)0x0;
  if (bVar23) {
    bVar26 = (bool)(bVar9 >> 7);
    bVar24 = (int)in_r12 < 0;
    param_1 = in_r12;
  }
  bVar21 = false;
  if (bVar23 && in_r12 == (undefined4 *)0x0) {
    param_1 = (undefined4 *)((uint)unaff_r10 ^ (uint)param_2);
    bVar24 = (int)param_1 < 0;
    bVar21 = param_1 == (undefined4 *)0x0;
  }
  if (bVar21) {
    param_1 = (undefined4 *)((uint)in_r12 & (uint)unaff_r5 >> ((uint)param_1 & 0xff));
  }
  if (bVar26 && !bVar21) {
    param_1 = (undefined4 *)((uint)param_4 & (uint)in_r12);
  }
  bVar23 = false;
  if (bVar21) {
    uVar17 = (uint)param_1 & 0xff;
    bVar26 = uVar17 == 0 && bVar26 ||
             uVar17 != 0 && (bool)((byte)((uint)register0x00000054 >> uVar17 - 1) & 1);
    param_1 = (undefined4 *)((uint)unaff_r9 ^ (uint)register0x00000054 >> uVar17);
    bVar24 = (int)param_1 < 0;
    bVar23 = param_1 == (undefined4 *)0x0;
  }
  bVar21 = false;
  if (bVar23) {
    uVar17 = (uint)param_2 & (uint)param_1 & 0xff;
    bVar26 = uVar17 == 0 && bVar26 ||
             uVar17 != 0 && (bool)((byte)((uint)unaff_r7 >> uVar17 - 1) & 1);
    param_1 = (undefined4 *)((uint)unaff_r9 ^ (uint)unaff_r7 >> uVar17);
    bVar24 = (int)param_1 < 0;
    bVar21 = param_1 == (undefined4 *)0x0;
  }
  bVar23 = false;
  if (bVar21) {
    bVar26 = SUB41(((uint)param_2 & (uint)param_1) >> 0x1f,0);
    param_1 = (undefined4 *)((uint)param_3 ^ (int)((uint)param_2 & (uint)param_1) >> 0x20);
    bVar24 = (int)param_1 < 0;
    bVar23 = param_1 == (undefined4 *)0x0;
  }
  bVar21 = false;
  if (bVar23) {
    param_1 = (undefined4 *)((uint)unaff_r4 ^ (uint)param_2);
    bVar24 = (int)param_1 < 0;
    bVar21 = param_1 == (undefined4 *)0x0;
  }
  bVar23 = false;
  if (bVar21) {
    param_1 = (undefined4 *)((uint)unaff_r8 & (uint)param_2);
    bVar24 = (int)param_1 < 0;
    bVar23 = param_1 == (undefined4 *)0x0;
  }
  bVar21 = false;
  if (bVar23) {
    param_1 = (undefined4 *)((uint)unaff_r11 & (uint)unaff_r5);
    bVar24 = (int)param_1 < 0;
    bVar21 = param_1 == (undefined4 *)0x0;
  }
  bVar23 = false;
  if (bVar21) {
    param_1 = (undefined4 *)((uint)unaff_r11 & ((uint)unaff_r11 ^ (uint)in_r12));
    bVar24 = (int)param_1 < 0;
    bVar23 = param_1 == (undefined4 *)0x0;
  }
  bVar21 = false;
  if (bVar23) {
    param_1 = (undefined4 *)((uint)unaff_r11 & ((uint)unaff_r7 ^ (uint)in_r12));
    bVar24 = (int)param_1 < 0;
    bVar21 = param_1 == (undefined4 *)0x0;
  }
  bVar23 = false;
  if (bVar21) {
    uVar17 = (uint)param_3 & (uint)unaff_r5 & 0xff;
    bVar26 = uVar17 == 0 && bVar26 ||
             uVar17 != 0 && (bool)((byte)((uint)unaff_r5 >> 0x20 - uVar17) & 1);
    param_1 = (undefined4 *)((uint)unaff_r4 & (int)unaff_r5 << uVar17);
    bVar24 = (int)param_1 < 0;
    bVar23 = param_1 == (undefined4 *)0x0;
  }
  bVar21 = false;
  if (bVar23) {
    uVar17 = (uint)param_3 & (uint)param_1 & 0xff;
    bVar26 = uVar17 == 0 && bVar26 ||
             uVar17 != 0 && (bool)((byte)((uint)in_r12 >> 0x20 - uVar17) & 1);
    param_1 = (undefined4 *)((uint)param_4 & (int)in_r12 << uVar17);
    bVar24 = (int)param_1 < 0;
    bVar21 = param_1 == (undefined4 *)0x0;
  }
  bVar23 = false;
  if (bVar21) {
    uVar17 = (uint)param_3 & (uint)param_1 & 0xff;
    bVar26 = uVar17 == 0 && bVar26 ||
             uVar17 != 0 && (bool)((byte)((uint)register0x00000054 >> 0x20 - uVar17) & 1);
    param_1 = (undefined4 *)((uint)param_3 & (uint)param_1 & (int)register0x00000054 << uVar17);
    bVar24 = (int)param_1 < 0;
    bVar23 = param_1 == (undefined4 *)0x0;
  }
  if (bVar26 && !bVar23) {
    param_1 = (undefined4 *)((uint)unaff_r4 & (uint)param_1);
  }
  bVar21 = false;
  if (bVar23) {
    param_1 = (undefined4 *)((uint)unaff_r11 & (uint)unaff_r5);
    bVar24 = (int)param_1 < 0;
    bVar21 = param_1 == (undefined4 *)0x0;
  }
  bVar23 = false;
  if (bVar21) {
    uVar17 = (uint)param_1 & 0xff;
    bVar26 = uVar17 == 0 && bVar26 || uVar17 != 0 && (bool)((byte)(0x84bb406 >> uVar17 - 1) & 1);
    param_1 = (undefined4 *)((uint)in_r12 & 0x84bb406U >> uVar17);
    bVar24 = (int)param_1 < 0;
    bVar23 = param_1 == (undefined4 *)0x0;
  }
  bVar21 = false;
  if (bVar23) {
    param_1 = (undefined4 *)((uint)unaff_r11 & (uint)param_1);
    bVar24 = (int)param_1 < 0;
    bVar21 = param_1 == (undefined4 *)0x0;
  }
  bVar23 = false;
  if (bVar21) {
    param_1 = (undefined4 *)
              ((uint)unaff_r11 & ((uint)param_1 ^ 0x84bb40eU >> ((uint)param_1 & 0xff)));
    bVar24 = (int)param_1 < 0;
    bVar23 = param_1 == (undefined4 *)0x0;
  }
  bVar21 = false;
  if (bVar23) {
    uVar17 = (uint)param_1 & 0xff;
    bVar26 = uVar17 == 0 && bVar26 || uVar17 != 0 && (bool)((byte)((int)unaff_r6 >> uVar17 - 1) & 1)
    ;
    param_1 = (undefined4 *)((uint)unaff_r9 & (int)unaff_r6 >> uVar17);
    bVar24 = (int)param_1 < 0;
    bVar21 = param_1 == (undefined4 *)0x0;
  }
  bVar23 = false;
  if (bVar21) {
    param_1 = (undefined4 *)((uint)unaff_r11 & (uint)param_1);
    bVar24 = (int)param_1 < 0;
    bVar23 = param_1 == (undefined4 *)0x0;
  }
  uVar17 = (int)unaff_r10 >> 0x20;
  bVar21 = false;
  if (bVar23) {
    bVar26 = (bool)(bVar13 >> 7);
    param_1 = (undefined4 *)((uint)unaff_lr & uVar17);
    bVar24 = (int)param_1 < 0;
    bVar21 = param_1 == (undefined4 *)0x0;
  }
  bVar23 = false;
  if (bVar21) {
    bVar26 = param_2 <= unaff_r10;
    cVar27 = SBORROW4((int)unaff_r10,(int)param_2);
    param_1 = (undefined4 *)((int)unaff_r10 - (int)param_2);
    bVar24 = (int)param_1 < 0;
    bVar23 = param_1 == (undefined4 *)0x0;
  }
  bVar21 = false;
  if (bVar23) {
    uVar2 = (uint)param_2 &
            ((uint)unaff_lr ^ (uint)in_r12 >> ((uint)param_2 & ((uint)in_r12 ^ (uint)puVar1) & 0xff)
            ) & 0xff;
    bVar26 = uVar2 == 0 && bVar26 || uVar2 != 0 && (bool)((byte)((uint)in_r12 >> uVar2 - 1) & 1);
    param_1 = (undefined4 *)((uint)unaff_r11 ^ (uint)in_r12 >> uVar2);
    bVar24 = (int)param_1 < 0;
    bVar21 = param_1 == (undefined4 *)0x0;
  }
  bVar23 = false;
  if (bVar21) {
    uVar2 = (uint)param_2 & (uint)param_1 & 0xff;
    bVar26 = uVar2 == 0 && bVar26 || uVar2 != 0 && (bool)((byte)((uint)in_r12 >> uVar2 - 1) & 1);
    param_1 = (undefined4 *)((uint)in_r12 >> uVar2 ^ 0x84bb48e);
    bVar24 = (int)param_1 < 0;
    bVar23 = param_1 == (undefined4 *)0x0;
  }
  bVar21 = false;
  if (bVar23) {
    uVar2 = (uint)unaff_r4 & 0xae;
    bVar26 = uVar2 == 0 && bVar26 ||
             uVar2 != 0 && (bool)((byte)((uint)register0x00000054 >> 0x20 - uVar2) & 1);
    param_1 = (undefined4 *)((uint)param_4 ^ (int)register0x00000054 << uVar2);
    bVar24 = (int)param_1 < 0;
    bVar21 = param_1 == (undefined4 *)0x0;
  }
  bVar23 = false;
  if (bVar21) {
    uVar2 = (uint)param_3 & (uint)param_1 & 0xff;
    bVar26 = uVar2 == 0 && bVar26 ||
             uVar2 != 0 && (bool)((byte)((uint)unaff_r7 >> 0x20 - uVar2) & 1);
    param_1 = (undefined4 *)((uint)param_2 ^ (int)unaff_r7 << uVar2);
    bVar24 = (int)param_1 < 0;
    bVar23 = param_1 == (undefined4 *)0x0;
  }
  bVar21 = false;
  if (bVar23) {
    param_1 = (undefined4 *)((uint)param_3 & (uint)param_2);
    bVar24 = (int)param_1 < 0;
    bVar21 = param_1 == (undefined4 *)0x0;
  }
  if (bVar21) {
    bVar26 = (bool)(bVar6 >> 7);
    param_1 = (undefined4 *)0x0;
    bVar24 = false;
  }
  bVar23 = false;
  if (bVar21) {
    uVar2 = (uint)param_2 & (uint)param_1 & 0xff;
    bVar26 = uVar2 == 0 && bVar26 ||
             uVar2 != 0 && (bool)((byte)((uint)unaff_r9 >> 0x20 - uVar2) & 1);
    param_1 = (undefined4 *)((uint)unaff_r7 & (int)unaff_r9 << uVar2);
    bVar24 = (int)param_1 < 0;
    bVar23 = param_1 == (undefined4 *)0x0;
  }
  if (bVar23) {
    bVar26 = (bool)(bVar12 >> 7);
    param_1 = (undefined4 *)0x0;
    bVar24 = false;
  }
  if (bVar26 && !bVar23) {
    param_1 = (undefined4 *)((uint)param_4 & (uint)param_1);
  }
  if (bVar23) {
    bVar26 = (bool)(bVar10 >> 7);
    param_1 = (undefined4 *)0x0;
    bVar24 = false;
  }
  bVar21 = false;
  if (bVar23) {
    param_1 = (undefined4 *)((uint)param_4 & (uint)param_2);
    bVar24 = (int)param_1 < 0;
    bVar21 = param_1 == (undefined4 *)0x0;
  }
  if (bVar21) {
    bVar26 = (bool)(bVar3 >> 7);
    param_1 = (undefined4 *)0x0;
    bVar24 = false;
  }
  if (bVar24) {
    param_1 = (undefined4 *)
              ((uint)unaff_r4 & (uint)unaff_r5 & (int)unaff_r4 << ((uint)param_1 & 0xff));
  }
  bVar23 = false;
  if (bVar21) {
    uVar2 = (uint)param_1 & 0xff;
    bVar26 = uVar2 == 0 && bVar26 ||
             uVar2 != 0 && (bool)((byte)((uint)register0x00000054 >> 0x20 - uVar2) & 1);
    param_1 = (undefined4 *)((uint)unaff_r9 & (int)register0x00000054 << uVar2);
    bVar24 = (int)param_1 < 0;
    bVar23 = param_1 == (undefined4 *)0x0;
  }
  if (bVar24) {
    param_1 = (undefined4 *)((uint)unaff_r4 & (uint)param_1);
  }
  if (bVar23) {
    param_1 = unaff_r4;
  }
  if (bVar24) {
    param_1 = (undefined4 *)((uint)unaff_r4 & (uint)param_1);
  }
  if (bVar23) {
    param_1 = unaff_r11;
  }
  if (bVar24) {
    param_1 = (undefined4 *)((uint)unaff_r4 & (uint)param_1);
  }
  bVar21 = false;
  if (bVar23) {
    uVar2 = (uint)param_1 & 0xff;
    bVar26 = uVar2 == 0 && bVar26 || uVar2 != 0 && (bool)((byte)((uint)param_1 >> 0x20 - uVar2) & 1)
    ;
    param_1 = (undefined4 *)((uint)register0x00000054 & (int)param_1 << uVar2);
    bVar24 = (int)param_1 < 0;
    bVar21 = param_1 == (undefined4 *)0x0;
  }
  bVar23 = false;
  if (bVar21) {
    param_1 = (undefined4 *)((uint)unaff_r4 ^ (uint)param_3 & (uint)param_2);
    bVar24 = (int)param_1 < 0;
    bVar23 = param_1 == (undefined4 *)0x0;
  }
  bVar21 = false;
  if (bVar23) {
    uVar2 = (int)unaff_r5 - (int)param_3 & 0xff;
    bVar26 = uVar2 == 0 && bVar26 || uVar2 != 0 && (bool)((byte)((uint)param_3 >> uVar2 - 1) & 1);
    param_1 = (undefined4 *)((int)unaff_r5 - (int)param_3 ^ (uint)param_3 >> uVar2);
    bVar24 = (int)param_1 < 0;
    bVar21 = param_1 == (undefined4 *)0x0;
  }
  bVar23 = false;
  if (bVar21) {
    uVar2 = (int)param_1 - (int)param_3 & 0xff;
    bVar26 = uVar2 == 0 && bVar26 || uVar2 != 0 && (bool)((byte)((uint)unaff_r9 >> uVar2 - 1) & 1);
    param_1 = (undefined4 *)((uint)param_3 ^ (uint)unaff_r9 >> uVar2);
    bVar24 = (int)param_1 < 0;
    bVar23 = param_1 == (undefined4 *)0x0;
  }
  bVar21 = false;
  if (bVar23) {
    uVar2 = (int)param_1 - (int)param_3 & 0xff;
    bVar26 = uVar2 == 0 && bVar26 || uVar2 != 0 && (bool)((byte)((uint)unaff_r5 >> uVar2 - 1) & 1);
    param_1 = (undefined4 *)((uint)unaff_r4 ^ (uint)unaff_r5 >> uVar2);
    bVar24 = (int)param_1 < 0;
    bVar21 = param_1 == (undefined4 *)0x0;
  }
  bVar23 = false;
  if (bVar21) {
    bVar26 = in_r12 <= param_4;
    cVar27 = SBORROW4((int)param_4,(int)in_r12);
    param_1 = (undefined4 *)((int)param_4 - (int)in_r12);
    bVar24 = (int)param_1 < 0;
    bVar23 = param_1 == (undefined4 *)0x0;
  }
  if (bVar23) {
    bVar26 = false;
    bVar24 = (int)unaff_r4 < 0;
    param_1 = unaff_r4;
  }
  bVar21 = false;
  if (bVar23 && unaff_r4 == (undefined4 *)0x0) {
    bVar26 = param_1 <= param_4;
    cVar27 = SBORROW4((int)param_4,(int)param_1);
    param_1 = (undefined4 *)((int)param_4 - (int)param_1);
    bVar24 = (int)param_1 < 0;
    bVar21 = param_1 == (undefined4 *)0x0;
  }
  if (bVar21) {
    param_1 = (undefined4 *)((int)unaff_r5 - ((int)unaff_r9 >> 0x20 ^ 0x84bb60eU));
  }
  if (bVar21) {
    param_1 = (undefined4 *)0x0;
    bVar24 = false;
  }
  bVar23 = false;
  if (bVar21) {
    uVar2 = (int)unaff_r5 - ((uint)unaff_r8 ^ 0x84bb636 << ((int)unaff_r5 - (int)in_r12 & 0xffU)) &
            0xff;
    bVar26 = uVar2 == 0 && bVar26 ||
             uVar2 != 0 && (bool)((byte)((uint)register0x00000054 >> 0x20 - uVar2) & 1);
    param_1 = (undefined4 *)((uint)unaff_lr & (int)register0x00000054 << uVar2);
    bVar24 = (int)param_1 < 0;
    bVar23 = param_1 == (undefined4 *)0x0;
  }
  bVar10 = (byte)((uint)unaff_r8 >> 0x18);
  if (bVar23) {
    bVar26 = (bool)(bVar10 >> 7);
    bVar24 = (int)param_2 < 0;
    param_1 = param_2;
  }
  bVar21 = false;
  if (bVar23 && param_2 == (undefined4 *)0x0) {
    bVar26 = in_r12 <= param_4;
    cVar27 = SBORROW4((int)param_4,(int)in_r12);
    param_1 = (undefined4 *)((int)param_4 - (int)in_r12);
    bVar24 = (int)param_1 < 0;
    bVar21 = param_1 == (undefined4 *)0x0;
  }
  bVar23 = false;
  if (bVar21) {
    uVar2 = (uint)param_1 & 0xff;
    bVar26 = uVar2 == 0 && bVar26 ||
             uVar2 != 0 && (bool)((byte)((uint)unaff_r11 >> 0x20 - uVar2) & 1);
    param_1 = (undefined4 *)((uint)param_3 & (int)unaff_r11 << uVar2);
    bVar24 = (int)param_1 < 0;
    bVar23 = param_1 == (undefined4 *)0x0;
  }
  bVar21 = false;
  if (bVar23) {
    bVar26 = param_1 <= param_4;
    cVar27 = SBORROW4((int)param_4,(int)param_1);
    param_1 = (undefined4 *)((int)param_4 - (int)param_1);
    bVar24 = (int)param_1 < 0;
    bVar21 = param_1 == (undefined4 *)0x0;
  }
  if (bVar21) {
    bVar26 = true;
    cVar27 = false;
    bVar24 = (int)unaff_r5 < 0;
    param_1 = unaff_r5;
  }
  bVar23 = false;
  if (bVar21 && unaff_r5 == (undefined4 *)0x0) {
    uVar2 = (int)in_r12 - (int)param_2 & 0xff;
    bVar26 = uVar2 == 0 && bVar26 || uVar2 != 0 && (bool)((byte)((int)unaff_r5 >> uVar2 - 1) & 1);
    param_1 = (undefined4 *)((uint)unaff_r9 & (int)unaff_r5 >> uVar2);
    bVar24 = (int)param_1 < 0;
    bVar23 = param_1 == (undefined4 *)0x0;
  }
  bVar21 = false;
  if (bVar23) {
    bVar26 = (bool)(bVar7 >> 7);
    param_1 = (undefined4 *)((uint)unaff_r9 & uVar15);
    bVar24 = (int)param_1 < 0;
    bVar21 = param_1 == (undefined4 *)0x0;
  }
  if (bVar21) {
    bVar26 = false;
    param_1 = (undefined4 *)0x0;
    bVar24 = false;
  }
  if (bVar26 && !bVar21) {
    param_1 = (undefined4 *)0x0;
  }
  uVar2 = (int)unaff_r8 >> 0x20;
  bVar23 = false;
  if (bVar21) {
    bVar26 = (bool)(bVar10 >> 7);
    param_1 = (undefined4 *)((uint)unaff_r5 & uVar2);
    bVar24 = (int)param_1 < 0;
    bVar23 = param_1 == (undefined4 *)0x0;
  }
  bVar21 = false;
  if (bVar23) {
    uVar18 = (int)unaff_r8 - (0x84bb78e - (int)register0x00000054);
    uVar19 = (int)param_2 << (uVar18 & 0xff);
    bVar26 = uVar19 <= uVar18;
    cVar27 = SBORROW4(uVar18,uVar19);
    param_1 = (undefined4 *)(uVar18 - uVar19);
    bVar24 = (int)param_1 < 0;
    bVar21 = param_1 == (undefined4 *)0x0;
  }
  if (bVar21) {
    bVar26 = true;
    cVar27 = false;
    bVar24 = (int)unaff_r5 < 0;
    param_1 = unaff_r5;
  }
  bVar21 = bVar21 && unaff_r5 == (undefined4 *)0x0;
  if (bVar21) {
    bVar26 = true;
    cVar27 = false;
    bVar24 = (int)param_4 < 0;
    param_1 = param_4;
  }
  bVar21 = bVar21 && param_4 == (undefined4 *)0x0;
  if (bVar21) {
    bVar26 = true;
    cVar27 = false;
    bVar24 = (int)param_4 < 0;
    param_1 = param_4;
  }
  bVar23 = false;
  if (bVar21 && param_4 == (undefined4 *)0x0) {
    bVar26 = unaff_r6 <= param_3;
    cVar27 = SBORROW4((int)param_3,(int)unaff_r6);
    param_1 = (undefined4 *)((int)param_3 - (int)unaff_r6);
    bVar24 = (int)param_1 < 0;
    bVar23 = param_1 == (undefined4 *)0x0;
  }
  bVar21 = false;
  if (bVar23) {
    param_1 = (undefined4 *)((uint)unaff_r11 >> ((int)unaff_r5 - (int)param_1 & 0xffU));
    bVar26 = param_1 <= param_4;
    cVar27 = SBORROW4((int)param_4,(int)param_1);
    param_1 = (undefined4 *)((int)param_4 - (int)param_1);
    bVar24 = (int)param_1 < 0;
    bVar21 = param_1 == (undefined4 *)0x0;
  }
  bVar23 = false;
  if (bVar21) {
    param_1 = (undefined4 *)(0x84bb806 << ((int)unaff_r8 - (int)param_1 & 0xffU));
    bVar26 = param_1 <= param_4;
    cVar27 = SBORROW4((int)param_4,(int)param_1);
    param_1 = (undefined4 *)((int)param_4 - (int)param_1);
    bVar24 = (int)param_1 < 0;
    bVar23 = param_1 == (undefined4 *)0x0;
  }
  if (bVar23) {
    bVar24 = (int)unaff_r11 < 0;
    param_1 = unaff_r11;
  }
  bVar21 = false;
  if (bVar23 && unaff_r11 == (undefined4 *)0x0) {
    bVar26 = unaff_r5 <= param_4;
    cVar27 = SBORROW4((int)param_4,(int)unaff_r5);
    param_1 = (undefined4 *)((int)param_4 - (int)unaff_r5);
    bVar24 = (int)param_1 < 0;
    bVar21 = param_1 == (undefined4 *)0x0;
  }
  bVar23 = false;
  if (bVar21) {
    param_1 = (undefined4 *)((int)unaff_r5 - ((uint)unaff_r8 >> ((uint)param_1 & 0xff)));
    bVar26 = param_1 <= param_4;
    cVar27 = SBORROW4((int)param_4,(int)param_1);
    param_1 = (undefined4 *)((int)param_4 - (int)param_1);
    bVar24 = (int)param_1 < 0;
    bVar23 = param_1 == (undefined4 *)0x0;
  }
  bVar21 = false;
  if (bVar23) {
    param_1 = (undefined4 *)((int)unaff_r5 - (0x84bb836U >> ((uint)param_1 & 0xff)));
    bVar26 = param_1 <= param_4;
    cVar27 = SBORROW4((int)param_4,(int)param_1);
    param_1 = (undefined4 *)((int)param_4 - (int)param_1);
    bVar24 = (int)param_1 < 0;
    bVar21 = param_1 == (undefined4 *)0x0;
  }
  if (bVar21) {
    bVar24 = (int)unaff_r10 < 0;
    param_1 = unaff_r10;
  }
  bVar23 = false;
  if (bVar21 && unaff_r10 == (undefined4 *)0x0) {
    bVar26 = (bool)(bVar10 >> 7);
    param_1 = (undefined4 *)((uint)unaff_r4 & uVar2);
    bVar24 = (int)param_1 < 0;
    bVar23 = param_1 == (undefined4 *)0x0;
  }
  bVar21 = false;
  if (bVar23) {
    bVar26 = (bool)(bVar14 >> 7);
    param_1 = (undefined4 *)((uint)unaff_r4 & (int)param_4 >> 0x20);
    bVar24 = (int)param_1 < 0;
    bVar21 = param_1 == (undefined4 *)0x0;
  }
  bVar23 = false;
  if (bVar21) {
    bVar26 = (bool)(bVar6 >> 7);
    param_1 = (undefined4 *)((uint)param_2 & (uint)puVar1);
    bVar24 = (int)param_1 < 0;
    bVar23 = param_1 == (undefined4 *)0x0;
  }
  bVar21 = false;
  if (bVar23) {
    uVar19 = (int)param_1 - (int)param_2 & 0xff;
    bVar26 = uVar19 == 0 && bVar26 ||
             uVar19 != 0 && (bool)((byte)((uint)unaff_lr >> uVar19 - 1) & 1);
    param_1 = (undefined4 *)((uint)unaff_r5 & (uint)unaff_lr >> uVar19);
    bVar24 = (int)param_1 < 0;
    bVar21 = param_1 == (undefined4 *)0x0;
  }
  if (bVar21) {
    param_1 = (undefined4 *)((uint)in_r12 & (int)unaff_r4 << ((uint)unaff_lr & 0xff));
  }
  if (bVar26 && !bVar21) {
    param_1 = (undefined4 *)((int)in_r12 - (int)param_1);
  }
  if (bVar21) {
    bVar26 = (bool)(bVar7 >> 7);
    param_1 = (undefined4 *)0x0;
    bVar24 = false;
  }
  bVar23 = false;
  if (bVar21) {
    uVar19 = (uint)param_1 & 0xff;
    bVar26 = uVar19 == 0 && bVar26 ||
             uVar19 != 0 && (bool)((byte)((uint)unaff_r4 >> 0x20 - uVar19) & 1);
    param_1 = (undefined4 *)((uint)unaff_r4 & (int)unaff_r4 << uVar19);
    bVar24 = (int)param_1 < 0;
    bVar23 = param_1 == (undefined4 *)0x0;
  }
  if (bVar24) {
    param_1 = (undefined4 *)
              ((int)param_4 - (((int)unaff_r4 << ((uint)param_1 & 0xff)) + (uint)!bVar26));
  }
  if (bVar23) {
    bVar26 = (bool)(bVar5 >> 7);
    param_1 = (undefined4 *)0x0;
    bVar24 = false;
  }
  if (bVar24) {
    param_1 = (undefined4 *)((int)unaff_r4 - ((int)unaff_r8 + (uint)!bVar26));
  }
  if (bVar23) {
    param_1 = (undefined4 *)0x0;
    bVar24 = false;
  }
  bVar21 = false;
  if (bVar23) {
    bVar26 = unaff_r5 <= param_4;
    cVar27 = SBORROW4((int)param_4,(int)unaff_r5);
    param_1 = (undefined4 *)((int)param_4 - (int)unaff_r5);
    bVar24 = (int)param_1 < 0;
    bVar21 = param_1 == (undefined4 *)0x0;
  }
  bVar23 = false;
  if (bVar21) {
    param_1 = (undefined4 *)((uint)unaff_r6 ^ (int)param_2 << ((uint)param_1 & 0xff));
    bVar26 = param_1 <= param_4;
    cVar27 = SBORROW4((int)param_4,(int)param_1);
    param_1 = (undefined4 *)((int)param_4 - (int)param_1);
    bVar24 = (int)param_1 < 0;
    bVar23 = param_1 == (undefined4 *)0x0;
  }
  bVar21 = false;
  if (bVar23) {
    param_1 = (undefined4 *)((uint)unaff_r5 ^ (int)unaff_r8 << ((uint)param_1 & 0xff));
    bVar26 = param_1 <= param_4;
    cVar27 = SBORROW4((int)param_4,(int)param_1);
    param_1 = (undefined4 *)((int)param_4 - (int)param_1);
    bVar24 = (int)param_1 < 0;
    bVar21 = param_1 == (undefined4 *)0x0;
  }
  if (bVar21) {
    bVar24 = false;
    param_1 = (undefined4 *)
              ((uint)unaff_r9 ^
              (int)in_r12 <<
              (((uint)unaff_r11 ^ (int)param_3 << ((int)in_r12 - (int)param_4 & 0xffU)) -
               (int)param_4 & 0xff));
  }
  if (bVar26 && !bVar21) {
    param_1 = (undefined4 *)((int)param_1 - (int)param_2);
  }
  bVar23 = false;
  if (bVar21) {
    uVar19 = (uint)param_1 & 0xff;
    bVar26 = uVar19 == 0 && bVar26 ||
             uVar19 != 0 && (bool)((byte)((uint)unaff_r10 >> 0x20 - uVar19) & 1);
    param_1 = (undefined4 *)((uint)param_2 ^ (int)unaff_r10 << uVar19);
    bVar24 = (int)param_1 < 0;
    bVar23 = param_1 == (undefined4 *)0x0;
  }
  if (bVar23) {
    bVar24 = (int)unaff_lr < 0;
    param_1 = unaff_lr;
  }
  bVar21 = false;
  if (bVar23 && unaff_lr == (undefined4 *)0x0) {
    uVar19 = (uint)param_1 & 0xff;
    bVar26 = uVar19 == 0 && bVar26 ||
             uVar19 != 0 && (bool)((byte)((uint)unaff_lr >> uVar19 - 1) & 1);
    param_1 = (undefined4 *)((uint)unaff_r4 & (uint)unaff_lr >> uVar19);
    bVar24 = (int)param_1 < 0;
    bVar21 = param_1 == (undefined4 *)0x0;
  }
  bVar23 = false;
  if (bVar24) {
    param_1 = (undefined4 *)((int)unaff_r4 << ((uint)param_1 & 0xff));
    bVar26 = param_1 <= param_2;
    cVar27 = SBORROW4((int)param_2,(int)param_1);
    param_1 = (undefined4 *)((int)param_2 - (int)param_1);
    bVar23 = (int)param_1 < 0;
    bVar21 = param_1 == (undefined4 *)0x0;
  }
  bVar11 = (byte)((uint)unaff_r9 >> 0x18);
  if (bVar21) {
    bVar26 = (bool)(bVar11 >> 7);
    bVar23 = (int)param_1 < 0;
  }
  bVar21 = bVar21 && param_1 == (undefined4 *)0x0;
  if (bVar23) {
    param_1 = (undefined4 *)((uint)register0x00000054 ^ (uint)param_1);
  }
  if (bVar21) {
    bVar26 = (bool)(bVar6 >> 7);
    bVar23 = (int)unaff_r8 < 0;
    param_1 = unaff_r8;
  }
  if (bVar23) {
    param_1 = (undefined4 *)((uint)register0x00000054 ^ (uint)param_1);
  }
  bVar24 = false;
  if (bVar21 && unaff_r8 == (undefined4 *)0x0) {
    uVar19 = (uint)param_1 & 0xff;
    bVar26 = uVar19 == 0 && bVar26 || uVar19 != 0 && (bool)((byte)((uint)param_2 >> uVar19 - 1) & 1)
    ;
    param_1 = (undefined4 *)((uint)unaff_r8 ^ (uint)param_2 >> uVar19);
    bVar23 = (int)param_1 < 0;
    bVar24 = param_1 == (undefined4 *)0x0;
  }
  if (bVar23) {
    param_1 = (undefined4 *)((uint)register0x00000054 ^ (uint)param_1);
  }
  if (bVar24) {
    param_1 = (undefined4 *)((uint)unaff_r9 ^ (uint)param_2 >> ((uint)param_1 & 0xff));
  }
  if (bVar23) {
    param_1 = (undefined4 *)((uint)register0x00000054 ^ (uint)param_1);
  }
  bVar21 = false;
  if (bVar24) {
    uVar19 = (uint)unaff_r8 & 0xff;
    bVar26 = uVar19 == 0 && bVar26 ||
             uVar19 != 0 && (bool)((byte)((uint)register0x00000054 >> uVar19 - 1) & 1);
    param_1 = (undefined4 *)((uint)unaff_r4 & (uint)register0x00000054 >> uVar19);
    bVar23 = (int)param_1 < 0;
    bVar21 = param_1 == (undefined4 *)0x0;
  }
  bVar24 = false;
  if (bVar21) {
    uVar19 = (int)unaff_r4 << ((uint)param_1 & 0xff);
    bVar26 = CARRY4((uint)unaff_r6,uVar19);
    cVar27 = SCARRY4((int)unaff_r6,uVar19);
    param_1 = (undefined4 *)((int)unaff_r6 + uVar19);
    bVar23 = (int)param_1 < 0;
    bVar24 = param_1 == (undefined4 *)0x0;
  }
  if (bVar24) {
    bVar26 = (bool)(bVar12 >> 7);
    bVar23 = (int)unaff_r9 < 0;
    param_1 = unaff_r9;
  }
  bVar21 = false;
  if (bVar24 && unaff_r9 == (undefined4 *)0x0) {
    bVar26 = CARRY4((uint)unaff_r6,(uint)param_1);
    cVar27 = SCARRY4((int)unaff_r6,(int)param_1);
    param_1 = (undefined4 *)((int)unaff_r6 + (int)param_1);
    bVar23 = (int)param_1 < 0;
    bVar21 = param_1 == (undefined4 *)0x0;
  }
  bVar24 = false;
  if (bVar21) {
    bVar26 = CARRY4((uint)unaff_r6,(uint)param_4);
    cVar27 = SCARRY4((int)unaff_r6,(int)param_4);
    param_1 = (undefined4 *)((int)unaff_r6 + (int)param_4);
    bVar23 = (int)param_1 < 0;
    bVar24 = param_1 == (undefined4 *)0x0;
  }
  if (bVar24) {
    param_1 = (undefined4 *)0x0;
    bVar23 = false;
  }
  bVar21 = false;
  if (bVar24) {
    param_1 = (undefined4 *)((uint)in_r12 ^ (uint)unaff_r5);
    bVar23 = (int)param_1 < 0;
    bVar21 = param_1 == (undefined4 *)0x0;
  }
  bVar24 = false;
  if (bVar21) {
    param_1 = (undefined4 *)((uint)in_r12 ^ (uint)param_4 ^ (int)unaff_r5 << ((uint)param_1 & 0xff))
    ;
    bVar23 = (int)param_1 < 0;
    bVar24 = param_1 == (undefined4 *)0x0;
  }
  bVar21 = false;
  if (bVar24) {
    param_1 = (undefined4 *)((uint)in_r12 ^ (uint)param_2 ^ (int)param_2 << ((uint)param_1 & 0xff));
    bVar23 = (int)param_1 < 0;
    bVar21 = param_1 == (undefined4 *)0x0;
  }
  if (bVar21) {
    param_1 = (undefined4 *)0x0;
    bVar23 = false;
  }
  bVar24 = false;
  if (bVar21) {
    bVar26 = CARRY4((uint)unaff_r6,(uint)unaff_r5);
    cVar27 = SCARRY4((int)unaff_r6,(int)unaff_r5);
    param_1 = (undefined4 *)((int)unaff_r6 + (int)unaff_r5);
    bVar23 = (int)param_1 < 0;
    bVar24 = param_1 == (undefined4 *)0x0;
  }
  bVar21 = false;
  if (bVar24) {
    uVar19 = (uint)param_1 & 0xff;
    bVar26 = uVar19 == 0 && bVar26 ||
             uVar19 != 0 && (bool)((byte)((uint)param_3 >> 0x20 - uVar19) & 1);
    param_1 = (undefined4 *)((uint)param_4 & (int)param_3 << uVar19);
    bVar23 = (int)param_1 < 0;
    bVar21 = param_1 == (undefined4 *)0x0;
  }
  bVar24 = false;
  if (bVar21) {
    bVar26 = CARRY4((uint)unaff_r6,(uint)param_1);
    cVar27 = SCARRY4((int)unaff_r6,(int)param_1);
    param_1 = (undefined4 *)((int)unaff_r6 + (int)param_1);
    bVar23 = (int)param_1 < 0;
    bVar24 = param_1 == (undefined4 *)0x0;
  }
  if (bVar24) {
    bVar26 = (bool)(bVar8 >> 7);
    param_1 = (undefined4 *)0x0;
    bVar23 = false;
  }
  if (bVar26 && !bVar24) {
    param_1 = (undefined4 *)((int)param_1 + 0x84bbbba);
  }
  bVar21 = false;
  if (bVar24) {
    uVar19 = (uint)param_1 & 0xff;
    bVar26 = uVar19 == 0 && bVar26 ||
             uVar19 != 0 && (bool)((byte)((uint)unaff_lr >> 0x20 - uVar19) & 1);
    param_1 = (undefined4 *)((uint)param_4 & (int)unaff_lr << uVar19);
    bVar23 = (int)param_1 < 0;
    bVar21 = param_1 == (undefined4 *)0x0;
  }
  bVar24 = false;
  if (bVar21) {
    bVar26 = CARRY4((uint)unaff_r6,(uint)param_1);
    cVar27 = SCARRY4((int)unaff_r6,(int)param_1);
    param_1 = (undefined4 *)((int)unaff_r6 + (int)param_1);
    bVar23 = (int)param_1 < 0;
    bVar24 = param_1 == (undefined4 *)0x0;
  }
  if (bVar24) {
    param_1 = (undefined4 *)0x0;
    bVar23 = false;
  }
  bVar21 = false;
  if (bVar24) {
    param_1 = (undefined4 *)((uint)in_r12 ^ (uint)unaff_r5);
    bVar23 = (int)param_1 < 0;
    bVar21 = param_1 == (undefined4 *)0x0;
  }
  bVar24 = false;
  if (bVar21) {
    param_1 = (undefined4 *)
              ((uint)in_r12 ^ (uint)unaff_r8 ^ (int)register0x00000054 << ((uint)param_1 & 0xff));
    bVar23 = (int)param_1 < 0;
    bVar24 = param_1 == (undefined4 *)0x0;
  }
  bVar21 = false;
  if (bVar24) {
    param_1 = (undefined4 *)((uint)in_r12 ^ (uint)unaff_r6);
    bVar23 = (int)param_1 < 0;
    bVar21 = param_1 == (undefined4 *)0x0;
  }
  if (bVar21) {
    cVar27 = SBORROW4((int)unaff_r5,(int)unaff_r5);
    param_1 = (undefined4 *)0x0;
    bVar26 = true;
    bVar23 = false;
  }
  bVar24 = false;
  if (bVar21) {
    bVar26 = unaff_r5 <= param_2;
    cVar27 = SBORROW4((int)param_2,(int)unaff_r5);
    param_1 = (undefined4 *)((int)param_2 - (int)unaff_r5);
    bVar23 = (int)param_1 < 0;
    bVar24 = param_1 == (undefined4 *)0x0;
  }
  if (bVar24) {
    bVar26 = (bool)(bVar7 >> 7);
    param_1 = (undefined4 *)0x0;
    bVar23 = false;
  }
  bVar21 = false;
  if (bVar24) {
    bVar26 = unaff_r5 <= param_1;
    cVar27 = SBORROW4((int)param_1,(int)unaff_r5);
    param_1 = (undefined4 *)((int)param_1 - (int)unaff_r5);
    bVar23 = (int)param_1 < 0;
    bVar21 = param_1 == (undefined4 *)0x0;
  }
  bVar24 = false;
  if (bVar21) {
    bVar26 = unaff_r5 <= unaff_r10;
    cVar27 = SBORROW4((int)unaff_r10,(int)unaff_r5);
    param_1 = (undefined4 *)((int)unaff_r10 - (int)unaff_r5);
    bVar23 = (int)param_1 < 0;
    bVar24 = param_1 == (undefined4 *)0x0;
  }
  if (bVar24) {
    bVar23 = (int)unaff_r10 < 0;
    param_1 = unaff_r10;
  }
  bVar21 = false;
  if (bVar24 && unaff_r10 == (undefined4 *)0x0) {
    bVar26 = CARRY4((uint)unaff_r6,(uint)in_r12);
    cVar27 = SCARRY4((int)unaff_r6,(int)in_r12);
    param_1 = (undefined4 *)((int)unaff_r6 + (int)in_r12);
    bVar23 = (int)param_1 < 0;
    bVar21 = param_1 == (undefined4 *)0x0;
  }
  bVar24 = false;
  if (bVar21) {
    uVar19 = (uint)param_2 ^ (uint)unaff_r10 >> ((uint)param_1 & 0xff);
    bVar26 = CARRY4((uint)unaff_r6,uVar19);
    cVar27 = SCARRY4((int)unaff_r6,uVar19);
    param_1 = (undefined4 *)((int)unaff_r6 + uVar19);
    bVar23 = (int)param_1 < 0;
    bVar24 = param_1 == (undefined4 *)0x0;
  }
  bVar21 = false;
  if (bVar24) {
    uVar19 = (uint)param_3 ^ (int)param_1 >> 0x20;
    bVar26 = CARRY4((uint)unaff_r6,uVar19);
    cVar27 = SCARRY4((int)unaff_r6,uVar19);
    param_1 = (undefined4 *)((int)unaff_r6 + uVar19);
    bVar23 = (int)param_1 < 0;
    bVar21 = param_1 == (undefined4 *)0x0;
  }
  bVar24 = false;
  if (bVar21) {
    uVar19 = (uint)param_1 & 0xff;
    bVar26 = uVar19 == 0 && bVar26 ||
             uVar19 != 0 && (bool)((byte)((uint)unaff_r8 >> uVar19 - 1) & 1);
    param_1 = (undefined4 *)((uint)register0x00000054 & (uint)unaff_r8 >> uVar19);
    bVar23 = (int)param_1 < 0;
    bVar24 = param_1 == (undefined4 *)0x0;
  }
  if (bVar24) {
    bVar26 = true;
    cVar27 = false;
    bVar23 = (int)param_4 < 0;
    param_1 = param_4;
  }
  bVar21 = false;
  if (bVar24 && param_4 == (undefined4 *)0x0) {
    bVar26 = CARRY4((uint)unaff_r6,(uint)unaff_r5);
    cVar27 = SCARRY4((int)unaff_r6,(int)unaff_r5);
    param_1 = (undefined4 *)((int)unaff_r6 + (int)unaff_r5);
    bVar23 = (int)param_1 < 0;
    bVar21 = param_1 == (undefined4 *)0x0;
  }
  bVar24 = false;
  if (bVar21) {
    uVar19 = (uint)param_1 ^ uVar17;
    bVar26 = CARRY4((uint)unaff_r6,uVar19);
    cVar27 = SCARRY4((int)unaff_r6,uVar19);
    param_1 = (undefined4 *)((int)unaff_r6 + uVar19);
    bVar23 = (int)param_1 < 0;
    bVar24 = param_1 == (undefined4 *)0x0;
  }
  bVar21 = false;
  if (bVar24) {
    uVar19 = (uint)param_1 ^ (int)in_r12 >> ((uint)param_1 & 0xff);
    bVar26 = CARRY4((uint)unaff_r6,uVar19);
    cVar27 = SCARRY4((int)unaff_r6,uVar19);
    param_1 = (undefined4 *)((int)unaff_r6 + uVar19);
    bVar23 = (int)param_1 < 0;
    bVar21 = param_1 == (undefined4 *)0x0;
  }
  if (bVar21) {
    bVar23 = (int)param_4 < 0;
    param_1 = param_4;
  }
  bVar24 = bVar21 && param_4 == (undefined4 *)0x0;
  if (bVar24) {
    bVar26 = (bool)(bVar12 >> 7);
    bVar23 = false;
    param_1 = (undefined4 *)0x0;
  }
  if (bVar26 && (!bVar21 || param_4 != (undefined4 *)0x0)) {
    bVar26 = unaff_r6 <= in_r12;
    cVar27 = SBORROW4((int)in_r12,(int)unaff_r6);
    param_1 = (undefined4 *)((int)in_r12 - (int)unaff_r6);
    bVar23 = (int)param_1 < 0;
    bVar24 = param_1 == (undefined4 *)0x0;
  }
  bVar21 = false;
  if (bVar24) {
    param_1 = (undefined4 *)((int)unaff_r6 << ((uint)param_1 & 0xff) & 0x84bbd36);
    bVar26 = unaff_r5 <= param_1;
    cVar27 = SBORROW4((int)param_1,(int)unaff_r5);
    param_1 = (undefined4 *)((int)param_1 - (int)unaff_r5);
    bVar23 = (int)param_1 < 0;
    bVar21 = param_1 == (undefined4 *)0x0;
  }
  bVar24 = false;
  if (bVar21) {
    uVar19 = (uint)param_1 & 0xff;
    bVar26 = uVar19 == 0 && bVar26 ||
             uVar19 != 0 && (bool)((byte)((uint)param_1 >> 0x20 - uVar19) & 1);
    param_1 = (undefined4 *)((uint)param_3 & (int)param_1 << uVar19);
    bVar23 = (int)param_1 < 0;
    bVar24 = param_1 == (undefined4 *)0x0;
  }
  bVar21 = false;
  if (bVar24) {
    bVar26 = unaff_r5 <= param_1;
    cVar27 = SBORROW4((int)param_1,(int)unaff_r5);
    param_1 = (undefined4 *)((int)param_1 - (int)unaff_r5);
    bVar23 = (int)param_1 < 0;
    bVar21 = param_1 == (undefined4 *)0x0;
  }
  if (bVar21) {
    bVar23 = (int)unaff_r6 < 0;
    param_1 = unaff_r6;
  }
  bVar24 = false;
  if (bVar21 && unaff_r6 == (undefined4 *)0x0) {
    bVar26 = (bool)(bVar10 >> 7);
    param_1 = (undefined4 *)((uint)unaff_r4 & uVar2);
    bVar23 = (int)param_1 < 0;
    bVar24 = param_1 == (undefined4 *)0x0;
  }
  if (bVar24) {
    bVar23 = (int)unaff_r11 < 0;
    param_1 = unaff_r11;
  }
  bVar21 = false;
  if (bVar24 && unaff_r11 == (undefined4 *)0x0) {
    bVar26 = CARRY4((uint)unaff_r5,(uint)unaff_r5);
    cVar27 = SCARRY4((int)unaff_r5,(int)unaff_r5);
    param_1 = (undefined4 *)((int)unaff_r5 * 2);
    bVar23 = (int)param_1 < 0;
    bVar21 = param_1 == (undefined4 *)0x0;
  }
  bVar24 = false;
  if (bVar21) {
    uVar19 = (int)param_2 - ((int)unaff_r5 >> 0x20);
    bVar26 = CARRY4((uint)unaff_r5,uVar19);
    cVar27 = SCARRY4((int)unaff_r5,uVar19);
    param_1 = (undefined4 *)((int)unaff_r5 + uVar19);
    bVar23 = (int)param_1 < 0;
    bVar24 = param_1 == (undefined4 *)0x0;
  }
  bVar21 = false;
  if (bVar24) {
    uVar17 = (int)unaff_r5 - uVar17;
    bVar26 = CARRY4((uint)unaff_r5,uVar17);
    cVar27 = SCARRY4((int)unaff_r5,uVar17);
    param_1 = (undefined4 *)((int)unaff_r5 + uVar17);
    bVar23 = (int)param_1 < 0;
    bVar21 = param_1 == (undefined4 *)0x0;
  }
  if (bVar21) {
    param_1 = (undefined4 *)0x0;
    bVar23 = false;
  }
  bVar24 = false;
  if (bVar21) {
    bVar26 = CARRY4((uint)unaff_r6,(uint)unaff_r5);
    cVar27 = SCARRY4((int)unaff_r6,(int)unaff_r5);
    param_1 = (undefined4 *)((int)unaff_r6 + (int)unaff_r5);
    bVar23 = (int)param_1 < 0;
    bVar24 = param_1 == (undefined4 *)0x0;
  }
  bVar21 = false;
  if (bVar24) {
    param_1 = (undefined4 *)((uint)register0x00000054 ^ 0x84bbe4e);
    bVar23 = (int)param_1 < 0;
    bVar21 = param_1 == (undefined4 *)0x0;
  }
  bVar24 = false;
  if (bVar21) {
    bVar26 = CARRY4((uint)unaff_r6,(uint)param_1);
    cVar27 = SCARRY4((int)unaff_r6,(int)param_1);
    param_1 = (undefined4 *)((int)unaff_r6 + (int)param_1);
    bVar23 = (int)param_1 < 0;
    bVar24 = param_1 == (undefined4 *)0x0;
  }
  bVar21 = false;
  if (bVar24) {
    param_1 = (undefined4 *)((uint)unaff_r11 ^ (uint)unaff_lr);
    bVar23 = (int)param_1 < 0;
    bVar21 = param_1 == (undefined4 *)0x0;
  }
  bVar24 = false;
  if (bVar21) {
    bVar26 = CARRY4((uint)unaff_r6,(uint)param_1);
    cVar27 = SCARRY4((int)unaff_r6,(int)param_1);
    param_1 = (undefined4 *)((int)unaff_r6 + (int)param_1);
    bVar23 = (int)param_1 < 0;
    bVar24 = param_1 == (undefined4 *)0x0;
  }
  if (bVar24) {
    param_1 = (undefined4 *)0x0;
    bVar23 = false;
  }
  bVar21 = false;
  if (bVar24) {
    bVar26 = CARRY4((uint)unaff_r6,(uint)unaff_r5);
    cVar27 = SCARRY4((int)unaff_r6,(int)unaff_r5);
    param_1 = (undefined4 *)((int)unaff_r6 + (int)unaff_r5);
    bVar23 = (int)param_1 < 0;
    bVar21 = param_1 == (undefined4 *)0x0;
  }
  if (bVar21) {
    bVar26 = (bool)(bVar6 >> 7);
    bVar23 = (int)unaff_r10 < 0;
    param_1 = unaff_r10;
  }
  bVar24 = false;
  if (bVar21 && unaff_r10 == (undefined4 *)0x0) {
    bVar26 = CARRY4((uint)unaff_r6,(uint)param_1);
    cVar27 = SCARRY4((int)unaff_r6,(int)param_1);
    param_1 = (undefined4 *)((int)unaff_r6 + (int)param_1);
    bVar23 = (int)param_1 < 0;
    bVar24 = param_1 == (undefined4 *)0x0;
  }
  if (bVar24) {
    bVar26 = (bool)(bVar12 >> 7);
    bVar23 = (int)unaff_r11 < 0;
    param_1 = unaff_r11;
  }
  bVar21 = false;
  if (bVar24 && unaff_r11 == (undefined4 *)0x0) {
    bVar26 = CARRY4((uint)unaff_r6,(uint)param_1);
    cVar27 = SCARRY4((int)unaff_r6,(int)param_1);
    param_1 = (undefined4 *)((int)unaff_r6 + (int)param_1);
    bVar23 = (int)param_1 < 0;
    bVar21 = param_1 == (undefined4 *)0x0;
  }
  if (bVar21) {
    bVar26 = (bool)(bVar8 >> 7);
    param_1 = (undefined4 *)0x84bbe96;
    bVar23 = false;
  }
  bVar24 = false;
  bVar21 = false;
  if (bVar26) {
    uVar17 = (int)unaff_r4 << ((uint)param_1 & 0xff);
    bVar21 = CARRY4((uint)param_1,uVar17);
    cVar27 = SCARRY4((int)param_1,uVar17);
    param_1 = (undefined4 *)((int)param_1 + uVar17);
    bVar23 = (int)param_1 < 0;
    bVar24 = param_1 == (undefined4 *)0x0;
  }
  bVar26 = false;
  if (bVar24) {
    uVar17 = (uint)param_1 & 0xff;
    bVar21 = uVar17 == 0 && bVar21 ||
             uVar17 != 0 && (bool)((byte)((uint)unaff_r4 >> uVar17 - 1) & 1);
    param_1 = (undefined4 *)((uint)unaff_r6 & (uint)unaff_r4 >> uVar17);
    bVar23 = (int)param_1 < 0;
    bVar26 = param_1 == (undefined4 *)0x0;
  }
  if (bVar26) {
    bVar21 = true;
    cVar27 = false;
    bVar23 = (int)unaff_r8 < 0;
    param_1 = unaff_r8;
  }
  bVar24 = false;
  if (bVar26 && unaff_r8 == (undefined4 *)0x0) {
    uVar17 = (int)param_3 - (int)unaff_r5 & 0xff;
    bVar21 = uVar17 == 0 && bVar21 ||
             uVar17 != 0 && (bool)((byte)((int)unaff_r10 >> uVar17 - 1) & 1);
    param_1 = (undefined4 *)((uint)unaff_r5 & (int)unaff_r10 >> uVar17);
    bVar23 = (int)param_1 < 0;
    bVar24 = param_1 == (undefined4 *)0x0;
  }
  bVar12 = (byte)param_3;
  bVar26 = false;
  bVar28 = bVar21;
  if (bVar24) {
    bVar28 = (bool)(bVar12 & 1);
    param_1 = (undefined4 *)((uint)unaff_r9 & ((uint)bVar21 << 0x1f | (uint)param_3 >> 1));
    bVar23 = (int)param_1 < 0;
    bVar26 = param_1 == (undefined4 *)0x0;
  }
  bVar21 = false;
  bVar24 = bVar28;
  if (bVar26) {
    bVar24 = (bool)(bVar12 & 1);
    param_1 = (undefined4 *)((uint)unaff_r5 & ((uint)bVar28 << 0x1f | (uint)param_3 >> 1));
    bVar23 = (int)param_1 < 0;
    bVar21 = param_1 == (undefined4 *)0x0;
  }
  bVar26 = false;
  if (bVar21) {
    uVar17 = (int)param_3 - (int)param_1 & 0xff;
    bVar24 = uVar17 == 0 && bVar24 || uVar17 != 0 && (bool)((byte)((int)param_2 >> uVar17 - 1) & 1);
    param_1 = (undefined4 *)((int)param_2 >> uVar17 & 0x84bc026);
    bVar26 = param_1 == (undefined4 *)0x0;
    bVar23 = false;
  }
  if (bVar26) {
    cVar27 = false;
    param_1 = (undefined4 *)0x0;
    bVar24 = true;
    bVar23 = false;
  }
  bVar21 = false;
  bVar28 = bVar24;
  if (bVar26) {
    bVar28 = (bool)((byte)unaff_r8 & 1);
    param_1 = (undefined4 *)((uint)unaff_r6 & ((uint)bVar24 << 0x1f | (uint)unaff_r8 >> 1));
    bVar23 = (int)param_1 < 0;
    bVar21 = param_1 == (undefined4 *)0x0;
  }
  bVar26 = false;
  bVar24 = bVar28;
  if (bVar21) {
    bVar24 = (bool)((byte)unaff_r5 & 1);
    param_1 = (undefined4 *)((uint)unaff_r9 & ((uint)bVar28 << 0x1f | (uint)unaff_r5 >> 1));
    bVar23 = (int)param_1 < 0;
    bVar26 = param_1 == (undefined4 *)0x0;
  }
  bVar21 = false;
  bVar28 = bVar24;
  if (bVar26) {
    bVar28 = (bool)((byte)unaff_r9 & 1);
    param_1 = (undefined4 *)((uint)unaff_r4 & ((uint)bVar24 << 0x1f | (uint)unaff_r9 >> 1));
    bVar23 = (int)param_1 < 0;
    bVar21 = param_1 == (undefined4 *)0x0;
  }
  if (bVar21) {
    cVar27 = false;
    bVar28 = true;
    bVar23 = (int)in_r12 < 0;
    param_1 = in_r12;
  }
  bVar26 = false;
  if (bVar21 && in_r12 == (undefined4 *)0x0) {
    bVar28 = in_r12 <= param_3;
    cVar27 = SBORROW4((int)param_3,(int)in_r12);
    param_1 = (undefined4 *)((int)param_3 - (int)in_r12);
    bVar23 = (int)param_1 < 0;
    bVar26 = param_1 == (undefined4 *)0x0;
  }
  if (bVar26) {
    bVar23 = (int)unaff_r8 < 0;
    param_1 = unaff_r8;
  }
  bVar21 = false;
  if (bVar26 && unaff_r8 == (undefined4 *)0x0) {
    bVar28 = in_r12 <= param_3;
    cVar27 = SBORROW4((int)param_3,(int)in_r12);
    param_1 = (undefined4 *)((int)param_3 - (int)in_r12);
    bVar23 = (int)param_1 < 0;
    bVar21 = param_1 == (undefined4 *)0x0;
  }
  bVar26 = false;
  if (bVar21) {
    uVar17 = (uint)param_1 & 0xff;
    bVar28 = uVar17 == 0 && bVar28 ||
             uVar17 != 0 && (bool)((byte)((uint)unaff_r8 >> uVar17 - 1) & 1);
    param_1 = (undefined4 *)((uint)unaff_r4 ^ (uint)unaff_r8 >> uVar17);
    bVar23 = (int)param_1 < 0;
    bVar26 = param_1 == (undefined4 *)0x0;
  }
  if (bVar26) {
    bVar23 = (int)unaff_r9 < 0;
    param_1 = unaff_r9;
  }
  bVar21 = false;
  if (bVar26 && unaff_r9 == (undefined4 *)0x0) {
    bVar28 = param_4 <= unaff_r5;
    cVar27 = SBORROW4((int)unaff_r5,(int)param_4);
    param_1 = (undefined4 *)((int)unaff_r5 - (int)param_4);
    bVar23 = (int)param_1 < 0;
    bVar21 = param_1 == (undefined4 *)0x0;
  }
  bVar26 = false;
  if (bVar21) {
    uVar17 = (uint)param_1 & 0xff;
    bVar28 = uVar17 == 0 && bVar28 ||
             uVar17 != 0 && (bool)((byte)((uint)register0x00000054 >> uVar17 - 1) & 1);
    param_1 = (undefined4 *)((uint)unaff_r8 ^ (uint)register0x00000054 >> uVar17);
    bVar23 = (int)param_1 < 0;
    bVar26 = param_1 == (undefined4 *)0x0;
  }
  bVar21 = false;
  if (bVar26) {
    bVar28 = param_4 <= param_1;
    cVar27 = SBORROW4((int)param_1,(int)param_4);
    param_1 = (undefined4 *)((int)param_1 - (int)param_4);
    bVar23 = (int)param_1 < 0;
    bVar21 = param_1 == (undefined4 *)0x0;
  }
  bVar26 = false;
  if (bVar21) {
    bVar28 = (bool)(bVar4 >> 7);
    param_1 = (undefined4 *)((uint)unaff_r6 ^ uVar20);
    bVar23 = (int)param_1 < 0;
    bVar26 = param_1 == (undefined4 *)0x0;
  }
  bVar21 = false;
  if (bVar26) {
    bVar28 = param_4 <= param_1;
    cVar27 = SBORROW4((int)param_1,(int)param_4);
    param_1 = (undefined4 *)((int)param_1 - (int)param_4);
    bVar23 = (int)param_1 < 0;
    bVar21 = param_1 == (undefined4 *)0x0;
  }
  bVar26 = false;
  if (bVar21) {
    bVar28 = (bool)(bVar4 >> 7);
    param_1 = (undefined4 *)((uint)in_r12 ^ uVar20);
    bVar23 = (int)param_1 < 0;
    bVar26 = param_1 == (undefined4 *)0x0;
  }
  if (bVar26) {
    bVar23 = false;
    param_1 = (undefined4 *)((uint)unaff_r5 & 0x84bc236);
  }
  if (bVar28 && !bVar26) {
    bVar28 = CARRY4((uint)param_1,(uint)unaff_r5);
    cVar27 = SCARRY4((int)param_1,(int)unaff_r5);
    param_1 = (undefined4 *)((int)param_1 + (int)unaff_r5);
    bVar23 = (int)param_1 < 0;
    bVar26 = param_1 == (undefined4 *)0x0;
  }
  bVar21 = false;
  if (bVar26) {
    bVar28 = CARRY4((uint)param_3,(uint)in_r12);
    cVar27 = SCARRY4((int)param_3,(int)in_r12);
    param_1 = (undefined4 *)((int)param_3 + (int)in_r12);
    bVar23 = (int)param_1 < 0;
    bVar21 = param_1 == (undefined4 *)0x0;
  }
  bVar26 = false;
  if (bVar21) {
    uVar17 = (int)param_3 - ((int)unaff_r11 << ((uint)param_1 & 0xff));
    bVar28 = CARRY4((uint)param_3,uVar17);
    cVar27 = SCARRY4((int)param_3,uVar17);
    param_1 = (undefined4 *)((int)param_3 + uVar17);
    bVar23 = (int)param_1 < 0;
    bVar26 = param_1 == (undefined4 *)0x0;
  }
  bVar21 = false;
  if (bVar26) {
    bVar28 = CARRY4((uint)param_3,(uint)param_2);
    cVar27 = SCARRY4((int)param_3,(int)param_2);
    param_1 = (undefined4 *)((int)param_3 + (int)param_2);
    bVar23 = (int)param_1 < 0;
    bVar21 = param_1 == (undefined4 *)0x0;
  }
  if (bVar21) {
    bVar28 = (bool)(bVar6 >> 7);
    bVar23 = (int)unaff_r9 < 0;
    param_1 = unaff_r9;
  }
  bVar21 = bVar21 && unaff_r9 == (undefined4 *)0x0;
  if (bVar21) {
    cVar27 = SBORROW4((int)unaff_r5,(int)unaff_r5);
    param_1 = (undefined4 *)0x0;
    bVar28 = true;
    bVar23 = false;
  }
  bVar26 = false;
  if (bVar21) {
    uVar17 = (uint)param_1 & 0xff;
    bVar28 = uVar17 == 0 && bVar28 ||
             uVar17 != 0 && (bool)((byte)((uint)unaff_r4 >> uVar17 - 1) & 1);
    param_1 = (undefined4 *)((uint)unaff_r9 ^ (uint)unaff_r4 >> uVar17);
    bVar23 = (int)param_1 < 0;
    bVar26 = param_1 == (undefined4 *)0x0;
  }
  bVar21 = false;
  if (bVar26) {
    bVar28 = unaff_r5 <= param_1;
    cVar27 = SBORROW4((int)param_1,(int)unaff_r5);
    param_1 = (undefined4 *)((int)param_1 - (int)unaff_r5);
    bVar23 = (int)param_1 < 0;
    bVar21 = param_1 == (undefined4 *)0x0;
  }
  if (bVar21) {
    bVar28 = (bool)(bVar14 >> 7);
    bVar23 = (int)unaff_r9 < 0;
    param_1 = unaff_r9;
  }
  bVar26 = false;
  if (bVar21 && unaff_r9 == (undefined4 *)0x0) {
    bVar28 = unaff_r5 <= param_1;
    cVar27 = SBORROW4((int)param_1,(int)unaff_r5);
    param_1 = (undefined4 *)((int)param_1 - (int)unaff_r5);
    bVar23 = (int)param_1 < 0;
    bVar26 = param_1 == (undefined4 *)0x0;
  }
  bVar21 = false;
  if (bVar26) {
    param_1 = (undefined4 *)((uint)unaff_r10 & (uint)unaff_r5);
    bVar23 = (int)param_1 < 0;
    bVar21 = param_1 == (undefined4 *)0x0;
  }
  bVar26 = false;
  if (bVar21) {
    param_1 = (undefined4 *)
              ((uint)unaff_r10 & ((uint)param_4 ^ 0x84bc31eU >> ((uint)param_1 & 0xff)));
    bVar23 = (int)param_1 < 0;
    bVar26 = param_1 == (undefined4 *)0x0;
  }
  if (bVar26) {
    bVar23 = (int)unaff_r11 < 0;
    param_1 = unaff_r11;
  }
  bVar26 = bVar26 && unaff_r11 == (undefined4 *)0x0;
  if (bVar26) {
    bVar28 = (bool)(bVar8 >> 7);
    param_1 = (undefined4 *)0x0;
    bVar23 = false;
  }
  bVar21 = false;
  if (bVar26) {
    uVar17 = (int)unaff_r9 + (int)unaff_r5 & 0xff;
    bVar28 = uVar17 == 0 && bVar28 ||
             uVar17 != 0 && (bool)((byte)((uint)register0x00000054 >> 0x20 - uVar17) & 1);
    param_1 = (undefined4 *)((uint)unaff_r9 & (int)register0x00000054 << uVar17);
    bVar23 = (int)param_1 < 0;
    bVar21 = param_1 == (undefined4 *)0x0;
  }
  if (bVar21) {
    uVar17 = (int)unaff_r9 + ((int)unaff_lr << ((int)unaff_r9 + (int)param_1 & 0xffU) & 0x84bc3ceU);
    param_1 = (undefined4 *)(uVar17 << (uVar17 & 0xff) & 0x84bc3d6);
  }
  if (bVar28 && !bVar21) {
    param_1 = (undefined4 *)((int)unaff_r10 + (int)param_1);
  }
  bVar26 = false;
  if (bVar21) {
    param_1 = (undefined4 *)((uint)unaff_r6 & (uint)in_r12);
    bVar23 = (int)param_1 < 0;
    bVar26 = param_1 == (undefined4 *)0x0;
  }
  if (bVar26) {
    bVar23 = (int)unaff_r7 < 0;
    param_1 = unaff_r7;
  }
  bVar21 = false;
  if (bVar26 && unaff_r7 == (undefined4 *)0x0) {
    uVar17 = (uint)param_1 & 0xff;
    bVar28 = uVar17 == 0 && bVar28 ||
             uVar17 != 0 && (bool)((byte)((uint)unaff_r9 >> 0x20 - uVar17) & 1);
    param_1 = (undefined4 *)((uint)unaff_r4 & (int)unaff_r9 << uVar17);
    bVar23 = (int)param_1 < 0;
    bVar21 = param_1 == (undefined4 *)0x0;
  }
  bVar26 = false;
  if (bVar21) {
    bVar28 = (bool)(bVar10 >> 7);
    param_1 = (undefined4 *)((uint)param_3 & uVar2);
    bVar23 = (int)param_1 < 0;
    bVar26 = param_1 == (undefined4 *)0x0;
  }
  if (bVar26) {
    cVar27 = SBORROW4((int)unaff_r5,(int)unaff_r5);
    param_1 = (undefined4 *)0x0;
    bVar28 = true;
    bVar23 = false;
  }
  bVar21 = false;
  if (bVar26) {
    param_1 = (undefined4 *)((uint)param_1 & 0x84bc4de);
    bVar21 = param_1 == (undefined4 *)0x0;
    bVar23 = false;
  }
  bVar26 = false;
  if (bVar21) {
    bVar28 = unaff_r5 <= param_1;
    cVar27 = SBORROW4((int)param_1,(int)unaff_r5);
    param_1 = (undefined4 *)((int)param_1 - (int)unaff_r5);
    bVar23 = (int)param_1 < 0;
    bVar26 = param_1 == (undefined4 *)0x0;
  }
  bVar21 = false;
  if (bVar26) {
    param_1 = (undefined4 *)((uint)param_4 & (uint)in_r12);
    bVar23 = (int)param_1 < 0;
    bVar21 = param_1 == (undefined4 *)0x0;
  }
  if (bVar21) {
    param_1 = (undefined4 *)0x0;
    bVar23 = false;
  }
  bVar26 = false;
  if (bVar21) {
    bVar28 = CARRY4((uint)unaff_r6,(uint)unaff_r5);
    cVar27 = SCARRY4((int)unaff_r6,(int)unaff_r5);
    param_1 = (undefined4 *)((int)unaff_r6 + (int)unaff_r5);
    bVar23 = (int)param_1 < 0;
    bVar26 = param_1 == (undefined4 *)0x0;
  }
  bVar21 = false;
  if (bVar26) {
    uVar17 = (uint)param_1 & 0xff;
    bVar28 = uVar17 == 0 && bVar28 ||
             uVar17 != 0 && (bool)((byte)((uint)unaff_r10 >> 0x20 - uVar17) & 1);
    param_1 = (undefined4 *)((uint)unaff_r7 & (int)unaff_r10 << uVar17);
    bVar23 = (int)param_1 < 0;
    bVar21 = param_1 == (undefined4 *)0x0;
  }
  bVar26 = false;
  if (bVar21) {
    bVar28 = CARRY4((uint)unaff_r6,(uint)param_1);
    cVar27 = SCARRY4((int)unaff_r6,(int)param_1);
    param_1 = (undefined4 *)((int)unaff_r6 + (int)param_1);
    bVar23 = (int)param_1 < 0;
    bVar26 = param_1 == (undefined4 *)0x0;
  }
  bVar21 = false;
  if (bVar26) {
    uVar17 = (uint)param_1 & 0xff;
    bVar28 = uVar17 == 0 && bVar28 ||
             uVar17 != 0 && (bool)((byte)((uint)unaff_r10 >> 0x20 - uVar17) & 1);
    param_1 = (undefined4 *)((uint)in_r12 & (int)unaff_r10 << uVar17);
    bVar23 = (int)param_1 < 0;
    bVar21 = param_1 == (undefined4 *)0x0;
  }
  bVar26 = false;
  if (bVar21) {
    bVar28 = CARRY4((uint)unaff_r5,(uint)unaff_r10);
    cVar27 = SCARRY4((int)unaff_r5,(int)unaff_r10);
    param_1 = (undefined4 *)((int)unaff_r5 + (int)unaff_r10);
    bVar23 = (int)param_1 < 0;
    bVar26 = param_1 == (undefined4 *)0x0;
  }
  bVar21 = false;
  if (bVar26) {
    uVar17 = (uint)unaff_r10 ^ (int)unaff_r10 << ((uint)param_1 & 0xff);
    bVar28 = CARRY4((uint)unaff_r5,uVar17);
    cVar27 = SCARRY4((int)unaff_r5,uVar17);
    param_1 = (undefined4 *)((int)unaff_r5 + uVar17);
    bVar23 = (int)param_1 < 0;
    bVar21 = param_1 == (undefined4 *)0x0;
  }
  if (bVar21) {
    bVar23 = (int)in_r12 < 0;
    param_1 = in_r12;
  }
  bVar26 = false;
  if (bVar21 && in_r12 == (undefined4 *)0x0) {
    uVar17 = (uint)param_1 & 0xff;
    bVar28 = uVar17 == 0 && bVar28 ||
             uVar17 != 0 && (bool)((byte)((uint)unaff_r10 >> uVar17 - 1) & 1);
    param_1 = (undefined4 *)((uint)unaff_r4 & (uint)unaff_r10 >> uVar17);
    bVar23 = (int)param_1 < 0;
    bVar26 = param_1 == (undefined4 *)0x0;
  }
  if (bVar28 && !bVar26) {
    param_1 = (undefined4 *)((int)param_4 + ((int)unaff_r4 << ((uint)param_1 & 0xff)));
  }
  bVar21 = false;
  if (bVar26) {
    uVar17 = (uint)param_1 & 0xff;
    bVar28 = uVar17 == 0 && bVar28 || uVar17 != 0 && (bool)((byte)((uint)in_r12 >> uVar17 - 1) & 1);
    param_1 = (undefined4 *)((uint)unaff_r9 ^ (uint)in_r12 >> uVar17);
    bVar23 = (int)param_1 < 0;
    bVar21 = param_1 == (undefined4 *)0x0;
  }
  bVar26 = false;
  if (bVar21) {
    uVar17 = (int)unaff_r5 - (int)unaff_r9 & 0xff;
    bVar28 = uVar17 == 0 && bVar28 || uVar17 != 0 && (bool)((byte)((int)unaff_r5 >> uVar17 - 1) & 1)
    ;
    param_1 = (undefined4 *)((uint)in_r12 & (int)unaff_r5 >> uVar17);
    bVar23 = (int)param_1 < 0;
    bVar26 = param_1 == (undefined4 *)0x0;
  }
  bVar21 = false;
  if (bVar26) {
    uVar17 = (int)param_1 - (int)unaff_r9 & 0xff;
    bVar28 = uVar17 == 0 && bVar28 || uVar17 != 0 && (bool)((byte)((int)unaff_r5 >> uVar17 - 1) & 1)
    ;
    param_1 = (undefined4 *)((uint)in_r12 & (int)unaff_r5 >> uVar17);
    bVar23 = (int)param_1 < 0;
    bVar21 = param_1 == (undefined4 *)0x0;
  }
  bVar26 = false;
  if (bVar21) {
    bVar28 = CARRY4((uint)unaff_r5,(uint)unaff_r5);
    cVar27 = SCARRY4((int)unaff_r5,(int)unaff_r5);
    param_1 = (undefined4 *)((int)unaff_r5 * 2);
    bVar23 = (int)param_1 < 0;
    bVar26 = param_1 == (undefined4 *)0x0;
  }
  bVar21 = false;
  if (bVar26) {
    bVar28 = CARRY4((uint)unaff_r5,(uint)param_4);
    cVar27 = SCARRY4((int)unaff_r5,(int)param_4);
    param_1 = (undefined4 *)((int)unaff_r5 + (int)param_4);
    bVar23 = (int)param_1 < 0;
    bVar21 = param_1 == (undefined4 *)0x0;
  }
  bVar26 = false;
  if (bVar21) {
    bVar28 = CARRY4((uint)unaff_r5,(uint)param_1);
    cVar27 = SCARRY4((int)unaff_r5,(int)param_1);
    param_1 = (undefined4 *)((int)unaff_r5 + (int)param_1);
    bVar23 = (int)param_1 < 0;
    bVar26 = param_1 == (undefined4 *)0x0;
  }
  bVar21 = false;
  if (bVar26) {
    uVar17 = (uint)unaff_r4 ^ (uint)unaff_r6 >> ((uint)param_1 & 0xff);
    bVar28 = CARRY4((uint)unaff_r5,uVar17);
    cVar27 = SCARRY4((int)unaff_r5,uVar17);
    param_1 = (undefined4 *)((int)unaff_r5 + uVar17);
    bVar23 = (int)param_1 < 0;
    bVar21 = param_1 == (undefined4 *)0x0;
  }
  bVar26 = false;
  if (bVar21) {
    uVar17 = (uint)unaff_r6 & 0xff;
    bVar28 = uVar17 == 0 && bVar28 ||
             uVar17 != 0 && (bool)((byte)((uint)unaff_r4 >> uVar17 - 1) & 1);
    param_1 = (undefined4 *)((uint)unaff_r4 & (uint)unaff_r4 >> uVar17);
    bVar23 = (int)param_1 < 0;
    bVar26 = param_1 == (undefined4 *)0x0;
  }
  bVar21 = false;
  if (bVar26) {
    param_1 = (undefined4 *)((int)unaff_r4 << ((uint)param_1 & 0xff));
    bVar28 = unaff_r9 <= param_1;
    cVar27 = SBORROW4((int)param_1,(int)unaff_r9);
    param_1 = (undefined4 *)((int)param_1 - (int)unaff_r9);
    bVar23 = (int)param_1 < 0;
    bVar21 = param_1 == (undefined4 *)0x0;
  }
  if (bVar21) {
    bVar28 = (bool)(bVar13 >> 7);
    bVar23 = (int)param_4 < 0;
    param_1 = param_4;
  }
  bVar26 = false;
  if (bVar21 && param_4 == (undefined4 *)0x0) {
    bVar28 = CARRY4((uint)unaff_r5,(uint)param_1);
    cVar27 = SCARRY4((int)unaff_r5,(int)param_1);
    param_1 = (undefined4 *)((int)unaff_r5 + (int)param_1);
    bVar23 = (int)param_1 < 0;
    bVar26 = param_1 == (undefined4 *)0x0;
  }
  bVar21 = false;
  if (bVar26) {
    bVar28 = (undefined4 *)0xf7b438b1 < unaff_r5;
    cVar27 = SCARRY4((int)unaff_r5,0x84bc74e);
    param_1 = (undefined4 *)((int)unaff_r5 + 0x84bc74e);
    bVar23 = (int)param_1 < 0;
    bVar21 = param_1 == (undefined4 *)0x0;
  }
  bVar26 = false;
  if (bVar21) {
    uVar17 = (uint)param_1 & 0xff;
    bVar28 = uVar17 == 0 && bVar28 || uVar17 != 0 && (bool)((byte)((uint)param_4 >> uVar17 - 1) & 1)
    ;
    param_1 = (undefined4 *)((uint)param_3 ^ (uint)param_4 >> uVar17);
    bVar23 = (int)param_1 < 0;
    bVar26 = param_1 == (undefined4 *)0x0;
  }
  if (bVar26) {
    bVar28 = true;
    cVar27 = false;
    bVar23 = (int)param_4 < 0;
    param_1 = param_4;
  }
  bVar21 = false;
  if (bVar26 && param_4 == (undefined4 *)0x0) {
    uVar17 = (uint)param_1 & 0xff;
    bVar28 = uVar17 == 0 && bVar28 ||
             uVar17 != 0 && (bool)((byte)((uint)register0x00000054 >> 0x20 - uVar17) & 1);
    param_1 = (undefined4 *)((uint)unaff_r4 & (int)register0x00000054 << uVar17);
    bVar23 = (int)param_1 < 0;
    bVar21 = param_1 == (undefined4 *)0x0;
  }
  if (bVar28 && !bVar21) {
    param_1 = (undefined4 *)((int)unaff_r4 + ((int)unaff_r4 << ((uint)param_1 & 0xff)));
  }
  bVar26 = false;
  bVar24 = bVar28;
  if (bVar21) {
    bVar24 = (bool)((byte)param_4 & 1);
    param_1 = (undefined4 *)((uint)unaff_r5 & ((uint)bVar28 << 0x1f | (uint)param_4 >> 1));
    bVar23 = (int)param_1 < 0;
    bVar26 = param_1 == (undefined4 *)0x0;
  }
  bVar21 = false;
  if (bVar26) {
    bVar24 = CARRY4((uint)unaff_r6,(uint)param_1);
    cVar27 = SCARRY4((int)unaff_r6,(int)param_1);
    param_1 = (undefined4 *)((int)unaff_r6 + (int)param_1);
    bVar23 = (int)param_1 < 0;
    bVar21 = param_1 == (undefined4 *)0x0;
  }
  if (bVar21) {
    bVar24 = false;
    param_1 = (undefined4 *)0x0;
    bVar23 = false;
  }
  bVar26 = false;
  if (bVar21) {
    bVar24 = CARRY4((uint)unaff_r6,(uint)param_1);
    cVar27 = SCARRY4((int)unaff_r6,(int)param_1);
    param_1 = (undefined4 *)((int)unaff_r6 + (int)param_1);
    bVar23 = (int)param_1 < 0;
    bVar26 = param_1 == (undefined4 *)0x0;
  }
  bVar21 = false;
  if (bVar26) {
    bVar24 = (bool)((byte)param_1 & 1);
    param_1 = (undefined4 *)((uint)param_1 >> 1 & 0x84bc78e);
    bVar21 = param_1 == (undefined4 *)0x0;
    bVar23 = false;
  }
  bVar26 = false;
  if (bVar21) {
    uVar17 = (uint)unaff_r6 & 0xff;
    bVar24 = uVar17 == 0 && bVar24 ||
             uVar17 != 0 && (bool)((byte)((uint)unaff_lr >> 0x20 - uVar17) & 1);
    param_1 = (undefined4 *)((uint)unaff_r4 & (int)unaff_lr << uVar17);
    bVar23 = (int)param_1 < 0;
    bVar26 = param_1 == (undefined4 *)0x0;
  }
  if (bVar23) {
    param_1 = (undefined4 *)((int)unaff_r5 + ((int)unaff_r4 << ((uint)param_1 & 0xff)));
  }
  bVar21 = false;
  if (bVar26) {
    uVar17 = (uint)param_1 & 0xff;
    bVar24 = uVar17 == 0 && bVar24 ||
             uVar17 != 0 && (bool)((byte)((uint)unaff_r6 >> uVar17 - 1) & 1);
    param_1 = (undefined4 *)((uint)unaff_r6 & (uint)unaff_r6 >> uVar17);
    bVar23 = (int)param_1 < 0;
    bVar21 = param_1 == (undefined4 *)0x0;
  }
  bVar26 = false;
  if (bVar23) {
    bVar24 = CARRY4((uint)unaff_r5,(uint)param_1);
    cVar27 = SCARRY4((int)unaff_r5,(int)param_1);
    param_1 = (undefined4 *)((int)unaff_r5 + (int)param_1);
    bVar26 = (int)param_1 < 0;
    bVar21 = param_1 == (undefined4 *)0x0;
  }
  bVar23 = false;
  if (bVar21) {
    uVar17 = (uint)param_1 & 0xff;
    bVar24 = uVar17 == 0 && bVar24 || uVar17 != 0 && (bool)((byte)((uint)param_3 >> uVar17 - 1) & 1)
    ;
    param_1 = (undefined4 *)((uint)param_1 & (uint)param_3 >> uVar17);
    bVar26 = (int)param_1 < 0;
    bVar23 = param_1 == (undefined4 *)0x0;
  }
  cVar22 = false;
  if (bVar26) {
    bVar24 = CARRY4((uint)unaff_r6,(uint)param_1);
    cVar27 = SCARRY4((int)unaff_r6,(int)param_1);
    param_1 = (undefined4 *)((int)unaff_r6 + (int)param_1);
    cVar22 = (int)param_1 < 0;
    bVar23 = param_1 == (undefined4 *)0x0;
  }
  bVar26 = false;
  if (bVar23) {
    bVar24 = (bool)(bVar4 >> 7);
    param_1 = (undefined4 *)((uint)unaff_r8 & uVar20);
    cVar22 = (int)param_1 < 0;
    bVar26 = param_1 == (undefined4 *)0x0;
  }
  bVar21 = false;
  if (bVar26) {
    param_1 = (undefined4 *)((uint)unaff_r4 ^ (uint)unaff_r5);
    cVar22 = (int)param_1 < 0;
    bVar21 = param_1 == (undefined4 *)0x0;
  }
  bVar26 = false;
  if (bVar21) {
    param_1 = (undefined4 *)((uint)unaff_r4 ^ (uint)param_3 ^ (uint)unaff_r8);
    cVar22 = (int)param_1 < 0;
    bVar26 = param_1 == (undefined4 *)0x0;
  }
  bVar21 = false;
  if (bVar26) {
    param_1 = (undefined4 *)
              ((uint)unaff_r4 ^ (uint)unaff_r5 ^ (int)unaff_r5 << ((uint)param_1 & 0xff));
    cVar22 = (int)param_1 < 0;
    bVar21 = param_1 == (undefined4 *)0x0;
  }
  bVar26 = false;
  if (bVar21) {
    param_1 = (undefined4 *)((uint)unaff_lr & (uint)unaff_r9);
    cVar22 = (int)param_1 < 0;
    bVar26 = param_1 == (undefined4 *)0x0;
  }
  bVar21 = false;
  if (bVar26) {
    param_1 = (undefined4 *)((uint)unaff_r4 ^ (uint)param_1);
    cVar22 = (int)param_1 < 0;
    bVar21 = param_1 == (undefined4 *)0x0;
  }
  bVar26 = false;
  if (bVar21) {
    uVar17 = (uint)param_1 & 0xff;
    bVar24 = uVar17 == 0 && bVar24 ||
             uVar17 != 0 && (bool)((byte)((uint)unaff_r4 >> 0x20 - uVar17) & 1);
    param_1 = (undefined4 *)((uint)register0x00000054 & (int)unaff_r4 << uVar17);
    cVar22 = (int)param_1 < 0;
    bVar26 = param_1 == (undefined4 *)0x0;
  }
  if (bVar26) {
    param_1 = (undefined4 *)((uint)register0x00000054 & (uint)in_r12);
  }
  if (bVar24 && !bVar26) {
    param_1 = (undefined4 *)((uint)unaff_r11 ^ (uint)param_1);
  }
  bVar21 = false;
  if (bVar26) {
    param_1 = (undefined4 *)
              ((uint)param_2 ^ (uint)param_2 & (int)unaff_r5 << ((uint)register0x00000054 & 0xd6));
    cVar22 = (int)param_1 < 0;
    bVar21 = param_1 == (undefined4 *)0x0;
  }
  if (bVar21) {
    bVar24 = true;
    cVar27 = false;
    cVar22 = (int)param_4 < 0;
    param_1 = param_4;
  }
  bVar26 = false;
  if (bVar21 && param_4 == (undefined4 *)0x0) {
    uVar19 = (uint)unaff_r11 & (uint)param_1;
    uVar17 = 0x84bc946 << (uVar19 & 0xff);
    bVar24 = uVar17 <= uVar19;
    cVar27 = SBORROW4(uVar19,uVar17);
    param_1 = (undefined4 *)(uVar19 - uVar17);
    cVar22 = (int)param_1 < 0;
    bVar26 = param_1 == (undefined4 *)0x0;
  }
  bVar21 = false;
  if (bVar26) {
    param_1 = (undefined4 *)((uint)unaff_lr >> ((uint)unaff_r11 & (uint)param_1 & 0xff));
    bVar24 = param_1 <= param_3;
    cVar27 = SBORROW4((int)param_3,(int)param_1);
    param_1 = (undefined4 *)((int)param_3 - (int)param_1);
    cVar22 = (int)param_1 < 0;
    bVar21 = param_1 == (undefined4 *)0x0;
  }
  bVar26 = false;
  if (bVar21) {
    bVar24 = puVar1 <= param_3;
    cVar27 = SBORROW4((int)param_3,(int)puVar1);
    param_1 = (undefined4 *)((int)param_3 - (int)puVar1);
    cVar22 = (int)param_1 < 0;
    bVar26 = param_1 == (undefined4 *)0x0;
  }
  bVar21 = false;
  if (bVar26) {
    param_1 = (undefined4 *)((uint)unaff_r4 ^ (uint)unaff_r5);
    cVar22 = (int)param_1 < 0;
    bVar21 = param_1 == (undefined4 *)0x0;
  }
  bVar26 = false;
  if (bVar21) {
    param_1 = (undefined4 *)((uint)unaff_r4 ^ (int)in_r12 - ((int)register0x00000054 >> 0x20));
    cVar22 = (int)param_1 < 0;
    bVar26 = param_1 == (undefined4 *)0x0;
  }
  bVar21 = false;
  if (bVar26) {
    param_1 = (undefined4 *)((uint)unaff_lr >> ((uint)param_1 & 0xff));
    bVar24 = param_1 <= param_3;
    cVar27 = SBORROW4((int)param_3,(int)param_1);
    param_1 = (undefined4 *)((int)param_3 - (int)param_1);
    cVar22 = (int)param_1 < 0;
    bVar21 = param_1 == (undefined4 *)0x0;
  }
  bVar26 = false;
  if (bVar21) {
    param_1 = (undefined4 *)
              ((uint)param_4 & (uint)param_2 & (int)unaff_r5 << ((uint)param_1 & 0xff));
    cVar22 = (int)param_1 < 0;
    bVar26 = param_1 == (undefined4 *)0x0;
  }
  bVar21 = false;
  if (bVar26) {
    uVar17 = (uint)unaff_r11 &
             ((uint)unaff_lr ^
             (uint)unaff_lr >>
             ((uint)unaff_r11 &
              ((uint)unaff_lr ^ (uint)unaff_r10 >> ((uint)unaff_r11 & (uint)unaff_r5 & 0xff)) & 0xff
             )) & 0xff;
    bVar24 = uVar17 == 0 && bVar24 || uVar17 != 0 && (bool)((byte)(0x84bca2e >> 0x20 - uVar17) & 1);
    param_1 = (undefined4 *)((uint)unaff_r7 ^ 0x84bca2e << uVar17);
    cVar22 = (int)param_1 < 0;
    bVar21 = param_1 == (undefined4 *)0x0;
  }
  if (bVar21) {
    bVar24 = false;
    param_1 = (undefined4 *)0x0;
    cVar22 = false;
  }
  bVar26 = false;
  if (bVar21) {
    param_1 = (undefined4 *)
              ((uint)unaff_r4 ^ (uint)param_2 & (int)unaff_r5 << ((uint)param_1 & 0xff));
    cVar22 = (int)param_1 < 0;
    bVar26 = param_1 == (undefined4 *)0x0;
  }
  if (bVar26) {
    bVar24 = (bool)(bVar3 >> 7);
    param_1 = (undefined4 *)0x0;
    cVar22 = false;
  }
  if (bVar24 && !bVar26) {
    param_1 = (undefined4 *)((uint)unaff_r11 ^ (uint)param_1);
  }
  bVar21 = false;
  if (bVar26) {
    param_1 = (undefined4 *)((uint)unaff_r5 & (uint)param_2 & (uint)unaff_r5);
    cVar22 = (int)param_1 < 0;
    bVar21 = param_1 == (undefined4 *)0x0;
  }
  bVar26 = false;
  if (bVar21) {
    param_1 = (undefined4 *)((uint)unaff_r8 & (uint)unaff_r5);
    cVar22 = (int)param_1 < 0;
    bVar26 = param_1 == (undefined4 *)0x0;
  }
  bVar21 = false;
  if (bVar26) {
    param_1 = (undefined4 *)((uint)unaff_r9 & (uint)unaff_r8);
    cVar22 = (int)param_1 < 0;
    bVar21 = param_1 == (undefined4 *)0x0;
  }
  bVar26 = false;
  if (bVar21) {
    param_1 = (undefined4 *)((uint)unaff_r8 & (uint)param_1);
    cVar22 = (int)param_1 < 0;
    bVar26 = param_1 == (undefined4 *)0x0;
  }
  bVar21 = false;
  if (bVar26) {
    param_1 = (undefined4 *)((uint)in_r12 & (uint)unaff_r5);
    cVar22 = (int)param_1 < 0;
    bVar21 = param_1 == (undefined4 *)0x0;
  }
  bVar26 = false;
  if (bVar21) {
    param_1 = (undefined4 *)((uint)unaff_r8 & (uint)param_1);
    cVar22 = (int)param_1 < 0;
    bVar26 = param_1 == (undefined4 *)0x0;
  }
  bVar21 = false;
  if (bVar26) {
    param_1 = (undefined4 *)((uint)register0x00000054 & (uint)unaff_r10);
    cVar22 = (int)param_1 < 0;
    bVar21 = param_1 == (undefined4 *)0x0;
  }
  bVar26 = false;
  if (bVar21) {
    param_1 = (undefined4 *)((uint)unaff_r8 & (uint)param_1);
    cVar22 = (int)param_1 < 0;
    bVar26 = param_1 == (undefined4 *)0x0;
  }
  bVar21 = false;
  if (bVar26) {
    param_1 = (undefined4 *)
              ((uint)unaff_lr &
              (uint)param_2 & (int)unaff_r5 << (((uint)param_1 ^ (uint)unaff_r6) & 0xff));
    cVar22 = (int)param_1 < 0;
    bVar21 = param_1 == (undefined4 *)0x0;
  }
  bVar26 = false;
  if (bVar21) {
    uVar17 = (uint)param_1 & 0xff;
    bVar24 = uVar17 == 0 && bVar24 ||
             uVar17 != 0 && (bool)((byte)((uint)param_2 >> 0x20 - uVar17) & 1);
    param_1 = (undefined4 *)((uint)unaff_r4 & (int)param_2 << uVar17);
    cVar22 = (int)param_1 < 0;
    bVar26 = param_1 == (undefined4 *)0x0;
  }
  bVar21 = false;
  if (bVar26) {
    uVar17 = (uint)unaff_r11 &
             ((uint)param_3 >> ((uint)unaff_r11 & (uint)in_r12 & 0xff) ^ 0x84bcc16) & 0xff;
    bVar24 = uVar17 == 0 && bVar24 ||
             uVar17 != 0 && (bool)((byte)((uint)unaff_lr >> 0x20 - uVar17) & 1);
    param_1 = (undefined4 *)((uint)unaff_r4 ^ (int)unaff_lr << uVar17);
    cVar22 = (int)param_1 < 0;
    bVar21 = param_1 == (undefined4 *)0x0;
  }
  bVar26 = false;
  if (bVar21) {
    uVar17 = (uint)unaff_r11 & (uint)unaff_r8 & 0xff;
    bVar24 = uVar17 == 0 && bVar24 || uVar17 != 0 && (bool)((byte)((uint)in_r12 >> uVar17 - 1) & 1);
    param_1 = (undefined4 *)((uint)unaff_r4 ^ (uint)in_r12 >> uVar17);
    cVar22 = (int)param_1 < 0;
    bVar26 = param_1 == (undefined4 *)0x0;
  }
  if (bVar26) {
    param_1 = (undefined4 *)
              ((uint)in_r12 &
              (int)unaff_r6 <<
              (((uint)register0x00000054 ^
               (uint)param_2 & (int)unaff_r5 << ((uint)param_2 & (uint)param_1 & 0xff)) & 0xff));
  }
  if (bVar24 && !bVar26) {
    param_1 = (undefined4 *)((uint)unaff_r5 & (uint)in_r12);
    cVar22 = (int)param_1 < 0;
    bVar26 = param_1 == (undefined4 *)0x0;
  }
  if (bVar26) {
    bVar24 = (bool)(bVar9 >> 7);
    param_1 = (undefined4 *)0x0;
    cVar22 = false;
  }
  bVar21 = false;
  if (bVar26) {
    bVar24 = param_1 <= param_4;
    cVar27 = SBORROW4((int)param_4,(int)param_1);
    param_1 = (undefined4 *)((int)param_4 - (int)param_1);
    cVar22 = (int)param_1 < 0;
    bVar21 = param_1 == (undefined4 *)0x0;
  }
  if (bVar21) {
    bVar24 = true;
    cVar27 = false;
    cVar22 = (int)param_4 < 0;
    param_1 = param_4;
  }
  bVar26 = false;
  if (bVar21 && param_4 == (undefined4 *)0x0) {
    param_1 = (undefined4 *)((uint)in_r12 & (uint)param_3 >> ((uint)param_1 & 0xff));
    bVar24 = param_1 <= param_4;
    cVar27 = SBORROW4((int)param_4,(int)param_1);
    param_1 = (undefined4 *)((int)param_4 - (int)param_1);
    cVar22 = (int)param_1 < 0;
    bVar26 = param_1 == (undefined4 *)0x0;
  }
  if (bVar26) {
    bVar24 = (bool)(bVar5 >> 7);
    param_1 = (undefined4 *)0x0;
    cVar22 = false;
  }
  bVar21 = false;
  if (bVar26) {
    bVar24 = param_1 <= param_4;
    cVar27 = SBORROW4((int)param_4,(int)param_1);
    param_1 = (undefined4 *)((int)param_4 - (int)param_1);
    cVar22 = (int)param_1 < 0;
    bVar21 = param_1 == (undefined4 *)0x0;
  }
  bVar26 = false;
  if (bVar21) {
    uVar17 = (uint)param_1 & 0xff;
    bVar24 = uVar17 == 0 && bVar24 || uVar17 != 0 && (bool)((byte)((uint)param_3 >> uVar17 - 1) & 1)
    ;
    param_1 = (undefined4 *)((uint)unaff_r6 & (uint)param_3 >> uVar17);
    cVar22 = (int)param_1 < 0;
    bVar26 = param_1 == (undefined4 *)0x0;
  }
  bVar21 = false;
  if (bVar26) {
    param_1 = (undefined4 *)((uint)param_4 ^ (uint)unaff_r5);
    cVar22 = (int)param_1 < 0;
    bVar21 = param_1 == (undefined4 *)0x0;
  }
  bVar26 = false;
  if (bVar21) {
    param_1 = (undefined4 *)((uint)param_4 ^ (uint)unaff_r8 ^ (int)unaff_r4 >> 0x20);
    cVar22 = (int)param_1 < 0;
    bVar26 = param_1 == (undefined4 *)0x0;
  }
  bVar21 = false;
  if (bVar26) {
    param_1 = (undefined4 *)((uint)param_4 ^ (uint)unaff_r11 ^ uVar20);
    cVar22 = (int)param_1 < 0;
    bVar21 = param_1 == (undefined4 *)0x0;
  }
  bVar26 = false;
  if (bVar21) {
    param_1 = (undefined4 *)
              ((uint)param_4 &
              (uint)param_2 & (int)unaff_r5 << ((uint)param_2 & ((uint)unaff_r11 ^ uVar2) & 0xff));
    cVar22 = (int)param_1 < 0;
    bVar26 = param_1 == (undefined4 *)0x0;
  }
  bVar21 = false;
  if (bVar26) {
    param_1 = (undefined4 *)((uint)unaff_r4 ^ (uint)unaff_r5);
    cVar22 = (int)param_1 < 0;
    bVar21 = param_1 == (undefined4 *)0x0;
  }
  bVar26 = false;
  if (bVar21) {
    param_1 = (undefined4 *)
              ((uint)unaff_r4 ^ (uint)unaff_r7 ^ (int)unaff_r4 << ((uint)param_1 & 0xff));
    cVar22 = (int)param_1 < 0;
    bVar26 = param_1 == (undefined4 *)0x0;
  }
  bVar21 = false;
  if (bVar26) {
    param_1 = (undefined4 *)
              ((uint)unaff_r4 ^ (uint)unaff_r8 ^ (int)unaff_r7 << ((uint)param_1 & 0xff));
    cVar22 = (int)param_1 < 0;
    bVar21 = param_1 == (undefined4 *)0x0;
  }
  bVar26 = false;
  if (bVar21) {
    param_1 = (undefined4 *)
              ((uint)param_4 &
              (uint)param_2 &
              (int)unaff_r5 << ((uint)param_2 & ((uint)unaff_r11 ^ 0x84bcd06) & 0xff));
    cVar22 = (int)param_1 < 0;
    bVar26 = param_1 == (undefined4 *)0x0;
  }
  bVar21 = false;
  if (bVar26) {
    param_1 = (undefined4 *)((uint)unaff_r6 ^ (uint)unaff_r5);
    cVar22 = (int)param_1 < 0;
    bVar21 = param_1 == (undefined4 *)0x0;
  }
  bVar26 = false;
  if (bVar21) {
    param_1 = (undefined4 *)((uint)unaff_r6 ^ (uint)register0x00000054 & (uint)unaff_lr);
    cVar22 = (int)param_1 < 0;
    bVar26 = param_1 == (undefined4 *)0x0;
  }
  bVar21 = false;
  if (bVar26) {
    param_1 = (undefined4 *)
              ((uint)unaff_r6 ^ (uint)unaff_lr & (int)param_2 << ((uint)param_1 & 0xff));
    cVar22 = (int)param_1 < 0;
    bVar21 = param_1 == (undefined4 *)0x0;
  }
  bVar26 = false;
  if (bVar21) {
    uVar20 = (uint)param_1 & 0xff;
    bVar24 = uVar20 == 0 && bVar24 ||
             uVar20 != 0 && (bool)((byte)((uint)unaff_r4 >> 0x20 - uVar20) & 1);
    param_1 = (undefined4 *)((uint)param_1 & (int)unaff_r4 << uVar20);
    cVar22 = (int)param_1 < 0;
    bVar26 = param_1 == (undefined4 *)0x0;
  }
  bVar21 = false;
  if (bVar26) {
    param_1 = (undefined4 *)((uint)unaff_r7 ^ (uint)unaff_r5);
    cVar22 = (int)param_1 < 0;
    bVar21 = param_1 == (undefined4 *)0x0;
  }
  bVar26 = false;
  if (bVar21) {
    param_1 = (undefined4 *)((uint)unaff_r7 ^ (uint)in_r12 & uVar2);
    cVar22 = (int)param_1 < 0;
    bVar26 = param_1 == (undefined4 *)0x0;
  }
  bVar21 = false;
  if (bVar26) {
    param_1 = (undefined4 *)((uint)unaff_r7 ^ (uint)in_r12 & uVar16);
    cVar22 = (int)param_1 < 0;
    bVar21 = param_1 == (undefined4 *)0x0;
  }
  bVar26 = false;
  if (bVar21) {
    param_1 = (undefined4 *)
              ((uint)unaff_lr &
              (uint)param_2 &
              (int)unaff_r5 << ((uint)param_2 & (int)unaff_r4 >> 0x20 & 0x84bcd76U & 0xff));
    cVar22 = (int)param_1 < 0;
    bVar26 = param_1 == (undefined4 *)0x0;
  }
  bVar21 = false;
  if (bVar26) {
    uVar20 = (uint)param_1 & 0xff;
    bVar24 = uVar20 == 0 && bVar24 ||
             uVar20 != 0 && (bool)((byte)((uint)param_2 >> 0x20 - uVar20) & 1);
    param_1 = (undefined4 *)((uint)unaff_r4 & (int)param_2 << uVar20);
    cVar22 = (int)param_1 < 0;
    bVar21 = param_1 == (undefined4 *)0x0;
  }
  bVar26 = false;
  if (bVar21) {
    param_1 = (undefined4 *)
              ((uint)unaff_r5 &
              (uint)param_2 &
              (int)unaff_r5 << ((uint)param_1 & (int)unaff_r4 << ((uint)param_1 & 0xff) & 0xff));
    cVar22 = (int)param_1 < 0;
    bVar26 = param_1 == (undefined4 *)0x0;
  }
  bVar21 = false;
  if (bVar26) {
    uVar20 = (int)unaff_r5 - (int)in_r12 & 0xff;
    bVar24 = uVar20 == 0 && bVar24 ||
             uVar20 != 0 && (bool)((byte)((uint)unaff_r5 >> 0x20 - uVar20) & 1);
    param_1 = (undefined4 *)((int)unaff_r5 - (int)in_r12 & (int)unaff_r5 << uVar20);
    cVar22 = (int)param_1 < 0;
    bVar21 = param_1 == (undefined4 *)0x0;
  }
  bVar26 = false;
  if (bVar21) {
    param_1 = (undefined4 *)
              ((uint)param_2 ^
              (uint)param_2 & (int)unaff_r10 << ((uint)unaff_r9 & (uint)unaff_r8 & 0xff));
    cVar22 = (int)param_1 < 0;
    bVar26 = param_1 == (undefined4 *)0x0;
  }
  bVar21 = false;
  if (bVar26) {
    uVar20 = (int)unaff_r9 - (int)unaff_r5 & 0xff;
    bVar24 = uVar20 == 0 && bVar24 ||
             uVar20 != 0 && (bool)((byte)((uint)unaff_r8 >> 0x20 - uVar20) & 1);
    param_1 = (undefined4 *)((uint)in_r12 & (int)unaff_r8 << uVar20);
    cVar22 = (int)param_1 < 0;
    bVar21 = param_1 == (undefined4 *)0x0;
  }
  bVar26 = false;
  if (bVar21) {
    uVar20 = (int)unaff_r9 - (int)param_1 & 0xff;
    bVar24 = uVar20 == 0 && bVar24 ||
             uVar20 != 0 && (bool)((byte)((uint)param_4 >> 0x20 - uVar20) & 1);
    param_1 = (undefined4 *)((uint)unaff_r11 & (int)param_4 << uVar20);
    cVar22 = (int)param_1 < 0;
    bVar26 = param_1 == (undefined4 *)0x0;
  }
  bVar21 = false;
  if (bVar26) {
    param_1 = (undefined4 *)
              ((uint)param_4 & (uint)param_2 & (int)unaff_r10 << ((uint)param_1 & 0xff));
    cVar22 = (int)param_1 < 0;
    bVar21 = param_1 == (undefined4 *)0x0;
  }
  bVar26 = false;
  if (bVar21) {
    param_1 = (undefined4 *)((uint)unaff_r4 & (uint)unaff_r7);
    cVar22 = (int)param_1 < 0;
    bVar26 = param_1 == (undefined4 *)0x0;
  }
  bVar21 = false;
  if (bVar26) {
    param_1 = (undefined4 *)
              ((uint)unaff_r8 & (uint)param_2 & (int)unaff_r10 << ((uint)param_1 & 0xff));
    cVar22 = (int)param_1 < 0;
    bVar21 = param_1 == (undefined4 *)0x0;
  }
  bVar26 = false;
  if (bVar21) {
    param_1 = (undefined4 *)((uint)unaff_r8 & (uint)param_2 & (uint)unaff_r10);
    cVar22 = (int)param_1 < 0;
    bVar26 = param_1 == (undefined4 *)0x0;
  }
  bVar21 = false;
  if (bVar26) {
    uVar20 = (int)unaff_r9 - (int)unaff_r5 & 0xff;
    bVar24 = uVar20 == 0 && bVar24 ||
             uVar20 != 0 && (bool)((byte)((uint)in_r12 >> 0x20 - uVar20) & 1);
    param_1 = (undefined4 *)((uint)unaff_r11 & (int)in_r12 << uVar20);
    cVar22 = (int)param_1 < 0;
    bVar21 = param_1 == (undefined4 *)0x0;
  }
  bVar26 = false;
  if (bVar21) {
    uVar20 = (int)unaff_r9 - (int)param_1 & 0xff;
    bVar24 = uVar20 == 0 && bVar24 ||
             uVar20 != 0 && (bool)((byte)((uint)unaff_r8 >> 0x20 - uVar20) & 1);
    param_1 = (undefined4 *)((uint)unaff_lr & (int)unaff_r8 << uVar20);
    cVar22 = (int)param_1 < 0;
    bVar26 = param_1 == (undefined4 *)0x0;
  }
  if (bVar26) {
    bVar24 = (bool)(bVar14 >> 7);
    param_1 = (undefined4 *)0x0;
    cVar22 = false;
  }
  bVar21 = false;
  if (bVar26) {
    param_1 = (undefined4 *)
              ((uint)unaff_r4 & (uint)param_2 & (int)unaff_r10 << ((uint)param_1 & 0xff));
    cVar22 = (int)param_1 < 0;
    bVar21 = param_1 == (undefined4 *)0x0;
  }
  bVar26 = false;
  if (bVar21) {
    uVar20 = (int)unaff_r9 - (int)unaff_r5 & 0xff;
    bVar24 = uVar20 == 0 && bVar24 ||
             uVar20 != 0 && (bool)((byte)((uint)unaff_r5 >> uVar20 - 1) & 1);
    param_1 = (undefined4 *)((uint)unaff_lr & (uint)unaff_r5 >> uVar20);
    cVar22 = (int)param_1 < 0;
    bVar26 = param_1 == (undefined4 *)0x0;
  }
  bVar21 = false;
  if (bVar26) {
    uVar20 = (int)unaff_r9 - (int)param_1 & 0xff;
    bVar24 = uVar20 == 0 && bVar24 || uVar20 != 0 && (bool)((byte)((uint)in_r12 >> uVar20 - 1) & 1);
    param_1 = (undefined4 *)((uint)register0x00000054 & (uint)in_r12 >> uVar20);
    cVar22 = (int)param_1 < 0;
    bVar21 = param_1 == (undefined4 *)0x0;
  }
  bVar26 = false;
  if (bVar21) {
    bVar24 = SUB41((uint)((int)unaff_r9 - (int)param_1) >> 0x1f,0);
    param_1 = (undefined4 *)((int)unaff_r9 - (int)param_1 >> 0x20 & 0x84bd04e);
    bVar26 = param_1 == (undefined4 *)0x0;
    cVar22 = false;
  }
  bVar21 = false;
  if (bVar26) {
    uVar16 = (int)unaff_r9 - (int)unaff_r5;
    uVar20 = uVar16 & 0xff;
    bVar24 = uVar20 == 0 && bVar24 || uVar20 != 0 && (bool)((byte)((int)uVar16 >> uVar20 - 1) & 1);
    param_1 = (undefined4 *)((uint)register0x00000054 & (int)uVar16 >> uVar20);
    cVar22 = (int)param_1 < 0;
    bVar21 = param_1 == (undefined4 *)0x0;
  }
  bVar26 = false;
  if (bVar21) {
    uVar20 = (int)unaff_r9 - (int)param_1 & 0xff;
    bVar24 = uVar20 == 0 && bVar24 || uVar20 != 0 && (bool)((byte)((int)param_2 >> uVar20 - 1) & 1);
    param_1 = (undefined4 *)((uint)unaff_r9 & (int)param_2 >> uVar20);
    cVar22 = (int)param_1 < 0;
    bVar26 = param_1 == (undefined4 *)0x0;
  }
  bVar21 = false;
  if (bVar26) {
    param_1 = (undefined4 *)((uint)param_2 & (int)unaff_r10 << ((uint)param_1 & 0xff));
    bVar24 = param_1 <= param_2;
    cVar27 = SBORROW4((int)param_2,(int)param_1);
    param_1 = (undefined4 *)((int)param_2 - (int)param_1);
    cVar22 = (int)param_1 < 0;
    bVar21 = param_1 == (undefined4 *)0x0;
  }
  bVar26 = false;
  if (bVar21) {
    param_1 = (undefined4 *)
              ((uint)unaff_r6 ^
              (uint)param_2 &
              (int)unaff_r10 <<
              ((uint)unaff_r9 & (int)param_3 >> ((int)unaff_r5 - (int)in_r12 & 0xffU) & 0xff));
    cVar22 = (int)param_1 < 0;
    bVar26 = param_1 == (undefined4 *)0x0;
  }
  bVar21 = false;
  if (bVar26) {
    uVar20 = ((uint)param_4 ^ (uint)param_4 >> (((uint)param_4 ^ (uint)unaff_r5) & 0xff) ^ 0x84bd0e6
             ) & 0xff;
    bVar24 = uVar20 == 0 && bVar24 ||
             uVar20 != 0 && (bool)((byte)((uint)unaff_r6 >> uVar20 - 1) & 1);
    param_1 = (undefined4 *)((uint)param_2 ^ (uint)unaff_r6 >> uVar20);
    cVar22 = (int)param_1 < 0;
    bVar21 = param_1 == (undefined4 *)0x0;
  }
  bVar26 = false;
  if (bVar21) {
    uVar20 = ((uint)param_4 ^ (uint)param_1) & 0xff;
    bVar24 = uVar20 == 0 && bVar24 ||
             uVar20 != 0 && (bool)((byte)((uint)unaff_r11 >> uVar20 - 1) & 1);
    param_1 = (undefined4 *)((uint)param_2 ^ (uint)unaff_r11 >> uVar20);
    cVar22 = (int)param_1 < 0;
    bVar26 = param_1 == (undefined4 *)0x0;
  }
  if (bVar26) {
    param_1 = (undefined4 *)((uint)unaff_r5 & (uint)unaff_r11);
  }
  if (bVar24 && !bVar26) {
    param_1 = (undefined4 *)((int)unaff_r10 - (int)unaff_r5);
  }
  bVar21 = false;
  if (bVar26) {
    param_1 = (undefined4 *)((uint)unaff_r7 & (uint)register0x00000054);
    cVar22 = (int)param_1 < 0;
    bVar21 = param_1 == (undefined4 *)0x0;
  }
  bVar26 = false;
  if (bVar21) {
    param_1 = (undefined4 *)((uint)unaff_lr & (uint)unaff_r5);
    cVar22 = (int)param_1 < 0;
    bVar26 = param_1 == (undefined4 *)0x0;
  }
  bVar21 = false;
  if (bVar26) {
    param_1 = (undefined4 *)((uint)unaff_r6 & (uint)unaff_r8);
    cVar22 = (int)param_1 < 0;
    bVar21 = param_1 == (undefined4 *)0x0;
  }
  bVar26 = false;
  if (bVar21) {
    param_1 = (undefined4 *)((uint)unaff_lr & (uint)param_1);
    cVar22 = (int)param_1 < 0;
    bVar26 = param_1 == (undefined4 *)0x0;
  }
  bVar21 = false;
  if (bVar26) {
    param_1 = (undefined4 *)((uint)param_3 & (uint)unaff_r8);
    cVar22 = (int)param_1 < 0;
    bVar21 = param_1 == (undefined4 *)0x0;
  }
  bVar26 = false;
  if (bVar21) {
    param_1 = (undefined4 *)
              ((uint)param_3 & (uint)param_2 & (int)unaff_r10 << ((uint)param_1 & 0xff));
    cVar22 = (int)param_1 < 0;
    bVar26 = param_1 == (undefined4 *)0x0;
  }
  bVar21 = false;
  if (bVar26) {
    uVar20 = (int)unaff_r9 -
             ((uint)param_3 ^ (int)param_3 << ((int)unaff_r9 - (int)unaff_r5 & 0xffU)) & 0xff;
    bVar24 = uVar20 == 0 && bVar24 ||
             uVar20 != 0 && (bool)((byte)((uint)in_r12 >> 0x20 - uVar20) & 1);
    param_1 = (undefined4 *)((uint)unaff_r8 & (int)in_r12 << uVar20);
    cVar22 = (int)param_1 < 0;
    bVar21 = param_1 == (undefined4 *)0x0;
  }
  bVar26 = false;
  if (bVar21) {
    uVar20 = (int)unaff_r9 - (int)param_1 & 0xff;
    bVar24 = uVar20 == 0 && bVar24 ||
             uVar20 != 0 && (bool)((byte)((uint)register0x00000054 >> 0x20 - uVar20) & 1);
    param_1 = (undefined4 *)((uint)unaff_r6 & (int)register0x00000054 << uVar20);
    cVar22 = (int)param_1 < 0;
    bVar26 = param_1 == (undefined4 *)0x0;
  }
  bVar21 = false;
  if (bVar26) {
    param_1 = (undefined4 *)
              ((uint)param_2 & (uint)param_2 & (int)unaff_r10 << ((uint)param_1 & 0xff));
    cVar22 = (int)param_1 < 0;
    bVar21 = param_1 == (undefined4 *)0x0;
  }
  bVar26 = false;
  if (bVar21) {
    param_1 = (undefined4 *)((uint)unaff_lr & (uint)unaff_r5);
    cVar22 = (int)param_1 < 0;
    bVar26 = param_1 == (undefined4 *)0x0;
  }
  bVar21 = false;
  if (bVar26) {
    uVar20 = (uint)param_1 & 0xff;
    bVar24 = uVar20 == 0 && bVar24 ||
             uVar20 != 0 && (bool)((byte)((uint)param_2 >> 0x20 - uVar20) & 1);
    param_1 = (undefined4 *)((uint)unaff_r7 ^ (int)param_2 << uVar20);
    cVar22 = (int)param_1 < 0;
    bVar21 = param_1 == (undefined4 *)0x0;
  }
  bVar26 = false;
  if (bVar21) {
    param_1 = (undefined4 *)((uint)unaff_lr & (uint)param_1);
    cVar22 = (int)param_1 < 0;
    bVar26 = param_1 == (undefined4 *)0x0;
  }
  bVar21 = false;
  if (bVar26) {
    uVar20 = (uint)param_1 & 0xff;
    bVar24 = uVar20 == 0 && bVar24 ||
             uVar20 != 0 && (bool)((byte)((uint)param_2 >> 0x20 - uVar20) & 1);
    param_1 = (undefined4 *)((uint)unaff_r8 & (int)param_2 << uVar20);
    cVar22 = (int)param_1 < 0;
    bVar21 = param_1 == (undefined4 *)0x0;
  }
  bVar26 = false;
  if (bVar21) {
    param_1 = (undefined4 *)
              ((uint)param_3 & (uint)param_2 & (int)unaff_r10 << ((uint)param_1 & 0xff));
    cVar22 = (int)param_1 < 0;
    bVar26 = param_1 == (undefined4 *)0x0;
  }
  bVar21 = false;
  if (bVar26) {
    param_1 = (undefined4 *)((uint)unaff_lr & (uint)unaff_r5);
    cVar22 = (int)param_1 < 0;
    bVar21 = param_1 == (undefined4 *)0x0;
  }
  bVar26 = false;
  if (bVar21) {
    param_1 = (undefined4 *)
              ((uint)unaff_lr & ((uint)unaff_r11 ^ (int)unaff_lr << ((uint)param_1 & 0xff)));
    cVar22 = (int)param_1 < 0;
    bVar26 = param_1 == (undefined4 *)0x0;
  }
  bVar21 = false;
  if (bVar26) {
    param_1 = (undefined4 *)((uint)unaff_lr & (uint)unaff_r11);
    cVar22 = (int)param_1 < 0;
    bVar21 = param_1 == (undefined4 *)0x0;
  }
  bVar26 = false;
  if (bVar21) {
    uVar20 = ((uint)param_4 ^ (uint)unaff_r5) & 0xff;
    bVar24 = uVar20 == 0 && bVar24 ||
             uVar20 != 0 && (bool)((byte)((uint)unaff_r7 >> 0x20 - uVar20) & 1);
    param_1 = (undefined4 *)((uint)unaff_r8 & (int)unaff_r7 << uVar20);
    cVar22 = (int)param_1 < 0;
    bVar26 = param_1 == (undefined4 *)0x0;
  }
  if (bVar26) {
    bVar24 = (bool)(bVar8 >> 7);
    param_1 = (undefined4 *)0x0;
    cVar22 = false;
  }
  bVar21 = false;
  if (bVar26) {
    param_1 = (undefined4 *)
              ((uint)unaff_r7 ^ (uint)param_2 & (int)unaff_r10 << ((uint)param_1 & 0xff));
    cVar22 = (int)param_1 < 0;
    bVar21 = param_1 == (undefined4 *)0x0;
  }
  bVar26 = false;
  if (bVar21) {
    uVar20 = (int)unaff_r5 - (int)in_r12 & 0xff;
    bVar24 = uVar20 == 0 && bVar24 ||
             uVar20 != 0 && (bool)((byte)((uint)unaff_r8 >> uVar20 - 1) & 1);
    param_1 = (undefined4 *)((uint)unaff_r6 & (uint)unaff_r8 >> uVar20);
    cVar22 = (int)param_1 < 0;
    bVar26 = param_1 == (undefined4 *)0x0;
  }
  bVar21 = false;
  if (bVar26) {
    uVar20 = (int)param_1 - (int)in_r12 & 0xff;
    bVar24 = uVar20 == 0 && bVar24 || uVar20 != 0 && (bool)((byte)((uint)in_r12 >> uVar20 - 1) & 1);
    param_1 = (undefined4 *)((uint)unaff_r7 & (uint)in_r12 >> uVar20);
    cVar22 = (int)param_1 < 0;
    bVar21 = param_1 == (undefined4 *)0x0;
  }
  bVar26 = false;
  if (bVar21) {
    param_1 = (undefined4 *)
              ((uint)unaff_r7 ^
              (uint)param_2 & (int)unaff_r10 << (((uint)register0x00000054 ^ uVar15) & 0xff));
    cVar22 = (int)param_1 < 0;
    bVar26 = param_1 == (undefined4 *)0x0;
  }
  if (bVar26) {
    param_1 = (undefined4 *)((uint)unaff_r5 & (uint)unaff_r6 >> ((uint)param_1 & 0xff));
  }
  if (bVar24 && !bVar26) {
    param_1 = (undefined4 *)((int)unaff_r11 - (int)unaff_r5);
  }
  if (bVar26) {
    bVar24 = (bool)(bVar10 >> 7);
    param_1 = (undefined4 *)0x0;
    cVar22 = false;
  }
  if ((bool)cVar22) {
    param_1 = (undefined4 *)(((int)unaff_r4 << ((uint)param_1 & 0xff)) - (int)register0x00000054);
  }
  bVar21 = false;
  if (bVar26) {
    param_1 = (undefined4 *)((uint)unaff_r8 & 0x84bd466);
    bVar21 = param_1 == (undefined4 *)0x0;
    cVar22 = false;
  }
  if ((bool)cVar22) {
    param_1 = (undefined4 *)((int)unaff_r11 - (int)param_1);
  }
  bVar26 = false;
  if (bVar21) {
    uVar20 = (uint)param_1 & 0xff;
    bVar24 = uVar20 == 0 && bVar24 ||
             uVar20 != 0 && (bool)((byte)((uint)unaff_r8 >> 0x20 - uVar20) & 1);
    param_1 = (undefined4 *)((uint)unaff_lr & (int)unaff_r8 << uVar20);
    cVar22 = (int)param_1 < 0;
    bVar26 = param_1 == (undefined4 *)0x0;
  }
  if ((bool)cVar22) {
    param_1 = (undefined4 *)((int)unaff_r11 - (int)param_1);
  }
  bVar21 = false;
  if (bVar26) {
    param_1 = (undefined4 *)((uint)unaff_lr & (uint)unaff_r6);
    cVar22 = (int)param_1 < 0;
    bVar21 = param_1 == (undefined4 *)0x0;
  }
  if ((bool)cVar22) {
    param_1 = (undefined4 *)((int)unaff_r11 - (int)param_1);
  }
  if (bVar21) {
    param_1 = (undefined4 *)((uint)register0x00000054 & (uint)unaff_r7);
  }
  if ((bool)cVar22) {
    param_1 = (undefined4 *)((int)unaff_r11 - (int)param_1);
  }
  bVar26 = false;
  if (bVar21) {
    param_1 = (undefined4 *)((uint)in_r12 ^ (uint)unaff_r5);
    cVar22 = (int)param_1 < 0;
    bVar26 = param_1 == (undefined4 *)0x0;
  }
  bVar21 = false;
  if (bVar26) {
    uVar20 = (uint)param_1 & 0xff;
    bVar24 = uVar20 == 0 && bVar24 || uVar20 != 0 && (bool)((byte)((int)param_2 >> uVar20 - 1) & 1);
    param_1 = (undefined4 *)((uint)param_1 & (int)param_2 >> uVar20);
    cVar22 = (int)param_1 < 0;
    bVar21 = param_1 == (undefined4 *)0x0;
  }
  bVar26 = false;
  if (bVar21) {
    param_1 = (undefined4 *)((uint)in_r12 ^ (uint)param_1);
    cVar22 = (int)param_1 < 0;
    bVar26 = param_1 == (undefined4 *)0x0;
  }
  bVar21 = false;
  if (bVar26) {
    uVar20 = (uint)param_1 & 0xff;
    bVar24 = uVar20 == 0 && bVar24 || uVar20 != 0 && (bool)((byte)((int)param_2 >> uVar20 - 1) & 1);
    param_1 = (undefined4 *)((uint)unaff_r7 & (int)param_2 >> uVar20);
    cVar22 = (int)param_1 < 0;
    bVar21 = param_1 == (undefined4 *)0x0;
  }
  bVar26 = false;
  if (bVar21) {
    param_1 = (undefined4 *)((uint)in_r12 ^ (uint)param_1);
    cVar22 = (int)param_1 < 0;
    bVar26 = param_1 == (undefined4 *)0x0;
  }
  bVar21 = false;
  if (bVar26) {
    uVar20 = (uint)param_1 & 0xff;
    bVar24 = uVar20 == 0 && bVar24 || uVar20 != 0 && (bool)((byte)((int)param_3 >> uVar20 - 1) & 1);
    param_1 = (undefined4 *)((uint)param_4 & (int)param_3 >> uVar20);
    cVar22 = (int)param_1 < 0;
    bVar21 = param_1 == (undefined4 *)0x0;
  }
  bVar26 = false;
  if (bVar21) {
    bVar24 = unaff_r5 <= unaff_r6;
    cVar27 = SBORROW4((int)unaff_r6,(int)unaff_r5);
    param_1 = (undefined4 *)((int)unaff_r6 - (int)unaff_r5);
    cVar22 = (int)param_1 < 0;
    bVar26 = param_1 == (undefined4 *)0x0;
  }
  bVar21 = false;
  if (bVar26) {
    param_1 = (undefined4 *)((uint)unaff_r7 ^ (int)param_1 >> 0x20);
    bVar24 = param_1 <= unaff_r6;
    cVar27 = SBORROW4((int)unaff_r6,(int)param_1);
    param_1 = (undefined4 *)((int)unaff_r6 - (int)param_1);
    cVar22 = (int)param_1 < 0;
    bVar21 = param_1 == (undefined4 *)0x0;
  }
  bVar26 = false;
  if (bVar21) {
    param_1 = (undefined4 *)((uint)unaff_r7 ^ (uint)unaff_r9 >> ((uint)param_1 & 0xff));
    bVar24 = param_1 <= unaff_r6;
    cVar27 = SBORROW4((int)unaff_r6,(int)param_1);
    param_1 = (undefined4 *)((int)unaff_r6 - (int)param_1);
    cVar22 = (int)param_1 < 0;
    bVar26 = param_1 == (undefined4 *)0x0;
  }
  if (bVar26) {
    cVar22 = (int)in_r12 < 0;
    param_1 = in_r12;
  }
  bVar21 = false;
  if (bVar26 && in_r12 == (undefined4 *)0x0) {
    bVar24 = CARRY4((uint)unaff_r7,(uint)in_r12);
    cVar27 = SCARRY4((int)unaff_r7,(int)in_r12);
    param_1 = (undefined4 *)((int)unaff_r7 + (int)in_r12);
    cVar22 = (int)param_1 < 0;
    bVar21 = param_1 == (undefined4 *)0x0;
  }
  bVar26 = false;
  if (bVar21) {
    uVar20 = (uint)in_r12 ^ (uint)unaff_lr >> ((uint)param_1 & 0xff);
    bVar24 = CARRY4((uint)unaff_r7,uVar20);
    cVar27 = SCARRY4((int)unaff_r7,uVar20);
    param_1 = (undefined4 *)((int)unaff_r7 + uVar20);
    cVar22 = (int)param_1 < 0;
    bVar26 = param_1 == (undefined4 *)0x0;
  }
  bVar21 = false;
  if (bVar26) {
    uVar20 = (uint)register0x00000054 ^ (uint)param_4 >> ((uint)param_1 & 0xff);
    bVar24 = CARRY4((uint)unaff_r7,uVar20);
    cVar27 = SCARRY4((int)unaff_r7,uVar20);
    param_1 = (undefined4 *)((int)unaff_r7 + uVar20);
    cVar22 = (int)param_1 < 0;
    bVar21 = param_1 == (undefined4 *)0x0;
  }
  if (bVar21) {
    bVar24 = false;
    cVar22 = (int)param_2 < 0;
    param_1 = param_2;
  }
  bVar26 = false;
  if (bVar21 && param_2 == (undefined4 *)0x0) {
    bVar24 = CARRY4((uint)unaff_r7,(uint)param_1);
    cVar27 = SCARRY4((int)unaff_r7,(int)param_1);
    param_1 = (undefined4 *)((int)unaff_r7 + (int)param_1);
    cVar22 = (int)param_1 < 0;
    bVar26 = param_1 == (undefined4 *)0x0;
  }
  bVar21 = false;
  if (bVar26) {
    param_1 = (undefined4 *)((uint)unaff_r5 & (int)param_4 << ((uint)unaff_r10 & 0xff));
    bVar24 = param_1 <= unaff_r5;
    cVar27 = SBORROW4((int)unaff_r5,(int)param_1);
    param_1 = (undefined4 *)((int)unaff_r5 - (int)param_1);
    cVar22 = (int)param_1 < 0;
    bVar21 = param_1 == (undefined4 *)0x0;
  }
  bVar26 = false;
  if (bVar21) {
    uVar20 = (uint)param_1 & 0xff;
    bVar24 = uVar20 == 0 && bVar24 || uVar20 != 0 && (bool)((byte)((uint)param_2 >> uVar20 - 1) & 1)
    ;
    param_1 = (undefined4 *)((uint)param_4 & (uint)param_2 >> uVar20);
    cVar22 = (int)param_1 < 0;
    bVar26 = param_1 == (undefined4 *)0x0;
  }
  if (bVar26) {
    cVar27 = SBORROW4((int)param_1,(int)param_1);
    bVar24 = (bool)(bVar6 >> 7);
    param_1 = (undefined4 *)0x0;
    cVar22 = false;
  }
  bVar21 = false;
  if (bVar26) {
    bVar24 = CARRY4((uint)unaff_r7,(uint)param_1);
    cVar27 = SCARRY4((int)unaff_r7,(int)param_1);
    param_1 = (undefined4 *)((int)unaff_r7 + (int)param_1);
    cVar22 = (int)param_1 < 0;
    bVar21 = param_1 == (undefined4 *)0x0;
  }
  bVar26 = false;
  if (bVar21) {
    uVar20 = (uint)param_1 & 0xff;
    bVar24 = uVar20 == 0 && bVar24 ||
             uVar20 != 0 && (bool)((byte)((uint)unaff_r8 >> uVar20 - 1) & 1);
    param_1 = (undefined4 *)((uint)param_4 & (uint)unaff_r8 >> uVar20);
    cVar22 = (int)param_1 < 0;
    bVar26 = param_1 == (undefined4 *)0x0;
  }
  bVar21 = false;
  if (bVar26) {
    bVar24 = CARRY4((uint)unaff_r7,(uint)param_1);
    cVar27 = SCARRY4((int)unaff_r7,(int)param_1);
    param_1 = (undefined4 *)((int)unaff_r7 + (int)param_1);
    cVar22 = (int)param_1 < 0;
    bVar21 = param_1 == (undefined4 *)0x0;
  }
  bVar26 = false;
  if (bVar21) {
    uVar20 = (uint)param_1 & 0xff;
    bVar24 = uVar20 == 0 && bVar24 || uVar20 != 0 && (bool)((byte)((uint)in_r12 >> uVar20 - 1) & 1);
    param_1 = (undefined4 *)((uint)unaff_r8 & (uint)in_r12 >> uVar20);
    cVar22 = (int)param_1 < 0;
    bVar26 = param_1 == (undefined4 *)0x0;
  }
  if (bVar26) {
    cVar22 = false;
    param_1 = (undefined4 *)((uint)in_r12 & (uint)unaff_r11);
  }
  if (bVar24 && !bVar26) {
    bVar24 = (undefined4 *)0x84bd5b1 < in_r12;
    cVar27 = SBORROW4((int)in_r12,0x84bd5b2);
    param_1 = (undefined4 *)((int)in_r12 + -0x84bd5b2);
    cVar22 = (int)param_1 < 0;
    bVar26 = param_1 == (undefined4 *)0x0;
  }
  bVar21 = false;
  if (bVar26) {
    uVar20 = (uint)param_1 & 0xff;
    bVar24 = uVar20 == 0 && bVar24 ||
             uVar20 != 0 && (bool)((byte)((uint)param_4 >> 0x20 - uVar20) & 1);
    param_1 = (undefined4 *)((uint)unaff_r11 & (int)param_4 << uVar20);
    cVar22 = (int)param_1 < 0;
    bVar21 = param_1 == (undefined4 *)0x0;
  }
  bVar26 = false;
  if (bVar21) {
    param_1 = (undefined4 *)((uint)in_r12 ^ (uint)param_1);
    cVar22 = (int)param_1 < 0;
    bVar26 = param_1 == (undefined4 *)0x0;
  }
  bVar21 = false;
  if (bVar26) {
    uVar20 = (uint)param_1 & 0xff;
    bVar24 = uVar20 == 0 && bVar24 ||
             uVar20 != 0 && (bool)((byte)((uint)unaff_r5 >> 0x20 - uVar20) & 1);
    param_1 = (undefined4 *)((uint)unaff_lr & (int)unaff_r5 << uVar20);
    cVar22 = (int)param_1 < 0;
    bVar21 = param_1 == (undefined4 *)0x0;
  }
  bVar26 = false;
  if (bVar21) {
    param_1 = (undefined4 *)((uint)in_r12 ^ (uint)param_1);
    cVar22 = (int)param_1 < 0;
    bVar26 = param_1 == (undefined4 *)0x0;
  }
  bVar21 = false;
  if (bVar26) {
    param_1 = (undefined4 *)((uint)unaff_r9 & (uint)in_r12);
    cVar22 = (int)param_1 < 0;
    bVar21 = param_1 == (undefined4 *)0x0;
  }
  bVar26 = false;
  if (bVar21) {
    param_1 = (undefined4 *)((uint)in_r12 ^ (uint)param_1);
    cVar22 = (int)param_1 < 0;
    bVar26 = param_1 == (undefined4 *)0x0;
  }
  bVar21 = false;
  if (bVar26) {
    param_1 = (undefined4 *)((uint)unaff_r10 & (uint)unaff_r8);
    cVar22 = (int)param_1 < 0;
    bVar21 = param_1 == (undefined4 *)0x0;
  }
  bVar26 = false;
  if (bVar21) {
    param_1 = (undefined4 *)((uint)in_r12 & (uint)register0x00000054);
    bVar24 = param_1 <= in_r12;
    cVar27 = SBORROW4((int)in_r12,(int)param_1);
    param_1 = (undefined4 *)((int)in_r12 - (int)param_1);
    cVar22 = (int)param_1 < 0;
    bVar26 = param_1 == (undefined4 *)0x0;
  }
  if (bVar26) {
    cVar27 = SBORROW4((uint)unaff_r11 & (uint)puVar1,(uint)unaff_r11 & (uint)puVar1);
    param_1 = (undefined4 *)0x0;
    bVar24 = true;
    cVar22 = false;
  }
  bVar21 = false;
  if (bVar26) {
    param_1 = (undefined4 *)((uint)in_r12 & (uint)register0x00000054);
    bVar24 = param_1 <= in_r12;
    cVar27 = SBORROW4((int)in_r12,(int)param_1);
    param_1 = (undefined4 *)((int)in_r12 - (int)param_1);
    cVar22 = (int)param_1 < 0;
    bVar21 = param_1 == (undefined4 *)0x0;
  }
  if (bVar21) {
    uVar20 = (uint)unaff_lr & 0x84bd65eU >> ((uint)param_1 & 0xff);
    cVar27 = SBORROW4(uVar20,uVar20);
    param_1 = (undefined4 *)0x0;
    bVar24 = true;
    cVar22 = false;
  }
  bVar26 = false;
  if (bVar21) {
    param_1 = (undefined4 *)((uint)in_r12 & (uint)register0x00000054);
    bVar24 = param_1 <= in_r12;
    cVar27 = SBORROW4((int)in_r12,(int)param_1);
    param_1 = (undefined4 *)((int)in_r12 - (int)param_1);
    cVar22 = (int)param_1 < 0;
    bVar26 = param_1 == (undefined4 *)0x0;
  }
  if (bVar26) {
    uVar20 = (uint)unaff_r11 & (int)register0x00000054 >> ((uint)param_1 & 0xff);
    cVar27 = SBORROW4(uVar20,uVar20);
    param_1 = (undefined4 *)0x0;
    bVar24 = true;
    cVar22 = false;
  }
  bVar21 = false;
  if (bVar26) {
    param_1 = (undefined4 *)((uint)in_r12 & (uint)register0x00000054);
    bVar24 = param_1 <= in_r12;
    cVar27 = SBORROW4((int)in_r12,(int)param_1);
    param_1 = (undefined4 *)((int)in_r12 - (int)param_1);
    cVar22 = (int)param_1 < 0;
    bVar21 = param_1 == (undefined4 *)0x0;
  }
  if (bVar21) {
    bVar24 = true;
    cVar27 = false;
    cVar22 = (int)unaff_r5 < 0;
    param_1 = unaff_r5;
  }
  bVar26 = false;
  if (bVar21 && unaff_r5 == (undefined4 *)0x0) {
    param_1 = (undefined4 *)((uint)unaff_r5 & (int)unaff_r9 << ((uint)param_1 & 0xff));
    bVar24 = param_1 <= unaff_r5;
    cVar27 = SBORROW4((int)unaff_r5,(int)param_1);
    param_1 = (undefined4 *)((int)unaff_r5 - (int)param_1);
    cVar22 = (int)param_1 < 0;
    bVar26 = param_1 == (undefined4 *)0x0;
  }
  bVar21 = false;
  if (bVar26) {
    uVar20 = (uint)param_1 & 0xff;
    bVar24 = uVar20 == 0 && bVar24 || uVar20 != 0 && (bool)((byte)((int)unaff_r6 >> uVar20 - 1) & 1)
    ;
    param_1 = (undefined4 *)((int)unaff_r6 >> uVar20 & 0x84bd706);
    bVar21 = param_1 == (undefined4 *)0x0;
    cVar22 = false;
  }
  bVar26 = false;
  if (bVar21) {
    bVar24 = CARRY4((uint)unaff_r7,(uint)param_1);
    cVar27 = SCARRY4((int)unaff_r7,(int)param_1);
    param_1 = (undefined4 *)((int)unaff_r7 + (int)param_1);
    cVar22 = (int)param_1 < 0;
    bVar26 = param_1 == (undefined4 *)0x0;
  }
  bVar21 = false;
  if (bVar26) {
    uVar20 = (uint)unaff_lr & (int)unaff_r5 >> ((uint)param_1 & 0xff);
    bVar24 = CARRY4((uint)unaff_r7,uVar20);
    cVar27 = SCARRY4((int)unaff_r7,uVar20);
    param_1 = (undefined4 *)((int)unaff_r7 + uVar20);
    cVar22 = (int)param_1 < 0;
    bVar21 = param_1 == (undefined4 *)0x0;
  }
  bVar26 = false;
  if (bVar21) {
    uVar20 = (uint)in_r12 & (int)unaff_r5 >> ((uint)param_1 & 0xff);
    bVar24 = CARRY4((uint)unaff_r7,uVar20);
    cVar27 = SCARRY4((int)unaff_r7,uVar20);
    param_1 = (undefined4 *)((int)unaff_r7 + uVar20);
    cVar22 = (int)param_1 < 0;
    bVar26 = param_1 == (undefined4 *)0x0;
  }
  bVar21 = false;
  if (bVar26) {
    param_1 = (undefined4 *)((uint)param_2 ^ (uint)unaff_r5);
    cVar22 = (int)param_1 < 0;
    bVar21 = param_1 == (undefined4 *)0x0;
  }
  bVar26 = false;
  bVar23 = bVar24;
  if (bVar21) {
    bVar23 = (bool)((byte)unaff_r6 & 1);
    param_1 = (undefined4 *)((uint)unaff_r10 & ((uint)bVar24 << 0x1f | (uint)unaff_r6 >> 1));
    cVar22 = (int)param_1 < 0;
    bVar26 = param_1 == (undefined4 *)0x0;
  }
  bVar21 = false;
  if (bVar26) {
    param_1 = (undefined4 *)((uint)param_2 ^ (uint)param_1);
    cVar22 = (int)param_1 < 0;
    bVar21 = param_1 == (undefined4 *)0x0;
  }
  bVar26 = false;
  bVar24 = bVar23;
  if (bVar21) {
    bVar24 = (bool)(bVar12 & 1);
    param_1 = (undefined4 *)((uint)unaff_lr & ((uint)bVar23 << 0x1f | (uint)param_3 >> 1));
    cVar22 = (int)param_1 < 0;
    bVar26 = param_1 == (undefined4 *)0x0;
  }
  bVar21 = false;
  if (bVar26) {
    bVar24 = param_4 == (undefined4 *)0x0;
    cVar27 = SBORROW4(0,(int)param_4);
    param_1 = (undefined4 *)-(int)param_4;
    cVar22 = (int)param_1 < 0;
    bVar21 = param_1 == (undefined4 *)0x0;
  }
  bVar26 = false;
  if (bVar21) {
    bVar24 = CARRY4((uint)unaff_r7,(uint)unaff_r5);
    cVar27 = SCARRY4((int)unaff_r7,(int)unaff_r5);
    param_1 = (undefined4 *)((int)unaff_r7 + (int)unaff_r5);
    cVar22 = (int)param_1 < 0;
    bVar26 = param_1 == (undefined4 *)0x0;
  }
  bVar21 = false;
  if (bVar26) {
    uVar20 = (uint)unaff_lr & ((uint)bVar24 << 0x1f | (uint)unaff_r10 >> 1);
    bVar24 = CARRY4((uint)unaff_r7,uVar20);
    cVar27 = SCARRY4((int)unaff_r7,uVar20);
    param_1 = (undefined4 *)((int)unaff_r7 + uVar20);
    cVar22 = (int)param_1 < 0;
    bVar21 = param_1 == (undefined4 *)0x0;
  }
  bVar26 = false;
  if (bVar21) {
    uVar20 = (uint)in_r12 & ((uint)bVar24 << 0x1f | (uint)unaff_r9 >> 1);
    bVar24 = CARRY4((uint)unaff_r7,uVar20);
    cVar27 = SCARRY4((int)unaff_r7,uVar20);
    param_1 = (undefined4 *)((int)unaff_r7 + uVar20);
    cVar22 = (int)param_1 < 0;
    bVar26 = param_1 == (undefined4 *)0x0;
  }
  bVar21 = false;
  if (bVar26) {
    uVar20 = (uint)param_1 >> ((uint)param_1 & 0x1f) | (int)param_1 << 0x20 - ((uint)param_1 & 0x1f)
    ;
    bVar24 = ((uint)param_1 & 0xff) == 0 && bVar24 ||
             ((uint)param_1 & 0xff) != 0 && SUB41(uVar20 >> 0x1f,0);
    param_1 = (undefined4 *)((uint)unaff_r9 & uVar20);
    cVar22 = (int)param_1 < 0;
    bVar21 = param_1 == (undefined4 *)0x0;
  }
  if (bVar21) {
    cVar22 = (int)unaff_r11 < 0;
    param_1 = unaff_r11;
  }
  bVar26 = false;
  if (bVar21 && unaff_r11 == (undefined4 *)0x0) {
    param_1 = (undefined4 *)((uint)in_r12 ^ (uint)unaff_r5);
    cVar22 = (int)param_1 < 0;
    bVar26 = param_1 == (undefined4 *)0x0;
  }
  bVar21 = false;
  if (bVar26) {
    param_1 = (undefined4 *)((uint)in_r12 ^ (uint)in_r12 & (uint)unaff_r9 >> ((uint)param_1 & 0xff))
    ;
    cVar22 = (int)param_1 < 0;
    bVar21 = param_1 == (undefined4 *)0x0;
  }
  bVar26 = false;
  if (bVar21) {
    uVar20 = (uint)param_1 & 0xff;
    bVar24 = uVar20 == 0 && bVar24 ||
             uVar20 != 0 && (bool)((byte)((uint)unaff_r10 >> uVar20 - 1) & 1);
    param_1 = (undefined4 *)((uint)param_2 & (uint)unaff_r10 >> uVar20);
    cVar22 = (int)param_1 < 0;
    bVar26 = param_1 == (undefined4 *)0x0;
  }
  bVar21 = false;
  if (bVar26) {
    param_1 = (undefined4 *)((uint)in_r12 ^ (uint)param_1);
    cVar22 = (int)param_1 < 0;
    bVar21 = param_1 == (undefined4 *)0x0;
  }
  if (bVar21) {
    cVar22 = (int)unaff_r9 < 0;
    param_1 = unaff_r9;
  }
  bVar26 = false;
  if (bVar21 && unaff_r9 == (undefined4 *)0x0) {
    param_1 = (undefined4 *)((uint)unaff_r5 & (int)unaff_r6 << ((uint)param_1 & 0xff));
    bVar24 = param_1 <= unaff_r5;
    cVar27 = SBORROW4((int)unaff_r5,(int)param_1);
    param_1 = (undefined4 *)((int)unaff_r5 - (int)param_1);
    cVar22 = (int)param_1 < 0;
    bVar26 = param_1 == (undefined4 *)0x0;
  }
  bVar21 = false;
  if (bVar26) {
    uVar20 = (uint)param_1 & 0xff;
    bVar24 = uVar20 == 0 && bVar24 ||
             uVar20 != 0 && (bool)((byte)((uint)unaff_r7 >> uVar20 - 1) & 1);
    param_1 = (undefined4 *)((uint)unaff_r10 & (uint)unaff_r7 >> uVar20);
    cVar22 = (int)param_1 < 0;
    bVar21 = param_1 == (undefined4 *)0x0;
  }
  if (bVar21) {
    cVar27 = SBORROW4((int)param_1,(int)param_1);
    param_1 = (undefined4 *)0x0;
    bVar24 = true;
    cVar22 = false;
  }
  bVar26 = false;
  if (bVar21) {
    uVar20 = (uint)param_1 & 0xff;
    bVar24 = uVar20 == 0 && bVar24 || uVar20 != 0 && (bool)((byte)((uint)in_r12 >> uVar20 - 1) & 1);
    param_1 = (undefined4 *)((uint)in_r12 & (uint)in_r12 >> uVar20);
    cVar22 = (int)param_1 < 0;
    bVar26 = param_1 == (undefined4 *)0x0;
  }
  if (bVar26) {
    cVar27 = SBORROW4((int)param_1,(int)param_1);
    param_1 = (undefined4 *)0x0;
    bVar24 = true;
    cVar22 = false;
  }
  bVar21 = false;
  if (bVar26) {
    uVar20 = (uint)param_1 & 0xff;
    bVar24 = uVar20 == 0 && bVar24 ||
             uVar20 != 0 && (bool)((byte)((uint)unaff_r7 >> uVar20 - 1) & 1);
    param_1 = (undefined4 *)((uint)unaff_lr & (uint)unaff_r7 >> uVar20);
    cVar22 = (int)param_1 < 0;
    bVar21 = param_1 == (undefined4 *)0x0;
  }
  bVar26 = false;
  if (bVar21) {
    bVar24 = (undefined4 *)0x84bd819 < in_r12;
    cVar27 = SBORROW4((int)in_r12,0x84bd81a);
    param_1 = (undefined4 *)((int)in_r12 + -0x84bd81a);
    cVar22 = (int)param_1 < 0;
    bVar26 = param_1 == (undefined4 *)0x0;
  }
  if (bVar26) {
    bVar24 = (bool)(bVar3 >> 7);
    param_1 = (undefined4 *)0x0;
    cVar22 = false;
  }
  bVar21 = false;
  if (bVar26) {
    bVar24 = (undefined4 *)0x84bd821 < param_1;
    cVar27 = SBORROW4((int)param_1,0x84bd822);
    param_1 = (undefined4 *)((int)param_1 + -0x84bd822);
    cVar22 = (int)param_1 < 0;
    bVar21 = param_1 == (undefined4 *)0x0;
  }
  if (bVar21) {
    bVar24 = (bool)(bVar10 >> 7);
    param_1 = (undefined4 *)0x0;
    cVar22 = false;
  }
  bVar26 = false;
  if (bVar21) {
    bVar24 = (undefined4 *)0x84bd829 < param_1;
    cVar27 = SBORROW4((int)param_1,0x84bd82a);
    param_1 = (undefined4 *)((int)param_1 + -0x84bd82a);
    cVar22 = (int)param_1 < 0;
    bVar26 = param_1 == (undefined4 *)0x0;
  }
  if (bVar26) {
    bVar24 = (bool)(bVar4 >> 7);
    param_1 = (undefined4 *)0x0;
    cVar22 = false;
  }
  if (bVar24 && !bVar26) {
    param_1 = (undefined4 *)((int)param_1 - (int)unaff_r9);
  }
  if (bVar26) {
    bVar24 = (bool)(bVar6 >> 7);
    param_1 = (undefined4 *)0x0;
    cVar22 = false;
  }
  bVar21 = false;
  if (bVar26) {
    bVar24 = CARRY4((uint)unaff_r7,(uint)unaff_r5);
    cVar27 = SCARRY4((int)unaff_r7,(int)unaff_r5);
    param_1 = (undefined4 *)((int)unaff_r7 + (int)unaff_r5);
    cVar22 = (int)param_1 < 0;
    bVar21 = param_1 == (undefined4 *)0x0;
  }
  bVar26 = false;
  if (bVar21) {
    uVar20 = (uint)in_r12 & (int)param_3 << ((uint)param_1 & 0xff);
    bVar24 = CARRY4((uint)unaff_r7,uVar20);
    cVar27 = SCARRY4((int)unaff_r7,uVar20);
    param_1 = (undefined4 *)((int)unaff_r7 + uVar20);
    cVar22 = (int)param_1 < 0;
    bVar26 = param_1 == (undefined4 *)0x0;
  }
  bVar21 = false;
  if (bVar26) {
    bVar24 = (undefined4 *)0xf7b427a1 < unaff_r7;
    cVar27 = SCARRY4((int)unaff_r7,0x84bd85e);
    param_1 = (undefined4 *)((int)unaff_r7 + 0x84bd85e);
    cVar22 = (int)param_1 < 0;
    bVar21 = param_1 == (undefined4 *)0x0;
  }
  bVar26 = false;
  if (bVar21) {
    uVar20 = (uint)in_r12 & (uint)unaff_r9;
    bVar24 = CARRY4((uint)unaff_r7,uVar20);
    cVar27 = SCARRY4((int)unaff_r7,uVar20);
    param_1 = (undefined4 *)((int)unaff_r7 + uVar20);
    cVar22 = (int)param_1 < 0;
    bVar26 = param_1 == (undefined4 *)0x0;
  }
  bVar21 = false;
  if (bVar26) {
    uVar20 = (uint)param_1 & 0xff;
    bVar24 = uVar20 == 0 && bVar24 ||
             uVar20 != 0 && (bool)((byte)((uint)param_2 >> 0x20 - uVar20) & 1);
    param_1 = (undefined4 *)((uint)param_1 & (int)param_2 << uVar20);
    cVar22 = (int)param_1 < 0;
    bVar21 = param_1 == (undefined4 *)0x0;
  }
  if (bVar21) {
    param_1 = (undefined4 *)0x0;
    cVar22 = false;
  }
  bVar26 = false;
  if (bVar21) {
    bVar24 = CARRY4((uint)unaff_r7,(uint)unaff_r5);
    cVar27 = SCARRY4((int)unaff_r7,(int)unaff_r5);
    param_1 = (undefined4 *)((int)unaff_r7 + (int)unaff_r5);
    cVar22 = (int)param_1 < 0;
    bVar26 = param_1 == (undefined4 *)0x0;
  }
  bVar21 = false;
  if (bVar26) {
    uVar20 = (int)unaff_r10 - ((int)unaff_lr << ((uint)param_1 & 0xff));
    bVar24 = CARRY4((uint)unaff_r7,uVar20);
    cVar27 = SCARRY4((int)unaff_r7,uVar20);
    param_1 = (undefined4 *)((int)unaff_r7 + uVar20);
    cVar22 = (int)param_1 < 0;
    bVar21 = param_1 == (undefined4 *)0x0;
  }
  if (bVar21) {
    param_1 = (undefined4 *)0x0;
    cVar22 = false;
  }
  bVar26 = false;
  if (bVar21) {
    bVar24 = CARRY4((uint)unaff_r7,(uint)unaff_r5);
    cVar27 = SCARRY4((int)unaff_r7,(int)unaff_r5);
    param_1 = (undefined4 *)((int)unaff_r7 + (int)unaff_r5);
    cVar22 = (int)param_1 < 0;
    bVar26 = param_1 == (undefined4 *)0x0;
  }
  bVar21 = false;
  if (bVar26) {
    uVar20 = (int)unaff_lr << ((uint)param_1 & 0xff);
    bVar24 = uVar20 < 0x84bd8ff;
    cVar27 = SBORROW4(0x84bd8fe,uVar20);
    param_1 = (undefined4 *)(0x84bd8fe - uVar20);
    cVar22 = (int)param_1 < 0;
    bVar21 = param_1 == (undefined4 *)0x0;
  }
  bVar26 = false;
  if (bVar21) {
    bVar24 = CARRY4((uint)unaff_r7,(uint)param_1);
    cVar27 = SCARRY4((int)unaff_r7,(int)param_1);
    param_1 = (undefined4 *)((int)unaff_r7 + (int)param_1);
    cVar22 = (int)param_1 < 0;
    bVar26 = param_1 == (undefined4 *)0x0;
  }
  bVar21 = false;
  if (bVar26) {
    uVar20 = (int)unaff_lr << ((uint)param_1 & 0xff);
    bVar24 = uVar20 < 0x84bd907;
    cVar27 = SBORROW4(0x84bd906,uVar20);
    param_1 = (undefined4 *)(0x84bd906 - uVar20);
    cVar22 = (int)param_1 < 0;
    bVar21 = param_1 == (undefined4 *)0x0;
  }
  if (bVar21) {
    param_1 = (undefined4 *)0x0;
    cVar22 = false;
  }
  bVar26 = false;
  if (bVar21) {
    bVar24 = CARRY4((uint)unaff_r7,(uint)unaff_r5);
    cVar27 = SCARRY4((int)unaff_r7,(int)unaff_r5);
    param_1 = (undefined4 *)((int)unaff_r7 + (int)unaff_r5);
    cVar22 = (int)param_1 < 0;
    bVar26 = param_1 == (undefined4 *)0x0;
  }
  bVar21 = false;
  if (bVar26) {
    param_1 = (undefined4 *)((int)param_1 << ((uint)param_1 & 0xff));
    bVar24 = param_1 <= param_4;
    cVar27 = SBORROW4((int)param_4,(int)param_1);
    param_1 = (undefined4 *)((int)param_4 - (int)param_1);
    cVar22 = (int)param_1 < 0;
    bVar21 = param_1 == (undefined4 *)0x0;
  }
  bVar26 = false;
  if (bVar21) {
    bVar24 = CARRY4((uint)unaff_r7,(uint)param_1);
    cVar27 = SCARRY4((int)unaff_r7,(int)param_1);
    param_1 = (undefined4 *)((int)unaff_r7 + (int)param_1);
    cVar22 = (int)param_1 < 0;
    bVar26 = param_1 == (undefined4 *)0x0;
  }
  bVar21 = false;
  if (bVar26) {
    param_1 = (undefined4 *)((int)param_1 << ((uint)param_1 & 0xff));
    bVar24 = param_1 <= param_4;
    cVar27 = SBORROW4((int)param_4,(int)param_1);
    param_1 = (undefined4 *)((int)param_4 - (int)param_1);
    cVar22 = (int)param_1 < 0;
    bVar21 = param_1 == (undefined4 *)0x0;
  }
  if (bVar21) {
    param_1 = (undefined4 *)0x0;
    cVar22 = false;
  }
  bVar26 = false;
  if (bVar21) {
    bVar24 = CARRY4((uint)unaff_r7,(uint)unaff_r5);
    cVar27 = SCARRY4((int)unaff_r7,(int)unaff_r5);
    param_1 = (undefined4 *)((int)unaff_r7 + (int)unaff_r5);
    cVar22 = (int)param_1 < 0;
    bVar26 = param_1 == (undefined4 *)0x0;
  }
  if (bVar26) {
    bVar24 = true;
    cVar27 = false;
    cVar22 = (int)param_4 < 0;
    param_1 = param_4;
  }
  bVar21 = false;
  if (bVar26 && param_4 == (undefined4 *)0x0) {
    bVar24 = CARRY4((uint)unaff_r7,(uint)param_1);
    cVar27 = SCARRY4((int)unaff_r7,(int)param_1);
    param_1 = (undefined4 *)((int)unaff_r7 + (int)param_1);
    cVar22 = (int)param_1 < 0;
    bVar21 = param_1 == (undefined4 *)0x0;
  }
  if (bVar21) {
    bVar24 = true;
    cVar27 = false;
    cVar22 = (int)param_4 < 0;
    param_1 = param_4;
  }
  bVar21 = bVar21 && param_4 == (undefined4 *)0x0;
  if (bVar21) {
    param_1 = (undefined4 *)0x0;
    cVar22 = false;
  }
  bVar26 = false;
  if (bVar21) {
    bVar24 = CARRY4((uint)unaff_r7,(uint)unaff_r5);
    cVar27 = SCARRY4((int)unaff_r7,(int)unaff_r5);
    param_1 = (undefined4 *)((int)unaff_r7 + (int)unaff_r5);
    cVar22 = (int)param_1 < 0;
    bVar26 = param_1 == (undefined4 *)0x0;
  }
  bVar21 = false;
  if (bVar26) {
    uVar20 = (uint)in_r12 ^ (int)unaff_lr << ((uint)param_1 & 0xff);
    bVar24 = CARRY4((uint)unaff_r7,uVar20);
    cVar27 = SCARRY4((int)unaff_r7,uVar20);
    param_1 = (undefined4 *)((int)unaff_r7 + uVar20);
    cVar22 = (int)param_1 < 0;
    bVar21 = param_1 == (undefined4 *)0x0;
  }
  bVar26 = false;
  if (bVar21) {
    uVar20 = (uint)in_r12 ^ (int)unaff_lr << ((uint)param_1 & 0xff);
    bVar24 = CARRY4((uint)unaff_r7,uVar20);
    cVar27 = SCARRY4((int)unaff_r7,uVar20);
    param_1 = (undefined4 *)((int)unaff_r7 + uVar20);
    cVar22 = (int)param_1 < 0;
    bVar26 = param_1 == (undefined4 *)0x0;
  }
  if (bVar26) {
    param_1 = (undefined4 *)0x0;
    cVar22 = false;
  }
  bVar21 = false;
  if (bVar26) {
    bVar24 = CARRY4((uint)unaff_r7,(uint)unaff_r5);
    cVar27 = SCARRY4((int)unaff_r7,(int)unaff_r5);
    param_1 = (undefined4 *)((int)unaff_r7 + (int)unaff_r5);
    cVar22 = (int)param_1 < 0;
    bVar21 = param_1 == (undefined4 *)0x0;
  }
  bVar26 = false;
  if (bVar21) {
    uVar20 = (int)param_2 - ((int)unaff_lr << ((uint)param_1 & 0xff));
    bVar24 = CARRY4((uint)unaff_r7,uVar20);
    cVar27 = SCARRY4((int)unaff_r7,uVar20);
    param_1 = (undefined4 *)((int)unaff_r7 + uVar20);
    cVar22 = (int)param_1 < 0;
    bVar26 = param_1 == (undefined4 *)0x0;
  }
  bVar21 = false;
  if (bVar26) {
    uVar20 = (int)param_2 - ((int)unaff_lr << ((uint)param_1 & 0xff));
    bVar24 = CARRY4((uint)unaff_r7,uVar20);
    cVar27 = SCARRY4((int)unaff_r7,uVar20);
    param_1 = (undefined4 *)((int)unaff_r7 + uVar20);
    cVar22 = (int)param_1 < 0;
    bVar21 = param_1 == (undefined4 *)0x0;
  }
  if (bVar21) {
    param_1 = (undefined4 *)0x0;
    cVar22 = false;
  }
  bVar26 = false;
  if (bVar21) {
    bVar24 = CARRY4((uint)unaff_r7,(uint)unaff_r5);
    cVar27 = SCARRY4((int)unaff_r7,(int)unaff_r5);
    param_1 = (undefined4 *)((int)unaff_r7 + (int)unaff_r5);
    cVar22 = (int)param_1 < 0;
    bVar26 = param_1 == (undefined4 *)0x0;
  }
  bVar21 = false;
  if (bVar26) {
    uVar20 = (uint)param_1 & 0xff;
    bVar24 = uVar20 == 0 && bVar24 ||
             uVar20 != 0 && (bool)((byte)((uint)param_1 >> 0x20 - uVar20) & 1);
    param_1 = (undefined4 *)((uint)unaff_r5 ^ (int)param_1 << uVar20);
    cVar22 = (int)param_1 < 0;
    bVar21 = param_1 == (undefined4 *)0x0;
  }
  bVar26 = false;
  if (bVar21) {
    bVar24 = CARRY4((uint)unaff_r7,(uint)param_1);
    cVar27 = SCARRY4((int)unaff_r7,(int)param_1);
    param_1 = (undefined4 *)((int)unaff_r7 + (int)param_1);
    cVar22 = (int)param_1 < 0;
    bVar26 = param_1 == (undefined4 *)0x0;
  }
  bVar21 = false;
  if (bVar26) {
    uVar20 = (uint)param_1 & 0xff;
    bVar24 = uVar20 == 0 && bVar24 ||
             uVar20 != 0 && (bool)((byte)((uint)param_1 >> 0x20 - uVar20) & 1);
    param_1 = (undefined4 *)((uint)unaff_r5 ^ (int)param_1 << uVar20);
    cVar22 = (int)param_1 < 0;
    bVar21 = param_1 == (undefined4 *)0x0;
  }
  bVar26 = false;
  if (bVar21) {
    bVar24 = CARRY4((uint)unaff_r7,(uint)param_1);
    cVar27 = SCARRY4((int)unaff_r7,(int)param_1);
    param_1 = (undefined4 *)((int)unaff_r7 + (int)param_1);
    cVar22 = (int)param_1 < 0;
    bVar26 = param_1 == (undefined4 *)0x0;
  }
  bVar21 = false;
  if (bVar26) {
    uVar20 = (uint)param_1 & 0xff;
    bVar24 = uVar20 == 0 && bVar24 ||
             uVar20 != 0 && (bool)((byte)((uint)param_1 >> 0x20 - uVar20) & 1);
    param_1 = (undefined4 *)((uint)unaff_r5 ^ (int)param_1 << uVar20);
    cVar22 = (int)param_1 < 0;
    bVar21 = param_1 == (undefined4 *)0x0;
  }
  if (bVar21) {
    param_1 = (undefined4 *)0x0;
    cVar22 = false;
  }
  bVar26 = false;
  if (bVar21) {
    bVar24 = CARRY4((uint)unaff_r7,(uint)unaff_r5);
    cVar27 = SCARRY4((int)unaff_r7,(int)unaff_r5);
    param_1 = (undefined4 *)((int)unaff_r7 + (int)unaff_r5);
    cVar22 = (int)param_1 < 0;
    bVar26 = param_1 == (undefined4 *)0x0;
  }
  if (bVar26) {
    bVar24 = (bool)(bVar11 >> 7);
    cVar22 = (int)unaff_r5 < 0;
    param_1 = unaff_r5;
  }
  bVar21 = false;
  if (bVar26 && unaff_r5 == (undefined4 *)0x0) {
    bVar24 = CARRY4((uint)unaff_r7,(uint)param_1);
    cVar27 = SCARRY4((int)unaff_r7,(int)param_1);
    param_1 = (undefined4 *)((int)unaff_r7 + (int)param_1);
    cVar22 = (int)param_1 < 0;
    bVar21 = param_1 == (undefined4 *)0x0;
  }
  if (bVar21) {
    bVar24 = (bool)(bVar11 >> 7);
    cVar22 = (int)unaff_r5 < 0;
    param_1 = unaff_r5;
  }
  bVar26 = false;
  if (bVar21 && unaff_r5 == (undefined4 *)0x0) {
    bVar24 = CARRY4((uint)unaff_r7,(uint)param_1);
    cVar27 = SCARRY4((int)unaff_r7,(int)param_1);
    param_1 = (undefined4 *)((int)unaff_r7 + (int)param_1);
    cVar22 = (int)param_1 < 0;
    bVar26 = param_1 == (undefined4 *)0x0;
  }
  if (bVar26) {
    bVar24 = (bool)(bVar11 >> 7);
    cVar22 = (int)unaff_r5 < 0;
    param_1 = unaff_r5;
  }
  bVar26 = bVar26 && unaff_r5 == (undefined4 *)0x0;
  if (bVar26) {
    param_1 = (undefined4 *)0x0;
    cVar22 = false;
  }
  bVar21 = false;
  if (bVar26) {
    param_1 = (undefined4 *)
              ((uint)in_r12 ^ (int)unaff_r5 - ((int)unaff_r11 << ((uint)param_1 & 0xff)));
    cVar22 = (int)param_1 < 0;
    bVar21 = param_1 == (undefined4 *)0x0;
  }
  bVar26 = false;
  if (bVar21) {
    param_1 = (undefined4 *)((uint)in_r12 ^ (uint)unaff_r4);
    cVar22 = (int)param_1 < 0;
    bVar26 = param_1 == (undefined4 *)0x0;
  }
  if (bVar26) {
    param_1 = (undefined4 *)0x0;
    cVar22 = false;
  }
  bVar21 = false;
  if (bVar26) {
    param_1 = (undefined4 *)((uint)param_2 ^ (uint)unaff_r5);
    cVar22 = (int)param_1 < 0;
    bVar21 = param_1 == (undefined4 *)0x0;
  }
  bVar26 = false;
  if (bVar21) {
    param_1 = (undefined4 *)((uint)param_2 ^ (int)unaff_r11 - (int)unaff_lr);
    cVar22 = (int)param_1 < 0;
    bVar26 = param_1 == (undefined4 *)0x0;
  }
  bVar21 = false;
  if (bVar26) {
    param_1 = (undefined4 *)((uint)param_2 ^ (uint)unaff_r5);
    cVar22 = (int)param_1 < 0;
    bVar21 = param_1 == (undefined4 *)0x0;
  }
  bVar26 = false;
  if (bVar21) {
    param_1 = (undefined4 *)((uint)param_2 ^ (uint)unaff_r6);
    cVar22 = (int)param_1 < 0;
    bVar26 = param_1 == (undefined4 *)0x0;
  }
  if (bVar26) {
    cVar22 = false;
    param_1 = (undefined4 *)((uint)in_r12 & (uint)unaff_lr);
  }
  if (bVar24 && !bVar26) {
    bVar24 = CARRY4((uint)param_1,(uint)in_r12);
    cVar27 = SCARRY4((int)param_1,(int)in_r12);
    param_1 = (undefined4 *)((int)param_1 + (int)in_r12);
    cVar22 = (int)param_1 < 0;
    bVar26 = param_1 == (undefined4 *)0x0;
  }
  bVar21 = false;
  if (bVar26) {
    param_1 = (undefined4 *)
              ((uint)param_2 ^ (uint)register0x00000054 & (int)unaff_lr << ((uint)param_1 & 0xff));
    cVar22 = (int)param_1 < 0;
    bVar21 = param_1 == (undefined4 *)0x0;
  }
  bVar26 = false;
  if (bVar21) {
    uVar20 = (uint)param_1 & 0xff;
    bVar24 = uVar20 == 0 && bVar24 ||
             uVar20 != 0 && (bool)((byte)((uint)param_1 >> 0x20 - uVar20) & 1);
    param_1 = (undefined4 *)((uint)unaff_r7 & (int)param_1 << uVar20);
    cVar22 = (int)param_1 < 0;
    bVar26 = param_1 == (undefined4 *)0x0;
  }
  bVar21 = false;
  if (bVar26) {
    param_1 = (undefined4 *)((uint)param_2 ^ (uint)param_1);
    cVar22 = (int)param_1 < 0;
    bVar21 = param_1 == (undefined4 *)0x0;
  }
  if (bVar21) {
    bVar24 = (bool)(bVar8 >> 7);
    param_1 = (undefined4 *)0x0;
    cVar22 = false;
  }
  bVar26 = false;
  if (bVar21) {
    bVar24 = CARRY4((uint)unaff_r7,(uint)unaff_r5);
    cVar27 = SCARRY4((int)unaff_r7,(int)unaff_r5);
    param_1 = (undefined4 *)((int)unaff_r7 + (int)unaff_r5);
    cVar22 = (int)param_1 < 0;
    bVar26 = param_1 == (undefined4 *)0x0;
  }
  if (bVar26) {
    bVar24 = (bool)(bVar5 >> 7);
    param_1 = (undefined4 *)0x0;
    cVar22 = false;
  }
  bVar21 = false;
  if (bVar26) {
    bVar24 = CARRY4((uint)unaff_r7,(uint)param_1);
    cVar27 = SCARRY4((int)unaff_r7,(int)param_1);
    param_1 = (undefined4 *)((int)unaff_r7 + (int)param_1);
    cVar22 = (int)param_1 < 0;
    bVar21 = param_1 == (undefined4 *)0x0;
  }
  if (bVar21) {
    bVar24 = (bool)(bVar4 >> 7);
    param_1 = (undefined4 *)0x0;
    cVar22 = false;
  }
  bVar26 = false;
  if (bVar21) {
    bVar24 = CARRY4((uint)unaff_r7,(uint)unaff_r5);
    cVar27 = SCARRY4((int)unaff_r7,(int)unaff_r5);
    param_1 = (undefined4 *)((int)unaff_r7 + (int)unaff_r5);
    cVar22 = (int)param_1 < 0;
    bVar26 = param_1 == (undefined4 *)0x0;
  }
  bVar21 = false;
  if (bVar26) {
    uVar20 = (uint)param_1 & 0xff;
    bVar24 = uVar20 == 0 && bVar24 ||
             uVar20 != 0 && (bool)((byte)((uint)param_1 >> 0x20 - uVar20) & 1);
    param_1 = (undefined4 *)((uint)unaff_r8 & (int)param_1 << uVar20);
    cVar22 = (int)param_1 < 0;
    bVar21 = param_1 == (undefined4 *)0x0;
  }
  bVar26 = false;
  if (bVar21) {
    bVar24 = CARRY4((uint)unaff_r7,(uint)param_1);
    cVar27 = SCARRY4((int)unaff_r7,(int)param_1);
    param_1 = (undefined4 *)((int)unaff_r7 + (int)param_1);
    cVar22 = (int)param_1 < 0;
    bVar26 = param_1 == (undefined4 *)0x0;
  }
  bVar21 = false;
  if (bVar26) {
    uVar20 = (uint)param_1 & 0xff;
    bVar24 = uVar20 == 0 && bVar24 ||
             uVar20 != 0 && (bool)((byte)((uint)unaff_r6 >> 0x20 - uVar20) & 1);
    param_1 = (undefined4 *)((uint)unaff_r7 & (int)unaff_r6 << uVar20);
    cVar22 = (int)param_1 < 0;
    bVar21 = param_1 == (undefined4 *)0x0;
  }
  bVar26 = false;
  if (bVar21) {
    param_1 = (undefined4 *)((uint)in_r12 ^ (uint)unaff_r5);
    cVar22 = (int)param_1 < 0;
    bVar26 = param_1 == (undefined4 *)0x0;
  }
  if (bVar26) {
    cVar22 = (int)param_4 < 0;
    param_1 = param_4;
  }
  bVar21 = false;
  if (bVar26 && param_4 == (undefined4 *)0x0) {
    uVar20 = (uint)param_4 ^ (int)param_1 << ((uint)param_1 & 0xff);
    bVar24 = CARRY4((uint)unaff_r7,uVar20);
    cVar27 = SCARRY4((int)unaff_r7,uVar20);
    param_1 = (undefined4 *)((int)unaff_r7 + uVar20);
    cVar22 = (int)param_1 < 0;
    bVar21 = param_1 == (undefined4 *)0x0;
  }
  if (bVar21) {
    param_1 = (undefined4 *)0x0;
    cVar22 = false;
  }
  bVar26 = false;
  if (bVar21) {
    param_1 = (undefined4 *)((uint)in_r12 ^ (uint)unaff_r5);
    cVar22 = (int)param_1 < 0;
    bVar26 = param_1 == (undefined4 *)0x0;
  }
  bVar21 = false;
  if (bVar26) {
    param_1 = (undefined4 *)((uint)in_r12 ^ (uint)unaff_lr ^ (int)param_1 << ((uint)param_1 & 0xff))
    ;
    cVar22 = (int)param_1 < 0;
    bVar21 = param_1 == (undefined4 *)0x0;
  }
  if (bVar21) {
    cVar22 = (int)in_r12 < 0;
    param_1 = in_r12;
  }
  bVar26 = false;
  if (bVar21 && in_r12 == (undefined4 *)0x0) {
    uVar20 = (uint)param_1 & 0xff;
    bVar24 = uVar20 == 0 && bVar24 ||
             uVar20 != 0 && (bool)((byte)((uint)param_2 >> 0x20 - uVar20) & 1);
    param_1 = (undefined4 *)((uint)param_1 ^ (int)param_2 << uVar20);
    cVar22 = (int)param_1 < 0;
    bVar26 = param_1 == (undefined4 *)0x0;
  }
  if (bVar26) {
    param_1 = (undefined4 *)0x0;
    cVar22 = false;
  }
  bVar21 = false;
  if (bVar26) {
    param_1 = (undefined4 *)((uint)param_2 ^ (uint)in_r12);
    cVar22 = (int)param_1 < 0;
    bVar21 = param_1 == (undefined4 *)0x0;
  }
  bVar26 = false;
  if (bVar21) {
    param_1 = (undefined4 *)
              ((uint)param_2 ^ (uint)unaff_lr & (int)unaff_r7 << ((uint)param_1 & 0xff));
    cVar22 = (int)param_1 < 0;
    bVar26 = param_1 == (undefined4 *)0x0;
  }
  if (bVar26) {
    param_1 = (undefined4 *)0x0;
  }
  if (bVar24 && !bVar26) {
    param_1 = (undefined4 *)((int)param_1 - (int)unaff_r9);
  }
  bVar21 = false;
  if (bVar26) {
    param_1 = (undefined4 *)((uint)param_1 & (int)unaff_lr << ((uint)param_1 & 0xff));
    cVar22 = (int)param_1 < 0;
    bVar21 = param_1 == (undefined4 *)0x0;
  }
  if (bVar21) {
    param_1 = (undefined4 *)0x0;
    cVar22 = false;
  }
  bVar26 = false;
  if (bVar21) {
    cVar27 = SBORROW4((int)in_r12,0x84bdd22);
    param_1 = (undefined4 *)((int)in_r12 + -0x84bdd22);
    cVar22 = (int)param_1 < 0;
    bVar26 = param_1 == (undefined4 *)0x0;
  }
  bVar21 = false;
  if (bVar26) {
    param_1 = (undefined4 *)((uint)param_1 & (int)unaff_r9 << ((uint)param_1 & 0xff));
    cVar22 = (int)param_1 < 0;
    bVar21 = param_1 == (undefined4 *)0x0;
  }
  bVar26 = false;
  if (bVar21) {
    cVar27 = SBORROW4((int)param_1,0x84bdd2a);
    param_1 = (undefined4 *)((int)param_1 + -0x84bdd2a);
    cVar22 = (int)param_1 < 0;
    bVar26 = param_1 == (undefined4 *)0x0;
  }
  if (bVar26) {
    param_1 = (undefined4 *)0x0;
    cVar22 = false;
  }
  bVar21 = false;
  if (bVar26) {
    cVar27 = SBORROW4((int)param_1,0x84bdd32);
    param_1 = (undefined4 *)((int)param_1 + -0x84bdd32);
    cVar22 = (int)param_1 < 0;
    bVar21 = param_1 == (undefined4 *)0x0;
  }
  bVar26 = false;
  if (bVar21) {
    param_1 = (undefined4 *)((uint)param_1 & (int)unaff_lr << ((uint)param_1 & 0xff));
    cVar22 = (int)param_1 < 0;
    bVar26 = param_1 == (undefined4 *)0x0;
  }
  bVar21 = false;
  if (bVar26) {
    cVar27 = SBORROW4((int)param_1,0x84bdd3a);
    param_1 = (undefined4 *)((int)param_1 + -0x84bdd3a);
    cVar22 = (int)param_1 < 0;
    bVar21 = param_1 == (undefined4 *)0x0;
  }
  bVar26 = false;
  if (bVar21) {
    uVar20 = (uint)in_r12 & (int)unaff_r11 << ((uint)param_1 & 0xff);
    cVar27 = SBORROW4(uVar20,0x84bdd42);
    param_1 = (undefined4 *)(uVar20 + 0xf7b422be);
    cVar22 = (int)param_1 < 0;
    bVar26 = param_1 == (undefined4 *)0x0;
  }
  if (bVar26) {
    cVar22 = (int)unaff_r5 < 0;
    param_1 = unaff_r5;
  }
  bVar21 = false;
  if (bVar26 && unaff_r5 == (undefined4 *)0x0) {
    cVar27 = SCARRY4((int)unaff_r7,(int)unaff_r5);
    param_1 = (undefined4 *)((int)unaff_r7 + (int)unaff_r5);
    cVar22 = (int)param_1 < 0;
    bVar21 = param_1 == (undefined4 *)0x0;
  }
  bVar26 = false;
  if (bVar21) {
    param_1 = (undefined4 *)((uint)param_3 ^ (uint)param_4 >> ((uint)param_1 & 0xff));
    cVar22 = (int)param_1 < 0;
    bVar26 = param_1 == (undefined4 *)0x0;
  }
  bVar21 = false;
  if (bVar26) {
    cVar27 = SCARRY4((int)unaff_r7,(int)param_1);
    param_1 = (undefined4 *)((int)unaff_r7 + (int)param_1);
    cVar22 = (int)param_1 < 0;
    bVar21 = param_1 == (undefined4 *)0x0;
  }
  bVar26 = false;
  if (bVar21) {
    param_1 = (undefined4 *)((uint)param_4 ^ (uint)unaff_r7 >> ((uint)param_1 & 0xff));
    cVar22 = (int)param_1 < 0;
    bVar26 = param_1 == (undefined4 *)0x0;
  }
  bVar21 = false;
  if (bVar26) {
    param_1 = (undefined4 *)((uint)in_r12 ^ (uint)param_1);
    cVar22 = (int)param_1 < 0;
    bVar21 = param_1 == (undefined4 *)0x0;
  }
  bVar26 = false;
  if (bVar21) {
    param_1 = (undefined4 *)((uint)in_r12 ^ (uint)param_4);
    cVar22 = (int)param_1 < 0;
    bVar26 = param_1 == (undefined4 *)0x0;
  }
  if (bVar26) {
    cVar27 = false;
    cVar22 = (int)unaff_r10 < 0;
    param_1 = unaff_r10;
  }
  bVar21 = false;
  if (bVar26 && unaff_r10 == (undefined4 *)0x0) {
    cVar27 = SCARRY4((int)unaff_r7,(int)unaff_r5);
    param_1 = (undefined4 *)((int)unaff_r7 + (int)unaff_r5);
    cVar22 = (int)param_1 < 0;
    bVar21 = param_1 == (undefined4 *)0x0;
  }
  bVar26 = false;
  if (bVar21) {
    param_1 = (undefined4 *)((uint)param_3 & (int)unaff_r8 >> ((uint)param_1 & 0xff));
    cVar22 = (int)param_1 < 0;
    bVar26 = param_1 == (undefined4 *)0x0;
  }
  bVar21 = false;
  if (bVar26) {
    cVar27 = SCARRY4((int)unaff_r7,(int)param_1);
    param_1 = (undefined4 *)((int)unaff_r7 + (int)param_1);
    cVar22 = (int)param_1 < 0;
    bVar21 = param_1 == (undefined4 *)0x0;
  }
  if (bVar21) {
    cVar27 = false;
    cVar22 = (int)unaff_r10 < 0;
    param_1 = unaff_r10;
  }
  bVar26 = false;
  if (bVar21 && unaff_r10 == (undefined4 *)0x0) {
    cVar27 = SCARRY4((int)unaff_r7,(int)unaff_r5);
    param_1 = (undefined4 *)((int)unaff_r7 + (int)unaff_r5);
    cVar22 = (int)param_1 < 0;
    bVar26 = param_1 == (undefined4 *)0x0;
  }
  bVar21 = false;
  if (bVar26) {
    param_1 = (undefined4 *)((uint)param_1 & (int)unaff_r10 >> ((uint)param_1 & 0xff));
    cVar22 = (int)param_1 < 0;
    bVar21 = param_1 == (undefined4 *)0x0;
  }
  bVar26 = false;
  if (bVar21) {
    cVar27 = SCARRY4((int)unaff_r7,(int)param_1);
    param_1 = (undefined4 *)((int)unaff_r7 + (int)param_1);
    cVar22 = (int)param_1 < 0;
    bVar26 = param_1 == (undefined4 *)0x0;
  }
  if (bVar26) {
    cVar27 = false;
    cVar22 = (int)unaff_r10 < 0;
    param_1 = unaff_r10;
  }
  bVar21 = false;
  if (bVar26 && unaff_r10 == (undefined4 *)0x0) {
    cVar27 = SCARRY4((int)unaff_r7,(int)unaff_r5);
    param_1 = (undefined4 *)((int)unaff_r7 + (int)unaff_r5);
    cVar22 = (int)param_1 < 0;
    bVar21 = param_1 == (undefined4 *)0x0;
  }
  bVar26 = false;
  if (bVar21) {
    uVar20 = (uint)in_r12 & (int)unaff_r7 >> ((uint)param_1 & 0xff);
    cVar27 = SCARRY4((int)unaff_r7,uVar20);
    param_1 = (undefined4 *)((int)unaff_r7 + uVar20);
    cVar22 = (int)param_1 < 0;
    bVar26 = param_1 == (undefined4 *)0x0;
  }
  bVar21 = false;
  if (bVar26) {
    param_1 = (undefined4 *)((uint)param_1 & (int)unaff_r10 >> ((uint)param_1 & 0xff));
    cVar22 = (int)param_1 < 0;
    bVar21 = param_1 == (undefined4 *)0x0;
  }
  if (bVar21) {
    cVar27 = false;
    cVar22 = (int)unaff_r10 < 0;
    param_1 = unaff_r10;
  }
  bVar26 = false;
  if (bVar21 && unaff_r10 == (undefined4 *)0x0) {
    cVar27 = SCARRY4((int)unaff_r7,(int)unaff_r5);
    param_1 = (undefined4 *)((int)unaff_r7 + (int)unaff_r5);
    cVar22 = (int)param_1 < 0;
    bVar26 = param_1 == (undefined4 *)0x0;
  }
  bVar21 = false;
  if (bVar26) {
    uVar20 = (uint)in_r12 & 0x84bde3e >> ((uint)param_1 & 0xff);
    cVar27 = SCARRY4((int)unaff_r7,uVar20);
    param_1 = (undefined4 *)((int)unaff_r7 + uVar20);
    cVar22 = (int)param_1 < 0;
    bVar21 = param_1 == (undefined4 *)0x0;
  }
  bVar26 = false;
  if (bVar21) {
    param_1 = (undefined4 *)((uint)param_3 & (int)unaff_r8 >> ((uint)param_1 & 0xff));
    cVar22 = (int)param_1 < 0;
    bVar26 = param_1 == (undefined4 *)0x0;
  }
  bVar21 = false;
  if (bVar26) {
    cVar27 = SBORROW4((int)unaff_r5,0x84bde72);
    param_1 = (undefined4 *)((int)unaff_r5 + -0x84bde72);
    cVar22 = (int)param_1 < 0;
    bVar21 = param_1 == (undefined4 *)0x0;
  }
  bVar26 = false;
  if (bVar21) {
    param_1 = (undefined4 *)((uint)unaff_r6 ^ (int)unaff_r11 >> ((uint)param_1 & 0xff));
    cVar22 = (int)param_1 < 0;
    bVar26 = param_1 == (undefined4 *)0x0;
  }
  bVar21 = false;
  if (bVar26) {
    cVar27 = SBORROW4((int)param_1,0x84bde7a);
    param_1 = (undefined4 *)((int)param_1 + -0x84bde7a);
    cVar22 = (int)param_1 < 0;
    bVar21 = param_1 == (undefined4 *)0x0;
  }
  bVar26 = false;
  if (bVar21) {
    uVar20 = (uint)param_3 ^ (int)unaff_r11 >> ((uint)param_1 & 0xff);
    cVar22 = (int)uVar20 < 0;
    bVar26 = uVar20 == 0;
  }
  if (bVar26) {
    cVar22 = false;
  }
  uVar25 = false;
  if (bVar26 && ((uint)unaff_r4 & 0x84bdede) == 0) {
    uVar20 = (int)unaff_r8 - (int)unaff_r9 &
             (int)unaff_r8 << ((int)unaff_r8 - (int)unaff_r9 & 0xffU);
    cVar22 = (int)uVar20 < 0;
    uVar25 = uVar20 == 0;
  }
  if (!(bool)uVar25 && cVar22 == cVar27) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (!(bool)uVar25 && cVar22 == cVar27) {
    func_0x07bbdf52();
    in_r12 = extraout_r12;
  }
  if (!(bool)uVar25 && cVar22 == cVar27) {
    coprocessor_load(0,in_cr0,in_r12);
    coprocessor_function(0,0xe,0,in_cr0,in_cr12,in_cr0);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

