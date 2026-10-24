
/* WARNING: Control flow encountered bad instruction data */

undefined8 FUN_087ea428(uint param_1,int param_2,int param_3,undefined4 param_4)

{
  int *piVar1;
  uint unaff_r5;
  int unaff_r9;
  int unaff_r10;
  uint unaff_r11;
  bool in_NG;
  bool in_ZR;
  bool in_CY;
  char in_OV;
  
  if (in_ZR) {
    unaff_r11 = param_1 & (int)unaff_r5 >> (unaff_r5 & 0xff);
  }
  if (in_ZR || in_NG != (bool)in_OV) {
    unaff_r10 = *(int *)(unaff_r5 - 8);
    param_3 = *(int *)(unaff_r5 - 0x18);
    param_1 = *(uint *)(unaff_r5 - 0x1c);
  }
  if (!in_NG) {
    *(undefined4 *)(uint)*(byte *)(param_3 + -600) = param_4;
  }
  if (!in_CY || in_ZR) {
    return CONCAT44(param_2,*(undefined4 *)(unaff_r9 + 4));
  }
  if (!in_CY || in_ZR) {
    return CONCAT44(param_2,*(undefined4 *)(unaff_r9 + 4));
  }
  if (in_CY && !in_ZR) {
    if (in_CY && !in_ZR) {
      if (in_ZR) {
        piVar1 = (int *)(param_1 & unaff_r11);
        *piVar1 = (int)piVar1 - unaff_r5;
        piVar1[1] = param_2;
      }
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    return CONCAT44(*(undefined4 *)(unaff_r10 + 4),param_1);
  }
  return CONCAT44(*(undefined4 *)(unaff_r9 + 4),param_1);
}

