
/* WARNING: Control flow encountered bad instruction data */

void FUN_088d7098(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined4 extraout_r2;
  undefined4 extraout_r2_00;
  undefined4 extraout_r2_01;
  undefined4 extraout_r2_02;
  undefined4 extraout_r2_03;
  undefined4 extraout_r2_04;
  undefined4 extraout_r2_05;
  undefined4 extraout_r2_06;
  undefined4 extraout_r3;
  undefined4 extraout_r3_00;
  undefined4 extraout_r3_01;
  undefined4 extraout_r3_02;
  undefined4 extraout_r3_03;
  undefined4 extraout_r3_04;
  undefined4 extraout_r3_05;
  undefined4 extraout_r3_06;
  undefined4 unaff_r4;
  undefined4 unaff_r5;
  undefined4 unaff_r6;
  undefined4 unaff_r7;
  undefined4 *unaff_r8;
  undefined4 unaff_r9;
  undefined8 *unaff_r10;
  int unaff_r11;
  undefined4 in_r12;
  undefined4 extraout_r12;
  undefined4 extraout_r12_00;
  undefined4 extraout_r12_01;
  undefined4 extraout_r12_02;
  undefined4 extraout_r12_03;
  undefined4 extraout_r12_04;
  undefined4 extraout_r12_05;
  undefined4 extraout_r12_06;
  int unaff_lr;
  char in_NG;
  undefined1 in_ZR;
  char in_OV;
  undefined4 in_cr2;
  undefined4 in_cr11;
  undefined4 in_cr12;
  undefined4 in_cr13;
  undefined4 in_cr14;
  undefined8 uVar2;
  
  uVar2 = CONCAT44(param_2,param_1);
  if (in_NG != in_OV) {
    coprocessor_loadlong(5,in_cr11,unaff_lr + 0x88);
    unaff_lr = 0x88d70a0;
    uVar2 = func_0x08052708();
    param_3 = extraout_r2;
    param_4 = extraout_r3;
    in_r12 = extraout_r12;
  }
  if (in_NG != in_OV) {
    unaff_lr = 0x88d70a4;
    uVar2 = func_0x077ce85c();
    param_3 = extraout_r2_00;
    param_4 = extraout_r3_00;
    in_r12 = extraout_r12_00;
  }
  if (in_NG != in_OV) {
    unaff_lr = 0x88d70a8;
    uVar2 = func_0x08052c60();
    param_3 = extraout_r2_01;
    param_4 = extraout_r3_01;
    in_r12 = extraout_r12_01;
  }
  coprocessor_moveto(9,7,1,unaff_lr,in_cr14,in_cr2);
  if ((bool)in_ZR || in_NG != in_OV) {
    coprocessor_storelong(0xe,in_cr14,unaff_lr + 0x35c);
    uVar2 = func_0x0784e82c();
    param_3 = extraout_r2_02;
    param_4 = extraout_r3_02;
    in_r12 = extraout_r12_02;
  }
  if (in_NG != in_OV) {
    uVar2 = func_0x06fc5fa8();
    param_3 = extraout_r2_03;
    param_4 = extraout_r3_03;
    in_r12 = extraout_r12_03;
  }
  if ((bool)in_ZR || in_NG != in_OV) {
    uVar2 = func_0x077c5fa4();
    param_3 = extraout_r2_04;
    param_4 = extraout_r3_04;
    in_r12 = extraout_r12_04;
  }
  coprocessor_function(0xe,0xe,7,in_cr13,in_cr13,in_cr14);
  coprocessor_function(0xd,0xd,7,in_cr13,in_cr13,in_cr14);
  if ((bool)in_ZR || in_NG != in_OV) {
    coprocessor_loadlong(0xd,in_cr13,&stack0x00000374);
  }
  if (in_NG != in_OV) {
    uVar2 = func_0x077ce050();
    param_3 = extraout_r2_05;
    param_4 = extraout_r3_05;
    in_r12 = extraout_r12_05;
  }
  if (in_NG != in_OV) {
    uVar2 = func_0x077c5fd4();
    param_3 = extraout_r2_06;
    param_4 = extraout_r3_06;
    in_r12 = extraout_r12_06;
  }
  uVar1 = (undefined4)uVar2;
  if ((bool)in_ZR || in_NG != in_OV) {
    unaff_r11 = unaff_r11 + 0x374;
    coprocessor_load(0xb,in_cr11,unaff_r11);
  }
  coprocessor_loadlong(0xd,in_cr13,&stack0x00000374);
  coprocessor_function2(0xe,0xe,7,in_cr14,in_cr14,in_cr13);
  if ((bool)in_ZR || in_NG != in_OV) {
    if (in_NG == in_OV) {
      *unaff_r10 = uVar2;
      *(undefined4 *)(unaff_r10 + 1) = param_3;
      *(undefined4 *)((int)unaff_r10 + 0xc) = unaff_r4;
      *(undefined4 *)(unaff_r10 + 2) = unaff_r5;
      *(undefined4 *)((int)unaff_r10 + 0x14) = unaff_r6;
      *(undefined4 **)(unaff_r10 + 3) = unaff_r8;
      *(undefined4 *)((int)unaff_r10 + 0x1c) = unaff_r9;
      *(undefined8 **)(unaff_r10 + 4) = unaff_r10;
      *(undefined4 *)((int)unaff_r10 + 0x24) = 0x88d70fc;
      register0x00000054 = (BADSPACEBASE *)unaff_r8[-1];
      in_r12 = unaff_r8[-2];
      unaff_r11 = unaff_r8[-3];
      unaff_r7 = unaff_r8[-4];
      unaff_r5 = unaff_r8[-5];
      param_4 = unaff_r8[-6];
      uVar1 = unaff_r8[-7];
      unaff_r8 = unaff_r8 + -8;
    }
    if ((bool)in_ZR || in_NG != in_OV) {
      if (!(bool)in_ZR && in_NG == in_OV) {
        *unaff_r8 = uVar1;
        unaff_r8[1] = param_4;
        unaff_r8[2] = unaff_r7;
        unaff_r8[3] = unaff_r9;
        unaff_r8[4] = unaff_r11;
        unaff_r8[5] = 0x88d7108;
        *unaff_r8 = uVar1;
        unaff_r8[1] = (int)((ulonglong)uVar2 >> 0x20);
        unaff_r8[2] = param_4;
        unaff_r8[3] = unaff_r5;
        unaff_r8[4] = unaff_r7;
        unaff_r8[5] = unaff_r9;
        unaff_r8[6] = unaff_r11;
        unaff_r8[7] = 0x88d710c;
        coprocessor_loadlong(0xc,in_cr12,register0x00000054);
        coprocessor_storelong(0xc,in_cr12,in_r12);
        coprocessor_storelong(0xc,in_cr12,in_r12);
      }
      if (in_NG == in_OV) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      if (in_NG == in_OV) {
        coprocessor_storelong(0xc,in_cr12,in_r12);
      }
      if (!(bool)in_ZR && in_NG == in_OV) {
        coprocessor_storelong(0xd,in_cr13,register0x00000054);
        coprocessor_storelong(0xc,in_cr13,in_r12);
        coprocessor_storelong(0xc,in_cr12,in_r12);
      }
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  coprocessor_storelong(0xd,in_cr12,in_r12);
  coprocessor_storelong(0xc,in_cr12,in_r12);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

