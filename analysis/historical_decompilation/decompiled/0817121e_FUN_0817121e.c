
/* WARNING: Control flow encountered bad instruction data */

void FUN_0817121e(undefined4 *param_1,uint param_2,undefined4 param_3,undefined4 param_4)

{
  longlong lVar1;
  undefined4 extraout_r2;
  undefined4 extraout_r2_00;
  undefined4 extraout_r3;
  undefined4 extraout_r3_00;
  int unaff_r4;
  int *unaff_r5;
  int *piVar2;
  undefined4 unaff_r6;
  int unaff_r7;
  undefined4 *unaff_r8;
  int unaff_r9;
  undefined4 *puVar3;
  uint unaff_r10;
  undefined4 unaff_r11;
  uint in_r12;
  uint extraout_r12;
  uint extraout_r12_00;
  int unaff_lr;
  char in_NG;
  undefined1 in_ZR;
  undefined1 in_CY;
  char in_OV;
  undefined4 in_cr3;
  undefined4 in_cr4;
  undefined4 in_cr7;
  undefined4 in_cr8;
  undefined4 in_cr9;
  undefined4 in_cr10;
  undefined4 in_cr11;
  undefined4 in_cr14;
  
  if (in_NG == in_OV) {
    param_1 = (undefined4 *)((int)param_1 + (param_2 >> 0xb | param_2 << 0x15));
    *param_1 = unaff_r11;
  }
  if (!(bool)in_ZR && in_NG == in_OV) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if ((bool)in_CY && !(bool)in_ZR) {
    coprocessor_moveto(6,4,5,unaff_r9,in_cr7,in_cr4);
  }
  if ((bool)in_ZR || in_NG != in_OV) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (!(bool)in_CY || (bool)in_ZR) {
    *param_1 = param_1;
    param_1[1] = param_4;
    param_1[2] = unaff_r6;
    param_1[3] = unaff_r7;
    param_1[4] = unaff_r8;
    param_1[5] = in_r12;
    param_1[6] = register0x00000054;
    param_1[7] = 0x8171236;
  }
  else {
    unaff_lr = 0x8171236;
    func_0x0671849a(param_1);
    param_3 = extraout_r2;
    param_4 = extraout_r3;
    in_r12 = extraout_r12;
  }
  if (in_NG != in_OV) {
    unaff_r9 = unaff_r4 + 0x86 + (uint)(byte)in_CY;
  }
  if (!(bool)in_CY || (bool)in_ZR) {
    coprocessor_load(1,in_cr10,unaff_r7 + 0x2c0);
    unaff_r8 = (undefined4 *)((int)unaff_r8 + (in_r12 >> 3));
    *unaff_r8 = unaff_r11;
    coprocessor_load(6,in_cr9,unaff_r10 + 0x244);
    piVar2 = (int *)((int)unaff_r5 + 0xa9e);
    unaff_r9 = *unaff_r5;
    unaff_lr = 0x8171256;
    func_0x069184b6();
    param_3 = extraout_r2_00;
    param_4 = extraout_r3_00;
    in_r12 = extraout_r12_00;
  }
  else {
    software_interrupt(0x878187);
    coprocessor_moveto(2,4,4,unaff_r9,in_cr14,in_cr3);
    piVar2 = unaff_r5;
  }
  if (in_NG == in_OV) {
    in_CY = 0x6bffffff < unaff_r10;
    in_OV = SCARRY4(unaff_r10,-0x6c000000);
    unaff_r9 = unaff_r10 + 0x94000000;
    in_NG = unaff_r9 < 0;
    in_ZR = unaff_r9 == 0;
  }
  lVar1 = CONCAT44(param_3,unaff_r9);
  if (!(bool)in_CY || (bool)in_ZR) {
    software_interrupt(0xa9aeab);
    lVar1 = ZEXT48(piVar2) * ZEXT48(unaff_r8);
    in_NG = lVar1 < 0;
    in_ZR = lVar1 == 0;
  }
  puVar3 = (undefined4 *)lVar1;
  if (in_NG != in_OV) {
    in_CY = false;
    in_OV = '\0';
    in_NG = (int)puVar3 < 0;
    in_ZR = puVar3 == (undefined4 *)0x0;
    unaff_r8 = puVar3;
  }
  if (!(bool)in_CY || (bool)in_ZR) {
    software_interrupt(0xb3c1c2);
  }
  else {
    coprocessor_store(4,in_cr8,(int)((ulonglong)lVar1 >> 0x20) + 0x238);
  }
  if (!(bool)in_ZR && in_NG == in_OV) {
    coprocessor_storelong(0xd,in_cr11,unaff_lr + 0x28c);
  }
  if (in_NG == in_OV) {
    puVar3[0xf0] = unaff_r11;
  }
  if ((bool)in_ZR || in_NG != in_OV) {
    *(undefined4 *)(unaff_r7 + 4) = param_4;
    *(int **)(unaff_r7 + 8) = piVar2;
    *(int *)(unaff_r7 + 0xc) = unaff_r7;
    *(undefined4 **)(unaff_r7 + 0x10) = unaff_r8;
    *(uint *)(unaff_r7 + 0x14) = unaff_r10;
    *(uint *)(unaff_r7 + 0x18) = in_r12;
    *(BADSPACEBASE **)(unaff_r7 + 0x1c) = register0x00000054;
    *(undefined4 *)(unaff_r7 + 0x20) = 0x817127e;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

