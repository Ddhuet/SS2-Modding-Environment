
/* WARNING: Control flow encountered bad instruction data */

undefined4 FUN_08b06a92(undefined4 param_1,uint param_2,int param_3,uint param_4)

{
  uint extraout_r1;
  uint extraout_r3;
  int unaff_r4;
  undefined4 unaff_r5;
  undefined4 unaff_r7;
  undefined4 unaff_r8;
  undefined4 *unaff_r9;
  int unaff_r10;
  uint unaff_r11;
  uint uVar1;
  undefined4 in_r12;
  undefined4 extraout_r12;
  char in_NG;
  bool in_ZR;
  bool in_CY;
  char in_OV;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined4 in_cr10;
  
  if ((bool)in_NG) {
    unaff_r11 = unaff_r11 & 0xffff | 0x5b10000;
  }
  uVar2 = false;
  uVar3 = in_CY;
  if (in_ZR) {
    uVar1 = unaff_r4 << (param_2 & 0xff);
    uVar3 = param_4 < uVar1 || uVar1 - param_4 < (uint)in_CY;
    in_OV = SBORROW4(uVar1,param_4) != SBORROW4(uVar1 - param_4,(uint)!in_CY);
    unaff_r11 = uVar1 - (param_4 + !in_CY);
    in_NG = (int)unaff_r11 < 0;
    uVar2 = unaff_r11 == 0;
  }
  if (!(bool)uVar3 || (bool)uVar2) {
    *unaff_r9 = unaff_r8;
    unaff_r9[1] = in_r12;
    return unaff_r9[2];
  }
  if (!(bool)uVar3 || (bool)uVar2) {
    return *(undefined4 *)(param_3 + 4);
  }
  if (in_NG == in_OV) {
    *(undefined4 *)(unaff_r10 + 4) = param_1;
    *(uint *)(unaff_r10 + 8) = param_2;
    *(uint *)(unaff_r10 + 0xc) = param_4;
    *(undefined4 *)(unaff_r10 + 0x10) = unaff_r5;
    *(undefined4 *)(unaff_r10 + 0x14) = unaff_r7;
    *(undefined4 *)(unaff_r10 + 0x18) = unaff_r8;
    *(uint *)(unaff_r10 + 0x1c) = unaff_r11;
    *(undefined4 *)(unaff_r10 + 0x20) = 0x8b06ab6;
  }
  if (!(bool)uVar2 && in_NG == in_OV) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (!(bool)uVar2 && in_NG == in_OV) {
    func_0x0757116a();
    param_2 = extraout_r1;
    param_4 = extraout_r3;
    in_r12 = extraout_r12;
  }
  uVar1 = unaff_r11;
  if (in_NG != in_OV) {
    uVar1 = unaff_r11 + 0x2ac;
    coprocessor_load(8,in_cr10,unaff_r11);
    coprocessor_storelong(9,in_cr10,uVar1);
  }
  if (!(bool)uVar3 || (bool)uVar2) {
    unaff_r9[1] = param_2;
    unaff_r9[2] = param_4;
    unaff_r9[3] = unaff_r4;
    unaff_r9[4] = unaff_r5;
    unaff_r9[5] = unaff_r7;
    unaff_r9[6] = unaff_r9;
    unaff_r9[7] = uVar1;
    unaff_r9[8] = in_r12;
    unaff_r9[9] = register0x00000054;
    unaff_r9[10] = 0x8b06aca;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

