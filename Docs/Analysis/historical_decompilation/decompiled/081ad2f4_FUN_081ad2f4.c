
/* WARNING: Control flow encountered bad instruction data */

void FUN_081ad2f4(undefined4 param_1,uint param_2,undefined1 param_3,uint param_4)

{
  uint uVar1;
  int unaff_r4;
  uint unaff_r5;
  undefined4 unaff_r6;
  uint unaff_r10;
  undefined4 unaff_r11;
  undefined1 *in_r12;
  char in_NG;
  bool in_ZR;
  bool in_CY;
  char in_OV;
  bool bVar2;
  undefined4 in_cr0;
  undefined4 in_cr2;
  undefined4 in_cr9;
  undefined4 in_cr11;
  
  if (!in_ZR && in_NG == in_OV) {
    *(undefined4 *)(unaff_r4 + 0x5b9) = unaff_r11;
  }
  if (in_ZR) {
    coprocessor_function(7,0xf,4,in_cr9,in_cr2,in_cr2);
  }
  coprocessor_storelong2(2,in_cr11,unaff_r6);
  if (!(bool)in_NG) {
    *in_r12 = param_3;
  }
  if (!in_CY) {
    param_4 = coprocessor_movefromRt(3,0,in_cr0);
    coprocessor_movefromRt2(3,0,in_cr0);
  }
  bVar2 = in_CY;
  if (!in_ZR) {
    uVar1 = unaff_r10 >> (unaff_r5 & 0xff);
    bVar2 = 0xf7e52cef < uVar1 || CARRY4(uVar1 + 0x81ad310,(uint)in_CY);
    in_OV = SCARRY4(uVar1,0x81ad310) != SCARRY4(uVar1 + 0x81ad310,(uint)in_CY);
    param_2 = uVar1 + 0x81ad310 + (uint)in_CY;
    in_NG = (int)param_2 < 0;
  }
  uVar1 = param_2 ^ 0xf800000;
  if (in_NG == in_OV) {
    *(undefined1 *)(param_2 + 0xba) = 0;
  }
  if (!bVar2) {
    uVar1 = param_4 & 0x98000000;
  }
  func_0x0862ab18(uVar1);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

