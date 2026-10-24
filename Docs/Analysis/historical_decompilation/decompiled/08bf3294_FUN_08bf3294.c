
/* WARNING: Control flow encountered bad instruction data */

void FUN_08bf3294(undefined4 param_1,uint param_2)

{
  int iVar1;
  uint unaff_r5;
  int unaff_r9;
  uint unaff_r11;
  char in_NG;
  bool in_ZR;
  char in_OV;
  bool bVar2;
  undefined1 uVar3;
  undefined4 in_cr14;
  
  bVar2 = false;
  if (in_ZR) {
    unaff_r11 = param_2 ^ unaff_r9 << (unaff_r5 & 0xff);
    in_NG = (int)unaff_r11 < 0;
    bVar2 = unaff_r11 == 0;
  }
  uVar3 = false;
  if (bVar2) {
    iVar1 = param_2 * unaff_r9 + unaff_r11;
    in_NG = iVar1 < 0;
    uVar3 = iVar1 == 0;
  }
  if ((bool)uVar3) {
    func_0x09860708();
  }
  if ((bool)uVar3) {
    func_0x09849fcc();
  }
  if (!(bool)uVar3) {
    func_0x0a03876c();
  }
  if ((bool)uVar3 || in_NG != in_OV) {
    coprocessor_loadlong(5,in_cr14,&stack0x000000c0);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

