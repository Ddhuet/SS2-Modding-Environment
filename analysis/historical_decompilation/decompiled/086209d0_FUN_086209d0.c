
/* WARNING: Control flow encountered bad instruction data */

void FUN_086209d0(uint param_1,int param_2,undefined4 param_3,uint param_4)

{
  uint uVar1;
  int extraout_r1;
  uint extraout_r3;
  uint unaff_r4;
  uint unaff_r5;
  undefined1 unaff_r9;
  uint unaff_r11;
  char in_NG;
  undefined1 in_ZR;
  undefined1 in_CY;
  char in_OV;
  
  if (in_NG != in_OV) {
    uVar1 = unaff_r5 & 0xff;
    in_CY = uVar1 == 0 && (bool)in_CY || uVar1 != 0 && (bool)((byte)(param_4 >> 0x20 - uVar1) & 1);
    unaff_r11 = unaff_r4 | param_4 << uVar1;
    in_NG = (int)unaff_r11 < 0;
    in_ZR = unaff_r11 == 0;
  }
  if (!(bool)in_ZR && in_NG == in_OV) {
    uVar1 = param_4 & 0xff;
    in_CY = uVar1 == 0 && (bool)in_CY || uVar1 != 0 && (bool)((byte)(param_1 >> 0x20 - uVar1) & 1);
    uVar1 = unaff_r5 | param_1 << uVar1;
    in_NG = (int)uVar1 < 0;
    in_ZR = uVar1 == 0;
  }
  if ((bool)in_ZR) {
    func_0x082247a0();
    param_2 = extraout_r1;
    param_4 = extraout_r3;
  }
                    /* WARNING: Could not recover jumptable at 0x086209dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  if (in_NG != in_OV) {
    (*(code *)(unaff_r11 & (int)param_4 >> 1))();
    return;
  }
  if (!(bool)in_CY || (bool)in_ZR) {
    *(undefined1 *)(param_2 + unaff_r11 * 0x1000) = unaff_r9;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

