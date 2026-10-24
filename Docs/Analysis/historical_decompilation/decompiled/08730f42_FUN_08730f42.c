
/* WARNING: Control flow encountered bad instruction data */

void FUN_08730f42(uint param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  uint extraout_r1;
  int unaff_r4;
  uint unaff_r5;
  int unaff_r6;
  uint unaff_r7;
  int unaff_r8;
  uint unaff_r11;
  uint in_r12;
  uint extraout_r12;
  undefined4 unaff_lr;
  char in_NG;
  undefined1 in_ZR;
  undefined1 in_CY;
  char in_OV;
  undefined4 in_cr9;
  undefined8 uVar3;
  
  if (!(bool)in_ZR && in_NG == in_OV) {
    unaff_r11 = param_1 & param_1 >> 0xb;
    in_r12 = param_2 ^ 0x40000008;
  }
  if ((bool)in_ZR) {
    in_r12 = param_2 ^ param_2 >> 7;
    uVar2 = unaff_r7 & ~(unaff_r6 >> 3);
  }
  else {
    uVar2 = unaff_r5 & ~(unaff_r4 >> 3);
  }
  if (!(bool)in_ZR && in_NG == in_OV) {
    *(uint *)(uVar2 + 4) = unaff_r11;
    *(undefined4 *)(uVar2 + 8) = unaff_lr;
    *(undefined4 *)(uVar2 + 0xc) = 0x8730f5e;
    func_0x067a3a26();
    uVar2 = extraout_r1;
    in_r12 = extraout_r12;
  }
  uVar1 = in_r12 & ~(uVar2 << 1);
  uVar3 = CONCAT44(uVar2,uVar1);
  if (!(bool)in_ZR && in_NG == in_OV) {
    coprocessor_store(1,in_cr9,uVar1 - 0x33c);
    uVar3 = func_0x080a41c6();
  }
  if (in_NG == in_OV) {
    *(char *)(unaff_r8 + 0x5c9) = (char)unaff_r11;
  }
  if (!(bool)in_ZR) {
    *(char *)(unaff_r6 + 0x5c7) = (char)uVar3;
  }
  if ((bool)in_CY) {
    *(char *)((int)((ulonglong)uVar3 >> 0x20) + 0xa5) = (char)uVar3;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

