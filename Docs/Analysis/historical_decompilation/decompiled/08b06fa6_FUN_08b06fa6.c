
/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Type propagation algorithm not settling */

undefined2 *
FUN_08b06fa6(undefined2 *param_1,undefined2 *param_2,undefined4 param_3,undefined4 param_4)

{
  undefined2 *puVar1;
  undefined4 extraout_r3;
  uint unaff_r4;
  uint unaff_r5;
  undefined4 unaff_r7;
  undefined4 unaff_r8;
  int unaff_r9;
  uint unaff_r10;
  uint uVar2;
  undefined4 *unaff_r11;
  undefined4 *puVar3;
  uint in_r12;
  uint extraout_r12;
  undefined4 unaff_lr;
  char in_NG;
  undefined1 in_ZR;
  undefined1 in_CY;
  char in_OV;
  undefined4 in_cr10;
  undefined8 uVar4;
  
  if ((bool)in_ZR) {
    unaff_r11 = (undefined4 *)((uint)param_1 & (int)param_1 << (unaff_r5 & 0xff));
    unaff_r5 = (uint)param_1 & (int)param_1 << (in_r12 & 0xff);
    unaff_r10 = (uint)param_1 & (int)param_1 << 0x18;
    param_2 = param_1;
  }
  if (!(bool)in_CY || (bool)in_ZR) {
    *unaff_r11 = param_1;
    unaff_r11[1] = param_4;
    unaff_r11[2] = unaff_r4;
    unaff_r11[3] = unaff_r5;
    unaff_r11[4] = unaff_r7;
    unaff_r11[5] = unaff_r9;
    unaff_r11[6] = unaff_r11;
    unaff_r11[7] = in_r12;
    unaff_r11[8] = 0x8b06fce;
    unaff_r11 = unaff_r11 + 9;
  }
  if (in_NG == in_OV) {
    return param_1;
  }
  if (in_NG != in_OV) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (!(bool)in_ZR && in_NG == in_OV) {
    unaff_lr = 0x8b06fd6;
    uVar4 = func_0x079e9aca();
    param_2 = (undefined2 *)((ulonglong)uVar4 >> 0x20);
    param_1 = (undefined2 *)uVar4;
    param_4 = extraout_r3;
    in_r12 = extraout_r12;
  }
  if (!(bool)in_ZR && in_NG == in_OV) {
    param_2 = param_2 + 0x176;
  }
  puVar1 = param_2;
  if ((bool)in_OV) {
    puVar1 = param_2 + 0x156;
    coprocessor_load(0xb,in_cr10,param_2);
  }
  if (!(bool)in_NG) {
    coprocessor_storelong(0xb,in_cr10,puVar1);
  }
  if (!(bool)in_CY || (bool)in_ZR) {
    if ((bool)in_CY && !(bool)in_ZR) {
      return *(undefined2 **)(unaff_r9 + 4);
    }
    if ((bool)in_CY && !(bool)in_ZR) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if (!(bool)in_CY || (bool)in_ZR) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    uVar2 = unaff_r10;
    if (in_NG == in_OV) {
      param_4 = *(undefined4 *)(unaff_r10 + 8);
      unaff_r4 = *(uint *)(unaff_r10 + 0xc);
      unaff_r5 = *(uint *)(unaff_r10 + 0x10);
      unaff_r7 = *(undefined4 *)(unaff_r10 + 0x14);
      unaff_r9 = *(int *)(unaff_r10 + 0x18);
      uVar2 = *(uint *)(unaff_r10 + 0x1c);
      in_r12 = *(uint *)(unaff_r10 + 0x20);
      unaff_lr = *(undefined4 *)(unaff_r10 + 0x24);
    }
    if (!(bool)in_CY || (bool)in_ZR) {
      unaff_r11[1] = param_4;
      unaff_r11[2] = unaff_r5;
      unaff_r11[3] = unaff_r7;
      unaff_r11[4] = unaff_r8;
      unaff_r11[5] = uVar2;
      unaff_r11[6] = in_r12;
      unaff_r11[7] = unaff_lr;
      unaff_r11[8] = param_4;
      unaff_r11[9] = unaff_r4;
      unaff_r11[10] = unaff_r5;
      unaff_r11[0xb] = unaff_r7;
      unaff_r11[0xc] = unaff_r8;
      unaff_r11[0xd] = unaff_r9;
      unaff_r11[0xe] = unaff_r11 + 7;
      unaff_r11[0xf] = in_r12;
      unaff_r11[0x10] = register0x00000054;
      puVar3 = unaff_r11 + 0x10;
    }
    else {
      unaff_r5 = *(uint *)(uVar2 + 0x10);
      puVar3 = *(undefined4 **)(uVar2 + 0x1c);
    }
    if ((bool)in_ZR) {
      *(short *)((int)puVar3 + -0xca) = (short)unaff_r5;
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  return param_1;
}

