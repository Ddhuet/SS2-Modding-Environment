
/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x085d750e) */
/* WARNING: Removing unreachable block (ram,0x085d7522) */

ulonglong FUN_085d747e(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined1 *param_4)

{
  undefined4 uVar1;
  undefined4 extraout_r2;
  undefined4 extraout_r2_00;
  undefined4 extraout_r2_01;
  undefined4 extraout_r2_02;
  undefined4 extraout_r2_03;
  undefined4 extraout_r2_04;
  undefined4 extraout_r2_05;
  undefined1 *extraout_r3;
  undefined1 *extraout_r3_00;
  undefined1 *extraout_r3_01;
  undefined1 *extraout_r3_02;
  undefined1 *extraout_r3_03;
  undefined1 *extraout_r3_04;
  undefined1 *extraout_r3_05;
  undefined1 *extraout_r3_06;
  undefined1 *extraout_r3_07;
  undefined1 *extraout_r3_08;
  undefined1 *extraout_r3_09;
  undefined1 *extraout_r3_10;
  undefined1 *extraout_r3_11;
  undefined1 *extraout_r3_12;
  byte *unaff_r4;
  byte *pbVar2;
  undefined4 uVar3;
  byte *unaff_r5;
  byte *pbVar4;
  undefined4 unaff_r6;
  char *unaff_r7;
  byte *unaff_r8;
  byte *unaff_r9;
  uint unaff_r10;
  undefined4 uVar5;
  int unaff_r11;
  byte *pbVar6;
  int in_r12;
  int extraout_r12;
  int extraout_r12_00;
  int extraout_r12_01;
  int extraout_r12_02;
  int extraout_r12_03;
  int extraout_r12_04;
  int extraout_r12_05;
  undefined4 uVar7;
  undefined4 unaff_lr;
  undefined4 uVar8;
  char in_NG;
  undefined1 in_ZR;
  undefined1 in_CY;
  char in_OV;
  undefined4 in_cr8;
  undefined4 in_cr13;
  undefined4 in_cr14;
  undefined4 in_cr15;
  undefined8 uVar9;
  ulonglong uVar10;
  
  if (!(bool)in_NG) {
    *(undefined4 *)unaff_r9 = param_1;
    *(undefined4 *)(unaff_r9 + 4) = param_3;
    *(char **)(unaff_r9 + 8) = unaff_r7;
    *(byte **)(unaff_r9 + 0xc) = unaff_r8;
    *(uint *)(unaff_r9 + 0x10) = unaff_r10;
    *(int *)(unaff_r9 + 0x14) = in_r12;
    *(BADSPACEBASE **)(unaff_r9 + 0x18) = register0x00000054;
    unaff_r9[0x1c] = 0x86;
    unaff_r9[0x1d] = 0x74;
    unaff_r9[0x1e] = 0x5d;
    unaff_r9[0x1f] = 8;
  }
  if (!(bool)in_CY || (bool)in_ZR) {
    param_1 = *(undefined4 *)unaff_r9;
    param_3 = *(undefined4 *)(unaff_r9 + 4);
    unaff_r4 = *(byte **)(unaff_r9 + 8);
    unaff_r6 = *(undefined4 *)(unaff_r9 + 0xc);
    unaff_r11 = *(int *)(unaff_r9 + 0x10);
    in_r12 = *(int *)(unaff_r9 + 0x14);
    register0x00000054 = *(BADSPACEBASE **)(unaff_r9 + 0x18);
    unaff_lr = *(undefined4 *)(unaff_r9 + 0x1c);
  }
  if ((bool)in_ZR || in_NG != in_OV) {
    *(undefined4 *)(unaff_r5 + 4) = param_1;
    *(undefined4 *)(unaff_r5 + 8) = param_2;
    *(undefined1 **)(unaff_r5 + 0xc) = param_4;
    *(byte **)(unaff_r5 + 0x10) = unaff_r5;
    *(char **)(unaff_r5 + 0x14) = unaff_r7;
    *(byte **)(unaff_r5 + 0x18) = unaff_r8;
    *(byte **)(unaff_r5 + 0x1c) = unaff_r9;
    *(int *)(unaff_r5 + 0x20) = unaff_r11;
    unaff_r5[0x24] = 0x8e;
    unaff_r5[0x25] = 0x74;
    unaff_r5[0x26] = 0x5d;
    unaff_r5[0x27] = 8;
  }
  if (!(bool)in_CY || (bool)in_ZR) {
    return CONCAT44(param_2,*(undefined4 *)(unaff_r8 + -0x30));
  }
  if (!(bool)in_CY || (bool)in_ZR) {
    return CONCAT44(param_2,*(undefined4 *)unaff_r9);
  }
  if (!(bool)in_CY || (bool)in_ZR) {
    return *(ulonglong *)(unaff_r9 + 4);
  }
  if ((bool)in_CY) {
    unaff_r8 = (byte *)((uint)unaff_r5 ^ 0x880000);
  }
  if (!(bool)in_CY || (bool)in_ZR) {
    return CONCAT44(param_2,*(undefined4 *)unaff_r8);
  }
  *(undefined4 *)unaff_r9 = param_1;
  *(undefined4 *)(unaff_r9 + 4) = param_3;
  *(byte **)(unaff_r9 + 8) = unaff_r4;
  *(byte **)(unaff_r9 + 0xc) = unaff_r5;
  *(undefined4 *)(unaff_r9 + 0x10) = unaff_r6;
  *(int *)(unaff_r9 + 0x14) = unaff_r11;
  unaff_r9[0x18] = 0xa2;
  unaff_r9[0x19] = 0x74;
  unaff_r9[0x1a] = 0x5d;
  unaff_r9[0x1b] = 8;
  if (in_NG != in_OV) {
    unaff_lr = 0x85d74a6;
    uVar9 = func_0x0705fdca();
    param_2 = (undefined4)((ulonglong)uVar9 >> 0x20);
    param_1 = (undefined4)uVar9;
    param_3 = extraout_r2;
    param_4 = extraout_r3;
    in_r12 = extraout_r12;
  }
  uVar10 = CONCAT44(param_2,param_1);
  pbVar6 = (byte *)(unaff_r11 + 0x274);
  coprocessor_load(9,in_cr8,pbVar6);
  if (!(bool)in_CY || (bool)in_ZR) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (in_NG == in_OV) {
    unaff_lr = 0x85d74b2;
    uVar10 = func_0x074b8ad6();
    param_3 = extraout_r2_00;
    param_4 = extraout_r3_00;
    in_r12 = extraout_r12_00;
  }
  if ((bool)in_CY && !(bool)in_ZR) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  pbVar4 = unaff_r5;
  if (!(bool)in_ZR) {
    pbVar4 = unaff_r5 + -0x758;
    unaff_r7 = (char *)(uint)*unaff_r5;
  }
  if (!(bool)in_CY || (bool)in_ZR) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(char **)(unaff_r7 + 0x211) = unaff_r7;
  *(undefined1 **)pbVar4 = param_4;
  *(char **)(pbVar4 + 4) = unaff_r7;
  *(byte **)(pbVar4 + 8) = pbVar6;
  *(int *)(pbVar4 + 0xc) = in_r12;
  pbVar4[0x10] = 0xc6;
  pbVar4[0x11] = 0x74;
  pbVar4[0x12] = 0x5d;
  pbVar4[0x13] = 8;
  if (in_NG == in_OV) {
    unaff_lr = 0x85d74ca;
    uVar10 = func_0x074b9fb6();
    param_3 = extraout_r2_01;
    param_4 = extraout_r3_01;
    in_r12 = extraout_r12_01;
  }
  if ((bool)in_CY && !(bool)in_ZR) {
    *(int *)unaff_r8 = (int)(uVar10 >> 0x20);
    *(undefined1 **)(unaff_r8 + 4) = param_4;
    *(char **)(unaff_r8 + 8) = unaff_r7;
    *(byte **)(unaff_r8 + 0xc) = pbVar6;
    unaff_r8[0x10] = 0xd2;
    unaff_r8[0x11] = 0x74;
    unaff_r8[0x12] = 0x5d;
    unaff_r8[0x13] = 8;
    *(undefined1 **)unaff_r7 = param_4;
    *(char **)(unaff_r7 + 4) = unaff_r7;
    *(byte **)(unaff_r7 + 8) = unaff_r8;
    *(uint *)(unaff_r7 + 0xc) = unaff_r10;
    *(int *)(unaff_r7 + 0x10) = in_r12;
    *(undefined4 *)(unaff_r7 + 0x14) = unaff_lr;
  }
  if (in_NG == in_OV) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (!(bool)in_NG) {
    unaff_r8 = unaff_r8 + -0xa8a;
    unaff_r10 = (uint)*unaff_r8;
  }
  if (!(bool)in_OV) {
    *(int *)unaff_r8 = (int)uVar10;
    *(undefined4 *)(unaff_r8 + 4) = param_3;
    *(byte **)(unaff_r8 + 8) = unaff_r4;
    *(byte **)(unaff_r8 + 0xc) = pbVar4;
    *(undefined4 *)(unaff_r8 + 0x10) = unaff_r6;
    *(byte **)(unaff_r8 + 0x14) = pbVar6;
    unaff_r8[0x18] = 0xe2;
    unaff_r8[0x19] = 0x74;
    unaff_r8[0x1a] = 0x5d;
    unaff_r8[0x1b] = 8;
  }
  if ((bool)in_CY && !(bool)in_ZR) {
    *(int *)unaff_r8 = (int)uVar10;
    *(undefined4 *)(unaff_r8 + 4) = param_3;
    *(byte **)(unaff_r8 + 8) = unaff_r4;
    *(undefined4 *)(unaff_r8 + 0xc) = unaff_r6;
    *(byte **)(unaff_r8 + 0x10) = unaff_r8;
    *(uint *)(unaff_r8 + 0x14) = unaff_r10;
    *(int *)(unaff_r8 + 0x18) = in_r12;
    *(undefined4 *)(unaff_r8 + 0x1c) = unaff_lr;
  }
  if (in_NG != in_OV) {
    unaff_lr = 0x85d74e6;
    uVar10 = func_0x06ff570a();
    param_3 = extraout_r2_02;
    param_4 = extraout_r3_02;
    in_r12 = extraout_r12_02;
  }
  if ((bool)in_ZR || in_NG != in_OV) {
    unaff_r8 = unaff_r8 + 0x2a8;
    coprocessor_store(8,in_cr8,unaff_r8);
  }
  if ((bool)in_NG) {
    pbVar2 = unaff_r4 + -0x858;
    pbVar4 = (byte *)(uint)*unaff_r4;
  }
  else {
    unaff_r4[-0x88a] = (byte)unaff_r10;
    pbVar2 = unaff_r4;
  }
  if (!(bool)in_CY || (bool)in_ZR) {
    unaff_lr = 0x85d74f6;
    uVar10 = func_0x078e39c6();
    param_3 = extraout_r2_03;
    param_4 = extraout_r3_03;
    in_r12 = extraout_r12_03;
  }
  uVar3 = (undefined4)(uVar10 >> 0x20);
  uVar1 = (undefined4)uVar10;
  if (!(bool)in_CY || (bool)in_ZR) {
    return CONCAT44(uVar3,*(undefined4 *)(in_r12 + 4));
  }
  if ((bool)in_CY && !(bool)in_ZR) {
    return uVar10;
  }
  if (!(bool)in_CY || (bool)in_ZR) {
    return CONCAT44(uVar3,*(undefined4 *)(in_r12 + 4));
  }
  if ((bool)in_CY && !(bool)in_ZR) {
    pbVar6 = (byte *)(unaff_r11 + 0x294);
    uVar1 = *(undefined4 *)(unaff_r11 + 0x298);
    param_3 = *(undefined4 *)(unaff_r11 + 0x29c);
    pbVar2 = *(byte **)(unaff_r11 + 0x2a0);
    pbVar4 = *(byte **)(unaff_r11 + 0x2a4);
    unaff_r10 = *(uint *)(unaff_r11 + 0x2a8);
    in_r12 = *(int *)(unaff_r11 + 0x2ac);
    register0x00000054 = *(BADSPACEBASE **)(unaff_r11 + 0x2b0);
    unaff_lr = *(undefined4 *)(unaff_r11 + 0x2b4);
  }
  uVar9 = CONCAT44(uVar3,uVar1);
  if (!(bool)in_NG) {
    return CONCAT44(uVar3,*(undefined4 *)(pbVar6 + 4));
  }
  if ((bool)in_CY && !(bool)in_ZR) {
    uVar8 = *(undefined4 *)unaff_r7;
    uVar7 = *(undefined4 *)(unaff_r7 + -4);
    uVar5 = *(undefined4 *)(unaff_r7 + -8);
    uVar3 = *(undefined4 *)(unaff_r7 + -0xc);
    uVar1 = *(undefined4 *)(unaff_r7 + -0x10);
    *(undefined4 *)unaff_r8 = *(undefined4 *)(unaff_r7 + -0x14);
    *(undefined4 *)(unaff_r8 + 4) = uVar1;
    *(undefined1 **)(unaff_r8 + 8) = param_4;
    *(undefined4 *)(unaff_r8 + 0xc) = uVar3;
    *(undefined4 *)(unaff_r8 + 0x10) = unaff_r6;
    *(char **)(unaff_r8 + 0x14) = unaff_r7 + -0x18;
    *(byte **)(unaff_r8 + 0x18) = unaff_r9;
    *(undefined4 *)(unaff_r8 + 0x1c) = uVar5;
    *(byte **)(unaff_r8 + 0x20) = pbVar6;
    *(undefined4 *)(unaff_r8 + 0x24) = uVar7;
    *(undefined4 *)(unaff_r8 + 0x28) = uVar8;
    unaff_r8[0x2c] = 0x1e;
    unaff_r8[0x2d] = 0x75;
    unaff_r8[0x2e] = 0x5d;
    unaff_r8[0x2f] = 8;
    return *(ulonglong *)(unaff_r8 + -0x2c);
  }
  if (in_OV == '\x01') {
    if ((bool)in_CY && !(bool)in_ZR) {
      return *(ulonglong *)(unaff_r7 + -0x30);
    }
    if (!(bool)in_CY || (bool)in_ZR) {
      *(undefined4 *)unaff_r7 = uVar1;
      *(undefined4 *)(unaff_r7 + 4) = uVar3;
      *(undefined1 **)(unaff_r7 + 8) = param_4;
      *(byte **)(unaff_r7 + 0xc) = pbVar2;
      *(undefined4 *)(unaff_r7 + 0x10) = unaff_r6;
      *(char **)(unaff_r7 + 0x14) = unaff_r7;
      *(byte **)(unaff_r7 + 0x18) = unaff_r9;
      *(uint *)(unaff_r7 + 0x1c) = unaff_r10;
      *(byte **)(unaff_r7 + 0x20) = pbVar6;
      *(BADSPACEBASE **)(unaff_r7 + 0x24) = register0x00000054;
      *(undefined4 *)(unaff_r7 + 0x28) = unaff_lr;
      unaff_r7[0x2c] = '2';
      unaff_r7[0x2d] = 'u';
      unaff_r7[0x2e] = ']';
      unaff_r7[0x2f] = '\b';
    }
    else {
      *(undefined4 *)unaff_r7 = uVar1;
      *(undefined4 *)(unaff_r7 + 4) = uVar3;
      *(undefined1 **)(unaff_r7 + 8) = param_4;
      *(byte **)(unaff_r7 + 0xc) = pbVar2;
      *(undefined4 *)(unaff_r7 + 0x10) = unaff_r6;
      *(char **)(unaff_r7 + 0x14) = unaff_r7;
      *(byte **)(unaff_r7 + 0x18) = unaff_r8;
      *(uint *)(unaff_r7 + 0x1c) = unaff_r10;
      *(byte **)(unaff_r7 + 0x20) = pbVar6;
      *(BADSPACEBASE **)(unaff_r7 + 0x24) = register0x00000054;
      *(undefined4 *)(unaff_r7 + 0x28) = unaff_lr;
      unaff_r7[0x2c] = '6';
      unaff_r7[0x2d] = 'u';
      unaff_r7[0x2e] = ']';
      unaff_r7[0x2f] = '\b';
    }
    if ((bool)in_ZR) {
      coprocessor_storelong(0xd,in_cr13,pbVar6 + 0x36c);
      coprocessor_storelong(0xf,in_cr14,pbVar6);
      coprocessor_load(0xf,in_cr15,pbVar6);
      pbVar6 = pbVar6 + 0x3b4;
    }
    else {
      unaff_lr = 0x85d7542;
      uVar9 = func_0x074930fa();
      param_3 = extraout_r2_04;
      param_4 = extraout_r3_04;
      in_r12 = extraout_r12_04;
    }
    if (in_NG != in_OV) {
      unaff_lr = 0x85d7546;
      uVar9 = func_0x070930be();
      param_3 = extraout_r2_05;
      param_4 = extraout_r3_05;
      in_r12 = extraout_r12_05;
    }
    if (in_NG != in_OV) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if (in_NG != in_OV) {
      *(undefined4 *)(unaff_r8 + 4) = param_3;
      *(undefined1 **)(unaff_r8 + 8) = param_4;
      *(undefined4 *)(unaff_r8 + 0xc) = unaff_r6;
      *(char **)(unaff_r8 + 0x10) = unaff_r7;
      *(byte **)(unaff_r8 + 0x14) = unaff_r8;
      *(uint *)(unaff_r8 + 0x18) = unaff_r10;
      *(byte **)(unaff_r8 + 0x1c) = pbVar6;
      *(int *)(unaff_r8 + 0x20) = in_r12;
      *(undefined4 *)(unaff_r8 + 0x24) = unaff_lr;
      unaff_r8[0x28] = 0x52;
      unaff_r8[0x29] = 0x75;
      unaff_r8[0x2a] = 0x5d;
      unaff_r8[0x2b] = 8;
    }
    if (!(bool)in_CY || (bool)in_ZR) {
      *(undefined8 *)unaff_r8 = uVar9;
      *(undefined1 **)(unaff_r8 + 8) = param_4;
      *(byte **)(unaff_r8 + 0xc) = pbVar2;
      *(byte **)(unaff_r8 + 0x10) = pbVar4;
      *(char **)(unaff_r8 + 0x14) = unaff_r7;
      *(uint *)(unaff_r8 + 0x18) = unaff_r10;
      *(byte **)(unaff_r8 + 0x1c) = pbVar6;
      *(undefined4 *)(unaff_r8 + 0x20) = unaff_lr;
      unaff_r8[0x24] = 0x56;
      unaff_r8[0x25] = 0x75;
      unaff_r8[0x26] = 0x5d;
      unaff_r8[0x27] = 8;
    }
    if (in_NG != in_OV) {
      func_0x074c6442();
      param_4 = extraout_r3_06;
    }
    if ((bool)in_ZR || in_NG != in_OV) {
      func_0x074c644e();
      param_4 = extraout_r3_07;
    }
    if (in_NG != in_OV) {
      func_0x0748644e();
      param_4 = extraout_r3_08;
    }
    if (in_NG != in_OV) {
      func_0x07006452();
      param_4 = extraout_r3_09;
    }
    if (in_NG == in_OV) {
      func_0x07082856();
      param_4 = extraout_r3_10;
    }
    if (in_NG == in_OV) {
      func_0x073f2416();
      param_4 = extraout_r3_11;
    }
    if (in_NG == in_OV) {
      func_0x067e9012();
      param_4 = extraout_r3_12;
    }
    if ((bool)in_CY && !(bool)in_ZR) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if ((bool)in_CY && !(bool)in_ZR) {
      *(byte **)(unaff_r10 + (int)unaff_r8 * 0x2000) = pbVar2;
    }
    if ((bool)in_OV) {
      *(char **)(unaff_r10 + 0x879) = unaff_r7;
    }
    else {
      unaff_r7 = (char *)(uint)*unaff_r9;
      unaff_r9 = unaff_r9 + -0x579;
    }
    if ((bool)in_CY && !(bool)in_ZR) {
      unaff_r8 = (byte *)(uint)*pbVar6;
    }
    if ((bool)in_NG) {
      *unaff_r7 = (char)unaff_r7 + -0x44;
      param_4 = param_4 + -0x644;
    }
    if ((bool)in_OV) {
      param_4 = param_4 + -0x464;
    }
    if ((bool)in_NG) {
      *param_4 = (char)pbVar4;
    }
    if (!(bool)in_CY || (bool)in_ZR) {
      return *(ulonglong *)(*(int *)(unaff_r8 + 0x18) + 4);
    }
    if ((bool)in_CY && !(bool)in_ZR) {
      return (ulonglong)*(uint *)(unaff_r9 + 4);
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  return CONCAT44(uVar3,*(undefined4 *)(unaff_r8 + -0x2c));
}

