
/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x08a5ddd0) */

void FUN_08a5dd78(void)

{
  uint uVar1;
  int unaff_r4;
  undefined1 *unaff_r6;
  int unaff_r9;
  int unaff_r11;
  undefined1 extraout_r12;
  undefined1 uVar2;
  int extraout_r12_00;
  int extraout_r12_01;
  int iVar3;
  int extraout_r12_02;
  char in_NG;
  undefined1 in_ZR;
  undefined1 in_CY;
  char in_OV;
  undefined4 in_cr11;
  undefined4 in_cr12;
  undefined4 in_cr15;
  
  uVar1 = func_0x0798b2da();
  iVar3 = extraout_r12_00;
  if (in_NG != in_OV) {
    uVar1 = func_0x0814cac8();
    iVar3 = extraout_r12_01;
  }
  iVar3 = iVar3 + 0x2ec;
  coprocessor_load2(0xb,in_cr12,iVar3);
  if ((bool)in_ZR) {
    uVar1 = uVar1 & 0x8a5dd80;
  }
  if (!(bool)in_ZR && in_NG == in_OV) {
    uVar1 = func_0x0793bd48();
    iVar3 = extraout_r12_02;
  }
  uVar2 = (undefined1)iVar3;
  if ((bool)in_ZR || in_NG != in_OV) {
    coprocessor_storelong(0xd,in_cr11,unaff_r11 + 0x3c0);
  }
  if (!(bool)in_CY) {
    if (in_NG != in_OV) {
      func_0x07a1dde0(uVar1);
    }
    if (in_NG != in_OV) {
      coprocessor_loadlong(0,in_cr15,unaff_r11);
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if ((bool)in_ZR || in_NG != in_OV) {
    in_OV = SBORROW4(unaff_r4,0xd900000);
    in_NG = unaff_r4 + -0xd900000 < 0;
    in_ZR = unaff_r4 == 0xd900000;
  }
  if (!(bool)in_ZR && in_NG == in_OV) {
    func_0x075d1920();
    uVar2 = extraout_r12;
  }
  if (!(bool)in_ZR && in_NG == in_OV) {
    *unaff_r6 = uVar2;
    uVar2 = uRam0825d9e8;
  }
  uRam0825d9e8 = uVar2;
  UnsignedSaturate(unaff_r9 >> 0x1d,3);
  UnsignedDoesSaturate(unaff_r9 >> 0x1d,3);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

