
/* WARNING: Control flow encountered bad instruction data */

void FUN_086fae5e(undefined4 param_1,undefined4 param_2,undefined1 *param_3)

{
  undefined1 unaff_r11;
  char in_NG;
  undefined1 in_ZR;
  undefined1 in_CY;
  char in_OV;
  
  if (in_NG != in_OV) {
    *param_3 = unaff_r11;
    in_CY = false;
    in_ZR = false;
  }
  if (!(bool)in_CY || (bool)in_ZR) {
    software_interrupt(0xf5b3f0);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

