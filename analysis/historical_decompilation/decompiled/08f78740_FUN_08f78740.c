
/* WARNING: Control flow encountered bad instruction data */

undefined4 FUN_08f78740(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 extraout_r2;
  undefined4 extraout_r2_00;
  undefined4 extraout_r2_01;
  undefined4 extraout_r3;
  undefined4 extraout_r3_00;
  undefined4 extraout_r3_01;
  uint unaff_r5;
  undefined4 unaff_r6;
  undefined4 unaff_r7;
  int unaff_r8;
  undefined4 unaff_r9;
  undefined8 *unaff_r10;
  undefined8 *puVar1;
  undefined4 *unaff_r11;
  ushort *in_r12;
  ushort *puVar2;
  ushort *extraout_r12;
  ushort *extraout_r12_00;
  ushort *extraout_r12_01;
  ushort *puVar3;
  undefined4 unaff_lr;
  char in_NG;
  bool in_ZR;
  undefined1 in_CY;
  char in_OV;
  undefined1 uVar4;
  bool bVar5;
  bool bVar6;
  undefined4 in_cr12;
  
  uVar4 = false;
  if (in_ZR) {
    puVar2 = in_r12 + -0x2e;
    unaff_r11 = (undefined4 *)(uint)*in_r12;
    puVar3 = (ushort *)
             ((uint)puVar2 >> ((uint)unaff_r11 & 0x1f) |
             (int)puVar2 << 0x20 - ((uint)unaff_r11 & 0x1f));
    in_CY = puVar3 <= puVar2;
    in_OV = SBORROW4((int)puVar2,(int)puVar3);
    in_r12 = (ushort *)((int)puVar2 - (int)puVar3);
    in_NG = (int)in_r12 < 0;
    uVar4 = in_r12 == (ushort *)0x0;
  }
  if (!(bool)uVar4 && in_NG == in_OV) {
    unaff_r11 = unaff_r11 + 0xbb;
  }
  puVar1 = unaff_r10;
  if (in_NG != in_OV) {
    puVar1 = unaff_r10 + 0x5e;
    *puVar1 = unaff_r10[0x10];
    unaff_r10[0x5f] = unaff_r10[0x11];
    unaff_r10[0x60] = unaff_r10[0x12];
    unaff_r10[0x61] = unaff_r10[0x13];
    unaff_r10[0x62] = unaff_r10[0x14];
    unaff_r10[99] = unaff_r10[0x15];
  }
  if (!(bool)uVar4 && in_NG == in_OV) {
    unaff_lr = 0x8f78798;
    param_1 = func_0x082676cc(param_1);
    param_3 = extraout_r2;
    param_4 = extraout_r3;
    in_r12 = extraout_r12;
  }
  if (!(bool)uVar4 && in_NG == in_OV) {
    coprocessor_storelong(0xc,in_cr12,in_r12);
  }
  if (in_NG == in_OV) {
    unaff_lr = 0x8f787a4;
    param_1 = func_0x0826bad8();
    param_3 = extraout_r2_00;
    param_4 = extraout_r3_00;
    puVar3 = extraout_r12_00;
  }
  else {
    puVar3 = in_r12 + 0x196;
    coprocessor_load(0xc,in_cr12,in_r12);
  }
  if ((bool)in_CY && !(bool)uVar4) {
    unaff_lr = 0x8f787a8;
    param_1 = func_0x07eabadc();
    param_3 = extraout_r2_01;
    param_4 = extraout_r3_01;
    puVar3 = extraout_r12_01;
  }
  bVar5 = false;
  if ((bool)uVar4) {
    in_CY = (ushort *)(unaff_r8 * 0x2000000) <= puVar3;
    puVar3 = puVar3 + unaff_r8 * -0x1000000;
    bVar5 = puVar3 == (ushort *)0x0;
  }
  bVar6 = false;
  if (bVar5) {
    in_CY = (ushort *)((int)puVar1 >> 0x19) <= puVar3;
    puVar3 = (ushort *)((int)puVar3 - ((int)puVar1 >> 0x19));
    bVar6 = puVar3 == (ushort *)0x0;
  }
  bVar5 = false;
  if (bVar6) {
    in_CY = (ushort *)((int)puVar3 >> 0x17) <= puVar3;
    bVar5 = puVar3 == (ushort *)((int)puVar3 >> 0x17);
  }
  if (bVar5) {
    unaff_r11 = (undefined4 *)(unaff_r5 & unaff_r8 << 0x11);
  }
  if (!(bool)in_CY || bVar5) {
    if ((bool)in_CY && !bVar5) {
      *unaff_r11 = param_3;
      unaff_r11[1] = param_4;
      unaff_r11[2] = unaff_r6;
      unaff_r11[3] = unaff_r7;
      unaff_r11[4] = unaff_r8;
      unaff_r11[5] = unaff_r9;
      unaff_r11[6] = unaff_r11;
      unaff_r11[7] = unaff_lr;
      unaff_r11[8] = 0x8f78814;
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  return param_1;
}

