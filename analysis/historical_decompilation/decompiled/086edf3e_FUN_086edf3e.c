
/* WARNING: Control flow encountered bad instruction data */

void FUN_086edf3e(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  undefined1 *puVar1;
  undefined4 unaff_r7;
  undefined4 *unaff_r9;
  int unaff_r11;
  undefined1 in_NG;
  bool in_ZR;
  undefined1 in_CY;
  bool bVar2;
  undefined4 in_cr7;
  
  if (!(bool)in_NG) {
    uRam086ee477 = (undefined1)unaff_r11;
  }
  bVar2 = false;
  if (in_ZR) {
    puVar1 = (undefined1 *)(param_4 >> ((uint)unaff_r9 & 0xff));
    in_CY = puVar1 <= &stack0x00000000;
    in_NG = (int)&stack0x00000000 - (int)puVar1 < 0;
    bVar2 = &stack0x00000000 == puVar1;
  }
  if (!bVar2) {
    in_NG = (int)-(unaff_r11 + (uint)!(bool)in_CY) < 0;
  }
  if ((bool)in_NG) {
    *unaff_r9 = param_3;
  }
  else {
    coprocessor_storelong(9,in_cr7,unaff_r7);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

