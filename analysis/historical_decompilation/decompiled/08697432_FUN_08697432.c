
/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x086974b2) */

void FUN_08697432(undefined4 param_1,undefined4 param_2,uint param_3,uint param_4)

{
  uint *puVar1;
  uint *puVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  uint extraout_r2;
  uint uVar6;
  uint extraout_r2_00;
  uint extraout_r2_01;
  undefined4 extraout_r2_02;
  undefined4 extraout_r2_03;
  undefined4 uVar7;
  uint extraout_r3;
  uint extraout_r3_00;
  uint extraout_r3_01;
  undefined4 *extraout_r3_02;
  undefined4 *extraout_r3_03;
  undefined4 *puVar8;
  uint *unaff_r4;
  undefined4 unaff_r5;
  uint unaff_r6;
  int unaff_r7;
  undefined4 *unaff_r8;
  uint unaff_r9;
  uint unaff_r10;
  int unaff_r11;
  uint in_r12;
  uint extraout_r12;
  uint extraout_r12_00;
  uint extraout_r12_01;
  undefined4 uVar9;
  char in_NG;
  undefined1 in_ZR;
  undefined1 in_CY;
  char in_OV;
  undefined8 uVar10;
  
  uVar10 = CONCAT44(param_2,param_1);
  if ((bool)in_CY) {
    uVar10 = func_0x072c4aba();
    param_3 = extraout_r2;
    param_4 = extraout_r3;
    in_r12 = extraout_r12;
  }
  if ((bool)in_CY) {
    param_3 = (int)unaff_r8 + (unaff_r9 >> (param_4 & 0xff)) + 1;
  }
  if (in_NG == in_OV) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  uVar6 = param_3;
  if (in_NG == in_OV) {
    uVar6 = param_3 - 0xb20;
    *(BADSPACEBASE **)param_3 = register0x00000054;
  }
  if ((bool)in_CY && !(bool)in_ZR) {
    unaff_r10 = (uint)((ulonglong)uVar10 >> 0x20) & (uint)uVar10 >> 10;
  }
  if ((bool)in_CY) {
    unaff_r11 = unaff_r7 + (unaff_r6 >> 1) + 1;
  }
  if ((bool)in_ZR) {
    software_interrupt(0x1022da);
  }
  if ((bool)in_NG) {
    unaff_r10 = 0xb70;
  }
  if (!(bool)in_CY) {
    uVar10 = func_0x06aaa11a();
    uVar6 = extraout_r2_00;
    param_4 = extraout_r3_00;
    in_r12 = extraout_r12_00;
  }
  puVar1 = (uint *)uVar10;
  if (in_NG != in_OV) {
    unaff_r11 = (int)((ulonglong)uVar10 >> 0x20);
  }
  if ((bool)in_CY) {
    uVar6 = 0x80000000;
    in_NG = '\x01';
    in_ZR = false;
  }
  if ((bool)in_ZR || in_NG != in_OV) {
    puVar1 = (uint *)func_0x09163726();
    uVar6 = extraout_r2_01;
    param_4 = extraout_r3_01;
    in_r12 = extraout_r12_01;
  }
  if ((bool)in_CY) {
    in_r12 = (uint)puVar1 & uVar6 >> 0x10;
    uVar6 = unaff_r10 - ((int)unaff_r9 >> 1);
  }
  if ((bool)in_ZR) {
    *unaff_r4 = uVar6;
    unaff_r4[1] = param_4;
  }
  puVar2 = puVar1;
  if (!(bool)in_ZR && in_NG == in_OV) {
    puVar2 = (uint *)((int)puVar1 + ((uint)puVar1 >> 10));
    *puVar1 = in_r12;
  }
  uVar9 = 0x8697476;
  uVar10 = func_0x08ec92fa(puVar2);
  iVar3 = (int)uVar10;
  if ((bool)in_ZR) {
    software_interrupt(0x10225c);
  }
  if (!(bool)in_CY) {
    iVar3 = (int)extraout_r3_02 - (unaff_r11 >> 1);
  }
  uVar10 = CONCAT44((int)((ulonglong)uVar10 >> 0x20),iVar3);
                    /* WARNING: Could not recover jumptable at 0x0869747e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  if (!(bool)in_ZR) {
    uVar7 = extraout_r2_02;
    puVar8 = extraout_r3_02;
    if ((bool)in_CY) {
      uVar9 = 0x8697486;
      uVar10 = func_0x092b748a();
      uVar7 = extraout_r2_03;
      puVar8 = extraout_r3_03;
    }
    uVar5 = (undefined4)((ulonglong)uVar10 >> 0x20);
    puVar4 = (undefined4 *)uVar10;
    if ((bool)in_CY) {
      *unaff_r8 = uVar7;
      unaff_r8[1] = puVar8;
    }
    *puVar8 = uVar5;
    iVar3 = (int)puVar4 + ((uint)puVar4 >> 10);
    *puVar4 = uVar9;
    if ((bool)in_ZR) {
      software_interrupt(0x10231a);
    }
    if (!(bool)in_ZR && in_NG == in_OV) {
      puVar8[-0x2c8] = unaff_r7;
      puVar8[-0x2c9] = unaff_r6;
      puVar8[-0x2ca] = unaff_r5;
      puVar8[-0x2cb] = puVar8 + -0x2c8;
      puVar8[-0x2cc] = uVar5;
      puVar8[-0x2cd] = iVar3;
    }
    if ((bool)in_CY) {
      func_0x092974ae(iVar3);
    }
    if ((bool)in_ZR) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  (*(code *)(0x8697486 - (unaff_r11 >> 8)))();
  return;
}

