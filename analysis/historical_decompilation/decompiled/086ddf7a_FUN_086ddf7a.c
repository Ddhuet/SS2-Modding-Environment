
/* WARNING: Control flow encountered bad instruction data */

void FUN_086ddf7a(byte *param_1,uint param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 extraout_r1;
  undefined4 uVar2;
  undefined4 *extraout_r2;
  undefined4 *extraout_r2_00;
  undefined4 *puVar3;
  undefined4 *extraout_r2_01;
  undefined1 unaff_r4;
  undefined4 unaff_r6;
  int unaff_r7;
  undefined4 unaff_r9;
  undefined4 unaff_r10;
  uint unaff_r11;
  undefined4 unaff_lr;
  char in_NG;
  undefined1 in_ZR;
  undefined1 in_CY;
  char in_OV;
  undefined4 in_cr4;
  undefined8 uVar4;
  
  if ((bool)in_CY) {
    param_3 = (undefined4 *)((param_2 & (int)param_1 << 1) + 0x7fffffd0);
  }
  else {
    param_1 = param_1 + 0x5c2;
    unaff_r11 = (uint)*param_1;
  }
  if (!(bool)in_ZR && in_NG == in_OV) {
    param_3 = (undefined4 *)((uint)param_1 & 0x8000003);
  }
  if ((bool)in_CY) {
    param_3[1] = param_2;
    param_3[2] = unaff_r6;
    param_3[3] = unaff_r7;
    param_3[4] = unaff_r11;
    param_3[5] = register0x00000054;
    unaff_lr = 0x86ddf9a;
    uVar4 = func_0x07768aa6();
    param_2 = (uint)((ulonglong)uVar4 >> 0x20);
    param_1 = (byte *)uVar4;
    param_3 = extraout_r2;
  }
  uVar4 = CONCAT44(param_2,param_1);
  if (!(bool)in_CY) {
    unaff_lr = 0x86ddfa6;
    uVar4 = func_0x0830e272();
    param_3 = extraout_r2_00;
  }
  uVar2 = (undefined4)((ulonglong)uVar4 >> 0x20);
  iVar1 = (int)uVar4;
  if (!(bool)in_ZR && in_NG == in_OV) {
    iVar1 = iVar1 + -0x20;
  }
  if ((bool)in_NG) {
    puVar3 = param_3 + 0xc0;
    *(undefined1 *)param_3 = unaff_r4;
    param_3 = (undefined4 *)((int)puVar3 + ((int)puVar3 >> 0xb));
    *(undefined1 *)puVar3 = unaff_r4;
  }
  if (!(bool)in_ZR && in_NG == in_OV) {
    iVar1 = unaff_r7 + -0xc2;
  }
  if ((bool)in_NG) {
    unaff_lr = 0x86ddfc2;
    func_0x0870e8ee(iVar1);
    uVar2 = extraout_r1;
    param_3 = extraout_r2_01;
  }
  if ((bool)in_NG) {
    coprocessor_storelong(0xc,in_cr4,param_3 + 0xc2);
  }
  if (!(bool)in_ZR) {
    *param_3 = uVar2;
    param_3[1] = unaff_r6;
    param_3[2] = unaff_r7;
    param_3[3] = unaff_r9;
    param_3[4] = unaff_r10;
    param_3[5] = unaff_r11;
    param_3[6] = unaff_lr;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

