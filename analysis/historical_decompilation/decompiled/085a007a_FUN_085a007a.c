
/* WARNING: Control flow encountered bad instruction data */

undefined4 FUN_085a007a(void)

{
  int unaff_r4;
  byte *unaff_r5;
  byte *pbVar1;
  byte *pbVar2;
  byte *unaff_r7;
  byte *pbVar3;
  int unaff_r8;
  uint unaff_r9;
  undefined1 unaff_r10;
  uint in_r12;
  uint extraout_r12;
  uint extraout_r12_00;
  uint extraout_r12_01;
  uint extraout_r12_02;
  char in_NG;
  undefined1 in_ZR;
  undefined1 in_CY;
  char in_OV;
  undefined4 in_cr1;
  undefined4 in_cr6;
  undefined4 in_cr8;
  undefined4 in_cr9;
  undefined4 in_cr11;
  undefined4 in_cr14;
  undefined4 in_cr15;
  
  if (!(bool)in_NG) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  pbVar3 = unaff_r7;
  if (!(bool)in_NG) {
    pbVar3 = unaff_r7 + -0x447;
    unaff_r5 = (byte *)(uint)*unaff_r7;
  }
  pbVar1 = unaff_r5;
  if ((bool)in_ZR || in_NG != in_OV) {
    pbVar1 = unaff_r5 + -0x777;
    *unaff_r5 = (byte)pbVar3;
  }
  pbVar2 = pbVar1;
  if (!(bool)in_OV) {
    pbVar2 = pbVar1 + -0xaa7;
    unaff_r9 = (uint)*pbVar1;
  }
  if (in_NG != in_OV) {
    func_0x096b56b2();
    in_r12 = extraout_r12;
  }
  if (in_NG != in_OV) {
    unaff_r4 = coprocessor_movefromRt(5,5,2,in_cr9,in_cr8);
  }
  coprocessor_moveto(4,7,2,unaff_r4,in_cr11,in_cr9);
  if (!(bool)in_CY || (bool)in_ZR) {
    func_0x0819ef82();
    in_r12 = extraout_r12_00;
  }
  if (!(bool)in_CY || (bool)in_ZR) {
    func_0x081473c6();
    in_r12 = extraout_r12_01;
  }
  if ((bool)in_CY && !(bool)in_ZR) {
    in_r12 = (uint)*(byte *)(*(byte *)(unaff_r8 + -0x999) - 0xcaa);
  }
  if (!(bool)in_NG) {
    *pbVar2 = (byte)in_r12;
  }
  if (!(bool)in_CY || (bool)in_ZR) {
    *(undefined1 *)(unaff_r4 + -0xa85) = unaff_r10;
  }
  if (!(bool)in_NG) {
    func_0x09ad2b56();
    in_r12 = extraout_r12_02;
  }
  coprocessor_function(0xc,0xe,5,in_cr9,in_cr14,in_cr8);
  coprocessor_function(0xe,0xe,7,in_cr15,in_cr14,in_cr15);
  coprocessor_moveto(0xf,7,7,in_r12,in_cr14,in_cr14);
  coprocessor_function(0xe,0xe,7,in_cr9,in_cr14,in_cr14);
  coprocessor_function(0xd,0xe,7,in_cr1,in_cr14,in_cr14);
  software_interrupt(0xee51de);
  coprocessor_function(2,0xe,5,in_cr6,in_cr14,in_cr14);
  if (!(bool)in_NG) {
    pbVar3 = pbVar3 + -0x54e;
  }
  if (!(bool)in_CY || (bool)in_ZR) {
    return *(undefined4 *)(pbVar3 + -0x24);
  }
  if (!(bool)in_CY || (bool)in_ZR) {
    return *(undefined4 *)(unaff_r9 + 4);
  }
  if ((bool)in_CY && !(bool)in_ZR) {
    if ((bool)in_CY && !(bool)in_ZR) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    return *(undefined4 *)(unaff_r9 + 4);
  }
  return *(undefined4 *)(unaff_r9 + 4);
}

