
/* WARNING: Control flow encountered bad instruction data */

void FUN_0860c298(undefined4 *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  undefined4 extraout_r3;
  undefined4 extraout_r3_00;
  uint unaff_r5;
  uint unaff_r6;
  uint *unaff_r7;
  int unaff_r11;
  char in_NG;
  bool in_ZR;
  undefined1 in_CY;
  char in_OV;
  
  if (!in_ZR) {
    puVar1 = (undefined4 *)
             ((uint)param_1 >> (unaff_r5 & 0x1f) | (int)param_1 << 0x20 - (unaff_r5 & 0x1f));
    in_CY = param_1 <= puVar1;
    in_OV = SBORROW4((int)puVar1,(int)param_1);
    unaff_r11 = (int)puVar1 - (int)param_1;
    in_NG = unaff_r11 < 0;
    in_ZR = unaff_r11 == 0;
  }
  if (!in_ZR) {
    param_2 = unaff_r11 * 3 - (uint)!(bool)in_CY;
    unaff_r7 = (uint *)((int)unaff_r7 * 0x1001);
    unaff_r5 = *unaff_r7;
  }
  if (!(bool)in_CY) {
    param_1 = (undefined4 *)func_0x09a45338(param_1,param_2);
    param_4 = extraout_r3;
  }
  if (in_NG == in_OV) {
    in_CY = 0;
    in_NG = (int)unaff_r7 < 0;
  }
  if (!(bool)in_NG) {
    param_1 = (undefined4 *)func_0x083cc2b4();
    param_4 = extraout_r3_00;
  }
  if ((bool)in_OV) {
    *(uint *)((int)param_1 - (unaff_r6 >> 4 | unaff_r6 << 0x1c)) = unaff_r5;
  }
  if ((bool)in_NG) {
    in_CY = false;
  }
  if (!(bool)in_CY) {
    *param_1 = param_4;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

