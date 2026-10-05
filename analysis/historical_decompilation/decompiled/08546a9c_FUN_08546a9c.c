
/* WARNING: Control flow encountered bad instruction data */

void FUN_08546a9c(uint param_1,undefined4 param_2,uint param_3,int param_4)

{
  uint uVar1;
  byte bVar2;
  uint extraout_r2;
  uint extraout_r2_00;
  uint extraout_r2_01;
  int extraout_r3;
  int extraout_r3_00;
  int extraout_r3_01;
  int unaff_r4;
  uint unaff_r5;
  int unaff_r6;
  ushort *unaff_r7;
  ushort *puVar3;
  ushort *unaff_r9;
  int unaff_r11;
  uint in_r12;
  uint extraout_r12;
  uint extraout_r12_00;
  uint extraout_r12_01;
  char *unaff_lr;
  char in_NG;
  bool in_ZR;
  undefined1 in_CY;
  char in_OV;
  undefined1 uVar4;
  undefined1 uVar5;
  bool bVar6;
  undefined1 uVar7;
  undefined4 in_cr0;
  undefined4 in_cr7;
  undefined4 in_cr11;
  undefined4 in_cr13;
  
  uVar4 = false;
  if (in_ZR) {
    uVar1 = (int)param_1 >> (unaff_r5 & 0xff);
    in_CY = uVar1 <= param_1;
    in_OV = SBORROW4(param_1,uVar1);
    unaff_r11 = param_1 - uVar1;
    in_NG = unaff_r11 < 0;
    uVar4 = unaff_r11 == 0;
  }
  puVar3 = unaff_r7;
  if (!(bool)in_NG) {
    puVar3 = (ushort *)((int)unaff_r7 + unaff_r6);
    unaff_r5 = (uint)*unaff_r7;
  }
  if (!(bool)in_CY) {
    unaff_r5 = (uint)*unaff_r9;
  }
  if (in_NG != in_OV) {
    unaff_lr = (char *)0x8546aac;
    param_1 = func_0x071752b0();
    param_3 = extraout_r2;
    param_4 = extraout_r3;
    in_r12 = extraout_r12;
  }
  if (in_NG != in_OV) {
    param_1 = param_1 - 0x180;
    coprocessor_storelong(0xc,in_cr11,param_1);
  }
  if ((bool)in_CY) {
    in_OV = SCARRY4((int)unaff_lr,1);
    in_NG = (int)(unaff_lr + 1) < 0;
    uVar4 = unaff_lr == (char *)0xffffffff;
  }
  uVar7 = (bool)in_CY && (char *)0xfffffffe < unaff_lr;
  if (!(bool)uVar4 && in_NG == in_OV) {
    param_3 = 0x8546a03;
    uVar4 = false;
    in_NG = '\0';
  }
  uVar5 = false;
  if ((bool)uVar4) {
    uVar7 = (byte)(param_1 >> 0x1a) & 1;
    in_r12 = param_1 & param_1 << 6;
    in_NG = (int)in_r12 < 0;
    uVar5 = in_r12 == 0;
  }
  if ((bool)uVar5 || in_NG != in_OV) {
    register0x00000054 = (BADSPACEBASE *)(unaff_r5 - ((unaff_r4 >> 1) + (uint)!(bool)uVar7));
  }
  if ((bool)in_OV) {
    register0x00000054 = (BADSPACEBASE *)((int)puVar3 - ((unaff_r6 >> 1) + (uint)!(bool)uVar7));
  }
  if (!(bool)uVar5 && in_NG == in_OV) {
    *(undefined4 *)(param_1 - 4) = 0x8546acc;
    *(char **)(param_1 - 8) = unaff_lr;
    *(int *)(param_1 - 0xc) = unaff_r11;
    unaff_lr = "p";
    param_1 = func_0x095793d0();
    param_3 = extraout_r2_00;
    param_4 = extraout_r3_00;
    in_r12 = extraout_r12_00;
  }
  if ((bool)in_NG) {
    param_1 = in_r12 - ((param_1 >> (param_1 & 0x1f) | param_1 << 0x20 - (param_1 & 0x1f)) +
                       (uint)!(bool)uVar7);
  }
  if ((bool)uVar5 || in_NG != in_OV) {
    register0x00000054 = (BADSPACEBASE *)(param_1 + 0x20);
  }
  if ((bool)uVar5) {
    register0x00000054 = (BADSPACEBASE *)(param_1 * 0x81);
  }
  if ((bool)uVar7 && !(bool)uVar5) {
    unaff_r5 = unaff_r5 + 4;
  }
  if (!(bool)uVar5 && in_NG == in_OV) {
    if ((bool)uVar5 || in_NG != in_OV) {
      unaff_lr = (char *)0x8546af0;
      param_1 = func_0x0717d534();
      param_3 = extraout_r2_01;
      param_4 = extraout_r3_01;
      in_r12 = extraout_r12_01;
    }
    bVar6 = (bool)uVar7;
    if ((bool)in_OV) {
      uVar1 = param_1 >> 2 | param_1 << 0x1e;
      bVar6 = uVar1 < in_r12 || in_r12 - uVar1 < (uint)(byte)uVar7;
      param_1 = in_r12 - (uVar1 + !(bool)uVar7);
      uVar5 = param_1 == 0;
    }
    if (bVar6) {
      param_3 = (uint)*unaff_lr;
    }
    if (!(bool)uVar5) {
      param_1 = (param_3 >> 1 | param_3 << 0x1f) - (param_4 + (uint)!bVar6);
    }
    bVar2 = *(byte *)(param_1 * 0x1001);
    *(undefined4 *)(param_1 - 4) = 0x8546b10;
    *(uint *)(param_1 - 8) = (uint)bVar2;
    *(BADSPACEBASE **)(param_1 - 0xc) = register0x00000054;
    *(int *)(param_1 - 0x10) = unaff_r11;
    *(int *)(param_1 - 0x14) = unaff_r6;
    *(uint *)(param_1 - 0x18) = unaff_r5;
    coprocessor_function(0,0,7,in_cr7,in_cr0,in_cr13);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  return;
}

