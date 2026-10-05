
/* WARNING: Control flow encountered bad instruction data */

void FUN_08550b76(undefined4 param_1)

{
  longlong lVar1;
  uint uVar2;
  int unaff_r5;
  int unaff_r10;
  undefined4 unaff_r11;
  char in_NG;
  undefined1 in_ZR;
  undefined1 in_CY;
  char in_OV;
  undefined4 in_cr7;
  undefined4 in_cr13;
  
  lVar1 = CONCAT44(param_1,unaff_r11);
  if (!(bool)in_ZR && in_NG == in_OV) {
    lVar1 = (longlong)unaff_r10 * (longlong)unaff_r5;
  }
  uVar2 = (uint)((ulonglong)lVar1 >> 0x20);
  if (!(bool)in_CY || (bool)in_ZR) {
    coprocessor_loadlong(6,in_cr7,(int)lVar1 + -0x1c0);
  }
  if (!(bool)in_OV) {
    uVar2 = func_0x09f30a8a();
  }
  if ((bool)in_CY && !(bool)in_ZR) {
    uVar2 = func_0x0a16ced2();
  }
  if ((bool)in_ZR || in_NG != in_OV) {
    coprocessor_loadlong(0xd,in_cr13,&stack0x000002c0);
  }
                    /* WARNING: Could not recover jumptable at 0x08550b9a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  if (uVar2 < 0x2c000001 && (uint)(byte)in_CY <= uVar2 + 0xd4000000 ||
      uVar2 == !(bool)in_CY + 0x2c000000) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  (**(code **)(uVar2 + 0xcf5))();
  return;
}

