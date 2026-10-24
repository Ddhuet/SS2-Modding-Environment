
/* WARNING: Control flow encountered bad instruction data */

void FUN_0889d4b6(uint param_1,undefined4 param_2,uint param_3,uint param_4,uint param_5)

{
  uint extraout_r1;
  uint extraout_r1_00;
  uint extraout_r1_01;
  uint extraout_r1_02;
  uint extraout_r1_03;
  uint extraout_r1_04;
  uint extraout_r2;
  uint extraout_r2_00;
  uint extraout_r3;
  uint extraout_r3_00;
  uint extraout_r3_01;
  uint extraout_r3_02;
  uint extraout_r3_03;
  uint extraout_r3_04;
  uint unaff_r4;
  uint unaff_r5;
  uint unaff_r6;
  uint unaff_r7;
  uint unaff_r8;
  uint unaff_r9;
  uint *unaff_r10;
  uint *puVar1;
  uint unaff_r11;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint *in_r12;
  uint *extraout_r12;
  uint *extraout_r12_00;
  uint *extraout_r12_01;
  uint *extraout_r12_02;
  uint *extraout_r12_03;
  uint *extraout_r12_04;
  uint *extraout_r12_05;
  uint *extraout_r12_06;
  uint *extraout_r12_07;
  uint *extraout_r12_08;
  uint *extraout_r12_09;
  uint *puVar5;
  int unaff_lr;
  undefined4 uVar6;
  char in_NG;
  undefined1 in_ZR;
  undefined1 in_CY;
  char in_OV;
  undefined4 in_cr9;
  undefined4 in_cr10;
  undefined4 in_cr11;
  undefined4 in_cr12;
  undefined4 in_cr13;
  undefined4 in_cr14;
  undefined4 in_cr15;
  undefined8 unaff_d10;
  uint uVar7;
  undefined8 unaff_d11;
  undefined8 unaff_d12;
  uint uVar8;
  undefined8 unaff_d13;
  uint uVar9;
  undefined8 unaff_d14;
  undefined8 unaff_d15;
  
  uVar7 = (uint)((ulonglong)unaff_d10 >> 0x20);
  if (!(bool)in_CY || (bool)in_ZR) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (!(bool)in_CY || (bool)in_ZR) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (in_NG != in_OV) {
    unaff_lr = 0x889d4c2;
    param_1 = func_0x076f3b6a();
    param_3 = extraout_r1;
    param_4 = extraout_r2;
    param_5 = extraout_r3;
    in_r12 = extraout_r12;
  }
  if (in_NG != in_OV) {
    unaff_lr = 0x889d4c6;
    param_1 = func_0x0a342d56();
    param_3 = extraout_r1_00;
    param_4 = extraout_r2_00;
    param_5 = extraout_r3_00;
    in_r12 = extraout_r12_00;
  }
  if (in_NG == in_OV) {
    unaff_r10[1] = param_3;
    unaff_r10[2] = param_4;
    unaff_r10[3] = unaff_r4;
    unaff_r10[4] = unaff_r7;
    unaff_r10[5] = unaff_r8;
    unaff_r10[6] = unaff_r9;
    unaff_r10[7] = unaff_r11;
    unaff_r10[8] = (uint)register0x00000054;
    unaff_r10[9] = 0x889d4ce;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (in_NG == in_OV) {
    *(uint *)(unaff_r9 + 4) = param_3;
    *(uint *)(unaff_r9 + 8) = param_5;
    *(uint *)(unaff_r9 + 0xc) = unaff_r4;
    *(uint *)(unaff_r9 + 0x10) = unaff_r5;
    *(uint *)(unaff_r9 + 0x14) = unaff_r7;
    *(uint *)(unaff_r9 + 0x18) = unaff_r8;
    *(uint *)(unaff_r9 + 0x1c) = unaff_r9;
    *(uint *)(unaff_r9 + 0x20) = unaff_r11;
    *(uint **)(unaff_r9 + 0x24) = in_r12;
    *(BADSPACEBASE **)(unaff_r9 + 0x28) = register0x00000054;
    *(undefined4 *)(unaff_r9 + 0x2c) = 0x889d4d6;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (in_NG == in_OV) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (in_NG == in_OV) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (in_NG != in_OV) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (in_NG == in_OV) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (!(bool)in_ZR && in_NG == in_OV) {
    unaff_lr = 0x889d4ea;
    param_1 = func_0x073947da();
    param_3 = extraout_r1_01;
    param_5 = extraout_r3_01;
    in_r12 = extraout_r12_01;
  }
  if (!(bool)in_ZR && in_NG == in_OV) {
    unaff_lr = 0x889d4ee;
    param_1 = func_0x08019066();
    param_3 = extraout_r1_02;
    param_5 = extraout_r3_02;
    in_r12 = extraout_r12_02;
  }
  if ((bool)in_ZR || in_NG != in_OV) {
    coprocessor_moveto(0xd,7,6,unaff_lr,in_cr13,in_cr13);
  }
  coprocessor_moveto(0xd,7,6,unaff_lr,in_cr13,in_cr12);
  coprocessor_movefromRt(0xf,6,7,in_cr11,in_cr15);
  uVar6 = coprocessor_movefromRt(0xf,5,7,in_cr11,in_cr15);
  coprocessor_moveto(0xe,7,7,uVar6,in_cr13,in_cr15);
  coprocessor_movefromRt(0xf,6,7,in_cr13,in_cr15);
  if (!(bool)in_ZR && in_NG == in_OV) {
    unaff_lr = 0x889d50a;
    param_1 = func_0x0779d50a();
    param_3 = extraout_r1_03;
    param_5 = extraout_r3_03;
    in_r12 = extraout_r12_03;
  }
  uVar2 = unaff_r11;
  if (in_NG != in_OV) {
    uVar2 = unaff_r11 + 0x2ec;
    coprocessor_load(0xb,in_cr12,unaff_r11);
  }
  if (!(bool)in_ZR && in_NG == in_OV) {
    unaff_lr = 0x889d512;
    param_1 = func_0x07783846();
    param_3 = extraout_r1_04;
    param_5 = extraout_r3_04;
    in_r12 = extraout_r12_04;
  }
  uVar3 = uVar2;
  if (!(bool)in_ZR && in_NG == in_OV) {
    uVar3 = uVar2 + 0x330;
    coprocessor_load(9,in_cr11,uVar2);
    coprocessor_storelong(9,in_cr11,in_r12);
  }
  if (in_NG != in_OV) {
    coprocessor_storelong(9,in_cr11,in_r12);
  }
  if ((bool)in_ZR || in_NG != in_OV) {
    param_1 = (uint)*(undefined8 *)(in_r12 + 10);
    uVar7 = (uint)((ulonglong)*(undefined8 *)(in_r12 + 0x1e) >> 0x20);
    unaff_d11 = *(undefined8 *)(in_r12 + 0x20);
    unaff_d12 = *(undefined8 *)(in_r12 + 0x22);
    unaff_d13 = *(undefined8 *)(in_r12 + 0x24);
    unaff_d14 = *(undefined8 *)(in_r12 + 0x26);
    unaff_d15 = *(undefined8 *)(in_r12 + 0x28);
    coprocessor_storelong(0xd,in_cr12,&stack0x00000334);
  }
  else {
    coprocessor_storelong(0xd,in_cr13,in_r12);
    coprocessor_storelong(0xc,in_cr12,in_r12);
  }
  if (in_NG != in_OV) {
    coprocessor_storelong(0xc,in_cr12,in_r12);
  }
  puVar5 = in_r12;
  if (!(bool)in_ZR && in_NG == in_OV) {
    puVar5 = in_r12 + 0xcb;
    coprocessor_load(0xb,in_cr12,in_r12);
  }
  if (in_NG != in_OV) {
    coprocessor_storelong(0xb,in_cr11,uVar3);
  }
  uVar9 = (uint)((ulonglong)unaff_d13 >> 0x20);
  uVar8 = (uint)((ulonglong)unaff_d12 >> 0x20);
  uVar2 = (uint)((ulonglong)unaff_d11 >> 0x20);
  if ((bool)in_ZR || in_NG != in_OV) {
    coprocessor_loadlong(9,in_cr11,puVar5);
    uVar4 = uVar3;
  }
  else {
    uVar4 = uVar3 + 0x2ec;
    coprocessor_load(0xb,in_cr11,uVar3);
    coprocessor_storelong(9,in_cr12,puVar5);
    *puVar5 = uVar7;
    puVar5[1] = (uint)unaff_d11;
    puVar5[2] = uVar2;
    puVar5[3] = (uint)unaff_d12;
    puVar5[4] = uVar8;
    puVar5[5] = (uint)unaff_d13;
    puVar5[6] = uVar9;
    puVar5[7] = (uint)unaff_d14;
    puVar5[8] = (uint)((ulonglong)unaff_d14 >> 0x20);
    puVar5[9] = (uint)unaff_d15;
    puVar5[10] = (uint)((ulonglong)unaff_d15 >> 0x20);
    puVar5[0xb] = param_1;
  }
  if ((bool)in_CY && !(bool)in_ZR) {
    *puVar5 = uVar7;
    puVar5[1] = (uint)unaff_d11;
    puVar5[2] = uVar2;
    puVar5[3] = (uint)unaff_d12;
    puVar5[4] = uVar8;
    puVar5[5] = (uint)unaff_d13;
    puVar5[6] = uVar9;
    puVar5[7] = (uint)unaff_d14;
    return;
  }
  if (in_NG == in_OV) {
    return;
  }
  if (in_NG == in_OV) {
    *puVar5 = param_3;
    puVar5[1] = param_5;
    puVar5[2] = unaff_r5;
    puVar5[3] = unaff_r7;
    puVar5[4] = unaff_r9;
    puVar5[5] = uVar4;
    puVar5[6] = (uint)register0x00000054;
    puVar5[7] = 0x889d562;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (in_NG == in_OV) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (in_NG != in_OV) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (in_NG != in_OV) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (in_NG != in_OV) {
    unaff_lr = 0x889d572;
    func_0x07388422();
    puVar5 = extraout_r12_05;
  }
  if (in_NG == in_OV) {
    unaff_lr = 0x889d576;
    func_0x0774c462();
    puVar5 = extraout_r12_06;
  }
  if (in_NG != in_OV) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (in_NG != in_OV) {
    unaff_lr = 0x889d57e;
    func_0x0734c42a();
    puVar5 = extraout_r12_07;
  }
  if (in_NG != in_OV) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (in_NG != in_OV) {
    unaff_lr = 0x889d586;
    func_0x0738c472();
    puVar5 = extraout_r12_08;
  }
  if (!(bool)in_CY || (bool)in_ZR) {
    if (in_NG == in_OV) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    puVar1 = unaff_r10;
    if (in_NG == in_OV) {
      puVar1 = unaff_r10 + unaff_r6 * 0x800;
      *unaff_r10 = unaff_r6;
    }
    if ((bool)in_OV) {
      uVar4 = uVar4 + (unaff_r6 >> 0xc);
    }
    if (in_NG == in_OV) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if (in_NG == in_OV) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if (in_NG != in_OV) {
      unaff_lr = 0x889d5a2;
      func_0x07788052();
      puVar5 = extraout_r12_09;
    }
    if ((bool)in_OV) {
      *(char *)(unaff_r5 - 0xcbb) = (char)uVar4;
    }
    else {
      puVar1 = (uint *)((int)puVar1 + ((int)puVar1 >> 0x19));
      *puVar1 = (uint)puVar5;
    }
    if (in_NG == in_OV) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if (!(bool)in_CY || (bool)in_ZR) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if ((bool)in_ZR || in_NG != in_OV) {
      coprocessor_moveto(10,7,5,puVar1,in_cr14,in_cr11);
      coprocessor_storelong(10,in_cr10,0x889d8b2);
    }
    coprocessor_storelong(10,in_cr9,unaff_lr + 0x2f4);
    coprocessor_loadlong(9,in_cr9,0x889d8ba);
    software_interrupt(0xffabbd);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

