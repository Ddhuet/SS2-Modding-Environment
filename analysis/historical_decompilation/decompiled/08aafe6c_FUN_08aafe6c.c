
/* WARNING: Control flow encountered bad instruction data */

undefined8 FUN_08aafe6c(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 extraout_r1;
  undefined4 extraout_r1_00;
  undefined4 extraout_r1_01;
  undefined4 extraout_r3;
  undefined4 extraout_r3_00;
  undefined4 extraout_r3_01;
  undefined4 unaff_r4;
  undefined4 unaff_r5;
  undefined4 unaff_r7;
  undefined4 unaff_r8;
  undefined4 *unaff_r9;
  undefined8 *unaff_r10;
  undefined1 *unaff_r11;
  char in_NG;
  undefined1 in_ZR;
  undefined1 in_CY;
  char in_OV;
  
  if ((bool)in_NG) {
    func_0x0751d398();
    param_2 = extraout_r1;
    param_4 = extraout_r3;
  }
  if (!(bool)in_CY || (bool)in_ZR) {
    func_0x0751ad60();
    param_2 = extraout_r1_00;
    param_4 = extraout_r3_00;
  }
  if (in_NG == in_OV) {
    func_0x0755e4e4();
    param_2 = extraout_r1_01;
    param_4 = extraout_r3_01;
  }
  if (!(bool)in_CY || (bool)in_ZR) {
    return *unaff_r10;
  }
  if ((bool)in_CY && !(bool)in_ZR) {
    *unaff_r9 = param_2;
    unaff_r9[1] = param_4;
    unaff_r9[2] = unaff_r4;
    unaff_r9[3] = unaff_r5;
    unaff_r9[4] = unaff_r7;
    unaff_r9[5] = unaff_r8;
    unaff_r9[6] = unaff_r9;
    unaff_r9[7] = unaff_r11;
    unaff_r9[8] = register0x00000054;
    unaff_r9[9] = 0x8aafe84;
  }
  if (in_NG != in_OV) {
    if ((bool)in_ZR) {
      *unaff_r11 = (char)unaff_r10;
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

