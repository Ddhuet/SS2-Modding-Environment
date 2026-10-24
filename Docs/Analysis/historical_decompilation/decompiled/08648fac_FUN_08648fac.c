
/* WARNING: Control flow encountered bad instruction data */

void FUN_08648fac(undefined4 *param_1,undefined4 param_2,uint param_3)

{
  undefined4 unaff_r9;
  undefined4 *unaff_r11;
  char in_NG;
  undefined1 in_ZR;
  undefined1 in_CY;
  char in_OV;
  bool bVar1;
  
  if (in_NG != in_OV) {
    in_CY = 0;
    unaff_r11 = (undefined4 *)0xeebfffff;
    in_ZR = false;
  }
  bVar1 = false;
  if ((bool)in_ZR) {
    in_CY = CARRY4(param_3,(int)param_1 * 0x1000);
    bVar1 = param_3 + (int)param_1 * 0x1000 == 0;
  }
  if (!(bool)in_CY || bVar1) {
    *unaff_r11 = unaff_r9;
  }
  if (bVar1) {
    *param_1 = unaff_r9;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

