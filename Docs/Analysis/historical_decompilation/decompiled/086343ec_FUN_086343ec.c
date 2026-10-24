
/* WARNING: Control flow encountered bad instruction data */

undefined8 FUN_086343ec(int param_1,undefined4 param_2,undefined4 *param_3)

{
  undefined4 unaff_r11;
  char in_NG;
  bool in_ZR;
  bool in_CY;
  char in_OV;
  
  if (in_NG != in_OV) {
    *param_3 = unaff_r11;
  }
  if (in_CY && !in_ZR) {
    return CONCAT44(*(undefined4 *)(param_1 + 4),param_1 + 0x1c);
  }
  if (in_CY) {
    UnsignedSaturate(param_1 >> 0x17,10);
    UnsignedDoesSaturate(param_1 >> 0x17,10);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

