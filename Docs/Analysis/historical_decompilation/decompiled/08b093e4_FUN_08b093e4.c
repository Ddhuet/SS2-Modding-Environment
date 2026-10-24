
/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x079f5ac4) */
/* WARNING: Removing unreachable block (ram,0x079f5ab8) */
/* WARNING: Removing unreachable block (ram,0x08b09414) */
/* WARNING: Removing unreachable block (ram,0x079f5af4) */

undefined8 FUN_08b093e4(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 extraout_r1;
  undefined4 extraout_r3;
  undefined4 unaff_r4;
  undefined4 unaff_r5;
  undefined4 unaff_r7;
  undefined4 unaff_r8;
  undefined4 unaff_r9;
  undefined4 *unaff_r10;
  undefined4 unaff_r11;
  char in_NG;
  undefined1 in_ZR;
  undefined1 in_CY;
  char in_OV;
  
  if (in_NG == in_OV) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (in_NG == in_OV) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (in_NG != in_OV) {
    func_0x0905ada4();
    param_2 = extraout_r1;
    param_4 = extraout_r3;
  }
  if (in_NG != in_OV) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (!(bool)in_CY || (bool)in_ZR) {
    *unaff_r10 = param_2;
    unaff_r10[1] = param_4;
    unaff_r10[2] = unaff_r4;
    unaff_r10[3] = unaff_r5;
    unaff_r10[4] = unaff_r7;
    unaff_r10[5] = unaff_r8;
    unaff_r10[6] = unaff_r9;
    unaff_r10[7] = unaff_r11;
    unaff_r10[8] = register0x00000054;
    unaff_r10[9] = 0x8b093fc;
    return *(undefined8 *)(unaff_r10 + 10);
  }
  if (!(bool)in_CY || (bool)in_ZR) {
    if (!(bool)in_CY || (bool)in_ZR) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if ((bool)in_ZR) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    return CONCAT44(param_2,unaff_r10[1]);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

