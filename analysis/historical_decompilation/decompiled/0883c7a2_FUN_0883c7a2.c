
/* WARNING: Control flow encountered bad instruction data */

undefined4 * FUN_0883c7a2(undefined4 param_1,undefined4 param_2,uint param_3)

{
  longlong lVar1;
  uint uVar2;
  undefined4 *puVar3;
  uint uVar5;
  uint extraout_r2;
  uint extraout_r2_00;
  uint uVar6;
  uint unaff_r4;
  uint unaff_r5;
  uint unaff_r6;
  byte *pbVar7;
  byte *unaff_r8;
  byte *pbVar8;
  uint *puVar9;
  byte *unaff_r9;
  uint unaff_r10;
  uint *unaff_r11;
  uint *in_r12;
  uint *extraout_r12;
  uint *puVar10;
  uint *extraout_r12_00;
  uint uVar11;
  char in_NG;
  undefined1 in_ZR;
  undefined1 in_CY;
  undefined1 in_OV;
  undefined4 in_cr4;
  undefined8 uVar12;
  undefined4 *puVar4;
  
  if ((bool)in_OV) {
    return *(undefined4 **)(unaff_r4 - 0x20);
  }
  if ((bool)in_CY && !(bool)in_ZR) {
    *(char *)(unaff_r6 - 0x488) = (char)param_1;
    if (!(bool)in_CY || (bool)in_ZR) {
      unaff_r11 = *(uint **)(unaff_r6 - 8);
      unaff_r8 = *(byte **)(unaff_r6 - 0xc);
      param_3 = *(uint *)(unaff_r6 - 0x14);
      param_2 = *(undefined4 *)(unaff_r6 - 0x18);
      param_1 = *(undefined4 *)(unaff_r6 - 0x1c);
    }
    uVar12 = CONCAT44(param_2,param_1);
    if (in_NG != '\0') {
      coprocessor_load(8,in_cr4,unaff_r4);
    }
    if (!(bool)in_CY || (bool)in_ZR) {
      uVar12 = func_0x0758e5a2();
      param_3 = extraout_r2;
      in_r12 = extraout_r12;
    }
    if (!(bool)in_OV) {
      uVar12 = *(undefined8 *)(unaff_r9 + 4);
      param_3 = *(uint *)(unaff_r9 + 0xc);
      unaff_r8 = *(byte **)(unaff_r9 + 0x14);
      unaff_r10 = *(uint *)(unaff_r9 + 0x1c);
      unaff_r9 = unaff_r9 + 0x20;
    }
    uVar2 = (uint)uVar12;
    if ((bool)in_NG) {
      puVar10 = (uint *)((int)in_r12 + unaff_r4);
      uVar2 = *in_r12;
    }
    else {
      unaff_r6 = unaff_r11[1];
      unaff_r10 = unaff_r11[2];
      puVar10 = in_r12;
    }
    if (!(bool)in_CY || (bool)in_ZR) {
      *(uint *)uVar2 = uVar2;
    }
    if ((bool)in_NG) {
      unaff_r4 = uVar2 & ((uint)unaff_r8 >> (unaff_r5 & 0x1f) |
                         (int)unaff_r8 << 0x20 - (unaff_r5 & 0x1f));
    }
    if ((bool)in_ZR) {
      unaff_r4 = uVar2 & (int)unaff_r4 >> 8;
      puVar10 = (uint *)(unaff_r4 & unaff_r4 << 8);
      unaff_r11 = (uint *)(unaff_r4 & unaff_r4 << 8);
      unaff_r9 = (byte *)(unaff_r4 & (int)unaff_r4 >> 0x16);
      uVar2 = unaff_r4;
    }
    uVar12 = CONCAT44((int)((ulonglong)uVar12 >> 0x20),uVar2);
    if (!(bool)in_CY || (bool)in_ZR) {
      uVar12 = func_0x099634ee();
      param_3 = extraout_r2_00;
      puVar10 = extraout_r12_00;
    }
    if (!(bool)in_OV) {
      uVar12 = *(undefined8 *)(unaff_r4 + 4);
      param_3 = *(uint *)(unaff_r4 + 0xc);
      unaff_r8 = *(byte **)(unaff_r4 + 0x14);
      unaff_r9 = *(byte **)(unaff_r4 + 0x18);
      unaff_r10 = *(uint *)(unaff_r4 + 0x1c);
      unaff_r4 = unaff_r4 + 0x20;
    }
    uVar5 = (uint)((ulonglong)uVar12 >> 0x20);
    uVar2 = (uint)uVar12;
    if ((bool)in_CY && !(bool)in_ZR) {
      uVar6 = *puVar10;
      unaff_r4 = puVar10[1];
      pbVar7 = (byte *)puVar10[2];
      unaff_r11 = (uint *)puVar10[3];
      uVar11 = puVar10[4];
      puVar10 = puVar10 + 5;
      *(uint *)(unaff_r9 + 4) = uVar2;
      *(uint *)(unaff_r9 + 8) = uVar6;
      *(byte **)(unaff_r9 + 0xc) = pbVar7;
      *(uint *)(unaff_r9 + 0x10) = unaff_r10;
    }
    else {
      uVar2 = *unaff_r11;
      uVar6 = unaff_r11[1];
      pbVar7 = (byte *)unaff_r11[2];
      unaff_r8 = (byte *)unaff_r11[3];
      unaff_r9 = (byte *)unaff_r11[4];
      uVar11 = unaff_r11[6];
    }
    if ((bool)in_NG) {
      unaff_r9 = unaff_r9 + -((int)unaff_r8 >> 0x20);
      uVar2 = (uint)*unaff_r9;
    }
    pbVar8 = unaff_r8;
    if ((bool)in_ZR) {
      pbVar8 = unaff_r8 + -4;
      uVar2 = (uint)*unaff_r8;
    }
    lVar1 = CONCAT44(uVar2,pbVar8);
    if ((bool)in_NG) {
      *pbVar7 = (byte)uVar2;
    }
    if ((bool)in_OV) {
      lVar1 = CONCAT44(uVar2,pbVar8) +
              ((longlong)(short)unaff_r6 * (longlong)(short)((uint)pbVar7 >> 0x10) -
              (longlong)(short)(unaff_r6 >> 0x10) * (longlong)(short)pbVar7);
    }
    puVar4 = (undefined4 *)((ulonglong)lVar1 >> 0x20);
    puVar9 = (uint *)lVar1;
    puVar3 = puVar4;
    if (!(bool)in_NG) {
      puVar3 = (undefined4 *)((int)puVar4 + -0x766);
      *puVar4 = puVar9;
    }
    if (!(bool)in_CY || (bool)in_ZR) {
      *puVar3 = 0x883c822;
      puVar3[-1] = unaff_r11;
      puVar3[-2] = puVar9;
      puVar3[-3] = pbVar7;
      puVar3[-4] = unaff_r4;
      puVar3[-5] = uVar6;
      puVar3[-6] = uVar5;
      puVar3[-7] = puVar3;
      if (!(bool)in_OV) {
        uVar5 = *(uint *)(unaff_r9 + 4);
        param_3 = *(uint *)(unaff_r9 + 8);
        unaff_r6 = *(uint *)(unaff_r9 + 0x10);
        puVar9 = *(uint **)(unaff_r9 + 0x14);
        unaff_r9 = *(byte **)(unaff_r9 + 0x18);
      }
      if ((bool)in_CY && !(bool)in_ZR) {
        *puVar9 = uVar5;
        puVar9[1] = param_3;
        puVar9[2] = unaff_r6;
        puVar9 = (uint *)((int)puVar9 + (-((int)unaff_r9 >> 0x20) - ((int)pbVar7 >> 0x20)));
      }
      if (!(bool)in_OV) {
        *puVar9 = (uint)*pbVar7;
      }
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    *puVar3 = puVar9;
    *(uint **)((int)puVar3 + -0x9b9) = puVar9;
    puVar3[-0x4de] = uVar11;
    puVar3[-0x4df] = register0x00000054;
    puVar3[-0x4e0] = puVar10;
    puVar3[-0x4e1] = unaff_r11;
    puVar3[-0x4e2] = pbVar7;
    puVar3[-0x4e3] = uVar6;
    puVar3[-0x4e4] = puVar3 + -0x4dd;
    return puVar3 + -0x4dd;
  }
  return *(undefined4 **)(unaff_r5 - 0x18);
}

