
/* WARNING: Control flow encountered bad instruction data */

void FUN_081735f0(undefined4 param_1,int param_2,uint param_3)

{
  uint uVar1;
  uint unaff_r11;
  undefined1 in_NG;
  undefined1 in_ZR;
  bool in_CY;
  bool in_OV;
  bool bVar2;
  
  bVar2 = in_CY;
  if (in_OV) {
    uVar1 = unaff_r11 >> 10 | unaff_r11 << 0x16;
    bVar2 = param_3 < uVar1 || uVar1 - param_3 < (uint)in_CY;
    in_NG = (int)(uVar1 - (param_3 + !in_CY)) < 0;
    in_ZR = uVar1 == param_3 + !in_CY;
  }
  if (!bVar2 || (bool)in_ZR) {
    param_2 = param_3 + 0xfd900000;
  }
  if (!(bool)in_NG) {
    func_0x0677c6f0(param_1,param_2);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

