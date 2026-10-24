
/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x0883bf68) */

ulonglong FUN_0883bee8(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  undefined4 extraout_r3;
  undefined4 extraout_r3_00;
  undefined4 *unaff_r4;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 *unaff_r5;
  undefined1 *unaff_r6;
  undefined1 *unaff_r7;
  byte *unaff_r8;
  uint *unaff_r9;
  uint *puVar4;
  int iVar5;
  uint *puVar6;
  undefined4 unaff_r10;
  uint unaff_r11;
  undefined4 in_r12;
  undefined4 extraout_r12;
  undefined4 extraout_r12_00;
  undefined4 extraout_r12_01;
  undefined4 extraout_r12_02;
  undefined4 unaff_lr;
  char in_NG;
  undefined1 in_ZR;
  undefined1 in_CY;
  char in_OV;
  undefined4 in_cr4;
  undefined4 in_cr9;
  undefined4 in_cr12;
  
  puVar4 = unaff_r9;
  if ((bool)in_NG) {
    puVar4 = (uint *)((int)unaff_r9 + 0x566);
    *unaff_r9 = unaff_r11;
  }
  if (in_NG != in_OV) {
    unaff_lr = 0x883bef0;
    param_1 = (undefined4 *)func_0x09e6148c();
    param_4 = extraout_r3;
    in_r12 = extraout_r12;
  }
  if (!(bool)in_OV) {
    unaff_lr = 0x883bef4;
    param_1 = (undefined4 *)func_0x0759dc50();
    param_4 = extraout_r3_00;
    in_r12 = extraout_r12_00;
  }
  if (!(bool)in_ZR && in_NG == in_OV) {
    param_1 = (undefined4 *)*unaff_r5;
    unaff_r4 = (undefined4 *)unaff_r5[2];
    unaff_r6 = (undefined1 *)unaff_r5[3];
    unaff_r8 = (byte *)unaff_r5[4];
    puVar4 = (uint *)unaff_r5[5];
    unaff_r10 = unaff_r5[6];
    unaff_lr = unaff_r5[7];
  }
  if (!(bool)in_OV) {
    *unaff_r4 = param_4;
    unaff_r4[1] = unaff_r4;
    unaff_r4[2] = unaff_r5;
    unaff_r4[3] = unaff_r6;
    unaff_r4[4] = unaff_r10;
    unaff_r4[5] = unaff_lr;
    unaff_r4[6] = 0x883bf00;
  }
  puVar3 = unaff_r4;
  if (in_NG != in_OV) {
    puVar3 = unaff_r4 + -0x89;
    coprocessor_loadlong(4,in_cr9,unaff_r4);
  }
  if (!(bool)in_OV) {
    unaff_lr = 0x883bf04;
    param_1 = (undefined4 *)func_0x09f4e174();
    in_r12 = extraout_r12_01;
  }
  puVar6 = puVar4;
  if (in_NG != in_OV) {
    puVar6 = puVar4 + -0x99;
    coprocessor_storelong(8,in_cr4,puVar4);
  }
  if ((bool)in_OV) {
    unaff_r7 = unaff_r7 + -0x766;
    *unaff_r7 = (char)unaff_r5;
  }
  else {
    iVar5 = (int)puVar6 - ((int)puVar3 >> 0x12);
    unaff_r11 = (uint)(byte)*puVar6;
    puVar6 = (uint *)(uint)*unaff_r8;
    unaff_r8 = unaff_r8 + iVar5 * -0x800;
  }
  if (!(bool)in_NG) {
    unaff_r6 = unaff_r6 + -0x67b;
    *unaff_r6 = (char)unaff_r5;
  }
  if ((bool)in_CY && !(bool)in_ZR) {
    if (in_NG != in_OV) {
      unaff_lr = 0x883bf20;
      param_1 = (undefined4 *)func_0x0695d0c4();
      in_r12 = extraout_r12_02;
    }
    puVar4 = puVar6;
    if (in_NG != in_OV) {
      puVar4 = puVar6 + 0x68;
      coprocessor_load(8,in_cr4,puVar6);
    }
    if ((bool)in_ZR) {
      uVar2 = (uint)param_1 & (int)unaff_r8 << 9;
      param_1 = (undefined4 *)
                ((uint)param_1 & (int)unaff_r8 >> 0x20 & uVar2 & uVar2 & (int)unaff_r8 >> 8);
      puVar3 = (undefined4 *)((uint)param_1 & unaff_r11 << 0xf);
      unaff_r6 = (undefined1 *)
                 ((uint)puVar3 &
                 ((uint)puVar4 >> ((uint)unaff_r7 & 0x1f) |
                 (int)puVar4 << 0x20 - ((uint)unaff_r7 & 0x1f)));
    }
    puVar1 = param_1;
    if ((bool)in_NG) {
      puVar1 = param_1 + -0x100;
      *param_1 = puVar3;
    }
    if (!(bool)in_ZR && in_NG == in_OV) {
      *puVar3 = in_r12;
    }
    if (!(bool)in_CY || (bool)in_ZR) {
      *unaff_r5 = 0x883bf60;
      unaff_r5[-1] = in_r12;
      unaff_r5[-2] = unaff_r10;
    }
    if (!(bool)in_NG) {
      coprocessor_storelong(4,in_cr12,unaff_r5);
    }
    if ((bool)in_OV) {
      return ZEXT48(puVar1);
    }
    *(undefined1 **)(unaff_r7 + 4) = unaff_r6;
    *(undefined4 *)(unaff_r7 + 8) = unaff_r10;
    *(uint *)(unaff_r7 + 0xc) = unaff_r11;
    *(BADSPACEBASE **)(unaff_r7 + 0x10) = register0x00000054;
    *(undefined4 *)(unaff_r7 + 0x14) = unaff_lr;
    if (!(bool)in_ZR && (bool)in_NG == false) {
      func_0x0a369078(puVar1);
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  return *(ulonglong *)(puVar3 + -7);
}

