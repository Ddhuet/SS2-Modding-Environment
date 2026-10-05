
/* WARNING: Control flow encountered bad instruction data */

undefined8 FUN_08f768d2(uint param_1,undefined4 param_2)

{
  uint unaff_r5;
  uint unaff_r7;
  uint unaff_r11;
  uint in_r12;
  undefined1 unaff_lr;
  char in_NG;
  bool in_ZR;
  bool in_CY;
  bool in_OV;
  
  if (in_ZR) {
    unaff_r11 = param_1 & param_1 << 10;
    in_r12 = param_1 & (int)unaff_r5 >> 0x19;
  }
  if (in_OV) {
    *(undefined1 *)(unaff_r5 + (unaff_r5 >> 0x19 | unaff_r5 << 7)) = unaff_lr;
    in_r12 = in_r12 - (unaff_r7 >> 0xe | unaff_r7 << 0x12);
    param_2 = *(undefined4 *)(unaff_r11 + 4);
  }
  if (!in_CY || in_ZR) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (!in_CY || in_ZR) {
    param_2 = *(undefined4 *)(in_r12 + 8);
    in_r12 = *(uint *)(in_r12 + 0x20);
  }
  if (in_ZR || (bool)in_NG != in_OV) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  return CONCAT44(param_2,*(undefined4 *)(in_r12 + 4));
}

