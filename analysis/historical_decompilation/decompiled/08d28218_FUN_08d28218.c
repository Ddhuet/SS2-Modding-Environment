
/* WARNING: Control flow encountered bad instruction data */

undefined8 FUN_08d28218(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 unaff_r4;
  undefined4 unaff_r7;
  undefined4 unaff_r8;
  int unaff_r10;
  undefined8 *unaff_r11;
  undefined4 unaff_lr;
  bool in_ZR;
  bool in_CY;
  bool in_OV;
  
  if (!in_CY || in_ZR) {
    return CONCAT44(param_2,*(undefined4 *)(unaff_r10 + 4));
  }
  if (in_CY && !in_ZR) {
    return *unaff_r11;
  }
  if (!in_OV) {
    *(undefined4 *)unaff_r11 = param_4;
    *(undefined4 *)((int)unaff_r11 + 4) = unaff_r4;
    *(undefined4 *)(unaff_r11 + 1) = unaff_r7;
    *(undefined4 *)((int)unaff_r11 + 0xc) = unaff_r8;
    *(BADSPACEBASE **)(unaff_r11 + 2) = register0x00000054;
    *(undefined4 *)((int)unaff_r11 + 0x14) = unaff_lr;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

