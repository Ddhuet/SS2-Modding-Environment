
/* WARNING: Control flow encountered bad instruction data */

void FUN_0827f9a2(void)

{
  longlong lVar1;
  uint in_r3;
  uint extraout_r3;
  uint unaff_r5;
  undefined4 unaff_r6;
  undefined4 unaff_r7;
  int iVar2;
  uint unaff_r10;
  uint in_r12;
  uint extraout_r12;
  char in_NG;
  undefined1 in_ZR;
  undefined1 in_CY;
  char in_OV;
  undefined4 in_cr9;
  undefined4 in_cr10;
  undefined4 in_cr11;
  undefined4 in_cr13;
  
  if (!(bool)in_CY || (bool)in_ZR) {
    in_CY = 0xda7fffff < unaff_r5;
    in_OV = SCARRY4(unaff_r5,0x25800000);
    in_NG = (int)(unaff_r5 + 0x25800000) < 0;
    in_ZR = unaff_r5 == 0xda800000;
  }
  if (in_NG == in_OV) {
    in_CY = false;
    in_NG = (int)(unaff_r10 | 0x27c00000) < 0;
    in_ZR = (unaff_r10 | 0x27c00000) == 0;
  }
  if ((bool)in_CY && !(bool)in_ZR) {
    return;
  }
  iVar2 = unaff_r10 + 0x87000;
  if ((bool)in_CY && !(bool)in_ZR) {
    coprocessor_load(4,in_cr9,unaff_r10 + 0x8725c);
  }
  else {
    func_0x06564c3a();
    in_r3 = extraout_r3;
    in_r12 = extraout_r12;
  }
  if (in_NG == in_OV) {
    lVar1 = (ulonglong)in_r12 * (ulonglong)in_r3;
    in_NG = lVar1 < 0;
    in_ZR = lVar1 == 0;
    iVar2 = (int)lVar1;
  }
  if (in_NG != in_OV) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  coprocessor_store(3,in_cr10,unaff_r7);
  if (!(bool)in_ZR && in_NG == in_OV) {
    coprocessor_storelong(0xe,in_cr11,iVar2);
    func_0x074724de();
  }
  coprocessor_loadlong(0xe,in_cr13,unaff_r6);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

