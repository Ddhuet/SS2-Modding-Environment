
/* WARNING: Control flow encountered bad instruction data */

void FUN_0827f710(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 unaff_r5;
  undefined4 *unaff_r6;
  undefined4 unaff_r7;
  undefined4 unaff_r10;
  uint unaff_r11;
  char in_NG;
  undefined1 in_ZR;
  undefined1 in_CY;
  char in_OV;
  
  if (in_NG == in_OV) {
    in_CY = false;
    in_NG = (int)(unaff_r11 | 0x27c00000) < 0;
    in_ZR = (unaff_r11 | 0x27c00000) == 0;
  }
  if (!(bool)in_CY || (bool)in_ZR) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (in_NG == in_OV) {
    *unaff_r6 = param_1;
    unaff_r6[1] = param_2;
    unaff_r6[2] = param_3;
    unaff_r6[3] = unaff_r5;
    unaff_r6[4] = unaff_r7;
    unaff_r6[5] = unaff_r10;
    unaff_r6[6] = register0x00000054;
    unaff_r6[7] = 0x827f724;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

