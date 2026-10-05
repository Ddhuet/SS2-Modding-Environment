
/* WARNING: Control flow encountered bad instruction data */

undefined8 FUN_08357604(ushort *param_1,uint param_2,uint param_3,int param_4)

{
  ushort *puVar1;
  int iVar2;
  int iVar3;
  int unaff_r4;
  byte *unaff_r5;
  uint *unaff_r6;
  uint unaff_r7;
  uint unaff_r8;
  uint *unaff_r9;
  uint *puVar4;
  uint *puVar5;
  uint unaff_r10;
  uint unaff_r11;
  char in_NG;
  bool in_ZR;
  bool in_CY;
  bool in_OV;
  bool bVar6;
  undefined4 in_cr0;
  
  if (!in_CY) {
    unaff_r5 = unaff_r5 + -0x5b3;
    unaff_r11 = (uint)*unaff_r5;
  }
  puVar5 = unaff_r9;
  if (!in_OV) {
    puVar5 = unaff_r9 + 0xc2;
    unaff_r11 = *unaff_r9;
  }
  iVar2 = param_4;
  if (in_ZR || (bool)in_NG != in_OV) {
    iVar2 = param_4 + 0xd4;
    coprocessor_load(8,in_cr0,param_4);
  }
  if ((bool)in_NG != in_OV) {
    iVar2 = 0x8574;
  }
  if (in_ZR) {
    register0x00000054 = *(BADSPACEBASE **)(unaff_r5 + -4);
    unaff_r10 = *(uint *)(unaff_r5 + -0xc);
    unaff_r7 = *(uint *)(unaff_r5 + -0x10);
    unaff_r4 = *(int *)(unaff_r5 + -0x18);
    iVar2 = *(int *)(unaff_r5 + -0x1c);
    param_1 = *(ushort **)(unaff_r5 + -0x20);
    unaff_r5 = unaff_r5 + -0x24;
  }
  if (!in_CY) {
    unaff_r5 = unaff_r5 + -0x4b3;
    param_1 = (ushort *)(uint)*unaff_r5;
  }
  puVar4 = puVar5;
  if (!in_OV) {
    puVar4 = puVar5 + 0xc2;
    unaff_r11 = *puVar5;
  }
  iVar3 = iVar2;
  if (in_ZR || (bool)in_NG != in_OV) {
    iVar3 = iVar2 + 0xd4;
    coprocessor_load(8,in_cr0,iVar2);
  }
  if ((bool)in_NG != in_OV) {
    iVar3 = 0x8574;
  }
  if (in_ZR) {
    register0x00000054 = *(BADSPACEBASE **)(unaff_r5 + -4);
    unaff_r10 = *(uint *)(unaff_r5 + -0xc);
    unaff_r7 = *(uint *)(unaff_r5 + -0x10);
    unaff_r4 = *(int *)(unaff_r5 + -0x18);
    iVar3 = *(int *)(unaff_r5 + -0x1c);
    param_1 = *(ushort **)(unaff_r5 + -0x20);
    unaff_r5 = unaff_r5 + -0x24;
  }
  if (!in_CY) {
    register0x00000054 = (BADSPACEBASE *)(uint)*(byte *)(unaff_r4 + -0xcb3);
  }
  bVar6 = in_CY;
  if ((bool)in_NG != in_OV) {
    bVar6 = CARRY4((uint)param_1,unaff_r8) || CARRY4((int)param_1 + unaff_r8,(uint)in_CY);
    in_OV = SCARRY4((int)param_1,unaff_r8) != SCARRY4((int)param_1 + unaff_r8,(uint)in_CY);
    unaff_r11 = (int)param_1 + in_CY + unaff_r8;
    in_NG = (int)unaff_r11 < 0;
    in_ZR = unaff_r11 == 0;
  }
  puVar1 = param_1;
  if ((bool)in_NG != in_OV) {
    puVar1 = (ushort *)((int)param_1 * 2);
    unaff_r11 = (uint)*param_1;
  }
  puVar5 = puVar4;
  if (!in_OV) {
    puVar5 = puVar4 + 0xec;
    unaff_r11 = *puVar4;
  }
  iVar2 = iVar3;
  if (in_ZR || (bool)in_NG != in_OV) {
    iVar2 = iVar3 + 0xd4;
    coprocessor_load(8,in_cr0,iVar3);
  }
  if ((bool)in_NG != in_OV) {
    iVar2 = 0x8574;
  }
  if (in_ZR) {
    register0x00000054 = *(BADSPACEBASE **)(unaff_r5 + -4);
    unaff_r10 = *(uint *)(unaff_r5 + -0xc);
    unaff_r7 = *(uint *)(unaff_r5 + -0x10);
    iVar2 = *(int *)(unaff_r5 + -0x1c);
    puVar1 = *(ushort **)(unaff_r5 + -0x20);
    unaff_r5 = unaff_r5 + -0x24;
  }
  if (!bVar6) {
    unaff_r5 = unaff_r5 + -0x4b3;
    puVar1 = (ushort *)(uint)*unaff_r5;
  }
  if (!in_OV) {
    unaff_r11 = *puVar5;
  }
  if (in_ZR || (bool)in_NG != in_OV) {
    coprocessor_load(8,in_cr0,iVar2);
  }
  if (in_ZR) {
    register0x00000054 = *(BADSPACEBASE **)(unaff_r5 + -4);
    unaff_r10 = *(uint *)(unaff_r5 + -0xc);
    unaff_r7 = *(uint *)(unaff_r5 + -0x10);
    puVar1 = *(ushort **)(unaff_r5 + -0x20);
    unaff_r5 = unaff_r5 + -0x24;
  }
  if (!bVar6) {
    puVar1 = (ushort *)(uint)unaff_r5[-0x4b3];
  }
  if (!(bool)in_NG) {
    if (!bVar6) {
      *unaff_r6 = param_2;
      unaff_r6[1] = param_3;
      unaff_r6[2] = unaff_r7;
      unaff_r6[3] = unaff_r10;
      unaff_r6[4] = unaff_r11;
      unaff_r6[5] = (uint)register0x00000054;
      *unaff_r6 = param_2;
      unaff_r6[1] = (uint)unaff_r6 | (int)unaff_r6 << 0x19;
      unaff_r6[2] = unaff_r7;
      unaff_r6[3] = unaff_r10;
      unaff_r6[4] = unaff_r11;
      unaff_r6[5] = (uint)register0x00000054;
      *unaff_r6 = param_2;
      unaff_r6[1] = (uint)unaff_r6 | (int)unaff_r6 << 0x19;
      unaff_r6[2] = unaff_r7;
      unaff_r6[3] = unaff_r10;
      unaff_r6[4] = unaff_r11;
      unaff_r6[5] = (uint)register0x00000054;
      param_3 = (uint)unaff_r6 | (int)unaff_r6 << 0x19;
      *unaff_r6 = param_2;
      unaff_r6[1] = param_3;
      unaff_r6[2] = unaff_r7;
      unaff_r6[3] = unaff_r10;
      unaff_r6[4] = unaff_r11;
      unaff_r6[5] = (uint)register0x00000054;
    }
    if (in_OV != false) {
      *unaff_r6 = param_3;
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  return CONCAT44(param_2 - 0x18,puVar1);
}

