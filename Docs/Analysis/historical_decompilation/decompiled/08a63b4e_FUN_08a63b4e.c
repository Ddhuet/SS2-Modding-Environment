
/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x08a4c5d2) */

void FUN_08a63b4e(undefined1 *param_1,undefined4 param_2,uint param_3,uint param_4)

{
  undefined4 uVar1;
  uint extraout_r2;
  uint extraout_r2_00;
  uint extraout_r2_01;
  uint extraout_r2_02;
  uint extraout_r3;
  uint extraout_r3_00;
  uint extraout_r3_01;
  uint unaff_r4;
  uint unaff_r5;
  uint unaff_r6;
  uint unaff_r7;
  uint *unaff_r8;
  uint unaff_r9;
  int unaff_r10;
  uint *unaff_r11;
  uint *puVar2;
  uint *puVar3;
  int extraout_r12;
  int extraout_r12_00;
  int in_r12;
  int extraout_r12_01;
  int extraout_r12_02;
  uint unaff_lr;
  char in_NG;
  undefined1 uVar4;
  undefined1 in_ZR;
  undefined1 in_CY;
  char in_OV;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  undefined4 in_cr2;
  undefined4 in_cr3;
  undefined4 in_cr10;
  undefined4 in_cr11;
  undefined4 in_cr12;
  undefined4 in_cr13;
  undefined4 in_cr15;
  
  if (in_NG != in_OV) {
    unaff_lr = 0x8a63b52;
    param_1 = (undefined1 *)func_0x07950fb2();
    param_3 = extraout_r2_01;
    param_4 = extraout_r3_00;
    in_r12 = extraout_r12_01;
  }
  if (in_NG != in_OV) {
    unaff_lr = 0x8a63b56;
    param_1 = (undefined1 *)func_0x07852a46();
    param_3 = extraout_r2_02;
    param_4 = extraout_r3_01;
    in_r12 = extraout_r12_02;
  }
  puVar2 = unaff_r11;
  if ((bool)in_ZR || in_NG != in_OV) {
    puVar2 = unaff_r11 + 0xdc;
    coprocessor_load(0xd,in_cr13,unaff_r11);
  }
  if (!(bool)in_CY) {
    coprocessor_loadlong(2,in_cr10,&stack0x000002b4);
    software_interrupt(0x8888);
    uRam08a4c602 = 0x8a4c5de;
    uVar1 = uRam08a4c602;
    uRam08a4c602 = 0x8a4c5de;
    uRam08a4c5e2 = param_4;
    uRam08a4c5e6 = unaff_r4;
    uRam08a4c5ea = unaff_r7;
    puRam08a4c5ee = unaff_r8;
    uRam08a4c5f2 = unaff_r9;
    puRam08a4c5f6 = puVar2;
    iRam08a4c5fa = in_r12;
    puRam08a4c5fe = (undefined1 *)register0x00000054;
    if (in_NG != in_OV) {
      unaff_lr = 0x8a4c5de;
      uRam08a4c602 = uVar1;
      param_1 = (undefined1 *)func_0x0793b4c6();
      param_3 = extraout_r2;
      param_4 = extraout_r3;
      in_r12 = extraout_r12;
    }
    if (in_NG != in_OV) {
      coprocessor_storelong(5,in_cr12,in_r12);
    }
    if (!(bool)in_CY) {
      unaff_r7 = param_3 ^ 0x5600000;
      param_3 = param_3 ^ 0x33400;
    }
    if ((bool)in_CY && !(bool)in_ZR) {
      *unaff_r8 = (uint)param_1;
      unaff_r8[1] = param_3;
      unaff_r8[2] = param_4;
      unaff_r8[3] = unaff_r4;
      unaff_r8[4] = unaff_r6;
      unaff_r8[5] = unaff_r7;
      unaff_r8[6] = unaff_r9;
      unaff_r8[7] = (uint)register0x00000054;
      unaff_r8[8] = unaff_lr;
      unaff_r8[9] = 0x8a4c5f2;
      *unaff_r8 = (uint)param_1;
      unaff_r8[1] = param_4;
      unaff_r8[2] = unaff_r5;
      unaff_r8[3] = unaff_r7;
      unaff_r8[4] = unaff_r9;
      unaff_r8[5] = (uint)register0x00000054;
      unaff_r8[6] = unaff_lr;
      unaff_r8[7] = 0x8a4c5f6;
      *puVar2 = (uint)param_1;
      puVar2[1] = param_4;
      puVar2[2] = unaff_r5;
      puVar2[3] = unaff_r7;
      puVar2[4] = (uint)unaff_r8;
      puVar2[5] = unaff_r9;
      puVar2[6] = (uint)register0x00000054;
      puVar2[7] = unaff_lr;
      puVar2[8] = 0x8a4c5fa;
    }
    else {
      *(uint *)(in_r12 + 4) = param_4;
      *(uint *)(in_r12 + 8) = unaff_r4;
      *(uint *)(in_r12 + 0xc) = unaff_r7;
      *(uint *)(in_r12 + 0x10) = unaff_r9;
      *(uint **)(in_r12 + 0x14) = puVar2;
      *(int *)(in_r12 + 0x18) = in_r12;
      *(BADSPACEBASE **)(in_r12 + 0x1c) = register0x00000054;
    }
    if (in_NG != in_OV) {
      param_1 = (undefined1 *)func_0x0755ac26();
      param_3 = extraout_r2_00;
      in_r12 = extraout_r12_00;
    }
    if (!(bool)in_ZR && in_NG == in_OV) {
      coprocessor_load(9,in_cr12,0x8a4c606);
    }
    bVar5 = false;
    if ((bool)in_ZR) {
      bVar5 = (longlong)unaff_r10 * (longlong)(int)puVar2 + CONCAT44(param_3,in_r12) == 0;
    }
    bVar6 = false;
    bVar7 = (bool)in_CY;
    if (bVar5) {
      bVar7 = &stack0x00000000 < param_1 ||
              (uint)((int)param_1 - (int)&stack0x00000000) < (uint)(byte)in_CY;
      param_1 = param_1 + -(int)(&stack0x00000000 + !(bool)in_CY);
      bVar6 = param_1 == (undefined1 *)0x0;
    }
    uVar4 = bVar6 && param_1 == &stack0x00000000 + !bVar7;
    if ((bool)uVar4) {
      software_interrupt(0x1d0000);
      software_interrupt(0x120000);
    }
    func_0x092cc620();
    func_0x0790c624();
    if ((bool)uVar4) {
      software_interrupt(0xcc0000);
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  puVar3 = puVar2 + 0x22;
  coprocessor_load2(9,in_cr11,puVar3);
  if (in_NG != in_OV) {
    func_0x07d23b6e();
  }
  if (in_NG != in_OV) {
    puVar3 = puVar2 + 0x31;
    coprocessor_load(0xf,in_cr15,puVar3);
  }
  if ((bool)in_ZR || in_NG != in_OV) {
    func_0x07d6b762();
  }
  if ((bool)in_CY) {
    coprocessor_loadlong(0xd,in_cr2,&stack0x000000b4);
  }
  else {
    func_0x078f342a();
  }
  if (!(bool)in_CY) {
    coprocessor_load(3,in_cr3,puVar3);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

